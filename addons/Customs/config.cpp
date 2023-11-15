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