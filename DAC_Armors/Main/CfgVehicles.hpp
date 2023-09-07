#include "\DAC_Armors\Macros.hpp"

class CfgVehicles
{
    // ┌───────────────────┐
    // │       Units       │
    // └───────────────────┘
    class ls_sob_commando_base;
    class DAC_Unit_Commando_Base: ls_sob_commando_base
    {
        // Mod Info
        dlc = "DA_Commandos";
        author = "DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        // Editor Attributes
        faction = "DA_Commandos";
        editorSubcategory = "DAC_Base";

        displayName = "Clone Commando";
        editorPreview = "\SWLB_clones_spec\data\ui\editorPreviews\SWLB_clone_commando_base.jpg";
        uniformClass = "DAC_Uniform_Commando_Base";
        hiddenSelectionsTextures[] =
        {
            "DAC_Armors\Main\Data\Uniforms\Commando_Uniform_Base_Upper.paa",
            "DAC_Armors\Main\Data\Uniforms\Commando_Uniform_Base_Lower.paa"
        };
        nakedUniform = "lsd_gar_bodyGlove_uniform";

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
            "DAC_Helmet_Commando_Base", "DAC_Vest_Commando_Base", "DAC_Commando_Hud", "ItemMap", "SWLB_comlink", "ItemCompass"
        };
        respawnLinkedItems[] =
        {
            "DAC_Helmet_Commando_Base", "DAC_Vest_Commando_Base", "DAC_Commando_Hud", "ItemMap", "SWLB_comlink", "ItemCompass"
        };
        backpack = "DAC_Backpack_Base";
    };

    class DAC_Unit_Commando_SL_Base: DAC_Unit_Commando_Base
    {
        displayName = "Clone Commando Squad Leader";
        editorPreview="SWLB_clones_spec\data\ui\editorPreviews\SWLB_clone_commando_sl_base.jpg";

        linkedItems[] =
        {
            "DAC_Helmet_Commando_Base", "DAC_Vest_Commando_SL_Base", "DAC_Commando_Hud", "ItemMap", "SWLB_comlink", "ItemCompass"
        };
        respawnLinkedItems[] =
        {
            "DAC_Helmet_Commando_Base", "DAC_Vest_Commando_SL_Base", "DAC_Commando_Hud", "ItemMap", "SWLB_comlink", "ItemCompass"
        };
        backpack = "DAC_Backpack_RTO_Base";

        attendant = 1;
    };

    class DAC_Unit_Commando_EOD_Base: DAC_Unit_Commando_Base
    {
        displayName = "Clone Commando Explosives Specialist";
        editorPreview="SWLB_clones_spec\data\ui\editorPreviews\SWLB_clone_commando_eod_base.jpg";

        linkedItems[] =
        {
            "DAC_Helmet_Commando_Base", "DAC_Vest_Commando_EOD_Base", "DAC_Commando_Hud", "ItemMap", "SWLB_comlink", "ItemCompass"
        };
        respawnLinkedItems[] =
        {
            "DAC_Helmet_Commando_Base", "DAC_Vest_Commando_EOD_Base", "DAC_Commando_Hud", "ItemMap", "SWLB_comlink", "ItemCompass"
        };
        backpack = "DAC_Backpack_EOD_Base";

        canDeactivateMines = 1;
        engineer = 1;
    };

    class DAC_Unit_Commando_DM_Base: DAC_Unit_Commando_Base
    {
        displayName = "Clone Commando Designated Marksman";
        editorPreview="SWLB_clones_spec\data\ui\editorPreviews\SWLB_clone_commando_sniper_base.jpg";

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
            "DAC_Helmet_Commando_Base", "DAC_Vest_Commando_DM_Base", "DAC_NVG_Commando_Visor", "DAC_Commando_Hud", "ItemMap", "SWLB_comlink", "ItemCompass"
        };
        respawnLinkedItems[] =
        {
            "DAC_Helmet_Commando_Base", "DAC_Vest_Commando_DM_Base", "DAC_NVG_Commando_Visor", "DAC_Commando_Hud", "ItemMap", "SWLB_comlink", "ItemCompass"
        };
        backpack = "DAC_Backpack_Base";
    };

    class DAC_Unit_Commando_Tech_Base: DAC_Unit_Commando_Base
    {
        displayName = "Clone Commando Tech Specialist";
        editorPreview="SWLB_clones_spec\data\ui\editorPreviews\SWLB_clone_commando_tech_base.jpg";

        linkedItems[] =
        {
            "DAC_Helmet_Commando_Base", "DAC_Vest_Commando_Tech_Base", "DAC_NVG_Commando_Antenna", "DAC_Commando_Hud", "ItemMap", "SWLB_comlink", "ItemCompass"
        };
        respawnLinkedItems[] =
        {
            "DAC_Helmet_Commando_Base", "DAC_Vest_Commando_Tech_Base", "DAC_NVG_Commando_Antenna", "DAC_Commando_Hud", "ItemMap", "SWLB_comlink", "ItemCompass"
        };
        backpack = "DAC_Backpack_Tech_Base";

        attendant = 1;
    };

    // ┌───────────────────┐
    // │     Backpacks     │
    // └───────────────────┘
    class SWLB_clone_commando_backpack_k2;
    class DAC_Backpack_Base: SWLB_clone_commando_backpack_k2
    {
        // Mod Info
        dlc = "DA_Commandos";
        author = "DartRuffian";

        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[DA] Katarn II Commando Backpack";
        maximumLoad = NORM_SIZE;

        model = "\SWLB_clones_spec\backpacks\SWLB_clone_commando_backpack_02.p3d";
        hiddenSelections[] = { "illum", "camo1" };
        hiddenSelectionsTextures[] =
        {
            "DAC_Armors\Main\Data\Backpacks\Commando_BP_Base.paa",
            "DAC_Armors\Main\Data\Backpacks\Commando_BP_Base.paa"
        };
        hiddenSelectionsMaterials[] = { "a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat" };
    };
    class DAC_Backpack_Base_Huge: DAC_Backpack_Base
    {
        displayName = "[DA] Katarn II Commando Backpack (Huge)";
        maximumLoad = HUGE_SIZE;
    };

    class DAC_Backpack_RTO_Base: DAC_Backpack_Base
    {
        displayName = "[DA] Katarn II Commando RTO Backpack";
        model = "\SWLB_clones_spec\backpacks\SWLB_clone_commando_backpack_02_rto.p3d";
        hiddenSelectionsTextures[] =
        {
            "DAC_Armors\Main\Data\Backpacks\Commando_BP_RTO.paa",
            "DAC_Armors\Main\Data\Backpacks\Commando_BP_RTO.paa"
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
        maximumLoad = HUGE_SIZE;
    };

    class DAC_Backpack_EOD_Base: DAC_Backpack_Base
    {
        displayName = "[DA] Katarn II Commando EOD Backpack";
        model = "\SWLB_clones_spec\backpacks\SWLB_clone_commando_backpack_02_eod.p3d";
        hiddenSelectionsTextures[] =
        {
            "DAC_Armors\Main\Data\Backpacks\Commando_BP_EOD.paa",
            "DAC_Armors\Main\Data\Backpacks\Commando_BP_EOD.paa"
        };
    };
    class DAC_Backpack_EOD_Base_Huge: DAC_Backpack_EOD_Base
    {
        displayName = "[DA] Katarn II Commando EOD Backpack (Huge)";
        maximumLoad = HUGE_SIZE;
    };

    class DAC_Backpack_Tech_Base: DAC_Backpack_Base
    {
        displayName = "[DA] Katarn II Commando Tech Backpack";
        model = "\SWLB_clones_spec\backpacks\SWLB_clone_commando_backpack_02_tech.p3d";
        hiddenSelections[] = { "illum", "camo1", "camo2" };
        hiddenSelectionsTextures[] =
        {
            "DAC_Armors\Main\Data\Backpacks\Commando_BP_Base.paa",
            "DAC_Armors\Main\Data\Backpacks\Commando_BP_Base.paa",
            "DAC_Armors\Main\Data\Backpacks\Commando_BP_Tech_Addon.paa"
        };
    };
    class DAC_Backpack_Tech_Base_Huge: DAC_Backpack_Tech_Base
    {
        displayName = "[DA] Katarn II Commando Tech Backpack (Huge)";
        maximumLoad = HUGE_SIZE;
    };


    class ls_blueforHeadgear_base;
    class DAC_HelmetHolder_Commando_Base: ls_blueforHeadgear_base
    {
        // Mod Info
        dlc = "DA_Commandos";
        author = "DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        // Editor Attributes
        editorCategory = "DAC_Objects";
        editorSubcategory = "DAC_Objects_Helmets";

        displayName = "Katarn I Commando Helmet";
        class TransportItems
        {
            class DAC_Helmet_Commando_Base
            {
                name = "DAC_Helmet_Commando_Base";
                count = 1;
            };
        };
    };
};