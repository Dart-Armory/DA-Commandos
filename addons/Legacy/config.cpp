#include "script_component.hpp"


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
            "DAC_Common"
        };
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;
    };

    // Legacy pre-rewrite addon names
    class DAC_Main: ADDON {};
    class DAC_Imperial: ADDON {};
    class DAC_XRay: ADDON {};
    class DAC_Zulu: ADDON {};
};