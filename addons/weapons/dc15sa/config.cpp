#include "script_component.hpp"

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
            "LF_Weapon_Unit_RazorBlade"
                // DC-15SA
        };
        units[] = {};
        weapons[] =
        {
            QCLASS(DC15SA)
        };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"