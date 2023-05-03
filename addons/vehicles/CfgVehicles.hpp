class CfgVehicles {
	class Air;
	class Helicopter_Base_H;
	class Plane_Base_F;
	class Helicopter: Air {
		explosionShielding=0.5;
		epeImpulseDamageCoef=0;
		crewCrashProtection=1;
	};

	class Plane: Air {
		explosionShielding=0.5;
		epeImpulseDamageCoef=0;
		crewCrashProtection=1;
	};

	class Heli_Light_01_base_F: Helicopter_Base_H {
		epeImpulseDamageCoef=0;
	};

	class Plane_CAS_01_base_F: Plane_Base_F {
		epeImpulseDamageCoef=0;
	};

	class Plane_CAS_02_base_F: Plane_Base_F {
		epeImpulseDamageCoef=0;
	};

	class Plane_Fighter_03_base_F: Plane_Base_F {
		epeImpulseDamageCoef=0;
	};
};
