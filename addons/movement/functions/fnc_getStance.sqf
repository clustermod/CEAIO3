#include "script_component.hpp"
/*
 * Author: Eric
 * Gets a units actual incremential stance
 *
 * Arguments:
 * <NONE>
 *
 * Return Value:
 * Stance <STRING>
 *
 * Example:
 * call cem_movement_fnc_getStance
 *
 * Public: No
 */

private["_stance", "_animState", "_trueStance"];
_stance = stance player;
_animState = (animationState player);
_trueStance = _stance;

if (_animState select [((count _animState) - 2), 2] == "up") then {
  _trueStance = "H_"+_stance
};
if (_animState select [((count _animState) - 4), 4] == "down") then {
  _trueStance = "L_"+_stance
};
if (_stance == "PRONE" && _animState select [(_animState find "_") - 2, 2] == "up") then {
  _trueStance = "H_"+_stance
};
if (_stance == "PRONE" && _animState select [(_animState find "_") - 4, 4] == "down") then {
  _trueStance = "L_"+_stance
};

_trueStance;
