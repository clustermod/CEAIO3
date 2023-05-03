#include "script_component.hpp"
/*
 * Author: PiZZADOX, Jonpas, Eric
 * Handles keyDown EH for overriding engine stance changes when in AT launcher stance.
 *
 * Arguments:
 * 0: Control <CONTROL>
 * 1: Key <NUMBER>
 * 2: Shift <BOOL>
 * 3: Ctrl <BOOL>
 * 4: Alt <BOOL>
 *
 * Return Value:
 * None
 *
 * Example:
 * [control, 5, false, true, false] call ace_pronelauncher_fnc_onKeyDown
 *
 * Public: No
 */

params ["", "_key"];

if !(isNull objectParent ECM_player) exitWith { false };
private _launcherWeapon = secondaryWeapon ECM_player;
if (_launcherWeapon isEqualTo "") exitwith { false };
if (currentWeapon ECM_player != _launcherWeapon) exitWith { false };

private _stance = stance ECM_player;
private _keysMoveDown = actionKeys "moveDown";
private _keysMoveUp = actionKeys "moveUp";
private _keysProne = actionKeys "Prone";
private _keysCrouch = actionKeys "Crouch";
private _keysStand = actionKeys "Stand";

switch (toUpper _stance) do {
    case "STAND": {
        if ((_key in _keysMoveDown) || (_key in _keysProne)) then {            
            ECM_player playMoveNow "AmovPknlMstpSrasWlnrDnon";
            ECM_player playMove "ACE_LauncherProne";
            true;
        };
    };

    case "CROUCH": {
        if ((_key in _keysMoveDown) || (_key in _keysProne)) then {            
            ECM_player playMoveNow "ACE_LauncherProne";
            true;
        };
    };

    case "PRONE": {
        switch (true) do {
            case (_key in _keysMoveDown): {
                ECM_player playMoveNow "AmovPpneMstpSrasWlnrDnon";
                ECM_player playMove "AmovPpneMstpSrasWlnrDnon_AmovPknlMstpSrasWlnrDnon";
                ECM_player playMove "AmovPknlMstpSrasWlnrDnon_AmovPercMstpSrasWlnrDnon";
                true
            };

            case (_key in _keysMoveUp): {
                ECM_player playMoveNow "AmovPpneMstpSrasWlnrDnon";
                ECM_player playMove "AmovPpneMstpSrasWlnrDnon_AmovPknlMstpSrasWlnrDnon";
                true
            };

            case (_key in _keysCrouch): {
                ECM_player playMoveNow "AmovPpneMstpSrasWlnrDnon";
                ECM_player playMove "AmovPpneMstpSrasWlnrDnon_AmovPknlMstpSrasWlnrDnon";
                true
            };

            case (_key in _keysStand): {
                ECM_player playMoveNow "AmovPpneMstpSrasWlnrDnon";
                ECM_player playMove "AmovPpneMstpSrasWlnrDnon_AmovPknlMstpSrasWlnrDnon";
                ECM_player playMove "AmovPknlMstpSrasWlnrDnon_AmovPercMstpSrasWlnrDnon";
                true
            };

            case (_key in _keysProne): {
                true;
            };

            default {
                false;
            };
        };
    };
    default {
        false;
    };
};
