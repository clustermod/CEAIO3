#include "script_component.hpp"

class CfgPatches {
  class ADDON {
      // Meta information for editor
      name = COMPONENT_NAME;
      units[] = {};
      weapons[] = {};
      requiredVersion = REQUIRED_VERSION;
      requiredAddons[] = {"cba_main"};
      author = ECSTRING(common,ClusterTeam);
      url = CSTRING(URL);
      VERSION_CONFIG;
  };
};

class CfgMods {
    class PREFIX {
        dir = "@ccm";
        name = "Cluster Community Modification";
        picture = "A3\Ui_f\data\Logos\arma3_expansion_alpha_ca";
        hidePicture = "true";
        hideName = "true";
        actionName = "Website";
        action = CSTRING(URL);
        description = "A client-modification for cluster community. Contains alot of random stuff";
    };
};
