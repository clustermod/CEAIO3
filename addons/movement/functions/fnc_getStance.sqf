#include "script_component.hpp"
/*
 * Author: Eric
 * Gets a units actual incremential stance
 *
 * Arguments:
 * Nonr
 *
 * Return Value:
 * Stance <NUMBER>
 *
 * Example:
 * call cem_movement_fnc_getStance
 *
 * Public: Yes
 */

private _stance = stance CEM_player;
private _animState = (animationState CEM_player);
private _trueStance = _stance;

if (_animState select [((count _animState) - 2), 2] == "up") then {
  _trueStance = "H_"+_stance;
};

if (_animState select [((count _animState) - 4), 4] == "down") then {
  _trueStance = "L_"+_stance;
};

if (_stance == "PRONE" && _animState select [(_animState find "_") - 2, 2] == "up") then {
  _trueStance = "H_"+_stance;
};

if (_stance == "PRONE" && _animState select [(_animState find "_") - 4, 4] == "down") then {
  _trueStance = "L_"+_stance;
};

private _stanceIndex = [[["L_PRONE", 8], ["PRONE", 7], ["H_PRONE", 6], ["L_CROUCH", 5], ["CROUCH", 4], ["H_CROUCH", 3], ["L_STAND", 2], ["STAND", 1], ["H_STAND", 0]]] call CBA_fnc_hashCreate;

[_stanceIndex, _trueStance, -1] call CBA_fnc_hashGet;