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
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] =
        {
            QCLASS(core),
            "ls_armor_bluefor",
            "SWLB_clones_spec",
            "SWLB_clones_spec_backpacks"
        };
        units[] =
        {
            // Units
            QCLASS(Unit_Commando_Base),
            QCLASS(Unit_Commando_SL_Base),
            QCLASS(Unit_Commando_EOD_Base),
            QCLASS(Unit_Commando_DM_Base),
            QCLASS(Unit_Commando_Tech_Base),
            QCLASS(Unit_Imperial_Commando),
            QCLASS(Unit_Imperial_Commando_OPFOR),
            QCLASS(Unit_Imperial_Commando_SL),
            QCLASS(Unit_Imperial_Commando_SL_OPFOR),
            QCLASS(Unit_Imperial_Commando_EOD),
            QCLASS(Unit_Imperial_Commando_EOD_OPFOR),
            QCLASS(Unit_Imperial_Commando_DM),
            QCLASS(Unit_Imperial_Commando_DM_OPFOR),
            QCLASS(Unit_Imperial_Commando_Tech),
            QCLASS(Unit_Imperial_Commando_Tech_OPFOR),

            // Backpacks
            QCLASS(Backpack_Base),
            QCLASS(Backpack_Base_Huge),
            QCLASS(Backpack_RTO_Base),
            QCLASS(Backpack_RTO_Base_Huge),
            QCLASS(Backpack_EOD_Base),
            QCLASS(Backpack_EOD_Base_Huge),
            QCLASS(Backpack_Tech_Base),
            QCLASS(Backpack_Tech_Base_Huge)
        };
        weapons[] =
        {
            // Helmets
            QCLASS(Helmet_Commando_Base),
            QCLASS(Helmet_Imperial_Commando),

            // Uniforms
            QCLASS(Uniform_Commando_Base),
            QCLASS(Uniform_Imperial_Commando),

            // Vests
            QCLASS(Vest_Commando_Base),
            QCLASS(Vest_Commando_SL_Base),
            QCLASS(Vest_Commando_EOD_Base),
            QCLASS(Vest_Commando_DM_Base),
            QCLASS(Vest_Commando_Tech_Base)
        };
        VERSION_CONFIG;
    };
};