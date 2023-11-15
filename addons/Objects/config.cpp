#include "script_component.hpp"
#include "CfgEditorCategories.hpp"
#include "CfgEditorSubcategories.hpp"
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
            "DAC_Armor",
            "DAC_Customs"
        };
        units[] =
        {
            "Ground_DAC_Helmet_Commando_Base",
            "Ground_DAC_Helmet_Imperial_Commando",
            "Ground_DAC_Helmet_XRay_SL",
            "Ground_DAC_Helmet_XRay_EOD",
            "Ground_DAC_Helmet_XRay_Medic",
            "Ground_DAC_Helmet_XRay_DM",
            "Ground_DAC_Helmet_Zulu_SL",
            "Ground_DAC_Helmet_Zulu_EOD",
            "Ground_DAC_Helmet_Zulu_Medic",
            "Ground_DAC_Helmet_Zulu_DM"
        };
        weapons[] = {};
    };
};