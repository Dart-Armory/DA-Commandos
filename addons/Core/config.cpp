#include "script_component.hpp"


class CfgMods
{
    class Mod_Base;
    class PREFIX: Mod_Base
    {
        name = "Dart Armory Commandos";
    };
};


class CfgPatches
{
    class ADDON
    {
        author = "DartRuffian";
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] =
        {
            "A3_Data_F_Decade_Loadorder"
        };
        units[] = {};
        weapons[] = {};
    };
};