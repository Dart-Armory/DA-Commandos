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
            "DAC_Weapons",
            "LF_Weapon_Unit_RazorBlade"
                // DC-15SA
        };
        units[] = {};
        weapons[] =
        {
            "DAC_DC15SA"
        };
    };
};