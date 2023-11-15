#include "script_component.hpp"
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
            "DAC_Armor"
        };
        units[] =
        {
            // Units

            // Backpacks
            "DAC_Backpack_XRay_SL",
            "DAC_Backpack_XRay_SL_Huge",
            "DAC_Backpack_XRay_EOD",
            "DAC_Backpack_XRay_EOD_Huge",
            "DAC_Backpack_XRay_Medic",
            "DAC_Backpack_XRay_Medic_Huge",
            "DAC_Backpack_XRay_DM",
            "DAC_Backpack_XRay_DM_Huge"

            // Placeable Helmets
        };
        weapons[] =
        {
            // Helmets
            "DAC_Helmet_XRay_SL",
            "DAC_Helmet_XRay_EOD",
            "DAC_Helmet_XRay_Medic",
            "DAC_Helmet_XRay_DM"

            // Uniforms

            // Vests
        };
    };
};