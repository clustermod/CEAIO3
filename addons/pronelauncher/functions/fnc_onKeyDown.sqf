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
 * [control, 5, false, true, false] call ccm_pronelauncher_fnc_onKeyDown
 *
 * Public: No
 */

params ["", "_key"];

if !(isNull objectParent CCM_player) exitWith { false };
private _launcherWeapon = secondaryWeapon CCM_player;
if (_launcherWeapon isEqualTo "") exitwith { false };
if (currentWeapon CCM_player != _launcherWeapon) exitWith { false };

private _stance = stance CCM_player;
private _keysMoveDown = actionKeys "moveDown";
private _keysMoveUp = actionKeys "moveUp";
private _keysProne = actionKeys "Prone";
private _keysCrouch = actionKeys "Crouch";
private _keysStand = actionKeys "Stand";

switch (toUpper _stance) do {
    case "STAND": {
        if ((_key in _keysMoveDown) || (_key in _keysProne)) then {            
            CCM_player playMoveNow "AmovPknlMstpSrasWlnrDnon";
            CCM_player playMove "CCM_LauncherProne";
            true;
        };
    };

    case "CROUCH": {
        if ((_key in _keysMoveDown) || (_key in _keysProne)) then {            
            CCM_player playMoveNow "CCM_LauncherProne";
            true;
        };
    };

    case "PRONE": {
        switch (true) do {
            case (_key in _keysMoveDown): {
                CCM_player playMoveNow "AmovPpneMstpSrasWlnrDnon";
                CCM_player playMove "AmovPpneMstpSrasWlnrDnon_AmovPknlMstpSrasWlnrDnon";
                CCM_player playMove "AmovPknlMstpSrasWlnrDnon_AmovPercMstpSrasWlnrDnon";
                true
            };

            case (_key in _keysMoveUp): {
                CCM_player playMoveNow "AmovPpneMstpSrasWlnrDnon";
                CCM_player playMove "AmovPpneMstpSrasWlnrDnon_AmovPknlMstpSrasWlnrDnon";
                true
            };

            case (_key in _keysCrouch): {
                CCM_player playMoveNow "AmovPpneMstpSrasWlnrDnon";
                CCM_player playMove "AmovPpneMstpSrasWlnrDnon_AmovPknlMstpSrasWlnrDnon";
                true
            };

            case (_key in _keysStand): {
                CCM_player playMoveNow "AmovPpneMstpSrasWlnrDnon";
                CCM_player playMove "AmovPpneMstpSrasWlnrDnon_AmovPknlMstpSrasWlnrDnon";
                CCM_player playMove "AmovPknlMstpSrasWlnrDnon_AmovPercMstpSrasWlnrDnon";
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
