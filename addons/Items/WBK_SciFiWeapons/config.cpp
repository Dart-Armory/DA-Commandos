#include "script_component.hpp"
#include "CfgWeapons.hpp"


class CfgPatches
{
    class SUBADDON
    {
        author = "DartRuffian";
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] =
        {
            "cba_common",
            "WBK_SomeSciFiWeapons"
        };
        units[] = {};
        weapons[] = {};

        skipWhenMissingDependencies = TRUE;
    };
};