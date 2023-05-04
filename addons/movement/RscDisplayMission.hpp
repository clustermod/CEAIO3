class RscSlider;
class RscPicture;
class RscControlsGroupNoScrollbars;

class RscDisplayEmpty {
    class controls;
};

class RscDisplayMission: RscDisplayEmpty {
    class controls: controls {
        class GVAR(movementInfoGroup): RscControlsGroupNoScrollbars {
            onLoad = QUOTE([ARR_2(_this select 0, QQGVAR(movementInfoGroup))] call FUNC(onLoad));
            x = "(safeZoneX + safeZoneW * 0.00875)";
            y = "(safeZoneY + safeZoneH * 0.72666667)";
            w = "(safeZoneW * 0.15)";
            h = "(safeZoneH * 0.27)";

            class controls {
                class GVAR(stance_indicator): RscPicture {
                    onLoad = QUOTE([ARR_2(_this select 0, QQGVAR(stance_indicator))] call FUNC(onLoad));
                    x = 0.030;
                    y = 0.040;
                    w = 0.250;
                    h = 0.375;
                    text = QPATHTOF(UI\stance_1.paa);
                    style = 48;
                    colorBackground[] = {1, 1, 1, 1};
                    colorText[] = {1, 1, 1, 1};
                    font = "PuristaMedium";
                    sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
                };

                class GVAR(speed_bar): GVAR(stance_indicator) {
                    onLoad = QUOTE([ARR_2(_this select 0, QQGVAR(speed_bar))] call FUNC(onLoad));
                    x = 0.030;
                    y = 0.275;
                    w = 0.250;
                    h = 0.350;
                    text = QPATHTOF(UI\speed_indicator_bar.paa);
                };

                class GVAR(stance_bar): GVAR(stance_indicator) {
                    onLoad = QUOTE([ARR_2(_this select 0, QQGVAR(stance_bar))] call FUNC(onLoad));
                    x = -0.105;
                    y = 0.110;
                    w = 0.250;
                    h = 0.300;
                    text = QPATHTOF(UI\stance_indicator_bar.paa);
                };

                class GVAR(speed_arrow): GVAR(stance_indicator) {
                    onLoad = QUOTE(ARR_2([_this select 0, QQGVAR(speed_arrow))] call FUNC(onLoad));
                    x = 0.270;
                    y = 0.425;
                    w = 0.015;
                    h = 0.015;
                    text = QPATHTOF(UI\down_arrow.paa);
                };

                class GVAR(stance_arrow): GVAR(stance_indicator) {
                    onLoad = QUOTE(ARR_2([_this select 0, QQGVAR(stance_arrow))] call FUNC(onLoad));
                    x = 0.000;
                    y = 0.107;
                    w = 0.015;
                    h = 0.015;
                    text = QPATHTOF(UI\right_arrow.paa);
                };
            };
        };
    };
};

