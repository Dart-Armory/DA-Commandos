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
    class lsd_sob_commando_helmet;
    class DAC_Helmet_Commando_Base: lsd_sob_commando_helmet
    {
        // Mod Info
        dlc = "DA_Commandos";
        author = "DartRuffian";

        // Scope
        scope = 2;
        scopeArsenal = 2;

        modelSides[] = {0, 1, 2, 3};

        displayName = "[DA] Katarn I Commando Helmet";
        hiddenSelectionsTextures[] =
        {
            "DAC_Armors\Main\Data\Helmets\Commando_Helmet_Base.paa", // Visor
            "DAC_Armors\Main\Data\Helmets\Commando_Helmet_Base.paa"  // Main Helmet
        };
        picture = "\SWLB_clones_spec\data\ui\icon_SWLB_clone_commando_helmet_k1_ca.paa";
    };

    // ┌────────────────────┐
    // │      Uniforms      │
    // └────────────────────┘
    class ls_blueforUniform_base;
    class ls_sob_commando_uniform: ls_blueforUniform_base
    {
        class ItemInfo;
    };
    class DAC_Uniform_Commando_Base: ls_sob_commando_uniform
    {
        // Mod Info
        dlc = "DA_Commandos";
        author = "DartRuffian";

        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[DA] Katarn I Commando Armor";
        picture = "\SWLB_clones_spec\data\ui\icon_SWLB_clone_commando_uniform_k1_ca.paa";

        class ItemInfo: ItemInfo
        {
            uniformClass = "DAC_Unit_Commando_Base";
            uniformType = "Neopren";
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
        picture = "\SWLB_clones_spec\data\ui\icon_SWLB_clone_commando_sl_armor_k1_ca.paa";

        class ItemInfo: ItemInfo
        {
            uniformModel = "\SWLB_clones_spec\SWLB_clone_commando_sl_armor.p3d";
        };
    };

    class DAC_Vest_Commando_EOD_Base: DAC_Vest_Commando_Base
    {
        displayName = "[DA] Katarn I Commando Vest (EOD)";
        model = "\SWLB_clones_spec\SWLB_clone_commando_eod_armor.p3d";
        picture = "\SWLB_clones_spec\data\ui\icon_SWLB_clone_commando_eod_armor_k1_ca.paa";

        class ItemInfo: ItemInfo
        {
            uniformModel = "\SWLB_clones_spec\SWLB_clone_commando_eod_armor.p3d";
        };
    };

    class DAC_Vest_Commando_DM_Base: DAC_Vest_Commando_Base
    {
        displayName = "[DA] Katarn I Commando Vest (DM)";
        model = "\SWLB_clones_spec\SWLB_clone_commando_sniper_armor.p3d";
        hiddenSelections[] = { "illum", "camo1" };
        hiddenSelectionsTextures[] =
        {
            "DAC_Armors\Main\Data\Vests\Commando_Vests_AiO.paa",
            "DAC_Armors\Main\Data\Vests\Commando_Vests_AiO.paa"
        };
        hiddenSelectionsMaterials[] = { "a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat" };
        picture = "\SWLB_clones_spec\data\ui\icon_SWLB_clone_commando_sniper_armor_k1_ca.paa";

        class ItemInfo: ItemInfo
        {
            uniformModel = "\SWLB_clones_spec\SWLB_clone_commando_sniper_armor.p3d";
            hiddenSelections[] = { "illum", "camo1" };
        };
    };

    class DAC_Vest_Commando_Tech_Base: DAC_Vest_Commando_Base
    {
        displayName = "[DA] Katarn I Commando Vest (Tech)";
        model = "\SWLB_clones_spec\SWLB_clone_commando_tech_armor.p3d";
        hiddenSelections[] = { "camo1" };
        hiddenSelectionsTextures[] =
        {
            "DAC_Armors\Main\Data\Vests\Commando_Vests_AiO.paa"
        };
        picture = "\SWLB_clones_spec\data\ui\icon_SWLB_clone_commando_tech_armor_k1_ca.paa";

        class ItemInfo: ItemInfo
        {
            uniformModel = "\SWLB_clones_spec\SWLB_clone_commando_tech_armor.p3d";
        };
    };

    // ┌──────────────────┐
    // │       NVGs       │
    // └──────────────────┘
    class NVGoggles;
    class SWLB_clone_commando_nvg: NVGoggles
    {
        class ItemInfo;
    };
    class DAC_NVG_Chip_NV: SWLB_clone_commando_nvg
    {
        // Mod Info
        dlc = "DA_Commandos";
        author = "DartRuffian";

        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[DA] Katarn I Commando Chip [NV]";

        model = "\A3\weapons_f\dummynvg.p3d";
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
        hiddenSelectionsMaterials[] = {};
        picture = "\MRC\JLTS\Core_mod\data\ui\nvg_chip_1_ui_ca.paa";

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {};
            uniformModel = "\A3\weapons_f\dummynvg.p3d";
            modelOff = "\A3\weapons_f\dummynvg.p3d";
        };
    };
    class DAC_NVG_Chip_NVTI: DAC_NVG_Chip_NV
    {
        displayName = "[DA] Katarn I Commando Chip [NV/TI]";
        visionMode[] = { "Normal", "NVG", "TI" };
        thermalMode[] = { 0, 1 }; // WHOT, BHOT
    };

    class DAC_NVG_Commando_Visor: DAC_NVG_Chip_NVTI
    {
        displayName = "[DA] Katarn I Commando Visor [NV/TI]";

        model = "\SWLB_clones_spec\SWLB_clone_commando_nvg.p3d";
        hiddenSelections[] = { "illum", "camo1" };
        hiddenSelectionsTextures[] =
        {
            "DAC_Armors\Main\Data\NVGs\Commando_NVG_Visor.paa",
            "DAC_Armors\Main\Data\NVGs\Commando_NVG_Visor.paa"
        };
        hiddenSelectionsMaterials[] = { "a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat" };
        picture = "\SWLB_clones_spec\data\ui\icon_SWLB_clone_commando_nvg_ca.paa";

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = { "illum", "camo1" };
            uniformModel = "\SWLB_clones_spec\SWLB_clone_commando_nvg.p3d";
            modelOff = "\SWLB_clones_spec\SWLB_clone_commando_nvg.p3d";
        };
    };

    class DAC_NVG_Commando_Antenna: DAC_NVG_Chip_NVTI
    {
        displayName = "[DA] Katarn I Commando Antenna [NV/TI]";

        model = "\SWLB_clones_spec\SWLB_clone_commando_nvg_antenna.p3d";
        hiddenSelections[] = { "camo1" };
        hiddenSelectionsTextures[] =
        {
            "DAC_Armors\Main\Data\NVGs\Commando_NVG_Antenna.paa"
        };
        picture = "\SWLB_clones_spec\data\ui\icon_SWLB_clone_commando_nvg_antenna_ca.paa";

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = { "camo1" };
            uniformModel = "\SWLB_clones_spec\SWLB_clone_commando_nvg_antenna.p3d";
            modelOff = "\SWLB_clones_spec\SWLB_clone_commando_nvg_antenna.p3d";
        };
    };
};


