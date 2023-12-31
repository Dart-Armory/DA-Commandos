#include "script_component.hpp"
#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgAmmo.hpp"


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
            "LF_Weapon_Unit_WestarM5"
        };
        units[] = {};
        weapons[] =
        {
            QCLASS(DC17M),
            QCLASS(DC17M_Sniper),
            QCLASS(Weap_DC17M)
        };
        VERSION_CONFIG;
    };
};