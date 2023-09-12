#include "CfgPatches.hpp"
#include "\DAC_Armors\Macros.hpp"


class CfgEditorSubcategories
{
    class DAC_Imperial
    {
        displayName = "Imperial Commandos";
    };
    class DAC_Imperial_OPFOR
    {
        displayName = "Imperial Commandos";
        side = 0;
    };
};


class CfgWeapons
{
    // ┌───────────────────┐
    // │      Helmets      │
    // └───────────────────┘
    class DAC_Helmet_Commando_Base;
    class DAC_Helmet_Imperial_Commando: DAC_Helmet_Commando_Base
    {
        displayName = "[DA] Katarn I Imperial Commando Helmet";
        hiddenSelectionsTextures[] =
        {
            "DAC_Armors\Imperial\Data\Helmets\Imperial_Helmet.paa", // Visor
            "DAC_Armors\Imperial\Data\Helmets\Imperial_Helmet.paa"  // Main Helmet
        };
    };

    // ┌────────────────────┐
    // │      Uniforms      │
    // └────────────────────┘
    class ls_sob_commando_uniform;
    class DAC_Uniform_Commando_Base: ls_sob_commando_uniform
    {
        class ItemInfo;
    };
    class DAC_Uniform_Imperial_Commando: DAC_Uniform_Commando_Base
    {
        displayName = "[DA] Katarn I Imperial Commando Armor";
        class ItemInfo: ItemInfo
        {
            uniformClass = "DAC_Unit_Imperial_Commando";
        };
    };
};


class CfgVehicles
{
    // ┌───────────────────┐
    // │       Units       │
    // └───────────────────┘
    class DAC_Unit_Commando_Base;
    class DAC_Unit_Imperial_Commando: DAC_Unit_Commando_Base
    {
        displayName = "Imperial Commando";
        editorSubcategory = "DAC_Imperial";

        uniformClass = "DAC_Uniform_Imperial_Commando";
        hiddenSelectionsTextures[] =
        {
            "DAC_Armors\Imperial\Data\Uniforms\Imperial_Uniform_Upper.paa",
            "DAC_Armors\Imperial\Data\Uniforms\Imperial_Uniform_Lower.paa"
        };

        linkedItems[] =
        {
            "DAC_Helmet_Imperial_Commando", "DAC_Vest_Commando_Base", "DAC_NVG_Chip_NV", "DAC_Commando_Hud", "ItemMap", "SWLB_comlink", "ItemCompass"
        };
        respawnLinkedItems[] =
        {
            "DAC_Helmet_Imperial_Commando", "DAC_Vest_Commando_Base", "DAC_NVG_Chip_NV", "DAC_Commando_Hud", "ItemMap", "SWLB_comlink", "ItemCompass"
        };
    };
    class DAC_Unit_Imperial_Commando_OPFOR: DAC_Unit_Imperial_Commando
    {
        faction = "DA_Commandos_OPFOR";
        editorSubcategory = "DAC_Imperial_OPFOR";
        side = 0;
    };

    class DAC_Unit_Commando_SL_Base;
    class DAC_Unit_Imperial_Commando_SL: DAC_Unit_Commando_SL_Base
    {
        displayName = "Imperial Commando Squad Leader";
        editorSubcategory = "DAC_Imperial";

        uniformClass = "DAC_Uniform_Imperial_Commando";
        linkedItems[] =
        {
            "DAC_Helmet_Imperial_Commando", "DAC_Vest_Commando_SL_Base", "DAC_NVG_Chip_NVTI", "DAC_Commando_Hud", "ItemMap", "SWLB_comlink", "ItemCompass"
        };
        respawnLinkedItems[] =
        {
            "DAC_Helmet_Imperial_Commando", "DAC_Vest_Commando_SL_Base", "DAC_NVG_Chip_NVTI", "DAC_Commando_Hud", "ItemMap", "SWLB_comlink", "ItemCompass"
        };
    };
    class DAC_Unit_Imperial_Commando_SL_OPFOR: DAC_Unit_Imperial_Commando_SL
    {
        faction = "DA_Commandos_OPFOR";
        editorSubcategory = "DAC_Imperial_OPFOR";
        side = 0;
    };

    class DAC_Unit_Commando_EOD_Base;
    class DAC_Unit_Imperial_Commando_EOD: DAC_Unit_Commando_EOD_Base
    {
        displayName = "Imperial Commando Explosives Specialist";
        editorSubcategory = "DAC_Imperial";

        uniformClass = "DAC_Uniform_Imperial_Commando";
        linkedItems[] =
        {
            "DAC_Helmet_Imperial_Commando", "DAC_Vest_Commando_EOD_Base", "DAC_NVG_Chip_NV", "DAC_Commando_Hud", "ItemMap", "SWLB_comlink", "ItemCompass"
        };
        respawnLinkedItems[] =
        {
            "DAC_Helmet_Imperial_Commando", "DAC_Vest_Commando_EOD_Base", "DAC_NVG_Chip_NV", "DAC_Commando_Hud", "ItemMap", "SWLB_comlink", "ItemCompass"
        };
    };
    class DAC_Unit_Imperial_Commando_EOD_OPFOR: DAC_Unit_Imperial_Commando_EOD
    {
        faction = "DA_Commandos_OPFOR";
        editorSubcategory = "DAC_Imperial_OPFOR";
        side = 0;
    };

