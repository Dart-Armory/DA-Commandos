class CfgVehicles
{
    // ┌───────────────────┐
    // │       Units       │
    // └───────────────────┘
    class ls_sob_commando_base;
    class DAC_Unit_Commando_Base: ls_sob_commando_base
    {
        scope = 2;
        scopeCurator = 2;
        author = "DartRuffian";

        // Editor Attributes
        faction = "DAC_SOB";
        editorSubcategory = "DAC_Edsubcat_Commandos_Base";

        displayName = "Clone Commando";
        editorPreview = "\SWLB_clones_spec\data\ui\editorPreviews\SWLB_clone_commando_base.jpg";
        uniformClass = "DAC_Uniform_Commando_Base";
        hiddenSelectionsTextures[] =
        {
            "\DA\DAC\Armor\data\uniforms\commando\upper.paa",
            "\DA\DAC\Armor\data\uniforms\commando\lower.paa"
        };
        nakedUniform = "lsd_gar_bodyGlove_uniform";

        modelSides[] = {ALL_SIDES};

        weapons[] =
        {
            "DAC_DC17M",
            "DAC_DC15SA",
            "Throw",
            "Put"
        };
        respawnWeapons[] =
        {
            "DAC_DC17M",
            "DAC_DC15SA",
            "Throw",
            "Put"
        };

        magazines[] =
        {
            "LFP_DC17M_Mag",
            "LFP_RazorBlade_Mag"
        };
        respawnMagazines[] =
        {
            "LFP_DC17M_Mag",
            "LFP_RazorBlade_Mag"
        };

        linkedItems[] =
        {
            "DAC_Helmet_Commando_Base", "DAC_Vest_Commando_Base", "DAC_NVG_Chip_NV", "DAC_Commando_Hud", "SWLB_comlink", LINKED_ITEMS
        };
        respawnLinkedItems[] =
        {
            "DAC_Helmet_Commando_Base", "DAC_Vest_Commando_Base", "DAC_NVG_Chip_NV", "DAC_Commando_Hud", "SWLB_comlink", LINKED_ITEMS
        };
        backpack = "DAC_Backpack_Base";
    };

    class DAC_Unit_Commando_SL_Base: DAC_Unit_Commando_Base
    {
        displayName = "Clone Commando Squad Leader";
        editorPreview = "\SWLB_clones_spec\data\ui\editorPreviews\SWLB_clone_commando_sl_base.jpg";

        linkedItems[] =
        {
            "DAC_Helmet_Commando_Base", "DAC_Vest_Commando_SL_Base", "DAC_NVG_Chip_NVTI", "DAC_Commando_Hud", "SWLB_comlink", LINKED_ITEMS
        };
        respawnLinkedItems[] =
        {
            "DAC_Helmet_Commando_Base", "DAC_Vest_Commando_SL_Base", "DAC_NVG_Chip_NVTI", "DAC_Commando_Hud", "SWLB_comlink", LINKED_ITEMS
        };
        backpack = "DAC_Backpack_RTO_Base";

        attendant = 1;
    };

    class DAC_Unit_Commando_EOD_Base: DAC_Unit_Commando_Base
    {
        displayName = "Clone Commando Explosives Specialist";
        editorPreview = "\SWLB_clones_spec\data\ui\editorPreviews\SWLB_clone_commando_eod_base.jpg";

        linkedItems[] =
        {
            "DAC_Helmet_Commando_Base", "DAC_Vest_Commando_EOD_Base", "DAC_NVG_Chip_NV", "DAC_Commando_Hud", "SWLB_comlink", LINKED_ITEMS
        };
        respawnLinkedItems[] =
        {
            "DAC_Helmet_Commando_Base", "DAC_Vest_Commando_EOD_Base", "DAC_NVG_Chip_NV", "DAC_Commando_Hud", "SWLB_comlink", LINKED_ITEMS
        };
        backpack = "DAC_Backpack_EOD_Base";

        canDeactivateMines = 1;
        engineer = 1;
    };

    class DAC_Unit_Commando_DM_Base: DAC_Unit_Commando_Base
    {
        displayName = "Clone Commando Designated Marksman";
        editorPreview = "\SWLB_clones_spec\data\ui\editorPreviews\SWLB_clone_commando_sniper_base.jpg";

        weapons[] =
        {
            "DAC_DC17M_Sniper",
            "DAC_DC15SA",
            "Throw",
            "Put"
        };
        respawnWeapons[] =
        {
            "DAC_DC17M_Sniper",
            "DAC_DC15SA",
            "Throw",
            "Put"
        };

        linkedItems[] =
        {
            "DAC_Helmet_Commando_Base", "DAC_Vest_Commando_DM_Base", "DAC_NVG_Commando_Visor", "DAC_Commando_Hud", "SWLB_comlink", LINKED_ITEMS
        };
        respawnLinkedItems[] =
        {
            "DAC_Helmet_Commando_Base", "DAC_Vest_Commando_DM_Base", "DAC_NVG_Commando_Visor", "DAC_Commando_Hud", "SWLB_comlink", LINKED_ITEMS
        };
        backpack = "DAC_Backpack_Base";
    };

    class DAC_Unit_Commando_Tech_Base: DAC_Unit_Commando_Base
    {
        displayName = "Clone Commando Tech Specialist";
        editorPreview = "\SWLB_clones_spec\data\ui\editorPreviews\SWLB_clone_commando_tech_base.jpg";

        linkedItems[] =
        {
            "DAC_Helmet_Commando_Base", "DAC_Vest_Commando_Tech_Base", "DAC_NVG_Commando_Antenna", "DAC_Commando_Hud", "SWLB_comlink", LINKED_ITEMS
        };
        respawnLinkedItems[] =
        {
            "DAC_Helmet_Commando_Base", "DAC_Vest_Commando_Tech_Base", "DAC_NVG_Commando_Antenna", "DAC_Commando_Hud", "SWLB_comlink", LINKED_ITEMS
        };
        backpack = "DAC_Backpack_Tech_Base";

        attendant = 1;
    };

    class DAC_Unit_Imperial_Commando: DAC_Unit_Commando_Base
    {
        displayName = "Imperial Commando";
        editorSubcategory = "DAC_Edsubcat_Commandos_Imperial";

        uniformClass = "DAC_Uniform_Imperial_Commando";
        hiddenSelectionsTextures[] =
        {
            "\DA\DAC\Armor\data\uniforms\commando\imperial_upper.paa",
            "\DA\DAC\Armor\data\uniforms\commando\imperial_lower.paa"
        };

        linkedItems[] =
        {
            "DAC_Helmet_Imperial_Commando", "DAC_Vest_Commando_Base", "DAC_NVG_Chip_NV", "DAC_Commando_Hud", "SWLB_comlink", LINKED_ITEMS
        };
        respawnLinkedItems[] =
        {
            "DAC_Helmet_Imperial_Commando", "DAC_Vest_Commando_Base", "DAC_NVG_Chip_NV", "DAC_Commando_Hud", "SWLB_comlink", LINKED_ITEMS
        };
    };
    OPFOR_UNIT(DAC_Unit_Imperial_Commando);

    class DAC_Unit_Imperial_Commando_SL: DAC_Unit_Commando_SL_Base
    {
        displayName = "Imperial Commando Squad Leader";
        editorSubcategory = "DAC_Edsubcat_Commandos_Imperial";

        uniformClass = "DAC_Uniform_Imperial_Commando";
        linkedItems[] =
        {
            "DAC_Helmet_Imperial_Commando", "DAC_Vest_Commando_SL_Base", "DAC_NVG_Chip_NVTI", "DAC_Commando_Hud", "SWLB_comlink", LINKED_ITEMS
        };
        respawnLinkedItems[] =
        {
            "DAC_Helmet_Imperial_Commando", "DAC_Vest_Commando_SL_Base", "DAC_NVG_Chip_NVTI", "DAC_Commando_Hud", "SWLB_comlink", LINKED_ITEMS
        };
    };
    OPFOR_UNIT(DAC_Unit_Imperial_Commando_SL);

    class DAC_Unit_Imperial_Commando_EOD: DAC_Unit_Commando_EOD_Base
    {
        displayName = "Imperial Commando Explosives Specialist";
        editorSubcategory = "DAC_Edsubcat_Commandos_Imperial";

        uniformClass = "DAC_Uniform_Imperial_Commando";
        linkedItems[] =
        {
            "DAC_Helmet_Imperial_Commando", "DAC_Vest_Commando_EOD_Base", "DAC_NVG_Chip_NV", "DAC_Commando_Hud", "SWLB_comlink", LINKED_ITEMS
        };
        respawnLinkedItems[] =
        {
            "DAC_Helmet_Imperial_Commando", "DAC_Vest_Commando_EOD_Base", "DAC_NVG_Chip_NV", "DAC_Commando_Hud", "SWLB_comlink", LINKED_ITEMS
        };
    };
    OPFOR_UNIT(DAC_Unit_Imperial_Commando_EOD);

    class DAC_Unit_Imperial_Commando_Tech: DAC_Unit_Commando_Tech_Base
    {
        displayName = "Imperial Commando Tech Specialist";
        editorSubcategory = "DAC_Edsubcat_Commandos_Imperial";

        uniformClass = "DAC_Uniform_Imperial_Commando";
        linkedItems[] =
        {
            "DAC_Helmet_Imperial_Commando", "DAC_Vest_Commando_Tech_Base", "DAC_NVG_Commando_Antenna", "DAC_Commando_Hud", "SWLB_comlink", LINKED_ITEMS
        };
        respawnLinkedItems[] =
        {
            "DAC_Helmet_Imperial_Commando", "DAC_Vest_Commando_Tech_Base", "DAC_NVG_Commando_Antenna", "DAC_Commando_Hud", "SWLB_comlink", LINKED_ITEMS
        };
    };
    OPFOR_UNIT(DAC_Unit_Imperial_Commando_Tech);

    class DAC_Unit_Imperial_Commando_DM: DAC_Unit_Commando_DM_Base
    {
        displayName = "Imperial Commando Designated Marksman";
        editorSubcategory = "DAC_Edsubcat_Commandos_Imperial";

        uniformClass = "DAC_Uniform_Imperial_Commando";
        linkedItems[] =
        {
            "DAC_Helmet_Imperial_Commando", "DAC_Vest_Commando_DM_Base", "DAC_NVG_Commando_Visor", "DAC_Commando_Hud", "SWLB_comlink", LINKED_ITEMS
        };
        respawnLinkedItems[] =
        {
            "DAC_Helmet_Imperial_Commando", "DAC_Vest_Commando_DM_Base", "DAC_NVG_Commando_Visor", "DAC_Commando_Hud", "SWLB_comlink", LINKED_ITEMS
        };
    };
    OPFOR_UNIT(DAC_Unit_Imperial_Commando_DM);

    // ┌───────────────────┐
    // │     Backpacks     │
    // └───────────────────┘
    class SWLB_clone_commando_backpack_k2;
    class DAC_Backpack_Base: SWLB_clone_commando_backpack_k2
    {
        scope = 2;
        scopeArsenal = 2;
        author = "DartRuffian";

        displayName = "[DA] Katarn II Commando Backpack";
        maximumLoad = LOAD_BACKPACK_COMMANDO;

        model = "\SWLB_clones_spec\backpacks\SWLB_clone_commando_backpack_02.p3d";
        hiddenSelections[] = {"illum", "camo1"};
        hiddenSelectionsTextures[] =
        {
            "\DA\DAC\Armor\data\backpacks\commando\camo1.paa",
            "\DA\DAC\Armor\data\backpacks\commando\camo1.paa"
        };
        hiddenSelectionsMaterials[] = {"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
    };
    class DAC_Backpack_Base_Huge: DAC_Backpack_Base
    {
        displayName = "[DA] Katarn II Commando Backpack (Huge)";
        maximumLoad = LOAD_BACKPACK_COMMANDO_HUGE;
    };

    class DAC_Backpack_RTO_Base: DAC_Backpack_Base
    {
        displayName = "[DA] Katarn II Commando RTO Backpack";
        model = "\SWLB_clones_spec\backpacks\SWLB_clone_commando_backpack_02_rto.p3d";
        hiddenSelectionsTextures[] =
        {
            "\DA\DAC\Armor\data\backpacks\commando\RTO_camo1.paa",
            "\DA\DAC\Armor\data\backpacks\commando\RTO_camo1.paa"
        };

        // TFAR Long Range
        tf_hasLRradio = 1;
        tf_range = 25000;

        tf_dialog = "SWLB_clone_rto_radio_dialog";
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode = "tf_west_radio_code";
        tf_subtype = "digital_lr";
    };
    class DAC_Backpack_RTO_Base_Huge: DAC_Backpack_RTO_Base
    {
        displayName = "[DA] Katarn II Commando RTO Backpack (Huge)";
        maximumLoad = LOAD_BACKPACK_COMMANDO_HUGE;
    };

    class DAC_Backpack_EOD_Base: DAC_Backpack_Base
    {
        displayName = "[DA] Katarn II Commando EOD Backpack";
        model = "\SWLB_clones_spec\backpacks\SWLB_clone_commando_backpack_02_eod.p3d";
        hiddenSelectionsTextures[] =
        {
            "\DA\DAC\Armor\data\backpacks\commando\EOD_camo1.paa",
            "\DA\DAC\Armor\data\backpacks\commando\EOD_camo1.paa"
        };
    };
    class DAC_Backpack_EOD_Base_Huge: DAC_Backpack_EOD_Base
    {
        displayName = "[DA] Katarn II Commando EOD Backpack (Huge)";
        maximumLoad = LOAD_BACKPACK_COMMANDO_HUGE;
    };

    class DAC_Backpack_Tech_Base: DAC_Backpack_Base
    {
        displayName = "[DA] Katarn II Commando Tech Backpack";
        model = "\SWLB_clones_spec\backpacks\SWLB_clone_commando_backpack_02_tech.p3d";
        hiddenSelections[] = {"illum", "camo1", "camo2"};
        hiddenSelectionsTextures[] =
        {
            "\DA\DAC\Armor\data\backpacks\commando\camo1.paa",
            "\DA\DAC\Armor\data\backpacks\commando\camo1.paa",
            "\DA\DAC\Armor\data\backpacks\commando\Tech_camo2.paa"
        };
    };
    class DAC_Backpack_Tech_Base_Huge: DAC_Backpack_Tech_Base
    {
        displayName = "[DA] Katarn II Commando Tech Backpack (Huge)";
        maximumLoad = LOAD_BACKPACK_COMMANDO_HUGE;
    };
};