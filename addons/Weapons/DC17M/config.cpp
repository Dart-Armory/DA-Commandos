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
            "A3_Data_F_Decade_Loadorder",
            "DAC_Common",
            QUOTE(ADDON),
            "LF_Weapon_Unit_WestarM5"
                // DC-17M
        };
        units[] = {};
        weapons[] =
        {
            "DAC_DC17M",
            "DAC_DC17M_Sniper",
            "DAC_Weap_DC17M"
        };
        VERSION_CONFIG;
    };
};