    class DAC_Unit_Commando_Tech_Base;
    class DAC_Unit_Imperial_Commando_Tech: DAC_Unit_Commando_Tech_Base
    {
        displayName = "Imperial Commando Tech Specialist";
        editorSubcategory = "DAC_Imperial";

        uniformClass = "DAC_Uniform_Imperial_Commando";
        linkedItems[] =
        {
            "DAC_Helmet_Imperial_Commando", "DAC_Vest_Commando_Tech_Base", "DAC_NVG_Commando_Antenna", "DAC_Commando_Hud", "ItemMap", "SWLB_comlink", "ItemCompass"
        };
        respawnLinkedItems[] =
        {
            "DAC_Helmet_Imperial_Commando", "DAC_Vest_Commando_Tech_Base", "DAC_NVG_Commando_Antenna", "DAC_Commando_Hud", "ItemMap", "SWLB_comlink", "ItemCompass"
        };
    };
    class DAC_Unit_Imperial_Commando_Tech_OPFOR: DAC_Unit_Imperial_Commando_Tech
    {
        faction = "DA_Commandos_OPFOR";
        editorSubcategory = "DAC_Imperial_OPFOR";
        side = 0;
    };

    class DAC_Unit_Commando_DM_Base;
    class DAC_Unit_Imperial_Commando_DM: DAC_Unit_Commando_DM_Base
    {
        displayName = "Imperial Commando Designated Marksman";
        editorSubcategory = "DAC_Imperial";

        uniformClass = "DAC_Uniform_Imperial_Commando";
        linkedItems[] =
        {
            "DAC_Helmet_Imperial_Commando", "DAC_Vest_Commando_DM_Base", "DAC_NVG_Commando_Visor", "DAC_Commando_Hud", "ItemMap", "SWLB_comlink", "ItemCompass"
        };
        respawnLinkedItems[] =
        {
            "DAC_Helmet_Imperial_Commando", "DAC_Vest_Commando_DM_Base", "DAC_NVG_Commando_Visor", "DAC_Commando_Hud", "ItemMap", "SWLB_comlink", "ItemCompass"
        };
    };
    class DAC_Unit_Imperial_Commando_DM_OPFOR: DAC_Unit_Imperial_Commando_DM
    {
        faction = "DA_Commandos_OPFOR";
        editorSubcategory = "DAC_Imperial_OPFOR";
        side = 0;
    };

    class DAC_HelmetHolder_Commando_Base;
    HELMET_HOLDER(DAC_HelmetHolder_Imperial_Commando, Katarn I Imperial Helmet, DAC_Helmet_Imperial_Commando);
};


class CfgGroups
{
    class West
    {
        class DAC_Empire
        {
            name = "[DA] Galactic Empire";

            class DAC_Commandos
            {
                name = "Commando Squads";
                class Base
                {
                    faction = "DAC_Empire";
                    name = "Base Squad";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    side = 1;

                    class Object0
                    {
                        side = 1;
                        vehicle = "DAC_Unit_Imperial_Commando_SL";
                        description = "Squad Lead@Base";
                        rank = "SERGEANT";
                        position[] = { 0, 0, 0 };
                        dir = 0;
                        isPlayable = 1;
                    };
                    class Object1: Object0
                    {
                        vehicle = "DAC_Unit_Imperial_Commando_EOD";
                        description = "Explosives Specialist";
                        rank = "CORPORAL";
                        position[] = { 1, -1, 0 };
                    };
                    class Object2: Object1
                    {
                        vehicle = "DAC_Unit_Imperial_Commando_Tech";
                        description = "Tech Specialist";
                        position[] = { -1, -1, 0 };
                    };
                    class Object3: Object1
                    {
                        vehicle = "DAC_Unit_Imperial_Commando_DM";
                        description = "Designated Marksman";
                        position[] = { 2, -2, 0 };
                    };
                };
            };
        };
    };

    class East
    {
        class DAC_Empire
        {
            name = "[DA] Galactic Empire";

            class DAC_Commandos
            {
                name = "Commando Squads";
                class Base
                {
                    faction = "DAC_Empire";
                    name = "Base Squad";
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    side = 0;

                    class Object0
                    {
                        side = 0;
                        vehicle = "DAC_Unit_Imperial_Commando_SL_OPFOR";
                        description = "Squad Lead@Base";
                        rank = "SERGEANT";
                        position[] = { 0, 0, 0 };
                        dir = 0;
                        isPlayable = 1;
                    };
                    class Object1: Object0
                    {
                        vehicle = "DAC_Unit_Imperial_Commando_EOD_OPFOR";
                        description = "Explosives Specialist";
                        rank = "CORPORAL";
                        position[] = { 1, -1, 0 };
                    };
                    class Object2: Object1
                    {
                        vehicle = "DAC_Unit_Imperial_Commando_Tech_OPFOR";
                        description = "Tech Specialist";
                        position[] = { -1, -1, 0 };
                    };
                    class Object3: Object1
                    {
                        vehicle = "DAC_Unit_Imperial_Commando_DM_OPFOR";
                        description = "Designated Marksman";
                        position[] = { 2, -2, 0 };
                    };
                };
            };
        };
    };
};