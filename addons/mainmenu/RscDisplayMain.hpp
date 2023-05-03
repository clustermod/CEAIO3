class RscDisplayMain: RscStandardDisplay {
	class Controls {
        delete BackgroundSpotlight;
        delete BackgroundSpotlightLeft;
        delete BackgroundSpotlightRight;
        delete Spotlight1;
        delete Spotlight2;
        delete Spotlight3;

		class BackgroundServerSpotlight: RscPicture {
			text = "#(argb,8,8,3)color(1,1,1,1)";
			colorText[] = {0, 0, 0, 0.9};
			x = "0.5 - (1.5 * 	10) * 	(pixelW * pixelGridNoUIScale * 2) - 2 * 	(2 * pixelW)";
			y = "0.5 - (	10 / 2) * 	(pixelH * pixelGridNoUIScale * 2) - 	(2 * pixelH)";
			w = "3 * 	10 * 	(pixelW * pixelGridNoUIScale * 2) + 4 * 	(2 * pixelW)";
			h = "(	10) * 	(pixelH * pixelGridNoUIScale * 2) + 2 * 	(2 * pixelH)";
		};

		class BackgroundLeftSpotlight: BackgroundServerSpotlight {
			text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\gradient_ca.paa";
			angle = 180;
			x = "safezoneX";
			w = "(safezoneW - (3 * 	10 * 	(pixelW * pixelGridNoUIScale * 2) + 4 * 	(2 * pixelW))) / 2";
		};

		class BackgroundRightSpotlight: BackgroundLeftSpotlight {
			text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\gradient_ca.paa";
			angle = 0;
			x = "0.5 + (1.5 * 	10) * 	(pixelW * pixelGridNoUIScale * 2) + 2 * 	(2 * pixelW)";
		};

		class leftSpotlight: RscMainMenuSpotlight {
			idc = 1021;
			x = "0.5 - (1.5 * 	10) * 	(pixelW * pixelGridNoUIScale * 2) - 	(2 * pixelW)";
			class Controls {
				class GroupPicture: GroupPicture {
					class Controls {
						class Picture: Picture {
							text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\spotlight_2_ca.paa";
						};

						class Video: Video {
							text = "\a3\Ui_f\Video\spotlight_2.ogv";
						};
					};
				};

				class GroupHover: GroupHover {
					class Controls {
						class Overlay: Overlay {};
						class LineLeft: LineLeft {};
						class LineRight: LineRight {};
						class LineTop: LineTop {
							text = "$STR_A3_RscDisplayMain_Spotlight_Open";
						};

						class LineBottom: LineBottom {};
					};
				};

				class TextBackground: TextBackground {};

				class Text: Text {
					text = "$STR_A3_RscDisplayMain_GroupMultiplayer_QuickPlay_text";
				};
				class Button: Button {};
			};
		};

		class serverSpotlight: RscMainMenuSpotlight {
			idc = 1020;
			x = "0.5 - (0.5 * 	10) * 	(pixelW * pixelGridNoUIScale * 2)";
			y = "0.5 - (	10 / 2) * 	(pixelH * pixelGridNoUIScale * 2)";
			w = "10 * 	(pixelW * pixelGridNoUIScale * 2)";
			h = "10 * 	(pixelH * pixelGridNoUIScale * 2)";

            class Controls {
				class GroupPicture: GroupPicture {
					class Controls {
						class Picture: Picture {
							text = QPATHTOF(UI\thumbnail_ca.paa);
						};
					};
				};

				class GroupHover: GroupHover {
					class Controls: Controls {
						class Overlay: Overlay {};
						class LineLeft: LineLeft {};
						class LineRight: LineRight {};
						class LineTop: LineTop {
							text = "JOIN SERVER: CLUSTER COMMUNITY SERVER";
						};

						class LineBottom: LineBottom {};
					};
				};

				class TextBackground: TextBackground {};
				class Text: Text {
					text = "CLUSTER COMMUNITY SERVER";
				};

				class Button: Button {
                    onButtonClick = JOINACTION(_this,SERVER_IP,SERVER_PORT,SERVER_PASSWORD);
                };
			};

		};

		class rightSpotlight: RscMainMenuSpotlight {
			idc = 1022;
			x = "0.5 + (0.5 * 	10) * 	(pixelW * pixelGridNoUIScale * 2) + 	(2 * pixelW)";
			class Controls {
				class GroupPicture: GroupPicture {
					class Controls {
						class Picture: Picture {
							text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\spotlight_3_ca.paa";
						};

						class Video: Video {
							text = "\a3\Ui_f\Video\spotlight3.ogv";
						};
					};
				};

				class GroupHover: GroupHover {
					class Controls {
						class Overlay: Overlay {};
						class LineLeft: LineLeft {};
						class LineRight: LineRight {};
						class LineTop: LineTop {
							text = "$STR_A3_RscDisplayMain_Spotlight_Create";
						};

						class LineBottom: LineBottom {};
					};
				};

				class TextBackground: TextBackground {};
				class Text: Text {
					text = "$STR_A3_RscDisplayMain_ButtonEditor";
				};

				class Button: Button {};
			};
		};
    };
};
