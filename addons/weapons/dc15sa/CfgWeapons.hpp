class CfgWeapons
{
    class DAC_Muzzle_Stun;
    class LFP_RazorBlade;
    class DAC_DC15SA: LFP_RazorBlade
    {
        scope = 2;
        scopeArsenal = 2;
        author = "DartRuffian";

        displayName = "[DA] DC-15SA";

        muzzles[] = {"this", "Stun"};

        class Stun: DAC_Muzzle_Stun
        {
            reloadAction = "GestureReloadPistol";
            reloadMagazineSound[] = {"\LF_Weapon_Unit\main\sounds\dc15_reload.wss", 0.8, 1, 10};
        };
    };


    class DAC_Weapons_DC15SA: DAC_DC15SA
    {
        // Legacy class name
        scope = 1;
        scopeArsenal = 0;
    };
};