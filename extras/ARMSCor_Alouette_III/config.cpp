class CfgPatches {
	class ARMSCor_Alouette_III {
		author="$STR_ARMSCor_author_petracecephas";
		name="ARMSCor_AlouetteIII";
		url="http://www.facebook.com/armscormod";
		requiredAddons[] = {
			"A3_Air_F",
			"cca_armscore_compat",
			"ccm_factions"
		};
		requiredVersion=1;
		units[] = {
			"ARMSCor_AlouetteIII_I",
			"ARMSCor_AlouetteIII_SF_I",
			"ARMSCor_AlouetteIII_X12_I",
			"ARMSCor_AlouetteIII_X20_I"
		};
		weapons[]={};
	};
};

class CfgVehicles
{
	class Helicopter;
	class Helicopter_Base_F: Helicopter
	{
		class Turrets;
		class CargoTurret;
		class HitPoints;
	};
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class RotorLibHelicopterProperties;
		class ViewOptics;
		class Turrets: Turrets
		{
			class CopilotTurret;
			class MainTurret;
		};
		class CargoTurret;
		class AnimationSources;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitAvionics;
			class HitMissiles;
			class HitEngine;
			class HitHRotor;
			class HitVRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
		class Mfd;
	};
	class ARMSCor_AlouetteIII_SADF_I: Helicopter_Base_H
	{
		displayName="Alouette III";
		author="$STR_ARMSCor_author_petracephas";
		dlc="ARMSCor";
		scope=2;
		scopeCurator=2;
		side=1;
		editorCategory="ccm_categories_rhodesia";
		editorSubCategory="ccm_categories_rhodesia_helicopters";
		faction="ccm_factions_rhodesianFireforce";
		vehicleClass="ccm_factions_rhodesianFireforce_helicopters";
		editorPreview="ARMSCor_Alouette_III\Data\prevAlouette.paa";
		radarType=8;
		reportOwnPosition=0;
		cargoCompartments[]=
		{
			"Compartment1"
		};
		driverCompartments="Compartment1";
		accuracy=0.5;
		model="\ARMSCor_Alouette_III\AlouetteIII.p3d";
		icon="\ARMSCor_Alouette_III\data\ui\map_alouetteIII_ca.paa";
		picture="\ARMSCor_Alouette_III\data\ui\ico_alouetteIII_ca.paa";
		selectionHRotorStill="velka vrtule staticka";
		selectionHRotorMove="velka vrtule blur";
		selectionVRotorStill="mala vrtule staticka";
		selectionVRotorMove="mala vrtule blur";
		hiddenSelections[]=
		{
			"Camo",
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"ARMSCor_Alouette_III\data\AlouetteIII_rsf_co",
			"ARMSCor_Alouette_III\data\Alouette_III_x_co"
		};
		occludeSoundsWhenIn=0.56234097;
		obstructSoundsWhenIn=0.316228;
		attenuationEffectType="OpenHeliAttenuation";
		soundGetIn[]=
		{
			"A3\Sounds_F\air\noises\heli_get_in2",
			0.56234133,
			1
		};
		soundGetOut[]=
		{
			"A3\Sounds_F\air\noises\heli_get_out2",
			0.79432821,
			1,
			20
		};
		soundEnviron[]=
		{
			"",
			0.031622775,
			1
		};
		soundDammage[]=
		{
			"A3\Sounds_F\air\Heli_Light_01\crash",
			0.56234133,
			1
		};
		soundEngineOnInt[]=
		{
			"A3\Sounds_F\air\Heli_Light_01\Heli_Light_01_ext_start",
			0.56234133,
			1
		};
		soundEngineOnExt[]=
		{
			"A3\Sounds_F\air\Heli_Light_01\Heli_Light_01_ext_start",
			0.79432821,
			1,
			600
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F\air\Heli_Light_01\Heli_Light_01_ext_stop",
			0.56234133,
			1
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F\air\Heli_Light_01\Heli_Light_01_ext_stop",
			0.79432821,
			1,
			600
		};
		soundLocked[]=
		{
			"\A3\Sounds_F\weapons\Rockets\opfor_lock_1",
			0.1,
			1
		};
		soundIncommingMissile[]=
		{
			"\A3\Sounds_F\weapons\Rockets\opfor_lock_2",
			0.1,
			1
		};
		class Sounds
		{
			class Engine
			{
				sound[]=
				{
					"ARMSCor_Alouette_III\data\snd\alouetteIII_ext_engine.ogg",
					1.2589254,
					1,
					900
				};
				frequency="rotorSpeed";
				volume="(camPos*((rotorSpeed-0.55)*4) / 1.9)";
			};
			class RotorLowOut
			{
				sound[]=
				{
					"A3\Sounds_F\air\Heli_Light_01\Heli_Light_01_ext_rotor_normal",
					1.2589254,
					1,
					1200
				};
				frequency="rotorSpeed";
				volume="camPos*(0 max (rotorSpeed-0.1))";
				cone[]={1.6,3.1400001,1.6,0.94999999};
			};
			class RotorHighOut
			{
				sound[]=
				{
					"A3\Sounds_F\air\Heli_Light_01\Heli_Light_01_ext_rotor_high",
					1.5848932,
					1,
					1500
				};
				frequency="rotorSpeed";
				volume="camPos*10*(0 max (rotorThrust-0.9))";
				cone[]={1.6,3.1400001,1.6,0.94999999};
			};
			class RotorNoiseExt
			{
				sound[]=
				{
					"A3\Sounds_F\air\Heli_Light_02\rotor_swist",
					1,
					1,
					800
				};
				frequency=1;
				volume="(camPos*(rotorSpeed factor [0.6, 0.85]))";
				cone[]={0.69999999,1.3,1,0};
			};
			class EngineIn
			{
				sound[]=
				{
					"ARMSCor_Alouette_III\data\snd\alouetteIII_ext_engine.ogg",
					1,
					1
				};
				frequency="rotorSpeed";
				volume="((1-camPos)*((rotorSpeed-0.55)*4) / 1.9)";
			};
			class RotorLowIn
			{
				sound[]=
				{
					"A3\Sounds_F\air\Heli_Light_01\Heli_Light_01_ext_rotor_normal_new",
					1.2589254,
					1
				};
				frequency="rotorSpeed";
				volume="(1-camPos)*(0 max (rotorSpeed-0.1))";
			};
			class RotorHighIn
			{
				sound[]=
				{
					"A3\Sounds_F\air\Heli_Light_01\Heli_Light_01_ext_rotor_high_new",
					1.5848932,
					1
				};
				frequency="rotorSpeed";
				volume="(1-camPos)*3*(rotorThrust-0.9)";
			};
		};
		armor=15;
		damageResistance=0.01039;
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=1;
				material=-1;
				name="hull";
				visual="zbytek";
				passThrough=1;
				minimalHit=0.2;
				explosionShielding=0.2;
				radius=0.33000001;
			};
			class HitEngine: HitEngine
			{
				armor=0.5;
				material=-1;
				name="engine";
				passThrough=0;
				minimalHit=0.1;
				explosionShielding=0.2;
				radius=0.25;
			};
			class HitFuel: HitFuel
			{
				armor=1.5;
				material=-1;
				name="fuel";
				passThrough=1;
				minimalHit=0.1;
				explosionShielding=0.40000001;
				radius=0.25;
			};
			class HitAvionics: HitAvionics
			{
				name="avionics_hit";
				material=-1;
				armor=1;
				visual="";
				radius=0.5;
				explosionShielding=2;
				passThrough=1;
				minimalHit=0.1;
			};
			class HitHRotor: HitHRotor
			{
				name="main rotor";
				visual="main rotor";
				armor=3;
				material=-1;
				radius=0.30000001;
				explosionShielding=2.5;
				passThrough=1;
			};
			class HitVRotor: HitVRotor
			{
				name="tail rotor";
				visual="tail rotor";
				armor=2;
				material=-1;
				radius=0.059999999;
				explosionShielding=6;
				passThrough=1;
			};
			class HitGlass1
			{
				visual="glass1";
				name="hp_glass1";
				material=-1;
				armor=0.30000001;
				radius=0.25;
				passThrough=0;
				minimalHit=0.050000001;
				explosionShielding=2;
			};
			class HitGlass2
			{
				visual="glass2";
				name="hp_glass2";
				material=-1;
				armor=0.30000001;
				radius=0.25;
				passThrough=0;
				minimalHit=0.050000001;
				explosionShielding=2;
			};
			class HitGlass3
			{
				visual="glass3";
				name="hp_glass3";
				material=-1;
				armor=0.30000001;
				radius=0.25;
				passThrough=0;
				minimalHit=0.050000001;
				explosionShielding=2;
			};
			class HitGlass4
			{
				visual="glass4";
				name="hp_glass4";
				material=-1;
				armor=0.30000001;
				radius=0.25;
				passThrough=0;
				minimalHit=0.050000001;
				explosionShielding=2;
			};
			class HitGlass5
			{
				visual="glass5";
				name="hp_glass5";
				material=-1;
				armor=0.30000001;
				radius=0.25;
				passThrough=0;
				minimalHit=0.050000001;
				explosionShielding=2;
			};
			class HitGlass6
			{
				visual="glass6";
				name="hp_glass6";
				material=-1;
				armor=0.30000001;
				radius=0.25;
				passThrough=0;
				minimalHit=0.050000001;
				explosionShielding=2;
			};
			class HitGlass7
			{
				visual="glass7";
				name="hp_glass7";
				material=-1;
				armor=0.30000001;
				radius=0.25;
				passThrough=0;
				minimalHit=0.050000001;
				explosionShielding=2;
			};
			class HitWinch
			{
				armor=0.1;
				material=51;
				name="slingLoad0";
				visual="";
				passThrough=0;
				radius=0.1;
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"ARMSCor_Alouette_III\data\alouette_iii_ext.rvmat",
				"ARMSCor_Alouette_III\data\alouette_iii_ext_damage.rvmat",
				"ARMSCor_Alouette_III\data\alouette_iii_ext_destruct.rvmat",
				"ARMSCor_Alouette_III\data\reflective_glass.rvmat",
				"ARMSCor_Alouette_III\data\glass_damage.rvmat",
				"ARMSCor_Alouette_III\data\glass_destruct.rvmat",
				"A3\data_F\default.rvmat",
				"A3\data_F\default.rvmat",
				"A3\data_F\default_destruct.rvmat"
			};
		};
		class MFD
		{
		};
		driverAction="pilot_Heli_Light_02";
		driverInAction="pilot_Heli_Light_02";
		precisegetinout=1;
		GetInAction="pilot_Heli_Light_02_Enter";
		GetOutAction="pilot_Heli_Light_02_Exit";
		driverCanEject=0;
		driverLeftHandAnimName="lever_pilot";
		driverRightHandAnimName="stick_pilot";
		driverLeftLegAnimName="pedalL";
		driverRightLegAnimName="pedalR";
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
		cost=2000000;
		getInRadius=1.7;
		typicalCargo[]=
		{
			"B_HeliPilot_F"
		};
		cargoAction[]=
		{
			"ChopperLight_C_R_static_H",
			"ChopperLight_C_L_static_H"
		};
		cargoGetInAction[]=
		{
			"GetInHelicopterCargo"
		};
		cargoGetOutAction[]=
		{
			"GetOutHelicopterCargo"
		};
		transportSoldier=5;
		cargoIsCoDriver[]={0,0,0,0,0};
		memoryPointsGetInCargo[]=
		{
			"pos cargo L",
			"pos cargo R"
		};
		memoryPointsGetInCargoDir[]=
		{
			"pos cargo L dir",
			"pos cargo R dir"
		};
		hideWeaponsCargo=1;
		cargoCanEject=1;
		cargoProxyIndexes[]={3,4,5};
		maximumLoad=1000;
		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine="30Rnd_65x39_caseless_mag";
				count=12;
			};
			class _xx_100Rnd_65x39_caseless_mag
			{
				magazine="100Rnd_65x39_caseless_mag";
				count=6;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=10;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=6;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine="1Rnd_SmokeGreen_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine="1Rnd_SmokeBlue_Grenade_shell";
				count=3;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=8;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=8;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=8;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=8;
			};
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=5;
			};
			class _xx_Titan_AT
			{
				magazine="Titan_AT";
				count=2;
			};
			class _xx_Titan_AP
			{
				magazine="Titan_AP";
				count=2;
			};
			class _xx_Titan_AA
			{
				magazine="Titan_AA";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_MX_F
			{
				weapon="arifle_MX_F";
				count=2;
			};
		};
		slingLoadMaxCargoMass=750;
		slingLoadMemoryPoint="slingLoad0";
		slingLoadOperator=0;
		class CargoTurret;
		class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret
			{
				gunnerAction="passenger_inside_1";
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos cargo L";
				memoryPointsGetInGunnerDir="pos cargo L dir";
				gunnerName="Passenger (left door)";
				proxyIndex=1;
				isPersonTurret=1;
				ejectDeadGunner=0;
				enabledByAnimationSource="door_b_l";
				soundAttenuationTurret="";
				disableSoundAttenuation=1;
				maxElev=7;
				minElev=-65;
				maxTurn=110;
				minTurn=12;
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerAction="passenger_inside_1";
				gunnerCompartments="Compartment3";
				memoryPointsGetInGunner="pos cargo R";
				memoryPointsGetInGunnerDir="pos cargo R dir";
				gunnerName="Passenger (right door)";
				proxyIndex=2;
				isPersonTurret=1;
				ejectDeadGunner=0;
				enabledByAnimationSource="door_b_r";
				soundAttenuationTurret="";
				disableSoundAttenuation=1;
				maxElev=7;
				minElev=-65;
				maxTurn=-12;
				minTurn=-110;
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust1";
				direction="exhaust1_dir";
				effect="ExhaustsEffectHeliMed";
			};
		};
		class Reflectors
		{
			class Right
			{
				color[]={7000,7500,10000};
				ambient[]={70,75,100};
				intensity=50;
				size=1;
				innerAngle=15;
				outerAngle=65;
				coneFadeCoef=10;
				position="Light_pos";
				direction="Light_dir";
				hitpoint="Light_hitpoint";
				selection="Light";
				useFlare=1;
				flareSize=10;
				flareMaxDistance=250;
				dayLight=0;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=1;
					quadratic=1;
					hardLimitStart=100;
					hardLimitEnd=200;
				};
			};
		};
		class TextureSources
		{
			class sadf
			{
				displayName="SADF";
				author="$STR_ARMSCor_author_petracephas";
				dlc="ARMSCor";
				textures[]=
				{
					"ARMSCor_Alouette_III\data\AlouetteIII_sadf_co",
					"ARMSCor_Alouette_III\data\Alouette_III_x_co"
				};
				factions[]=
				{
					"ARMSCor_SADF_I",
					"ARMSCor_SADF_I"
				};
			};
			class sandf
			{
				displayName="SANDF";
				author="$STR_ARMSCor_author_petracephas";
				dlc="ARMSCor";
				textures[]=
				{
					"ARMSCor_Alouette_III\data\AlouetteIII_sandf_co",
					"ARMSCor_Alouette_III\data\Alouette_III_x_co"
				};
				factions[]=
				{
					"ARMSCor_SADF_I",
					"ARMSCor_SADF_I"
				};
			};
			class angola
			{
				displayName="Angola";
				author="$STR_ARMSCor_author_petracephas";
				dlc="ARMSCor";
				textures[]=
				{
					"ARMSCor_Alouette_III\data\AlouetteIII_AO_co",
					"ARMSCor_Alouette_III\data\Alouette_III_ao_x_co"
				};
				factions[]={};
			};
			class au
			{
				displayName="Australia (Fictional)";
				author="$STR_ARMSCor_author_petracephas";
				dlc="ARMSCor";
				textures[]=
				{
					"ARMSCor_Alouette_III\data\AlouetteIII_au_co",
					"ARMSCor_Alouette_III\data\Alouette_III_x_co"
				};
				factions[]={};
			};
			class bumblebee
			{
				displayName="Bumble Bee (Fictional)";
				author="$STR_ARMSCor_author_petracephas";
				dlc="ARMSCor";
				textures[]=
				{
					"ARMSCor_Alouette_III\data\AlouetteIII_bumblebee_co",
					"ARMSCor_Alouette_III\data\Alouette_III_x_co"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
			class indp
			{
				displayName="INDP";
				author="$STR_ARMSCor_author_petracephas";
				dlc="ARMSCor";
				textures[]=
				{
					"ARMSCor_Alouette_III\data\AlouetteIII_indp_co",
					"ARMSCor_Alouette_III\data\Alouette_III_x_co"
				};
				factions[]=
				{
					"IND_F"
				};
			};
			class olive
			{
				displayName="Olive";
				author="$STR_ARMSCor_author_petracephas";
				dlc="ARMSCor";
				textures[]=
				{
					"ARMSCor_Alouette_III\data\AlouetteIII_olive_co",
					"ARMSCor_Alouette_III\data\Alouette_III_x_co"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
			class br
			{
				displayName="BR";
				author="$STR_ARMSCor_author_petracephas";
				dlc="ARMSCor";
				textures[]=
				{
					"ARMSCor_Alouette_III\data\AlouetteIII_br_co",
					"ARMSCor_Alouette_III\data\Alouette_III_x_co"
				};
				factions[]={};
			};
			class rdf
			{
				displayName="RSF";
				author="$STR_ARMSCor_author_petracephas";
				dlc="ARMSCor";
				textures[]=
				{
					"ARMSCor_Alouette_III\data\AlouetteIII_rsf_co",
					"ARMSCor_Alouette_III\data\Alouette_III_x_co"
				};
				factions[]=
				{
					"ARMSCor_RSF_I"
				};
			};
			class unza
			{
				displayName="UNZA";
				author="$STR_ARMSCor_author_petracephas";
				dlc="ARMSCor";
				textures[]=
				{
					"ARMSCor_Alouette_III\data\AlouetteIII_unza_co",
					"ARMSCor_Alouette_III\data\Alouette_III_x_co"
				};
				factions[]={};
			};
			class zebra
			{
				displayName="Zebra (Fictional)";
				author="$STR_ARMSCor_author_petracephas";
				dlc="ARMSCor";
				textures[]=
				{
					"ARMSCor_Alouette_III\data\AlouetteIII_zebra_co",
					"ARMSCor_Alouette_III\data\Alouette_III_x_co"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
			class zim
			{
				displayName="Zimbabwe";
				author="$STR_ARMSCor_author_petracephas";
				dlc="ARMSCor";
				textures[]=
				{
					"ARMSCor_Alouette_III\data\AlouetteIII_zim_co",
					"ARMSCor_Alouette_III\data\Alouette_III_x_co"
				};
				factions[]={};
			};
			class port
			{
				displayName="Portugal";
				author="$STR_ARMSCor_author_petracephas";
				dlc="ARMSCor";
				textures[]=
				{
					"ARMSCor_Alouette_III\data\AlouetteIII_pt_co",
					"ARMSCor_Alouette_III\data\Alouette_III_x_co"
				};
				factions[]={};
			};
		};
		class AnimationSources
		{
			class door_b_l
			{
				source="user";
				AnimPeriod=2;
				initPhase=0;
			};
			class door_b_r
			{
				source="user";
				AnimPeriod=2;
				initPhase=0;
			};
			class Hide_Door_FL
			{
				DisplayName="Door Front Left";
				author="$STR_ARMSCor_author_petracephas";
				dlc="ARMSCor";
				source="user";
				AnimPeriod=1e-007;
				initPhase=1;
				mass=35;
			};
			class Hide_Door_FR
			{
				DisplayName="Door Front Right";
				author="$STR_ARMSCor_author_petracephas";
				dlc="ARMSCor";
				source="user";
				AnimPeriod=1e-007;
				initPhase=1;
				mass=35;
			};
			class Hide_StrellaBox
			{
				displayName="Strella Box";
				scope=2;
				scopeCurator=2;
				author="$STR_ARMSCor_author_petracephas";
				dlc="ARMSCor";
				source="user";
				AnimPeriod=1e-007;
				initPhase=0;
				mass=75;
			};
			class Gatling
			{
				source="revolving";
				weapon="ARMSCor_GAU_19";
			};
			class Gatling_flash
			{
				source="ammorandom";
				weapon="M134_minigun";
			};
		};
		class UserActions
		{
		};
	};
	class ARMSCor_AlouetteIII_SF_ZADF_I: ARMSCor_AlouetteIII_SADF_I
	{
		displayName="Alouette III-SF";
		author="$STR_ARMSCor_author_petracephas";
		dlc="ARMSCor";
		scope=2;
		scopeCurator=2;
		side=1;
		editorCategory="ccm_categories_rhodesia";
		editorSubCategory="ccm_categories_rhodesia_helicopters";
		faction="ccm_factions_rhodesianFireforce";
		vehicleClass="ccm_factions_rhodesianFireforce_helicopters";
		model="\ARMSCor_Alouette_III\AlouetteIII_SF.p3d";
		crew="";
		accuracy=1.5;
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ARMSCor_Alouette_III\data\AlouetteIII_rsf_co"
		};
		cargoProxyIndexes[]={3};
		class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret
			{
				gunnerAction="passenger_bench_1";
				gunnerCompartments="Compartment1";
				memoryPointsGetInGunner="pos cargo R";
				memoryPointsGetInGunnerDir="pos cargo R dir";
				gunnerName="Passenger (right door front)";
				proxyIndex=5;
				maxElev=17;
				minElev=-65;
				maxTurn=39;
				minTurn=-45;
				isPersonTurret=1;
				ejectDeadGunner=1;
				playerPosition=4;
				soundAttenuationTurret="";
				disableSoundAttenuation=1;
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerCompartments="Compartment1";
				memoryPointsGetInGunner="pos cargo L";
				memoryPointsGetInGunnerDir="pos cargo L dir";
				gunnerName="Passenger (left door front)";
				proxyIndex=4;
				maxTurn=45;
				minTurn=-39;
			};
			class CargoTurret_03: CargoTurret_02
			{
				gunnerCompartments="Compartment1";
				memoryPointsGetInGunner="pos cargo R";
				memoryPointsGetInGunnerDir="pos cargo R dir";
				gunnerName="Passenger (right door back)";
				proxyIndex=2;
				maxTurn=39;
				minTurn=-45;
			};
			class CargoTurret_04: CargoTurret_01
			{
				gunnerCompartments="Compartment1";
				memoryPointsGetInGunner="pos cargo L";
				memoryPointsGetInGunnerDir="pos cargo L dir";
				gunnerName="Passenger (left door back)";
				proxyIndex=1;
				maxTurn=45;
				minTurn=-39;
			};
		};
	};
	class ARMSCor_AlouetteIII_X12_ZADF_I: ARMSCor_AlouetteIII_SADF_I
	{
		displayName="Alouette III-X12";
		author="$STR_ARMSCor_author_petracephas";
		dlc="ARMSCor";
		scope=2;
		scopeCurator=2;
		side=1;
		editorCategory="ccm_categories_rhodesia";
		editorSubCategory="ccm_categories_rhodesia_helicopters";
		faction="ccm_factions_rhodesianFireforce";
		vehicleClass="ccm_factions_rhodesianFireforce_helicopters";
		transportSoldier=3;
		model="\ARMSCor_Alouette_III\AlouetteIII_X12.p3d";
		weapons[]=
		{
			"cca_weapons_mastersafe",
			"cca_weapons_gau19",
			"missiles_DAR",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"cca_magazines_1000_127x99_Red",
			"cca_magazines_1000_127x99_Red",
			"24Rnd_missiles",
			"168Rnd_CMFlare_Chaff_Magazine"
		};
		LockDetectionSystem=8;
		incomingMissileDetectionSystem=16;
		threat[]={0.60000002,0.40000001,0.1};
		memoryPointGun[]=
		{
			"gun_muzzle"
		};
		gunBeg[]=
		{
			"gun_muzzle"
		};
		gunEnd[]=
		{
			"gun_chamber"
		};
		memoryPointLMissile="Rocket_1";
		memoryPointRMissile="Rocket_2";
		availableForSupportTypes[]=
		{
			"CAS_Heli"
		};
	};
	class ARMSCor_AlouetteIII_X20_ZADF_I: ARMSCor_AlouetteIII_SADF_I
	{
		displayName="Alouette III-X20";
		author="$STR_ARMSCor_author_petracephas";
		dlc="ARMSCor";
		scope=2;
		scopeCurator=2;
		side=1;
		editorCategory="ccm_categories_rhodesia";
		editorSubCategory="ccm_categories_rhodesia_helicopters";
		faction="ccm_factions_rhodesianFireforce";
		vehicleClass="ccm_factions_rhodesianFireforce_helicopters";
		transportSoldier=3;
		model="\ARMSCor_Alouette_III\AlouetteIII_X20.p3d";
		weapons[]=
		{
			"cca_weapons_mastersafe",
			"gatling_20mm",
			"missiles_DAR",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"1000Rnd_20mm_shells",
			"24Rnd_missiles",
			"168Rnd_CMFlare_Chaff_Magazine"
		};
		LockDetectionSystem=8;
		incomingMissileDetectionSystem=16;
		threat[]={0.60000002,0.40000001,0.1};
		memoryPointGun[]=
		{
			"gun_muzzle"
		};
		gunBeg[]=
		{
			"gun_muzzle"
		};
		gunEnd[]=
		{
			"gun_chamber"
		};
		memoryPointLMissile="Rocket_1";
		memoryPointRMissile="Rocket_2";
		availableForSupportTypes[]=
		{
			"CAS_Heli"
		};
	};
	class ARMSCor_AlouetteIII_KCAR_SADF_I: ARMSCor_AlouetteIII_SADF_I
	{
		displayName="Alouette III K-Car";
		author="$STR_ARMSCor_author_petracephas";
		dlc="ARMSCor";
		scope=2;
		scopeCurator=2;
		side=1;
		editorCategory="ccm_categories_rhodesia";
		editorSubCategory="ccm_categories_rhodesia_helicopters";
		faction="ccm_factions_rhodesianFireforce";
		vehicleClass="ccm_factions_rhodesianFireforce_helicopters";
		transportSoldier=1;
		model="\ARMSCor_Alouette_III\AlouetteIII_KCAR.p3d";
		availableForSupportTypes[]=
		{
			"CAS_Heli"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				CanEject=0;
				isCopilot=0;
				body="mainTurret";
				gun="mainGun";
				gunnerType="B_helicrew_F";
				minElev=-50;
				maxElev=5;
				initElev="--15";
				minTurn=45;
				maxTurn=135;
				initTurn=90;
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				stabilizedInAxes=0;
				gunBeg="muzzle_beg";
				gunEnd="muzzle_end";
				gunnerName="$STR_A3_LEFT_GUNNER";
				gunnerOutOpticsShowCursor=1;
				gunnerOpticsShowCursor=1;
				memoryPointGunnerOptics="gunnerview";
				gunnerAction="gunner_Heli_Transport_01";
				gunnerInAction="gunner_Heli_Transport_01";
				gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Transport_01_Optics_Gunner_F";
				weapons[]=
				{
					"cca_weapons_mastersafe",
					"cca_weapons_f2_cannon"
				};
				magazines[]=
				{
					"cca_magazines_350Rnd_20mm_he",
					"cca_magazines_350Rnd_20mm_apfds"
				};
				commanding=-2;
				primaryGunner=1;
				gunnerCompartments="Compartment1";
				memoryPointsGetInGunner="pos Gunner";
				memoryPointsGetInGunnerDir="pos Gunner dir";
				castGunnerShadow=1;
				viewGunnerShadow=1;
				soundAttenuationTurret="HeliAttenuationGunner";
				disableSoundAttenuation=0;
				selectionFireAnim="zasleh_1";
				turretCanSee="1 + 2 + 4 + 8 + 16";
				canUseScanners=0;
			};
		};
	};
	class ARMSCor_AlouetteIIIKCAR_I: ARMSCor_AlouetteIII_KCAR_SADF_I
	{
		scope=1;
		scopeCurator=1;
		scopeArsenal=1;
		displayName="Alouette III K-Car [WIP]";
		author="$STR_ARMSCor_author_petracephas";
		dlc="ARMSCor";
		side=1;
		editorCategory="ccm_categories_rhodesia";
		editorSubCategory="ccm_categories_rhodesia_helicopters";
		faction="ccm_factions_rhodesianFireforce";
		vehicleClass="ccm_factions_rhodesianFireforce_helicopters";
	};
	class ARMSCor_AlouetteIII_X20: ARMSCor_AlouetteIII_X20_ZADF_I
	{
		scope=1;
		scopeCurator=1;
		scopeArsenal=1;
		displayName="Alouette III-X20";
		author="$STR_ARMSCor_author_petracephas";
		dlc="ARMSCor";
		side=1;
		editorCategory="ccm_categories_rhodesia";
		editorSubCategory="ccm_categories_rhodesia_helicopters";
		faction="ccm_factions_rhodesianFireforce";
		vehicleClass="ccm_factions_rhodesianFireforce_helicopters";
	};
	class ARMSCor_AlouetteIII_X12: ARMSCor_AlouetteIII_X12_ZADF_I
	{
		scope=1;
		scopeCurator=1;
		scopeArsenal=1;
		displayName="Alouette III-X12";
		author="$STR_ARMSCor_author_petracephas";
		dlc="ARMSCor";
		side=1;
		editorCategory="ccm_categories_rhodesia";
		editorSubCategory="ccm_categories_rhodesia_helicopters";
		faction="ccm_factions_rhodesianFireforce";
		vehicleClass="ccm_factions_rhodesianFireforce_helicopters";
	};
	class ARMSCor_AlouetteIII_SF_I: ARMSCor_AlouetteIII_SF_ZADF_I
	{
		scope=1;
		scopeCurator=1;
		scopeArsenal=1;
		displayName="Alouette III-SF";
		author="$STR_ARMSCor_author_petracephas";
		dlc="ARMSCor";
		side=1;
		editorCategory="ccm_categories_rhodesia";
		editorSubCategory="ccm_categories_rhodesia_helicopters";
		faction="ccm_factions_rhodesianFireforce";
		vehicleClass="ccm_factions_rhodesianFireforce_helicopters";
	};
	class ARMSCor_AlouetteIII_I: ARMSCor_AlouetteIII_SADF_I
	{
		scope=1;
		scopeCurator=1;
		scopeArsenal=1;
		displayName="Alouette III[Testing]";
		author="$STR_ARMSCor_author_petracephas";
		dlc="ARMSCor";
		side=1;
		editorCategory="ccm_categories_rhodesia";
		editorSubCategory="ccm_categories_rhodesia_helicopters";
		faction="ccm_factions_rhodesianFireforce";
		vehicleClass="ccm_factions_rhodesianFireforce_helicopters";
	};
};
class cfgMods
{
	author="PetraCephas";
	timepacked="1567077616";
};
