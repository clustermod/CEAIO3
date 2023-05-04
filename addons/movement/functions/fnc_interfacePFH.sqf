#include "script_component.hpp"
/*
 * Author: Eric
 * Handles User Interface for movement and stances
 * 
 * Arguments:
 * None
 * 
 * Return Value:
 * None
 * 
 * Example:
 * [] call cem_movement_fnc_PFHInterface
 * 
 * Public: No
 */
disableSerialization;

private _parent = uiNamespace getVariable [QGVAR(movementInfoGroup), controlNull];
if (visibleMap) exitWith { _parent ctrlShow false; };
if (!isNull objectParent CEM_player) exitWith { _parent ctrlShow false; };

private _stanceIndicator = uiNamespace getVariable [QGVAR(stance_indicator), controlNull];
private _stanceSlider = uiNamespace getVariable [QGVAR(stance_bar), controlNull];
private _stanceArrow = uiNamespace getVariable [QGVAR(stance_arrow), controlNull];
private _speedSlider = uiNamespace getVariable [QGVAR(speed_bar), controlNull];
private _speedArrow = uiNamespace getVariable [QGVAR(speed_arrow), controlNull];

_parent ctrlShow true;

/* Selective UI */
_stanceIndicator ctrlShow GVAR(showStanceIndicator);
_stanceSlider ctrlShow GVAR(showStanceSlider);
_stanceArrow ctrlShow GVAR(showStanceSlider);
_speedSlider ctrlShow GVAR(showSpeedSlider);
_speedArrow ctrlShow GVAR(showSpeedSlider);

/* Adjust stance indication */
_stance = [] call FUNC(getStance);
if (GVAR(oldStance_ui) != _stance) then {
	_parent ctrlSetFade 0;
	_parent ctrlCommit 0;
	_stanceIndicator ctrlSetText (QPATHTOF(UI\stance_) + str _stance + ".paa");

	private _pos = ctrlPosition _stanceSlider;
	private _y = _pos select 1;
	private _h = _pos select 3;
	private _stancePos = _y + (((_h - 0.015) / 8) * _stance);

	_stanceArrow ctrlSetPosition [-0.000, _stancePos];
	_stanceArrow ctrlCommit 0;

	if (GVAR(fadeIndicator)) then {
		_parent ctrlSetFade 1;
		_parent ctrlCommit 3;
	};

	GVAR(oldStance_ui) = _stance;
};


/* Adjust speed indication */
private _speed = ([] call FUNC(getSpeed)) select 2;
if (GVAR(oldSpeed_ui) isNotEqualTo _speed) then {
	_parent ctrlSetFade 0;
	_parent ctrlCommit 0;
	private _pos = ctrlPosition _speedSlider;
	private _x = _pos select 0;
	private _w = _pos select 2;
	private _speedPos = _x + (((_w - 0.015) / 7) * _speed);

	_speedArrow ctrlSetPosition [_speedPos, 0.425];
	_speedArrow ctrlCommit 0;

	if (GVAR(fadeIndicator)) then {
		_parent ctrlSetFade 1;
		_parent ctrlCommit 3;
	};

	GVAR(oldSpeed_ui) = _speed;
};