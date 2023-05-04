#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ccm_main"};
        author = ECSTRING(common,ClusterTeam);
        authors[] = {"Eric"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgMarkerClasses.hpp"
#include "CfgMarkers.hpp"
// #include "CfgMarkerColors.hpp"