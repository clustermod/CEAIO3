class CfgMagazines {
    class VehicleMagazine;

    class ecm_magazines_350Rnd_20mm_he: VehicleMagazine {
        scope = 2;
        ammo = "B_30mm_HE";
        initSpeed = 1100;
        maxLeadSpeed = 400;
        nameSound = "";
        count = 350;
        displayName = "20x139mm HEI";
        descriptionShort = "20x139mm HEI";
        tracersEvery = 1;
        tracerScale = 3;
        tracerStartTime = 0.1;
        tracerEndTime = 3;
    };

    class ecm_magazines_350Rnd_20mm_apfds: VehicleMagazine {
        scope = 2;
        ammo = "B_30mm_AP";
        initSpeed = 1100;
        maxLeadSpeed = 400;
        nameSound = "";
        count = 350;
        displayName = "20x139mm AP";
        descriptionShort = "20x139mm AP";
        tracersEvery = 1;
        tracerScale = 3;
        tracerStartTime = 0.1;
        tracerEndTime = 3;
    };

    class 500Rnd_127x99_mag;

    class 500Rnd_127x99_mag_Tracer_Red;

    class ecm_magazines_1000_127x99_Red: 500Rnd_127x99_mag_Tracer_Red {
        count = 1000;
        displaynameshort = "12.7x99 mm";
        descriptionShort = "12.7x99 mm";
        ammo = "ecm_ammo_127x99_slap";
        tracersEvery = 1;
        weight = 60;
    };

    class ecm_magazines_1000_127x99: 500Rnd_127x99_mag {
        count = 1000;
        displaynameshort = "12.7x99 mm";
        descriptionShort = "12.7x99 mm";
        ammo = "ecm_ammo_127x99_slap";
        tracersEvery = 0;
        weight = 60;
    };
};
