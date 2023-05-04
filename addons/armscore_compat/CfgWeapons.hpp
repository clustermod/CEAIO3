class Mode_FullAuto;

class CfgWeapons {
    class CannonCore;
    class RocketPods;
    class HMG_127;

    class ccm_weapons_mastersafe: RocketPods {
        CanLock = 0;
        displayName = "MASTER ARM - SAFE";
        displayNameMagazine = "MASTER ARM - SAFE";
        shortNameMagazine = "MASTER ARM - SAFE";
        nameSound = "";
        cursor = "EmptyCursor";
        cursorAim = "EmptyCursor";
        magazines[] =  {
            "FakeWeapon"
        };
        burst = 0;
        reloadTime = 0.0099999998;
        magazineReloadTime = 0.1;
    };

    class ccm_weapons_f2_cannon: CannonCore {
        scope = 1;
        displayName = "F2 20mm Cannon";
        nameSound = "cannon";
        burst = 5;
        reloadTime = 0.083999999;
        autoFire = 1;
        magazines[] = {
            "ccm_magazines_350Rnd_20mm_he",
            "ccm_magazines_350Rnd_20mm_apfds"
        };
        modes[] = {
            "LowROF",
            "close",
            "near",
            "short",
            "medium",
            "far"
        };
        shotFromTurret = 1;
        canLock = 0;
        cursor = "EmptyCursor";
        cursorAim = "mg";
        ballisticsComputer = "4 + 2";
        class GunParticles {
            class Effect {
                effectName = "MachineGun2";
                positionName = "Usti hlavne";
                directionName = "Konec hlavne";
            };
        };

        class LowROF: Mode_FullAuto {
            displayName = "$STR_A3_GATLING_30MM_LOWROF0";
            reloadTime = 0.083999999;
            burst = 5;
            sounds[] = {
                "StandardSound"
            };

            aiRateOfFire = 0.25;
            class StandardSound {
                begin1[] = {
                    "A3\Sounds_F\arsenal\weapons_vehicles\gatling_30mm\30mm_02_burst",
                    5.6234136,
                    1,
                    1500,
                    {2,45447}
                };
                soundBegin[] = {
                    "begin1",
                    1
                };
            };

            soundContinuous = 1;
            flash = "gunfire";
            flashSize = 0.1;
            recoil = "Empty";
            aiDispersionCoefX = 6;
            aiDispersionCoefY = 6;
            ffMagnitude = 0.5;
            ffFrequency = 11;
            ffCount = 6;
            minRange = 1;
            minRangeProbab = 0.059999999;
            midRange = 2;
            midRangeProbab = 0.059999999;
            maxRange = 3;
            maxRangeProbab = 0.0040000002;
            dispersion = 0.00050000002;
            showToPlayer = 1;
        };

        class close: LowROF {
            showToPlayer = 0;
            burst = 15;
            aiRateOfFire = 0.25;
            aiRateOfFireDistance = 400;
            minRange = 1;
            minRangeProbab = 0.34999999;
            midRange = 200;
            midRangeProbab = 0.88;
            maxRange = 400;
            maxRangeProbab = 0.30000001;
        };

        class near: close {
            showToPlayer = 0;
            burst = 5;
            aiRateOfFire = 0.25;
            aiRateOfFireDistance = 400;
            minRange = 1;
            minRangeProbab = 0.34999999;
            midRange = 150;
            midRangeProbab = 0.88;
            maxRange = 300;
            maxRangeProbab = 0.30000001;
        };

        class short: close {
            burst = 13;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 600;
            minRange = 200;
            minRangeProbab = 0.30000001;
            midRange = 400;
            midRangeProbab = 0.88;
            maxRange = 600;
            maxRangeProbab = 0.30000001;
        };

        class medium: close {
            burst = 9;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 900;
            minRange = 400;
            minRangeProbab = 0.30000001;
            midRange = 700;
            midRangeProbab = 0.77999997;
            maxRange = 900;
            maxRangeProbab = 0.2;
        };

