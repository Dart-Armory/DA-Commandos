#include "CfgPatches.hpp"


class CfgWeapons
{
    class Rifle;
    class LFP_rifle_base: Rifle
    {
        class OpticsModes;
    };
    class LFP_DC17M: LFP_rifle_base
    {
        class OpticsModes: OpticsModes
        {
            class optics;
            class scope;
        };
    };
    class DAC_Weap_DC17M: LFP_DC17M
    {
        // Mod Info
        dlc = "DA_Commandos";
        author = "DartRuffian";

        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[DA] DC-17M";
    };
};