class CfgGlasses
{
    // https://community.bistudio.com/wiki/Arma_3:_Characters_And_Gear_Encoding_Guide#Facewear_Configuration
    class G_Combat;
    class SWLB_clone_RC_HUD: G_Combat
    {
        DAC_Armor_landGoggles = "DAC_Commando_Hud";
        DAC_Armor_waterGoggles = "DAC_Commando_Hud_Diving";
    };

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


class CfgGroups
{
    class West
    {
        class DAC_Republic
        {
            name = "[DA] Galactic Republic";

            class DAC_Commandos
            {
                name = "Commando Squads";
                class Base
                {
                    faction = "DAC_Republic";
                    name = "Base Squad";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    side = 1;

                    class Object0
                    {
                        side = 1;
                        vehicle = "DAC_Unit_Commando_SL_Base";
                        description = "Squad Lead@Base";
                        rank = "SERGEANT";
                        position[] = { 0, 0, 0 };
                        dir = 0;
                        isPlayable = 1;
                    };
                    class Object1: Object0
                    {
                        vehicle = "DAC_Unit_Commando_EOD_Base";
                        description = "Explosives Specialist";
                        rank = "CORPORAL";
                        position[] = { 1, -1, 0 };
                    };
                    class Object2: Object1
                    {
                        vehicle = "DAC_Unit_Commando_Tech_Base";
                        description = "Tech Specialist";
                        position[] = { -1, -1, 0 };
                    };
                    class Object3: Object1
                    {
                        vehicle = "DAC_Unit_Commando_DM_Base";
                        description = "Designated Marksman";
                        position[] = { 2, -2, 0 };
                    };
                };
            };
        };
    };
};