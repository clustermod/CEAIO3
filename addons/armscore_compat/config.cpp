#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {
          "ccm_weapons_mastersafe",
          "ccm_weapons_f2_cannon",
          "ccm_weapons_gau19"
        };
        magazines[] = {
          "ccm_magazines_350Rnd_20mm_he",
          "ccm_magazines_350Rnd_20mm_apfds",
          "ccm_magazines_1000_127x99_Red",
          "ccm_magazines_1000_127x99"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ccm_common"};
        author = ECSTRING(common,ClusterTeam);
        authors[] = {"Eric"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"

#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"