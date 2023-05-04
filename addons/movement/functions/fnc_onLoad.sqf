#include "script_component.hpp"
/*
 * Author: Eric
 * Initializes UI elements
 * 
 * Arguments:
 * 0: Control / Display to initialize <CONTROL/DISPLAY>
 * 1: UI Element Name or ID <STRING>
 * 
 * Return Value:
 * None
 * 
 * Example:
 * [] call ceaio_movement_fnc_onLoad
 * 
 * Public: No
 */
disableSerialization;
params ["_ctrl", "_name"];

uiNamespace setVariable [_name, _ctrl];
