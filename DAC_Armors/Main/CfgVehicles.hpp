#include "\DAC_Armors\Macros.hpp"

class CfgVehicles
{
    // ┌───────────────────┐
    // │       Units       │
    // └───────────────────┘
    class SWLB_clone_commando_base;

    class DAC_Unit_Commando_Base: SWLB_clone_commando_base
    {
        // Mod Info
        dlc = "DA_Commandos";
        author = "DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        // Editor Attributes
        faction = "DA_Commandos";
        editorSubcategory = "DAC_Base";

        displayName = "Clone Commando";
        uniformClass = "DAC_Uniform_Commando_Base";
        hiddenSelectionsTextures[] =
        {
            "DAC_Armors\Main\Data\Uniforms\Commando_Uniform_Base_Upper.paa",
            "DAC_Armors\Main\Data\Uniforms\Commando_Uniform_Base_Lower.paa"
        };
        nakedUniform = "lsd_gar_bodyGlove_uniform";

        linkedItems[] =
        {
            "DAC_Helmet_Commando_Base","DAC_Vest_Commando_Base","DAC_Commando_Hud","ItemMap","SWLB_comlink","ItemCompass"
        };
        respawnLinkedItems[] =
        {
            "DAC_Helmet_Commando_Base","DAC_Vest_Commando_Base","DAC_Commando_Hud","ItemMap","SWLB_comlink","ItemCompass"
        };
        backpack = "DAC_Backpack_Base";
    };

    class DAC_Unit_Commando_SL_Base: DAC_Unit_Commando_Base
    {
        displayName = "Clone Commando Squad Leader";
        editorPreview="SWLB_clones_spec\data\ui\editorPreviews\SWLB_clone_commando_sl_base.jpg";

        linkedItems[] =
        {
            "DAC_Helmet_Commando_Base","DAC_Vest_Commando_SL_Base","DAC_Commando_Hud","ItemMap","SWLB_comlink","ItemCompass"
        };
        respawnLinkedItems[] =
        {
            "DAC_Helmet_Commando_Base","DAC_Vest_Commando_SL_Base","DAC_Commando_Hud","ItemMap","SWLB_comlink","ItemCompass"
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
            "DAC_Helmet_Commando_Base","DAC_Vest_Commando_EOD_Base","DAC_Commando_Hud","ItemMap","SWLB_comlink","ItemCompass"
        };
        respawnLinkedItems[] =
        {
            "DAC_Helmet_Commando_Base","DAC_Vest_Commando_EOD_Base","DAC_Commando_Hud","ItemMap","SWLB_comlink","ItemCompass"
        };
        backpack = "DAC_Backpack_EOD_Base";

        canDeactivateMines = 1;
        engineer = 1;
    };

    class DAC_Unit_Commando_DM_Base: DAC_Unit_Commando_Base
    {
        displayName = "Clone Commando Designated Marksman";
        editorPreview="SWLB_clones_spec\data\ui\editorPreviews\SWLB_clone_commando_sniper_base.jpg";

        linkedItems[] =
        {
            "DAC_Helmet_Commando_Base","DAC_Vest_Commando_DM_Base","DAC_NVG_Commando_Visor","DAC_Commando_Hud","ItemMap","SWLB_comlink","ItemCompass"
        };
        respawnLinkedItems[] =
        {
            "DAC_Helmet_Commando_Base","DAC_Vest_Commando_DM_Base","DAC_NVG_Commando_Visor","DAC_Commando_Hud","ItemMap","SWLB_comlink","ItemCompass"
        };
        backpack = "DAC_Backpack_Base";
    };

    class DAC_Unit_Commando_Tech_Base: DAC_Unit_Commando_Base
    {
        displayName = "Clone Commando Tech Specialist";
        editorPreview="SWLB_clones_spec\data\ui\editorPreviews\SWLB_clone_commando_tech_base.jpg";

