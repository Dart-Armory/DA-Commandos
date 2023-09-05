#include "CfgPatches.hpp"


class CfgFunctions
{
    class DAC
    {
        class Weapons
        {
            file = "DAC_Functions\Data\Functions\Weapons";
            class handleAttachmentSwap {};
        };
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