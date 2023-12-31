#include "script_component.hpp"


class CfgPatches
{
    class ADDON
    {
        author = "DartRuffian";
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] =
        {
            QCLASS(core)
        };
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;
    };

    // Legacy pre-rewrite addon names
    class CLASS(Main): ADDON {};
    class CLASS(Imperial): ADDON {};
    class CLASS(XRay): ADDON {};
    class CLASS(Zulu): ADDON {};
};