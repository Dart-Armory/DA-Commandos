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
            "A3_Data_F_Decade_Loadorder",
            "DAC_Weapons"
        };
        units[] = {};
        weapons[] =
        {
            "DAC_DC17M",
            "DAC_DC17M_Sniper",
            "DAC_Weap_DC17M"
        };
    };
};