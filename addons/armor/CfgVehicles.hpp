class CfgVehicles
{
    // ┌───────────────────┐
    // │       Units       │
    // └───────────────────┘
    class ls_sob_commando_base;
    class CLASS(Unit_Commando_Base): ls_sob_commando_base
    {
        SCOPE_PUBLIC;
        author = "DartRuffian";

        // Editor Attributes
        faction = QCLASS(SOB);
        editorSubcategory = QCLASS(Edsubcat_Commandos_Base);

        displayName = "Clone Commando";
        editorPreview = EDITOR_PREVIEW(Unit_Commando_Base);
        uniformClass = QCLASS(Uniform_Commando_Base);
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\uniforms\commando\upper.paa),
            QPATHTOF(data\uniforms\commando\lower.paa)
        };
        nakedUniform = "lsd_gar_bodyGlove_uniform";

        modelSides[] = {ALL_SIDES};

        weapons[] =
        {
            QCLASS(DC17M),
            QCLASS(DC15SA),
            "Throw",
            "Put"
        };
        respawnWeapons[] =
        {
            QCLASS(DC17M),
            QCLASS(DC15SA),
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
            QCLASS(Helmet_Commando_Base), QCLASS(Vest_Commando_Base), QCLASS(NVG_Chip_NV), QCLASS(Commando_Hud), "SWLB_comlink", LINKED_ITEMS
        };
        respawnLinkedItems[] =
        {
            QCLASS(Helmet_Commando_Base), QCLASS(Vest_Commando_Base), QCLASS(NVG_Chip_NV), QCLASS(Commando_Hud), "SWLB_comlink", LINKED_ITEMS
        };
        backpack = QCLASS(Backpack_Base);
    };

    class CLASS(Unit_Commando_SL_Base): CLASS(Unit_Commando_Base)
    {
        displayName = "Clone Commando Squad Leader";
        editorPreview = EDITOR_PREVIEW(Unit_Commando_SL_Base);

        linkedItems[] =
        {
            QCLASS(Helmet_Commando_Base), QCLASS(Vest_Commando_SL_Base), QCLASS(NVG_Chip_NVTI), QCLASS(Commando_Hud), "SWLB_comlink", LINKED_ITEMS
        };
        respawnLinkedItems[] =
        {
            QCLASS(Helmet_Commando_Base), QCLASS(Vest_Commando_SL_Base), QCLASS(NVG_Chip_NVTI), QCLASS(Commando_Hud), "SWLB_comlink", LINKED_ITEMS
        };
        backpack = QCLASS(Backpack_RTO_Base);

        attendant = 1;
    };

    class CLASS(Unit_Commando_EOD_Base): CLASS(Unit_Commando_Base)
    {
        displayName = "Clone Commando Explosives Specialist";
        editorPreview = EDITOR_PREVIEW(Unit_Commando_EOD_Base);

        linkedItems[] =
        {
            QCLASS(Helmet_Commando_Base), QCLASS(Vest_Commando_EOD_Base), QCLASS(NVG_Chip_NV), QCLASS(Commando_Hud), "SWLB_comlink", LINKED_ITEMS
        };
        respawnLinkedItems[] =
        {
            QCLASS(Helmet_Commando_Base), QCLASS(Vest_Commando_EOD_Base), QCLASS(NVG_Chip_NV), QCLASS(Commando_Hud), "SWLB_comlink", LINKED_ITEMS
        };
        backpack = QCLASS(Backpack_EOD_Base);

        canDeactivateMines = TRUE;
        engineer = 1;
    };

    class CLASS(Unit_Commando_DM_Base): CLASS(Unit_Commando_Base)
    {
        displayName = "Clone Commando Designated Marksman";
        editorPreview = EDITOR_PREVIEW(Unit_Commando_DM_Base);

        weapons[] =
        {
            QCLASS(DC17M_Sniper),
            QCLASS(DC15SA),
            "Throw",
            "Put"
        };
        respawnWeapons[] =
        {
            QCLASS(DC17M_Sniper),
            QCLASS(DC15SA),
            "Throw",
            "Put"
        };

        linkedItems[] =
        {
            QCLASS(Helmet_Commando_Base), QCLASS(Vest_Commando_DM_Base), QCLASS(NVG_Commando_Visor), QCLASS(Commando_Hud), "SWLB_comlink", LINKED_ITEMS
        };
        respawnLinkedItems[] =
        {
            QCLASS(Helmet_Commando_Base), QCLASS(Vest_Commando_DM_Base), QCLASS(NVG_Commando_Visor), QCLASS(Commando_Hud), "SWLB_comlink", LINKED_ITEMS
        };
        backpack = QCLASS(Backpack_Base);
    };

    class CLASS(Unit_Commando_Tech_Base): CLASS(Unit_Commando_Base)
    {
        displayName = "Clone Commando Tech Specialist";
        editorPreview = EDITOR_PREVIEW(Unit_Commando_Tech_Base);

        linkedItems[] =
        {
            QCLASS(Helmet_Commando_Base), QCLASS(Vest_Commando_Tech_Base), QCLASS(NVG_Commando_Antenna), QCLASS(Commando_Hud), "SWLB_comlink", LINKED_ITEMS
        };
        respawnLinkedItems[] =
        {
            QCLASS(Helmet_Commando_Base), QCLASS(Vest_Commando_Tech_Base), QCLASS(NVG_Commando_Antenna), QCLASS(Commando_Hud), "SWLB_comlink", LINKED_ITEMS
        };
        backpack = QCLASS(Backpack_Tech_Base);

        attendant = 1;
    };

    class CLASS(Unit_Imperial_Commando): CLASS(Unit_Commando_Base)
    {
        displayName = "Imperial Commando";
        editorSubcategory = QCLASS(Edsubcat_Commandos_Imperial);
        editorPreview = EDITOR_PREVIEW(Unit_Imperial_Commando);

        uniformClass = QCLASS(Uniform_Imperial_Commando);
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\uniforms\commando\imperial_upper.paa),
            QPATHTOF(data\uniforms\commando\imperial_lower.paa)
        };

        linkedItems[] =
        {
            QCLASS(Helmet_Imperial_Commando), QCLASS(Vest_Commando_Base), QCLASS(NVG_Chip_NV), QCLASS(Commando_Hud), "SWLB_comlink", LINKED_ITEMS
        };
        respawnLinkedItems[] =
        {
            QCLASS(Helmet_Imperial_Commando), QCLASS(Vest_Commando_Base), QCLASS(NVG_Chip_NV), QCLASS(Commando_Hud), "SWLB_comlink", LINKED_ITEMS
        };
    };
    OPFOR_UNIT(CLASS(Unit_Imperial_Commando));

    class CLASS(Unit_Imperial_Commando_SL): CLASS(Unit_Commando_SL_Base)
    {
        displayName = "Imperial Commando Squad Leader";
        editorSubcategory = QCLASS(Edsubcat_Commandos_Imperial);
        editorPreview = EDITOR_PREVIEW(Unit_Imperial_Commando_SL);

        uniformClass = QCLASS(Uniform_Imperial_Commando);
        linkedItems[] =
        {
            QCLASS(Helmet_Imperial_Commando), QCLASS(Vest_Commando_SL_Base), QCLASS(NVG_Chip_NVTI), QCLASS(Commando_Hud), "SWLB_comlink", LINKED_ITEMS
        };
        respawnLinkedItems[] =
        {
            QCLASS(Helmet_Imperial_Commando), QCLASS(Vest_Commando_SL_Base), QCLASS(NVG_Chip_NVTI), QCLASS(Commando_Hud), "SWLB_comlink", LINKED_ITEMS
        };
    };
    OPFOR_UNIT(CLASS(Unit_Imperial_Commando_SL));

    class CLASS(Unit_Imperial_Commando_EOD): CLASS(Unit_Commando_EOD_Base)
    {
        displayName = "Imperial Commando Explosives Specialist";
        editorSubcategory = QCLASS(Edsubcat_Commandos_Imperial);
        editorPreview = EDITOR_PREVIEW(Unit_Imperial_Commando_EOD);

        uniformClass = QCLASS(Uniform_Imperial_Commando);
        linkedItems[] =
        {
            QCLASS(Helmet_Imperial_Commando), QCLASS(Vest_Commando_EOD_Base), QCLASS(NVG_Chip_NV), QCLASS(Commando_Hud), "SWLB_comlink", LINKED_ITEMS
        };
        respawnLinkedItems[] =
        {
            QCLASS(Helmet_Imperial_Commando), QCLASS(Vest_Commando_EOD_Base), QCLASS(NVG_Chip_NV), QCLASS(Commando_Hud), "SWLB_comlink", LINKED_ITEMS
        };
    };
    OPFOR_UNIT(CLASS(Unit_Imperial_Commando_EOD));

    class CLASS(Unit_Imperial_Commando_Tech): CLASS(Unit_Commando_Tech_Base)
    {
        displayName = "Imperial Commando Tech Specialist";
        editorSubcategory = QCLASS(Edsubcat_Commandos_Imperial);
        editorPreview = EDITOR_PREVIEW(Unit_Imperial_Commando_Tech);

        uniformClass = QCLASS(Uniform_Imperial_Commando);
        linkedItems[] =
        {
            QCLASS(Helmet_Imperial_Commando), QCLASS(Vest_Commando_Tech_Base), QCLASS(NVG_Commando_Antenna), QCLASS(Commando_Hud), "SWLB_comlink", LINKED_ITEMS
        };
        respawnLinkedItems[] =
        {
            QCLASS(Helmet_Imperial_Commando), QCLASS(Vest_Commando_Tech_Base), QCLASS(NVG_Commando_Antenna), QCLASS(Commando_Hud), "SWLB_comlink", LINKED_ITEMS
        };
    };
    OPFOR_UNIT(CLASS(Unit_Imperial_Commando_Tech));

    class CLASS(Unit_Imperial_Commando_DM): CLASS(Unit_Commando_DM_Base)
    {
        displayName = "Imperial Commando Designated Marksman";
        editorSubcategory = QCLASS(Edsubcat_Commandos_Imperial);
        editorPreview = EDITOR_PREVIEW(Unit_Imperial_Commando_DM);

        uniformClass = QCLASS(Uniform_Imperial_Commando);
        linkedItems[] =
        {
            QCLASS(Helmet_Imperial_Commando), QCLASS(Vest_Commando_DM_Base), QCLASS(NVG_Commando_Visor), QCLASS(Commando_Hud), "SWLB_comlink", LINKED_ITEMS
        };
        respawnLinkedItems[] =
        {
            QCLASS(Helmet_Imperial_Commando), QCLASS(Vest_Commando_DM_Base), QCLASS(NVG_Commando_Visor), QCLASS(Commando_Hud), "SWLB_comlink", LINKED_ITEMS
        };
    };
    OPFOR_UNIT(CLASS(Unit_Imperial_Commando_DM));

    // ┌───────────────────┐
    // │     Backpacks     │
    // └───────────────────┘
    class SWLB_clone_commando_backpack_k2;
    class CLASS(Backpack_Base): SWLB_clone_commando_backpack_k2
    {
        SCOPE_PUBLIC;
        author = "DartRuffian";

        displayName = "[DA] Katarn II Commando Backpack";
        maximumLoad = LOAD_BACKPACK_COMMANDO;

        model = "\SWLB_clones_spec\backpacks\SWLB_clone_commando_backpack_02.p3d";
        hiddenSelections[] = {"illum", "camo1"};
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\backpacks\commando\camo1.paa),
            QPATHTOF(data\backpacks\commando\camo1.paa)
        };
        hiddenSelectionsMaterials[] = {"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
    };
    class CLASS(Backpack_Base_Huge): CLASS(Backpack_Base)
    {
        displayName = "[DA] Katarn II Commando Backpack (Huge)";
        maximumLoad = LOAD_BACKPACK_COMMANDO_HUGE;
    };

    class CLASS(Backpack_RTO_Base): CLASS(Backpack_Base)
    {
        displayName = "[DA] Katarn II Commando RTO Backpack";
        model = "\SWLB_clones_spec\backpacks\SWLB_clone_commando_backpack_02_rto.p3d";
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\backpacks\commando\RTO_camo1.paa),
            QPATHTOF(data\backpacks\commando\RTO_camo1.paa)
        };

        // TFAR Long Range
        tf_hasLRradio = TRUE;
        tf_range = 25000;

        tf_dialog = "SWLB_clone_rto_radio_dialog";
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode = "tf_west_radio_code";
        tf_subtype = "digital_lr";
    };
    class CLASS(Backpack_RTO_Base_Huge): CLASS(Backpack_RTO_Base)
    {
        displayName = "[DA] Katarn II Commando RTO Backpack (Huge)";
        maximumLoad = LOAD_BACKPACK_COMMANDO_HUGE;
    };

    class CLASS(Backpack_EOD_Base): CLASS(Backpack_Base)
    {
        displayName = "[DA] Katarn II Commando EOD Backpack";
        model = "\SWLB_clones_spec\backpacks\SWLB_clone_commando_backpack_02_eod.p3d";
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\backpacks\commando\EOD_camo1.paa),
            QPATHTOF(data\backpacks\commando\EOD_camo1.paa)
        };
    };
    class CLASS(Backpack_EOD_Base_Huge): CLASS(Backpack_EOD_Base)
    {
        displayName = "[DA] Katarn II Commando EOD Backpack (Huge)";
        maximumLoad = LOAD_BACKPACK_COMMANDO_HUGE;
    };

    class CLASS(Backpack_Tech_Base): CLASS(Backpack_Base)
    {
        displayName = "[DA] Katarn II Commando Tech Backpack";
        model = "\SWLB_clones_spec\backpacks\SWLB_clone_commando_backpack_02_tech.p3d";
        hiddenSelections[] = {"illum", "camo1", "camo2"};
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\backpacks\commando\camo1.paa),
            QPATHTOF(data\backpacks\commando\camo1.paa),
            QPATHTOF(data\backpacks\commando\Tech_camo2.paa)
        };
    };
    class CLASS(Backpack_Tech_Base_Huge): CLASS(Backpack_Tech_Base)
    {
        displayName = "[DA] Katarn II Commando Tech Backpack (Huge)";
        maximumLoad = LOAD_BACKPACK_COMMANDO_HUGE;
    };

    class GROUND_CLASS(Holder_Base);
    GROUND_HOLDER(Helmet_Commando_Base,"Katarn I Commando Helmet");
    GROUND_HOLDER(Helmet_Imperial_Commando,"Katarn I Imperial Commando Helmet");
};