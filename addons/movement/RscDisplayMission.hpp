class RscSlider;
class RscPicture;
class RscControlsGroup;

class RscDisplayEmpty {
    class controls;
};

class RscDisplayMission: RscDisplayEmpty {
    class controls: controls {
        class GVAR(movementInfoGroup): RscControlsGroup {
            onLoad = QUOTE([ARR_2(_this select 0, QQGVAR(movementInfoGroup))] call FUNC(onLoad));
            x = "((safeZoneX + safeZoneW) * -0.00625)";
            y = "((safeZoneY + safeZoneH) * 0.73777778)";
            w = "(safeZoneW * 0.135625)";
            h = "(safeZoneH * 0.26222223)";

            class controls {
                class GVAR(stance_indicator): RscPicture {
                    onLoad = QUOTE([ARR_2(_this select 0, QQGVAR(stance_indicator))] call FUNC(onLoad));
                    x = 0.04500011;
                    y = 0.05000004;
                    w = 0.25000003;
                    h = 0.37500002;
                    text = QPATHTOF(UI\stance_6.paa);
                    style = 2096;
                    colorBackground[] = {1, 1, 1, 1};
                    colorText[] = {1, 1, 1, 1};
                    font = "PuristaMedium";
                    sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
                };

                class GVAR(speed_slider_bar): GVAR(stance_indicator) {
                    onLoad = QUOTE([ARR_2(_this select 0, QQGVAR(speed_slider_bar))] call FUNC(onLoad));
                    x = -0.00099991;
                    y = 0.24000086;
                    w = 0.35000038;
                    h = 0.37500076;
                    text = QPATHTOF(UI\speed_indicator_bar.paa);
                };

                class GVAR(stance_slider_bar): GVAR(stance_indicator) {
                    onLoad = QUOTE([ARR_2(_this select 0, QQGVAR(stance_slider_bar))] call FUNC(onLoad));
                    x = -0.00099991;
                    y = 0.24000086;
                    w = 0.35000038;
                    h = 0.37500076;
                    text = QPATHTOF(UI\stance_indicator_bar.paa);
                };

                class GVAR(speed_slider_arrow): GVAR(stance_indicator) {
                    onLoad = QUOTE(ARR_2([_this select 0, QQGVAR(speed_slider_arrow))] call FUNC(onLoad));
                    x = 0.301;
                    y = 0.405;
                    w = 0.015;
                    h = 0.015;
                    text = QPATHTOF(UI\down_arrow.paa);
                };

                class GVAR(stance_slider_arrow): GVAR(stance_indicator) {
                    onLoad = QUOTE(ARR_2([_this select 0, QQGVAR(stance_slider_arrow))] call FUNC(onLoad));
                    x = 0.015;
                    y = 0.025;
                    w = 0.015;
                    h = 0.015;
                    text = QPATHTOF(UI\right_arrow.paa);
                };
            };
        };
    };
};
