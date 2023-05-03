#include "script_component.hpp"

TRACE_1("adding unit playerEH to set ecm_player",isNull cba_events_oldUnit);
["unit", {
    ECM_player = (_this select 0);
}, true] call CBA_fnc_addPlayerEventHandler;