        linkedItems[] =
        {
            "DAC_Helmet_Commando_Base","DAC_Vest_Commando_Tech_Base","DAC_NVG_Commando_Antenna","DAC_Commando_Hud","ItemMap","SWLB_comlink","ItemCompass"
        };
        respawnLinkedItems[] =
        {
            "DAC_Helmet_Commando_Base","DAC_Vest_Commando_Tech_Base","DAC_NVG_Commando_Antenna","DAC_Commando_Hud","ItemMap","SWLB_comlink","ItemCompass"
        };
        backpack = "DAC_Backpack_Tech_Base";

        attendant = 1;
    };

    // ┌───────────────────┐
    // │     Backpacks     │
    // └───────────────────┘
    class SWLB_clone_commando_backpack_k2;
    class SWLB_clone_commando_backpack_k2_eod;
    class SWLB_clone_commando_backpack_k2_rto;
    class SWLB_clone_commando_backpack_k2_tech;

    class DAC_Backpack_Base: SWLB_clone_commando_backpack_k2
    {
        // Mod Info
        dlc = "DA_Commandos";
        author = "DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        displayName = "[DA] Katarn II Commando Backpack";
        hiddenSelectionsTextures[] =
        {
            "DAC_Armors\Main\Data\Backpacks\Commando_BP_Base.paa",
            "DAC_Armors\Main\Data\Backpacks\Commando_BP_Base.paa"
        };
        maximumLoad = NORM_SIZE;
    };
    class DAC_Backpack_Base_Huge: DAC_Backpack_Base
    {
        displayName = "[DA] Katarn II Commando Backpack (Huge)";
        maximumLoad = HUGE_SIZE;
    };

    class DAC_Backpack_RTO_Base: SWLB_clone_commando_backpack_k2_rto
    {
        // Mod Info
        dlc = "DA_Commandos";
        author = "DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        displayName = "[DA] Katarn II Commando RTO Backpack";
        hiddenSelectionsTextures[] =
        {
            "DAC_Armors\Main\Data\Backpacks\Commando_BP_RTO.paa",
            "DAC_Armors\Main\Data\Backpacks\Commando_BP_RTO.paa"
        };
        maximumLoad = NORM_SIZE;
    };
    class DAC_Backpack_RTO_Base_Huge: DAC_Backpack_RTO_Base
    {
        displayName = "[DA] Katarn II Commando RTO Backpack (Huge)";
        maximumLoad = HUGE_SIZE;
    };

    class DAC_Backpack_EOD_Base: SWLB_clone_commando_backpack_k2_eod
    {
        // Mod Info
        dlc = "DA_Commandos";
        author = "DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        displayName = "[DA] Katarn II Commando EOD Backpack";
        hiddenSelectionsTextures[] =
        {
            "DAC_Armors\Main\Data\Backpacks\Commando_BP_EOD.paa",
            "DAC_Armors\Main\Data\Backpacks\Commando_BP_EOD.paa"
        };
        maximumLoad = NORM_SIZE;
    };
    class DAC_Backpack_EOD_Base_Huge: DAC_Backpack_EOD_Base
    {
        displayName = "[DA] Katarn II Commando EOD Backpack (Huge)";
        maximumLoad = HUGE_SIZE;
    };

    class DAC_Backpack_Tech_Base: SWLB_clone_commando_backpack_k2_tech
    {
        // Mod Info
        dlc = "DA_Commandos";
        author = "DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        displayName = "[DA] Katarn II Commando Tech Backpack";
        hiddenSelectionsTextures[] =
        {
            "DAC_Armors\Main\Data\Backpacks\Commando_BP_Base.paa",
            "DAC_Armors\Main\Data\Backpacks\Commando_BP_Base.paa",
            "DAC_Armors\Main\Data\Backpacks\Commando_BP_Tech_Addon.paa"
        };
        maximumLoad = NORM_SIZE;
    };
    class DAC_Backpack_Tech_Base_Huge: DAC_Backpack_Tech_Base
    {
        displayName = "[DA] Katarn II Commando Tech Backpack (Huge)";
        maximumLoad = HUGE_SIZE;
    };
};