#include "script_component.hpp"
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
            "cba_common"
        };
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;
    };
};