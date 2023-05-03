#include "script_component.hpp"
#include "XEH_PREP.sqf"

["KeyDown", {_this call FUNC(onKeyDown)}] call CBA_fnc_addDisplayHandler;

ADDON = true;
