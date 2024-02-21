class CfgWeapons
{
    class ItemInfo;

    // ┌───────────────────┐
    // │      Helmets      │
    // └───────────────────┘
    class lsd_sob_commando_helmet;
    class CLASS(Helmet_Commando_Base): lsd_sob_commando_helmet
    {
        SCOPE_PUBLIC;
        author = "DartRuffian";

        modelSides[] = {ALL_SIDES};

        displayName = "[DA] Katarn I Commando Helmet";
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\helmets\commando\camo1_co.paa), // Visor
            QPATHTOF(data\helmets\commando\camo1_co.paa)  // Main Helmet
        };
        picture = "\SWLB_clones_spec\data\ui\icon_SWLB_clone_commando_helmet_k1_ca_co.paa";
    };

    class CLASS(Helmet_Imperial_Commando): CLASS(Helmet_Commando_Base)
    {
        displayName = "[DA] Katarn I Imperial Commando Helmet";
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\helmets\commando\imperial_camo1_co.paa),
            QPATHTOF(data\helmets\commando\imperial_camo1_co.paa)
        };
    };

    // ┌────────────────────┐
    // │      Uniforms      │
    // └────────────────────┘
    class ls_blueforUniform_base;
    class ls_sob_commando_uniform: ls_blueforUniform_base
    {
        class ItemInfo;
    };
    class CLASS(Uniform_Commando_Base): ls_sob_commando_uniform
    {
        SCOPE_PUBLIC;
        author = "DartRuffian";

        displayName = "[DA] Katarn I Commando Armor";
        picture = "\SWLB_clones_spec\data\ui\icon_SWLB_clone_commando_uniform_k1_ca_co.paa";

        class ItemInfo: ItemInfo
        {
            uniformClass = QCLASS(Unit_Commando_Base);
            uniformType = "Neopren";
        };
    };

    class CLASS(Uniform_Imperial_Commando): CLASS(Uniform_Commando_Base)
    {
        displayName = "[DA] Katarn I Imperial Commando Armor";
        class ItemInfo: ItemInfo
        {
            uniformClass = QCLASS(Unit_Imperial_Commando);
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
    class CLASS(Vest_Commando_Base): SWLB_clone_commando_basic_armor_k1
    {
        SCOPE_PUBLIC;
        author = "DartRuffian";

        displayName = "[DA] Katarn I Commando Vest";
        class ItemInfo: ItemInfo
        {
            vestType = "Rebreather";
        };
    };

    class CLASS(Vest_Commando_SL_Base): CLASS(Vest_Commando_Base)
    {
        displayName = "[DA] Katarn I Commando Vest (SL)";
        model = "\SWLB_clones_spec\SWLB_clone_commando_sl_armor.p3d";
        picture = "\SWLB_clones_spec\data\ui\icon_SWLB_clone_commando_sl_armor_k1_ca_co.paa";

        class ItemInfo: ItemInfo
        {
            uniformModel = "\SWLB_clones_spec\SWLB_clone_commando_sl_armor.p3d";
        };
    };

    class CLASS(Vest_Commando_EOD_Base): CLASS(Vest_Commando_Base)
    {
        displayName = "[DA] Katarn I Commando Vest (EOD)";
        model = "\SWLB_clones_spec\SWLB_clone_commando_eod_armor.p3d";
        picture = "\SWLB_clones_spec\data\ui\icon_SWLB_clone_commando_eod_armor_k1_ca_co.paa";

        class ItemInfo: ItemInfo
        {
            uniformModel = "\SWLB_clones_spec\SWLB_clone_commando_eod_armor.p3d";
        };
    };

    class CLASS(Vest_Commando_DM_Base): CLASS(Vest_Commando_Base)
    {
        displayName = "[DA] Katarn I Commando Vest (DM)";
        model = "\SWLB_clones_spec\SWLB_clone_commando_sniper_armor.p3d";
        hiddenSelections[] = {"illum", "camo1"};
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\vests\commando_camo1_co.paa),
            QPATHTOF(data\vests\commando_camo1_co.paa)
        };
        hiddenSelectionsMaterials[] = {"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
        picture = "\SWLB_clones_spec\data\ui\icon_SWLB_clone_commando_sniper_armor_k1_ca_co.paa";

        class ItemInfo: ItemInfo
        {
            uniformModel = "\SWLB_clones_spec\SWLB_clone_commando_sniper_armor.p3d";
            hiddenSelections[] = {"illum", "camo1"};
        };
    };

    class CLASS(Vest_Commando_Tech_Base): CLASS(Vest_Commando_Base)
    {
        displayName = "[DA] Katarn I Commando Vest (Tech)";
        model = "\SWLB_clones_spec\SWLB_clone_commando_tech_armor.p3d";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\vests\commando_camo1_co.paa)
        };
        picture = "\SWLB_clones_spec\data\ui\icon_SWLB_clone_commando_tech_armor_k1_ca_co.paa";

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
    class CLASS(NVG_Chip_NV): SWLB_clone_commando_nvg
    {
        SCOPE_PUBLIC;
        author = "DartRuffian";

        displayName = "[DA] Katarn I Commando Chip [NV]";

        model = "\A3\weapons_f\dummynvg.p3d";
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
        hiddenSelectionsMaterials[] = {};
        picture = "\MRC\JLTS\Core_mod\data\ui\nvg_chip_1_ui_ca_co.paa";

        visionMode[] = {"Normal", "NVG"};
        thermalMode[] = {};

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {};
            uniformModel = "\A3\weapons_f\dummynvg.p3d";
            modelOff = "\A3\weapons_f\dummynvg.p3d";
        };
    };
    class CLASS(NVG_Chip_NVTI): CLASS(NVG_Chip_NV)
    {
        displayName = "[DA] Katarn I Commando Chip [NV/TI]";
        picture = "\MRC\JLTS\Core_mod\data\ui\nvg_chip_2_ui_ca_co.paa";
        visionMode[] = {"Normal", "NVG", "TI"};
        thermalMode[] = {WHOT, BHOT};
    };

    class CLASS(NVG_Commando_Visor): CLASS(NVG_Chip_NVTI)
    {
        displayName = "[DA] Katarn I Commando Visor [NV/TI]";

        model = "\SWLB_clones_spec\SWLB_clone_commando_nvg.p3d";
        hiddenSelections[] = {"illum", "camo1"};
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\nvgs\commando\visor_camo1_co.paa),
            QPATHTOF(data\nvgs\commando\visor_camo1_co.paa)
        };
        hiddenSelectionsMaterials[] = {"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
        picture = "\SWLB_clones_spec\data\ui\icon_SWLB_clone_commando_nvg_ca_co.paa";

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"illum", "camo1"};
            uniformModel = "\SWLB_clones_spec\SWLB_clone_commando_nvg.p3d";
            modelOff = "\SWLB_clones_spec\SWLB_clone_commando_nvg.p3d";
        };
    };

    class CLASS(NVG_Commando_Antenna): CLASS(NVG_Chip_NV)
    {
        displayName = "[DA] Katarn I Commando Antenna [NV]";

        model = "\SWLB_clones_spec\SWLB_clone_commando_nvg_antenna.p3d";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\nvgs\commando\antenna_camo1_co.paa)
        };
        picture = "\SWLB_clones_spec\data\ui\icon_SWLB_clone_commando_nvg_antenna_ca_co.paa";

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"camo1"};
            uniformModel = "\SWLB_clones_spec\SWLB_clone_commando_nvg_antenna.p3d";
            modelOff = "\SWLB_clones_spec\SWLB_clone_commando_nvg_antenna.p3d";
        };
    };
};