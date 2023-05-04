#include "script_component.hpp"
/*
 * Author: Eric
 * Handles increasing speed for CE:movement.
 *
 * Arguments:
 * <NONE>
 *
 * Return Value:
 * Success <BOOL>
 *
 * Example:
 * [] call cem_movment_fnc_increaseSpeed
 *
 * Public: No
 */

private["_speedArray", "_curSpeed", "_newSpeed", "_speedPace", "_speedCoef", "_sliderPos", "_sliderCurPos", "_success"];
_curSpeed = localNamespace getVariable [QGVAR(selected_speed), 0];
_speedArray = localNamespace getVariable QGVAR(speed_array);

if (_curSpeed < 7) then {
  _newSpeed = _curSpeed + 1;
  _speedPace = ((_speedArray select _newSpeed) select 0);
  _speedCoef = ((_speedArray select _newSpeed) select 1);
  _sliderPos = ((_speedArray select _newSpeed) select 2);
  _sliderCurPos = ctrlPosition (uiNamespace getVariable QGVAR(speed_slider_arrow));

  if (_speedPace == "CE_WALK") then {
    player forceWalk true;
    player setAnimSpeedCoef _speedCoef;
  } else {
    player forceWalk false;
    if !(isWalking player) then {
      player setAnimSpeedCoef _speedCoef;
    } else {
      player setAnimSpeedCoef 1;
    }
  };

  localNamespace setVariable [QGVAR(selected_speed), _newSpeed];
  _success = [(uiNamespace getVariable QGVAR(speed_slider_arrow)), [(safeZoneX + safeZoneW * _sliderPos), (_sliderCurPos select 1)]] call FUNC(setSliderPos);

  if (_success) then {
    true;
  } else {
    false;
  };
} else {
  false;
};
