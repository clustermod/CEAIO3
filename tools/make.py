#!/usr/bin/env python3

import os
import tomli
import sys
import subprocess
import argparse
import re

# MAKE
# Author: Tapawingo
# ---------------------
# Builds arma projects using HEMTT.

__version__ = "0.0.2"

######## ARGUMENTS AND OPTIONS #########
parser = argparse.ArgumentParser(description = "Builds an Arma 3 addon using hemtt")
parser.add_argument('operation', help = 'Operation to perform', choices = ['build', 'launch', 'dev', 'release'])
parser.add_argument('-t','--target', help = 'Project Directory of addon', required = False, default = os.path.dirname(os.getcwd()))
parser.add_argument('-e', '--exec', dest = "HEMTT", help = 'Path to HEMTT', required = False, default = "hemtt")
parser.add_argument('-l','--log', action='store_true', help = 'Enabled verbose logging', required = False)
parser.add_argument('-v','--version', help = 'Display program version', action = 'version', version = __version__)
ARGS = parser.parse_args()
##########################

######## BCOLORS #########
class bcolors:
    HEADER = '\033[95m'
    OKBLUE = '\033[94m'
    OKCYAN = '\033[96m'
    OKGREEN = '\033[92m'
    WARNING = '\033[93m'
    FAIL = '\033[91m'
    ENDC = '\033[0m'
    BOLD = '\033[1m'
    UNDERLINE = '\033[4m'
##########################

######## GLOBALS #########
PROJECTPATH = ARGS.target
CONFIGPATH = "{0}\\.hemtt\\project.toml".format(PROJECTPATH)
HEMTTPATH = ARGS.HEMTT
##########################

# import hemtt config
with open(CONFIGPATH, "rb") as f:
    CONFIG = tomli.load(f)

# Increment Build version and get entire version number
def build_increment():
    script_version_path = "{0}\\addons\\main\\script_version.hpp".format(PROJECTPATH);

    with open(script_version_path, 'r') as file :
      script_version = file.read()
    
    script_major_version = int(re.search(r'\#define MAJOR (\d+)', script_version).group(1))
    script_minor_version = int(re.search(r'\#define MINOR (\d+)', script_version).group(1))
    script_patch_version = int(re.search(r'\#define PATCHLVL (\d+)', script_version).group(1))
    script_build_version = int(re.search(r'\#define BUILD (\d+)', script_version).group(1))
    script_build_version += 1
    script_version = re.sub(r'\#define BUILD \d+', "#define BUILD {0}".format(str(script_build_version)), script_version)

    with open(script_version_path, 'w') as file:
      file.write(script_version)
    
    return "{0}.{1}.{2}.{3}".format(script_major_version, script_minor_version, script_patch_version, script_build_version);

# Build release
def addon_release():
    print(bcolors.WARNING + "****************BUILDING RELEASE {0}****************".format(CONFIG['name'].upper()) + bcolors.ENDC)
    cmd = [HEMTTPATH, "release"]
    if ARGS.log: cmd.append("-v")
    proc = subprocess.Popen(cmd, stdout=subprocess.PIPE, stderr=subprocess.PIPE, universal_newlines=True)
    while True:
        line = proc.stdout.readline().strip('\n\r')
        if not line: break
        print(line)

    Pstderr = proc.stderr.read()
    if Pstderr == "":
        print(bcolors.OKGREEN + "****************RELEASE BUILD SUCCEDED****************" + bcolors.ENDC)
    else:
        print(bcolors.FAIL + Pstderr + bcolors.ENDC)
        print(bcolors.FAIL + "****************RELEASE BUILD FAILED****************" + bcolors.ENDC)
        return 1

# Build
def addon_build():
    script_version = build_increment()
    print(bcolors.WARNING + "****************Building {0} {1}****************".format(CONFIG['name'], script_version) + bcolors.ENDC)
    cmd = [HEMTTPATH, "build"]
    if ARGS.log: cmd.append("-v")
    proc = subprocess.Popen(cmd, stdout=subprocess.PIPE, stderr=subprocess.PIPE, universal_newlines=True)
    while True:
        line = proc.stdout.readline().strip('\n\r')
        if not line: break
        print(line)

    Pstderr = proc.stderr.read()
    if Pstderr == "":
        print(bcolors.OKGREEN + "****************BUILD SUCCEDED****************" + bcolors.ENDC)
        return 0
    else:
        print(bcolors.FAIL + Pstderr + bcolors.ENDC)
        print(bcolors.FAIL + "****************BUILD FAILED****************" + bcolors.ENDC)
        return 1

# Build and launch
def addon_launch():
    script_version = build_increment()
    print(bcolors.WARNING + "****************Building {0} {1}****************".format(CONFIG['name'], script_version) + bcolors.ENDC)
    cmd = [HEMTTPATH, "launch"]
    if ARGS.log: cmd.append("-v")
    proc = subprocess.Popen(cmd, stdout=subprocess.PIPE, stderr=subprocess.PIPE, universal_newlines=True)
    while True:
        line = proc.stdout.readline().strip('\n\r')
        if not line: break
        print(line)

    Pstderr = proc.stderr.read()
    if Pstderr == "":
        print(bcolors.OKGREEN + "****************BUILD SUCCEDED****************" + bcolors.ENDC)
        print(bcolors.OKGREEN + "****************LAUNCHING ARMA 3****************" + bcolors.ENDC)
    else:
        print(bcolors.FAIL + Pstderr + bcolors.ENDC)
        print(bcolors.FAIL + "****************BUILD FAILED****************" + bcolors.ENDC)
        return 1

# Build and filepatch
def addon_dev():
    script_version = build_increment()
    print(bcolors.WARNING + "****************Building {0} {1}****************".format(CONFIG['name'], script_version) + bcolors.ENDC)
    cmd = [HEMTTPATH, "dev"]
    if ARGS.log: cmd.append("-v")
    proc = subprocess.Popen(cmd, stdout=subprocess.PIPE, stderr=subprocess.PIPE, universal_newlines=True)
    while True:
        line = proc.stdout.readline().strip('\n\r')
        if not line: break
        print(line)

    Pstderr = proc.stderr.read()
    if Pstderr == "":
        print(bcolors.OKGREEN + "****************BUILD SUCCEDED****************" + bcolors.ENDC)
    else:
        print(bcolors.FAIL + Pstderr + bcolors.ENDC)
        print(bcolors.FAIL + "****************BUILD FAILED****************" + bcolors.ENDC)
        return 1

def main():
    os.chdir(PROJECTPATH)

    if ARGS.operation == "build":
        addon_build()
    elif ARGS.operation == "launch":
        addon_launch()
    elif ARGS.operation == "dev":
        addon_dev()
    elif ARGS.operation == "release":
        addon_release()
    else:
        print("something bad")
        return 1

if __name__ == "__main__":
    sys.exit(main())
