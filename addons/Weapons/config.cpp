#include "script_component.hpp"
#include "CfgWeapons.hpp"


class CfgPatches
{
    class ADDON
    {
        author = "DartRuffian";
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] =
        {
            "A3_Data_F_Decade_Loadorder",
            "DAC_Core",
            "JLTS_weapons_Core"
                // Stun muzzle and magazines
        };
        units[] = {};
        weapons[] = {};
    };
};