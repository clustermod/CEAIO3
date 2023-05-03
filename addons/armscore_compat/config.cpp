#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {
          "ecm_weapons_mastersafe",
          "ecm_weapons_f2_cannon",
          "ecm_weapons_gau19"
        };
        magazines[] = {
          "ecm_magazines_350Rnd_20mm_he",
          "ecm_magazines_350Rnd_20mm_apfds",
          "ecm_magazines_1000_127x99_Red",
          "ecm_magazines_1000_127x99"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ecm_main"};
        author = "Cluster Mod Team";
        authors[] = {"Eric"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"

#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"