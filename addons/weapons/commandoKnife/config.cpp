#include "script_component.hpp"
#include "CfgWeapons.hpp"


class CfgPatches
{
    class SUBADDON
    {
        author = "DartRuffian";
        addonRootClass = QUOTE(ADDON);
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] =
        {
            QUOTE(ADDON),
            "WBK_SomeSciFiWeapons"
        };
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;

        skipWhenMissingDependencies = TRUE;
    };
};