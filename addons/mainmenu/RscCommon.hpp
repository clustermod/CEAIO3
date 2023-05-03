class RscControlsGroupNoScrollbars;
class RscStandardDisplay;
class RscPicture;
class RscText;
class BackgroundSpotlight;
class RscMainMenuSpotlight;
class RscPictureKeepAspect;
class RscVideo;
class RscStructuredText;
class RscButton;

class Picture: RscPictureKeepAspect {
    idc = 1023;
    text = "#(argb,8,8,3)color(1,0,1,1)";
    x = 0;
    y = 0;
    w = "10 * 	(pixelW * pixelGridNoUIScale * 2)";
    h = "10 * 	(pixelH * pixelGridNoUIScale * 2)";
};

class Video: RscVideo {
    idc = 1024;
    show = 0;
    x = 0;
    y = 0;
    w = "10 * 	(pixelW * pixelGridNoUIScale * 2)";
    h = "10 * 	(pixelH * pixelGridNoUIScale * 2)";
};

class GroupPicture: RscControlsGroupNoScrollbars {
	x = 0;
	y = 0;
	w = "10 * 	(pixelW * pixelGridNoUIScale * 2)";
	h = "10 * 	(pixelH * pixelGridNoUIScale * 2)";
	class Controls {};
};

class Overlay: RscPicture {
    text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\hover_ca.paa";
    colorText[] = {0,0,0,0.5};
    x = 0;
    y = 0;
    w = "10 * 	(pixelW * pixelGridNoUIScale * 2)";
    h = "10 * 	(pixelH * pixelGridNoUIScale * 2)";
};

class LineLeft: RscText {
    colorBackground[] = {1,1,1,1};
    x = 0;
    y = 0;
    w = "pixelW";
    h = "10 * 	(pixelH * pixelGridNoUIScale * 2)";
};

class LineRight: LineLeft {
    x = "10 * 	(pixelW * pixelGridNoUIScale * 2) - pixelW";
};

class LineTop: LineLeft {
    idc = 1027;
    x = 0;
    y = 0;
    w = "10 * 	(pixelW * pixelGridNoUIScale * 2)";
    h = "(pixelH * pixelGrid * 2)";
    colorText[] = {0,0,0,1};
    shadow = 0;
    style = 0;
    sizeEx = "(pixelH * pixelGrid * 2)";
    font = "PuristaLight";
    onLoad = "(_this select 0) ctrlsettext toupper ctrltext (_this select 0);";
};

class LineBottom: LineTop {
    y = "10 * 	(pixelH * pixelGridNoUIScale * 2) - pixelH";
    h = "pixelH";
};

class GroupHover: RscControlsGroupNoScrollbars {
    idc = 1025;
    fade = 1;
    x = 0;
    y = 0;
    w = "10 * 	(pixelW * pixelGridNoUIScale * 2)";
    h = "10 * 	(pixelH * pixelGridNoUIScale * 2)";
    class Controls {};
};

class TextBackground: RscPicture {
	idc = 1029;
	text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\spotlight_backgroundText_ca.paa";
	colorText[] = {0,0,0,0.5};
	x = 0;
	y = 0;
	w = "10 * 	(pixelW * pixelGridNoUIScale * 2)";
	h = "10 * 	(pixelH * pixelGridNoUIScale * 2)";
};

class Text: RscStructuredText {
	idc = 1028;
	size = "1.00 * 	(pixelH * pixelGridNoUIScale * 2)";
	shadow = 2;
	x = 0;
	y = 0;
	w = "10 * 	(pixelW * pixelGridNoUIScale * 2)";
	h = "10 * 	(pixelH * pixelGridNoUIScale * 2)";
	class Attributes {
		align = "center";
		color = "#ffffff";
		font = "PuristaBold";
	};
};

class Button: RscButton {
	idc = 1026;
	colorBackground[] = {0,0,0,0};
	colorBackgroundActive[] = {0,0,0,0};
	colorBackgroundDisabled[] = {0,0,0,0};
	colorFocused[] = {0,0,0,0};
	colorDisabled[] = {0,0,0,0};
	x = 0;
	y = 0;
	w = "10 * 	(pixelW * pixelGridNoUIScale * 2)";
	h = "10 * 	(pixelH * pixelGridNoUIScale * 2)";
};
