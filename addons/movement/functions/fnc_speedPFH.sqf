#include "script_component.hpp"
/*
 * Author: Eric
 * Handles movement speed changes
 * 
 * Arguments:
 * None
 * 
 * Return Value:
 * None
 * 
 * Example:
 * [] call ceaio_movement_fnc_speedPFH
 * 
 * Public: No
 */

if (visibleMap) exitWith { };
if (!isNull objectParent CEM_player) exitWith { };

private _speed = [] call FUNC(getSpeed);
if (GVAR(oldSpeed) isNotEqualTo _speed) then {
	if ((_speed select 0) isEqualTo "WALK") then {
		CEM_player forceWalk true;
	} else {
		CEM_player forceWalk false;
	};
	
    CEM_player setAnimSpeedCoef (_speed select 1);

	GVAR(oldSpeed) = _speed;
};