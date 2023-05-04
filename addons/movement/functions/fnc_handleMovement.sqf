#include "script_component.hpp"
/*
 * Author: Eric
 * Handles movement and stance changes.
 *
 * Arguments:
 * <NONE>
 *
 * Return Value:
 * <NONE>
 *
 * Example:
 * call cem_movement_fnc_handleMovement
 *
 * Public: No
 */

private["_speedArray", "_stanceArray", "_stance", "_stanceIndex"];

_speedArray = [["CE_WALK", 0.5, 0.0195], ["CE_WALK", 0.7, 0.0305], ["CE_WALK", 1, 0.042], ["CE_WALK", 1.2, 0.054], ["CE_WALK", 1.5, 0.0665], ["CE_WALK", 1.8, 0.0783], ["CE_JOG", 0.9, 0.09], ["CE_JOG", 1, 0.1015]];
_stanceArray = [["L_PRONE", "stance_0", [-0.7,1.26727]], ["PRONE", "stance_1", [-0.7,1.23427]], ["H_PRONE", "stance_2", [-0.7,1.20127]], ["L_CROUCH", "stance_3", [-0.7,1.16827]], ["CROUCH", "stance_4", [-0.7,1.13527]], ["H_CROUCH", "stance_5", [-0.7,1.10227]], ["L_STAND", "stance_6", [-0.7,1.06927]], ["STAND", "stance_7", [-0.7,1.03627]], ["H_STAND", "stance_8", [-0.7,1.00327]]];
localNamespace setVariable [QGVAR(speed_array), _speedArray];
localNamespace setVariable [QGVAR(stance_array), _stanceArray];

// Set unit variables
localNamespace setVariable [QGVAR(selected_speed), 7];
localNamespace setVariable [QGVAR(selected_stance), 7];

// Set HUD items to current values
//[(uiNamespace getVariable QGVAR(speed_slider_arrow)), ((_speedArray select 7) select 2)] call FUNC(setSliderPos);

_stance = call FUNC(getStance);
_stanceIndex = [_stanceArray, _stance] call EFUNC(common,findbyKey);
(uiNamespace getVariable QGVAR(stance_indicator)) ctrlSetText QPATHTOF(UI) + format["\%1.paa", (_stanceIndex select 1)];
[(uiNamespace getVariable QGVAR(stance_slider_arrow)), (_stanceIndex select 2)] call FUNC(setSliderPos);

// Eventhandlers for transitions
[{
  private["_trans", "_wepState", "_inputs", "_curSpeed", "_stance"];
	_trans = (((animationState player) find "_") != -1 && (animationState player) select [((animationState player) find "_")+1, 1] == "a");
	_wepState = (((animationState player) select [13,3]) == "low");
	_inputs = (inputAction "WalkRunTemp" > 0 || inputAction "WalkRunToggle" > 0 || inputAction "turbo" > 0 || inputAction "TurboToggle" > 0 || stance player == "PRONE");
  _speedArray = localNamespace getVariable QGVAR(speed_array);
  _stanceArray = localNamespace getVariable QGVAR(stance_array);

// Check if player is on foot
if (vehicle player == player) then {
  // Set speed and make sure player can't cheese it
  if (_trans || _wepState || _inputs) then {
    player forceWalk false;
    player setAnimSpeedCoef 1;
    } else {
      _curSpeed = localNamespace getVariable [QGVAR(selected_speed), 0];

      if (((_speedArray select _curSpeed) select 0) == "CE_WALK") then {
        if (((animationState player) select [9,3]) == "wlk") then {
          player setAnimSpeedCoef ((_speedArray select _curSpeed) select 1);
        };
        } else {
          player setAnimSpeedCoef ((_speedArray select _curSpeed) select 1);
        };

        if (((_speedArray select _curSpeed) select 0) == "CE_WALK") then {
          player forceWalk true;
        };
      };

      // Set Stance Indicator
      _stance = call FUNC(getStance);
      _stanceIndex = [_stanceArray, _stance] call EFUNC(common,findbyKey);
      (uiNamespace getVariable QGVAR(stance_indicator)) ctrlSetText QPATHTOF(UI) + format["\%1.paa", (_stanceIndex select 1)];
      [(uiNamespace getVariable QGVAR(stance_slider_arrow)), (_stanceIndex select 2)] call FUNC(setSliderPos);
};

}] call CBA_fnc_addPerFrameHandler;
