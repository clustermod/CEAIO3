#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ccm_main"};
        author = "Cluster Mod Team";
        authors[] = {"Eric"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"

#include "CfgMainMenuSpotlight.hpp"
#include "RscCommon.hpp"
#include "RscDisplayMain.hpp"