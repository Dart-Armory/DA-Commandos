class CfgGlasses
{
    // https://community.bistudio.com/wiki/Arma_3:_Characters_And_Gear_Encoding_Guide#Facewear_Configuration
    // Update old LS and new LS goggles to switch to DAC items
    class G_Combat;
    class SWLB_clone_RC_HUD: G_Combat
    {
        GVAR(landGoggles) = "DAC_Commando_Hud";
        GVAR(waterGoggles) = "DAC_Commando_Hud_Diving";
    };

    class ls_combatGoggles_base;
    class lsd_gar_republicCommando_hud: ls_combatGoggles_base
    {
        GVAR(landGoggles) = "DAC_Commando_Hud";
        GVAR(waterGoggles) = "DAC_Commando_Hud_Diving";
    };

    class DAC_Commando_Hud: lsd_gar_republicCommando_hud
    {
        author = "DartRuffian";
        displayName = "[DA] Katarn I Commando Helmet Interior";

        GVAR(landGoggles) = "DAC_Commando_Hud";
        GVAR(waterGoggles) = "DAC_Commando_Hud_Diving";
    };

    class DAC_Commando_Hud_Diving: DAC_Commando_Hud
    {
        scope = 1;
        scopeArsenal = 0;
        mode = 1;
    };
};