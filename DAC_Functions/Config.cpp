#include "CfgPatches.hpp"


class CfgFunctions
{
    class DAC
    {
        class Armor
        {
            file = "DAC_Functions\Data\Functions\Armor";
            class switchGoggles {};
        };

        class Weapons
        {
            file = "DAC_Functions\Data\Functions\Weapons";
            class handleAttachmentSwap {};
        };

        class Misc
        {
            file = "DAC_Functions\Data\Functions\Misc";
            class addRadio {};
        };

        class Settings
        {
            file = "DAC_Functions\Data\Functions\Settings";
            class loadAllSettings {};
            class addonOptions {};
        };
    };
};


class Extended_PreInit_EventHandlers
{
    class DAC_loadAllSettings
    {
        init = "call DAC_fnc_loadAllSettings;";
    };
};

class Extended_Reloaded_EventHandlers
{
    class CAManBase
    {
        class DAC_AttachmentSwap
        {
            reloaded = "_this call DAC_fnc_handleAttachmentSwap";
        };
    };
};

class Extended_InitPost_EventHandlers
{
    class CAManBase
    {
        class DAC_AddRadio
        {
            init = "_this call DAC_fnc_addRadio";
        };
        class DAC_SwitchGoggles
        {
            init = "_this call DAC_fnc_switchGoggles";
        };
    };
};