#include "script_component.hpp"
#include "CfgEditorSubcategories.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"


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
            "DAC_Armor"
        };
        units[] =
        {
            // Units
            "DAC_Unit_XRay_SL",
            "DAC_Unit_XRay_EOD",
            "DAC_Unit_XRay_Medic",
            "DAC_Unit_XRay_DM",
            "DAC_Unit_Zulu_SL",
            "DAC_Unit_Zulu_EOD",
            "DAC_Unit_Zulu_Medic",
            "DAC_Unit_Zulu_DM",

            // Backpacks
            "DAC_Backpack_XRay_SL",
            "DAC_Backpack_XRay_SL_Huge",
            "DAC_Backpack_XRay_EOD",
            "DAC_Backpack_XRay_EOD_Huge",
            "DAC_Backpack_XRay_Medic",
            "DAC_Backpack_XRay_Medic_Huge",
            "DAC_Backpack_XRay_DM",
            "DAC_Backpack_XRay_DM_Huge",
            "DAC_Backpack_Zulu_SL",
            "DAC_Backpack_Zulu_SL_Huge",
            "DAC_Backpack_Zulu_EOD",
            "DAC_Backpack_Zulu_EOD_Huge",
            "DAC_Backpack_Zulu_Medic",
            "DAC_Backpack_Zulu_Medic_Huge",
            "DAC_Backpack_Zulu_DM",
            "DAC_Backpack_Zulu_DM_Huge"

            // Placeable Helmets
        };
        weapons[] =
        {
            // Helmets
            "DAC_Helmet_XRay_SL",
            "DAC_Helmet_XRay_EOD",
            "DAC_Helmet_XRay_Medic",
            "DAC_Helmet_XRay_DM",
            "DAC_Helmet_Zulu_SL",
            "DAC_Helmet_Zulu_EOD",
            "DAC_Helmet_Zulu_Medic",
            "DAC_Helmet_Zulu_DM",

            // Uniforms
            "DAC_Uniform_XRay_SL",
            "DAC_Uniform_XRay_EOD",
            "DAC_Uniform_XRay_Medic",
            "DAC_Uniform_XRay_DM",
            "DAC_Uniform_Zulu_SL",
            "DAC_Uniform_Zulu_EOD",
            "DAC_Uniform_Zulu_Medic",
            "DAC_Uniform_Zulu_DM"

            // Vests
        };
        VERSION_CONFIG;
    };
};