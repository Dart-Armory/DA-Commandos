class CfgWeapons
{
    class ItemInfo;

    // ┌───────────────────┐
    // │      Helmets      │
    // └───────────────────┘
    class lsd_sob_commando_helmet;
    class DAC_Helmet_Commando_Base: lsd_sob_commando_helmet
    {
        scope = 2;
        scopeArsenal = 2;
        author = "DartRuffian";

        modelSides[] = {0, 1, 2, 3};

        displayName = "[DA] Katarn I Commando Helmet";
        hiddenSelectionsTextures[] =
        {
            "\DA\DAC\Armor\data\helmets\commando\camo1.paa", // Visor
            "\DA\DAC\Armor\data\helmets\commando\camo1.paa"  // Main Helmet
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
        scope = 2;
        scopeArsenal = 2;
        author = "DartRuffian";

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
    class SWLB_clone_commando_basic_armor_k1: V_PlateCarrier1_rgr
    {
        class ItemInfo;
    };
    class DAC_Vest_Commando_Base: SWLB_clone_commando_basic_armor_k1
    {
        scope = 2;
        scopeArsenal = 2;
        author = "DartRuffian";

        displayName = "[DA] Katarn I Commando Vest";
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
        hiddenSelections[] = {"illum", "camo1"};
        hiddenSelectionsTextures[] =
        {
            "\DA\DAC\Armor\data\vests\commando\camo1.paa",
            "\DA\DAC\Armor\data\vests\commando\camo1.paa"
        };
        hiddenSelectionsMaterials[] = {"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
        picture = "\SWLB_clones_spec\data\ui\icon_SWLB_clone_commando_sniper_armor_k1_ca.paa";

        class ItemInfo: ItemInfo
        {
            uniformModel = "\SWLB_clones_spec\SWLB_clone_commando_sniper_armor.p3d";
            hiddenSelections[] = {"illum", "camo1"};
        };
    };

    class DAC_Vest_Commando_Tech_Base: DAC_Vest_Commando_Base
    {
        displayName = "[DA] Katarn I Commando Vest (Tech)";
        model = "\SWLB_clones_spec\SWLB_clone_commando_tech_armor.p3d";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] =
        {
            "\DA\DAC\Armor\data\vests\commando\camo1.paa"
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
        scope = 2;
        scopeArsenal = 2;
        author = "DartRuffian";

        displayName = "[DA] Katarn I Commando Chip [NV]";

        model = "\A3\weapons_f\dummynvg.p3d";
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
        hiddenSelectionsMaterials[] = {};
        picture = "\MRC\JLTS\Core_mod\data\ui\nvg_chip_1_ui_ca.paa";

        visionMode[] = {"Normal", "NVG"};
        thermalMode[] = {};

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
        visionMode[] = {"Normal", "NVG", "TI"};
        thermalMode[] = {0, 1}; // WHOT, BHOT
    };

    class DAC_NVG_Commando_Visor: DAC_NVG_Chip_NVTI
    {
        displayName = "[DA] Katarn I Commando Visor [NV/TI]";

        model = "\SWLB_clones_spec\SWLB_clone_commando_nvg.p3d";
        hiddenSelections[] = {"illum", "camo1"};
        hiddenSelectionsTextures[] =
        {
            "\DA\DAC\Armor\data\nvgs\commando\visor_camo1.paa",
            "\DA\DAC\Armor\data\nvgs\commando\visor_camo1.paa"
        };
        hiddenSelectionsMaterials[] = {"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
        picture = "\SWLB_clones_spec\data\ui\icon_SWLB_clone_commando_nvg_ca.paa";

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"illum", "camo1"};
            uniformModel = "\SWLB_clones_spec\SWLB_clone_commando_nvg.p3d";
            modelOff = "\SWLB_clones_spec\SWLB_clone_commando_nvg.p3d";
        };
    };

    class DAC_NVG_Commando_Antenna: DAC_NVG_Chip_NV
    {
        displayName = "[DA] Katarn I Commando Antenna [NV]";

        model = "\SWLB_clones_spec\SWLB_clone_commando_nvg_antenna.p3d";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] =
        {
            "\DA\DAC\Armor\data\nvgs\commando\antenna_camo1.paa"
        };
        picture = "\SWLB_clones_spec\data\ui\icon_SWLB_clone_commando_nvg_antenna_ca.paa";

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"camo1"};
            uniformModel = "\SWLB_clones_spec\SWLB_clone_commando_nvg_antenna.p3d";
            modelOff = "\SWLB_clones_spec\SWLB_clone_commando_nvg_antenna.p3d";
        };
    };
};