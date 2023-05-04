#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {
          "cca_weapons_mastersafe",
          "cca_weapons_f2_cannon",
          "cca_weapons_gau19"
        };
        magazines[] = {
          "cca_magazines_350Rnd_20mm_he",
          "cca_magazines_350Rnd_20mm_apfds",
          "cca_magazines_1000_127x99_Red",
          "cca_magazines_1000_127x99"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"cca_common"};
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