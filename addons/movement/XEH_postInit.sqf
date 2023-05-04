#include "script_component.hpp"

GVAR(oldStance_ui) = -1;
GVAR(oldSpeed) = ["", -1];
GVAR(oldSpeed_ui) = -1;
GVAR(speed) = 7;

[FUNC(speedPFH)] call CBA_fnc_addPerFrameHandler;
[FUNC(interfacePFH)] call CBA_fnc_addPerFrameHandler;