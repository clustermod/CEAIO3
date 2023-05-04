#include "script_component.hpp"
/*
 * Author: Eric
 * Sets the custom sliders position (new position is absolute screen position)
 *
 * Arguments:
 * 0: Control <CONTROL>
 * 1: New Position <ARRAY>
 *
 * Return Value:
 * Success <BOOL>
 *
 * Example:
 * [SLIDER_CTRL, [0.453, 0.364, 0.234]] call cem_movement_fnc_setSliderpos
 *
 * Public: No
 */

params["_ctrl", "_newPos"];

_ctrl ctrlSetPosition _newPos;
_ctrl ctrlCommit 0;
