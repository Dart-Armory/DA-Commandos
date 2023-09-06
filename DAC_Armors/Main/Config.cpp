#include "CfgVehicles.hpp"
#include "CfgPatches.hpp"


class CfgEditorSubcategories
{
    class DAC_Base
    {
        displayName = "Commando Squad Base";
    };
};


class CfgWeapons
{
    class ItemInfo;

    // ┌───────────────────┐
    // │      Helmets      │
    // └───────────────────┘
    class SWLB_clone_commando_helmet_k1;

    class DAC_Helmet_Commando_Base: SWLB_clone_commando_helmet_k1
    {
        // Mod Info
        dlc = "DA_Commandos";
        author = "DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        displayName = "[DA] Katarn I Commando Helmet";
        hiddenSelectionsTextures[] =
        {
            "DAC_Armors\Main\Data\Helmets\Commando_Helmet_Base.paa", // Visor
            "DAC_Armors\Main\Data\Helmets\Commando_Helmet_Base.paa"  // Main Helmet
        };
    };

    // ┌────────────────────┐
    // │      Uniforms      │
    // └────────────────────┘
    class U_B_CombatUniform_mcam;
    class SWLB_clone_commando_uniform_k1: U_B_CombatUniform_mcam
    {
        class ItemInfo;
    };

    class DAC_Uniform_Commando_Base: SWLB_clone_commando_uniform_k1
    {
        // Mod Info
        dlc = "DA_Commandos";
        author = "DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        displayName = "[DA] Katarn I Commando Armor";
        class ItemInfo: ItemInfo
        {
            uniformClass = "DAC_Unit_Commando_Base";
            uniformType = "Neopren";
            modelSides[] = {0, 1, 2, 3};
            /*
            0: OPFOR
            1: BLUFOR
            2: Independent
            3: Civilian
            */
        };
    };

    // ┌───────────────────┐
    // │       Vests       │
    // └───────────────────┘
    class V_PlateCarrier1_rgr;
    class SWLB_clone_commando_basic_armor_k1: V_PlateCarrier1_rgr { class ItemInfo; };
    class DAC_Vest_Commando_Base: SWLB_clone_commando_basic_armor_k1
    {
        // Mod Info
        dlc = "DA_Commandos";
        author = "DartRuffian";

        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[DA] Katarn I Commando Vest (Base)";
        class ItemInfo: ItemInfo
        {
            vestType = "Rebreather";
        };
    };

    class DAC_Vest_Commando_SL_Base: DAC_Vest_Commando_Base
    {
        displayName = "[DA] Katarn I Commando Vest (SL)";
        model = "\SWLB_clones_spec\SWLB_clone_commando_sl_armor.p3d";
        class ItemInfo: ItemInfo
        {
            uniformModel = "\SWLB_clones_spec\SWLB_clone_commando_sl_armor.p3d";
        };
    };

    class DAC_Vest_Commando_EOD_Base: DAC_Vest_Commando_Base
    {
        displayName = "[DA] Katarn I Commando Vest (EOD)";
        model = "\SWLB_clones_spec\SWLB_clone_commando_eod_armor.p3d";
        class ItemInfo: ItemInfo
        {
            uniformModel = "\SWLB_clones_spec\SWLB_clone_commando_eod_armor.p3d";
        };
    };

    class DAC_Vest_Commando_DM_Base: DAC_Vest_Commando_Base
    {
        displayName = "[DA] Katarn I Commando Vest (DM)";
        model = "\SWLB_clones_spec\SWLB_clone_commando_sniper_armor.p3d";
        class ItemInfo: ItemInfo
        {
            uniformModel = "\SWLB_clones_spec\SWLB_clone_commando_sniper_armor.p3d";
        };
    };

    class DAC_Vest_Commando_Tech_Base: DAC_Vest_Commando_Base
    {
        displayName = "[DA] Katarn I Commando Vest (Tech)";
        model = "\SWLB_clones_spec\SWLB_clone_commando_tech_armor.p3d";
        class ItemInfo: ItemInfo
        {
            uniformModel = "\SWLB_clones_spec\SWLB_clone_commando_tech_armor.p3d";
        };
    };

    // ┌──────────────────┐
    // │       NVGs       │
    // └──────────────────┘
    class SWLB_clone_commando_nvg;
    class SWLB_clone_commando_nvg_antenna;

    class DAC_NVG_Commando_Visor: SWLB_clone_commando_nvg
    {
        // Mod Info
        dlc = "DA_Commandos";
        author = "DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        displayName = "[DA] Katarn I Commando Visor";
        hiddenSelectionsTextures[] =
        {
            "DAC_Armors\Main\Data\NVGs\Commando_NVG_Visor.paa",
            "DAC_Armors\Main\Data\NVGs\Commando_NVG_Visor.paa"
        };

        visionMode[] = { "Normal", "NVG", "TI" };
        thermalMode[] = { 0, 1 }; // WHOT, BHOT
    };

    class DAC_NVG_Commando_Antenna: SWLB_clone_commando_nvg_antenna
    {
        // Mod Info
        dlc = "DA_Commandos";
        author = "DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        displayName = "[DA] Katarn I Commando Antenna";
        hiddenSelectionsTextures[] =
        {
            "DAC_Armors\Main\Data\NVGs\Commando_NVG_Antenna.paa"
        };

        visionMode[] = { "Normal", "NVG", "TI" };
        thermalMode[] = { 0, 1 }; // WHOT, BHOT
    };
};


class CfgGlasses
{
    // https://community.bistudio.com/wiki/Arma_3:_Characters_And_Gear_Encoding_Guide#Facewear_Configuration
    class ls_combatGoggles_base;
    class lsd_gar_republicCommando_hud: ls_combatGoggles_base
    {
        DAC_Armor_landGoggles = "DAC_Commando_Hud";
        DAC_Armor_waterGoggles = "DAC_Commando_Hud_Diving";
    };

    class DAC_Commando_Hud: lsd_gar_republicCommando_hud
    {
        author = "DartRuffian";
        displayName = "[DA] Katarn I Commando Helmet Interior";

        DAC_Armor_landGoggles = "DAC_Commando_Hud";
        DAC_Armor_waterGoggles = "DAC_Commando_Hud_Diving";
    };

    class DAC_Commando_Hud_Diving: DAC_Commando_Hud
    {
        // Scope
        scope = 1;
        scopeArsenal = 0;
        mode = 1;
    };
};