        class far: close {
            burst = 5;
            aiRateOfFire = 1.5;
            aiRateOfFireDistance = 1500;
            minRange = 800;
            minRangeProbab = 0.2;
            midRange = 1000;
            midRangeProbab = 0.60000002;
            maxRange = 1500;
            maxRangeProbab = 0.1;
        };
    };

    class ccm_weapons_gau19: HMG_127 {
        scope = 1;
        displayName = "GAU-19/A";
        magazines[] = {
            "ccm_magazines_1000_127x99",
            "ccm_magazines_1000_127x99_Red"
        };
        canLock = 0;
        modes[] = {
            "LowROF",
            "close",
            "short",
            "medium",
            "far"
        };
        weight = 60;
        class GunParticles {
            class effect1 {
                effectName = "MachineGunCloud";
                positionName = "gau19_cloud_pos";
                directionName = "gau19_cloud_dir";
            };

            class effect2 {
                effectName = "MachineGunEject";
                positionName = "gau19_eject_pos";
                directionName = "gau19_eject_dir";
            };

            class effect3 {
                effectName = "MachineGunCartridge1";
                positionName = "gau19_eject_pos";
                directionName = "gau19_eject_dir";
            };
        };

        class LowROF: Mode_FullAuto {
            displayName = "GAU/LO";
            sounds[] = {
                "StandardSound"
            };
            class StandardSound {
                begin1[] = {
                    QPATHTOF(Sounds\gau19_1),
                    2.5,
                    1,
                    2600
                };
                begin2[] = {
                    QPATHTOF(Sounds\gau19_2),
                    2.5,
                    1,
                    2600
                };
                begin3[] = {
                    QPATHTOF(Sounds\gau19_3),
                    2.5,
                    1,
                    2600
                };
                soundBegin[] = {
                    "begin1",
                    0.33000001,
                    "begin2",
                    0.33000001,
                    "begin3",
                    0.33000001
                };
                closure1[] = {
                    "A3\sounds_f\weapons\gatling\gatling_rotation_short_2",
                    0.316228,
                    1,
                    20
                };
                closure2[] = {
                    "A3\sounds_f\weapons\gatling\gatling_rotation_short_3",
                    0.316228,
                    1,
                    20
                };
                soundClosure[] = {
                    "closure1",
                    0.5,
                    "closure2",
                    0.5
                };
            };
            soundContinuous = 0;
            soundBurst = 0;
            flash = "gunfire";
            flashSize = 0.1;
            recoil = "Empty";
            aiDispersionCoefX = 10;
            aiDispersionCoefY = 10;
            ffMagnitude = 0.5;
            ffFrequency = 11;
            ffCount = 6;
            reloadTime = 0.045000002;
            dispersion = 0.0049999999;
            minRange = 1;
            minRangeProbab = 0.059999999;
            midRange = 2;
            midRangeProbab = 0.059999999;
            maxRange = 3;
            maxRangeProbab = 0.0040000002;
            showToPlayer = 1;
            multiplier = 1;
        };

        class close: LowROF {
            showToPlayer = 0;
            burst = 15;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
            minRange = 0;
            minRangeProbab = 0.050000001;
            midRange = 500;
            midRangeProbab = 0.69999999;
            maxRange = 1000;
            maxRangeProbab = 0.1;
        };

        class short: close {
            burst = 10;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 300;
            minRange = 500;
            minRangeProbab = 0.050000001;
            midRange = 1000;
            midRangeProbab = 0.69999999;
            maxRange = 1500;
            maxRangeProbab = 0.1;
        };

        class medium: close {
            showToPlayer = 0;
            soundBurst = 0;
            burst = 7;
            aiRateOfFire = 3;
            aiRateOfFireDistance = 600;
            minRange = 1000;
            minRangeProbab = 0.050000001;
            midRange = 1500;
            midRangeProbab = 0.57999998;
            maxRange = 2000;
            maxRangeProbab = 0.039999999;
        };

        class far: close {
            burst = 4;
            aiRateOfFire = 5;
            aiRateOfFireDistance = 1000;
            minRange = 1500;
            minRangeProbab = 0.050000001;
            midRange = 2500;
            midRangeProbab = 0.40000001;
            maxRange = 3000;
            maxRangeProbab = 0.0099999998;
        };
    };
};
