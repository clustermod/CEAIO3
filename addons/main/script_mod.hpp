#define MAINPREFIX z
#define PREFIX ceaio

#include "script_version.hpp"

#define VERSION     MAJOR.MINOR
#define VERSION_STR MAJOR.MINOR.PATCHLVL.BUILD
#define VERSION_AR  MAJOR,MINOR,PATCHLVL,BUILD

#define REQUIRED_VERSION 2.06
#define REQUIRED_CBA_VERSION {3,15,6}

#ifdef COMPONENT_BEAUTIFIED
    #define COMPONENT_NAME QUOTE(CE:AIO - COMPONENT_BEAUTIFIED)
#else
    #define COMPONENT_NAME QUOTE(CE:AIO - COMPONENT)
#endif
