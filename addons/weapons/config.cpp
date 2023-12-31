#include "script_component.hpp"
#include "CfgWeapons.hpp"
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
            "JLTS_weapons_Core"
        };
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;
    };
};