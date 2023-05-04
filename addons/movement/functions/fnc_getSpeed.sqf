#include "script_component.hpp"
/*
 * Author: Eric
 * Get's the player's CE:M Speed
 * 
 * Arguments:
 * None
 * 
 * Return Value:
 * Speed <ARRAY>
 *   - Animation type <STRING>
 *   - Animation speed <NUMBER>
 * 
 * Example:
 * [] call cem_movement_fnc_getSpeed
 * 
 * Public: Yes
 */

private _trans = (((animationState CEM_player) find "_") != -1 && (animationState CEM_player) select [((animationState CEM_player) find "_")+1, 1] == "a");
private _wepState = (((animationState CEM_player) select [13,3]) == "low");
private _inputs = (inputAction "WalkRunTemp" > 0 || inputAction "WalkRunToggle" > 0 || inputAction "turbo" > 0 || inputAction "TurboToggle" > 0 || stance CEM_player == "PRONE");

if _trans exitWith { ["JOG", 1, 7] };
if _wepState exitWith { ["JOG", 1, 7] };
if _inputs exitWith { ["JOG", 1, 7] };

private _speedArray = [["WALK", 0.5, GVAR(speed)], ["WALK", 0.7, GVAR(speed)], ["WALK", 1, GVAR(speed)], ["WALK", 1.2, GVAR(speed)], ["WALK", 1.5, GVAR(speed)], ["WALK", 1.8, GVAR(speed)], ["JOG", 0.9, GVAR(speed)], ["JOG", 1, GVAR(speed)]];
_speedArray select GVAR(speed);