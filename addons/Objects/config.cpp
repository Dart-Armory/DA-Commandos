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
            "DAC_Customs",
            "ls_armor_bluefor"
                // Groundholder
        };
        units[] =
        {
            "Headgear_DAC_Helmet_Commando_Base"
        };
        weapons[] = {};
    };
};