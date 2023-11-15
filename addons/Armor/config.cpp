#include "script_component.hpp"
#include "CfgFactionClasses.hpp"
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
            "ls_armor_bluefor",
                // Commando Helmets, Uniforms, and Units
            "SWLB_clones_spec",
                // Inventory icons
            "SWLB_clones_spec_backpacks"
                // Commando Backpacks
        };
        units[] = {};
        weapons[] = {};
    };
};