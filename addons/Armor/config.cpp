#include "script_component.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgEditorSubcategories.hpp"
#include "CfgGlasses.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"
#include "CfgFunctions.hpp"
#include "CfgEventHandlers.hpp"


class CfgPatches
{
    class ADDON
    {
        author = "DartRuffian";
        name = QCOMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] =
        {
            "A3_Data_F_Decade_Loadorder",
            "DAC_Common",
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
            "DAC_Unit_Imperial_Commando",
            "DAC_Unit_Imperial_Commando_OPFOR",
            "DAC_Unit_Imperial_Commando_SL",
            "DAC_Unit_Imperial_Commando_SL_OPFOR",
            "DAC_Unit_Imperial_Commando_EOD",
            "DAC_Unit_Imperial_Commando_EOD_OPFOR",
            "DAC_Unit_Imperial_Commando_DM",
            "DAC_Unit_Imperial_Commando_DM_OPFOR",
            "DAC_Unit_Imperial_Commando_Tech",
            "DAC_Unit_Imperial_Commando_Tech_OPFOR",

            // Backpacks
            "DAC_Backpack_Base",
            "DAC_Backpack_Base_Huge",
            "DAC_Backpack_RTO_Base",
            "DAC_Backpack_RTO_Base_Huge",
            "DAC_Backpack_EOD_Base",
            "DAC_Backpack_EOD_Base_Huge",
            "DAC_Backpack_Tech_Base",
            "DAC_Backpack_Tech_Base_Huge"
        };
        weapons[] =
        {
            // Helmets
            "DAC_Helmet_Commando_Base",
            "DAC_Helmet_Imperial_Commando",

            // Uniforms
            "DAC_Uniform_Commando_Base",
            "DAC_Uniform_Imperial_Commando",

            // Vests
            "DAC_Vest_Commando_Base",
            "DAC_Vest_Commando_SL_Base",
            "DAC_Vest_Commando_EOD_Base",
            "DAC_Vest_Commando_DM_Base",
            "DAC_Vest_Commando_Tech_Base"
        };
    };
};