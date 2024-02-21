class CfgWeapons
{
    class CLASS(Muzzle_Stun);
    class LFP_RazorBlade;
    class CLASS(DC15SA): LFP_RazorBlade
    {
        SCOPE_PUBLIC;
        author = "DartRuffian";

        displayName = "[DA] DC-15SA";

        muzzles[] = {"this", "Stun"};

        class Stun: CLASS(Muzzle_Stun)
        {
            reloadAction = "GestureReloadPistol";
            reloadMagazineSound[] = {"\LF_Weapon_Unit\main\sounds\dc15_reload.wss", 0.8, 1, 10};
        };
    };
};