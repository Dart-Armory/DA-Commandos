#include "script_component.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgEditorSubcategories.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"


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
                // Clone undersuit
            "SWLB_clones_spec",
                // Inventory icons
            "SWLB_clones_spec_backpacks"
                // Commando Backpacks
        };
        units[] =
        {
            // Units
            "DAC_Unit_Commando_Base",
            "DAC_Unit_Commando_SL_Base",
            "DAC_Unit_Commando_EOD_Base",
            "DAC_Unit_Commando_DM_Base",
            "DAC_Unit_Commando_Tech_Base",

            // Backpacks
            "DAC_Backpack_Base",
            "DAC_Backpack_Base_Huge",
            "DAC_Backpack_RTO_Base",
            "DAC_Backpack_RTO_Base_Huge",
            "DAC_Backpack_EOD_Base",
            "DAC_Backpack_EOD_Base_Huge",
            "DAC_Backpack_Tech_Base",
            "DAC_Backpack_Tech_Base_Huge",

            // Placeable Helmets
            "DAC_HelmetHolder_Commando_Base"
        };
        weapons[] =
        {
            // Helmets
            "DAC_Helmet_Commando_Base",

            // Uniforms
            "DAC_Uniform_Commando_Base",

            // Vests
            "DAC_Vest_Commando_Base",
            "DAC_Vest_Commando_SL_Base",
            "DAC_Vest_Commando_EOD_Base",
            "DAC_Vest_Commando_DM_Base",
            "DAC_Vest_Commando_Tech_Base"
        };
    };
};