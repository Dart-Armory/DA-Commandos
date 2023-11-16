#include "script_component.hpp"
#include "CfgWeapons.hpp"
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
            "A3_Data_F_Decade_Loadorder",
            "DAC_Common",
            "JLTS_weapons_Core"
                // Stun muzzle and magazines
        };
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;
    };
};