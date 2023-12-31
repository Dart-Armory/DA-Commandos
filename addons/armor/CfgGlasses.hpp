class CfgGlasses
{
    // https://community.bistudio.com/wiki/Arma_3:_Characters_And_Gear_Encoding_Guide#Facewear_Configuration
    // Update old LS and new LS goggles to switch to DAC items
    class G_Combat;
    class SWLB_clone_RC_HUD: G_Combat
    {
        GVAR(landGoggles) = QCLASS(Commando_Hud);
        GVAR(waterGoggles) = QCLASS(Commando_Hud_Diving);
    };

    class ls_combatGoggles_base;
    class lsd_gar_republicCommando_hud: ls_combatGoggles_base
    {
        GVAR(landGoggles) = QCLASS(Commando_Hud);
        GVAR(waterGoggles) = QCLASS(Commando_Hud_Diving);
    };

    class CLASS(Commando_Hud): lsd_gar_republicCommando_hud
    {
        author = "DartRuffian";
        displayName = "[DA] Katarn I Commando Helmet Interior";

        GVAR(landGoggles) = QCLASS(Commando_Hud);
        GVAR(waterGoggles) = QCLASS(Commando_Hud_Diving);
    };

    class CLASS(Commando_Hud_Diving): CLASS(Commando_Hud)
    {
        SCOPE_HIDDEN;
        mode = 1;
    };
};