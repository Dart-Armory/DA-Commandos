#include "CfgPatches.hpp"


class CfgWeapons
{
    class JLTS_stun_muzzle;
    class LFP_RazorBlade;
    class DAC_DC15SA: LFP_RazorBlade
    {
        // Mod Info
        dlc = "DA_Commandos";
        author = "DartRuffian";

        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[DA] DC-15SA";

        muzzles[] = { "this", "Stun" };

        class Stun: JLTS_stun_muzzle
        {
            reloadAction = "GestureReloadPistol";
            reloadMagazineSound[] = { "LF_Weapon_Unit\main\sounds\dc15_reload.wss", 0.8, 1, 10 };
        };
    };
    class DAC_Weapons_DC15SA: DAC_DC15SA
    {
        scope = 1;
        scopeArsenal = 0;
    };
};