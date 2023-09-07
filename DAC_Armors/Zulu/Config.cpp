#include "CfgPatches.hpp"
#include "\DAC_Armors\Macros.hpp"

class CfgEditorSubcategories
{
    class DAC_Zulu
    {
        displayName = "Zulu Clone Commando Squad";
    };
};


class CfgWeapons
{
    class ItemInfo;
    // ┌───────────────────┐
    // │      Helmets      │
    // └───────────────────┘
    class DAC_Helmet_Commando_Base;

    class DAC_Helmet_Zulu_SL: DAC_Helmet_Commando_Base
    {
        displayName = "[DA] Katarn I Clone Commando Helmet (Zulu [Galahad])";
        hiddenSelectionsTextures[] =
        {
            "DAC_Armors\Zulu\Data\Helmets\Zulu_Helmet_SL.paa",
            "DAC_Armors\Zulu\Data\Helmets\Zulu_Helmet_SL.paa"
        };
    };
    class DAC_Helmet_Zulu_EOD: DAC_Helmet_Commando_Base
    {
        displayName = "[DA] Katarn I Clone Commando Helmet (Zulu [Thor])";
        hiddenSelectionsTextures[] =
        {
            "DAC_Armors\Zulu\Data\Helmets\Zulu_Helmet_EOD.paa",
            "DAC_Armors\Zulu\Data\Helmets\Zulu_Helmet_EOD.paa"
        };
    };
    class DAC_Helmet_Zulu_Medic : DAC_Helmet_Commando_Base
    {
        displayName = "[DA] Katarn I Clone Commando Helmet (Zulu [Cherryy])";
        hiddenSelectionsTextures[] =
        {
            "DAC_Armors\Zulu\Data\Helmets\Zulu_Helmet_Medic.paa",
            "DAC_Armors\Zulu\Data\Helmets\Zulu_Helmet_Medic.paa"
        };
    };
    class DAC_Helmet_Zulu_DM: DAC_Helmet_Commando_Base
    {
        displayName = "[DA] Katarn I Clone Commando Helmet (Zulu [Cyan])";
        hiddenSelectionsTextures[] =
        {
            "DAC_Armors\Zulu\Data\Helmets\Zulu_Helmet_DM.paa",
            "DAC_Armors\Zulu\Data\Helmets\Zulu_Helmet_DM.paa"
        };
    };

    // ┌────────────────────┐
    // │      Uniforms      │
    // └────────────────────┘
    class SWLB_clone_commando_uniform_k1;
    class DAC_Uniform_Commando_Base: SWLB_clone_commando_uniform_k1
    {
        class ItemInfo;
    };

    class DAC_Uniform_Zulu_SL: DAC_Uniform_Commando_Base
    {
        displayName = "[DA] Katarn I Clone Commando Armor (Zulu [Galahad])";
        class ItemInfo: ItemInfo
        {
            uniformClass = "DAC_Unit_Zulu_SL";
        };
    };
    class DAC_Uniform_Zulu_EOD: DAC_Uniform_Commando_Base
    {
        displayName = "[DA] Katarn I Clone Commando Armor (Zulu [Thor])";
        class ItemInfo: ItemInfo
        {
            uniformClass = "DAC_Unit_Zulu_EOD";
        };
    };
    class DAC_Uniform_Zulu_Medic: DAC_Uniform_Commando_Base
    {
        displayName = "[DA] Katarn I Clone Commando Armor (Zulu [Cherryy])";
        class ItemInfo: ItemInfo
        {
            uniformClass = "DAC_Unit_Zulu_Medic";
        };
    };
    class DAC_Uniform_Zulu_DM: DAC_Uniform_Commando_Base
    {
        displayName = "[DA] Katarn I Clone Commando Armor (Zulu [Cyan])";
        class ItemInfo: ItemInfo
        {
            uniformClass = "DAC_Unit_Zulu_DM";
        };
    };
};


class CfgVehicles
{
    // ┌───────────────────┐
    // │       Units       │
    // └───────────────────┘
    class DAC_Unit_Commando_SL_Base;
    class DAC_Unit_Commando_EOD_Base;
    class DAC_Unit_Commando_Tech_Base;
    class DAC_Unit_Commando_DM_Base;

    class DAC_Unit_Zulu_SL: DAC_Unit_Commando_SL_Base
    {
        displayName = "Clone Commando Squad Leader (Zulu [Galahad])";
        editorSubcategory = "DAC_Zulu";

        uniformClass = "DAC_Uniform_Zulu_SL";
        hiddenSelectionsTextures[] =
        {
            "DAC_Armors\Zulu\Data\Uniforms\Zulu_Uniform_SL_Upper.paa",
            "DAC_Armors\Zulu\Data\Uniforms\Zulu_Uniform_SL_Lower.paa"
        };

        linkedItems[] =
        {
            "DAC_Helmet_Zulu_SL", "DAC_Vest_Commando_SL_Base", "DAC_Commando_Hud", "ItemMap", "SWLB_comlink", "ItemCompass"
        };
        respawnLinkedItems[] =
        {
            "DAC_Helmet_Zulu_SL", "DAC_Vest_Commando_SL_Base", "DAC_Commando_Hud", "ItemMap", "SWLB_comlink", "ItemCompass"
        };
        backpack = "DAC_Backpack_Zulu_SL";
    };
    class DAC_Unit_Zulu_EOD: DAC_Unit_Commando_EOD_Base
    {
        displayName = "Clone Commando Explosives Specialist (Zulu [Thor])";
        editorSubcategory = "DAC_Zulu";

        uniformClass = "DAC_Uniform_Zulu_EOD";
        hiddenSelectionsTextures[] =
        {
            "DAC_Armors\Zulu\Data\Uniforms\Zulu_Uniform_EOD_Upper.paa",
            "DAC_Armors\Zulu\Data\Uniforms\Zulu_Uniform_EOD_Lower.paa"
        };

        linkedItems[] =
        {
            "DAC_Helmet_Zulu_EOD", "DAC_Vest_Commando_EOD_Base", "DAC_Commando_Hud", "ItemMap", "SWLB_comlink", "ItemCompass"
        };
        respawnLinkedItems[] =
        {
            "DAC_Helmet_Zulu_EOD", "DAC_Vest_Commando_EOD_Base", "DAC_Commando_Hud", "ItemMap", "SWLB_comlink", "ItemCompass"
        };
        backpack = "DAC_Backpack_Zulu_EOD";
    };
    class DAC_Unit_Zulu_Medic: DAC_Unit_Commando_Tech_Base
    {
        displayName = "Clone Commando Medic (Zulu [Cherryy])";
        editorSubcategory = "DAC_Zulu";

        uniformClass = "DAC_Uniform_Zulu_Medic";
        hiddenSelectionsTextures[] =
        {
            "DAC_Armors\Zulu\Data\Uniforms\Zulu_Uniform_Medic_Upper.paa",
            "DAC_Armors\Zulu\Data\Uniforms\Zulu_Uniform_Medic_Lower.paa"
        };

        linkedItems[] =
        {
            "DAC_Helmet_Zulu_Medic", "DAC_Vest_Commando_Base", "DAC_Commando_Hud", "ItemMap", "SWLB_comlink", "ItemCompass"
        };
        respawnLinkedItems[] =
        {
            "DAC_Helmet_Zulu_Medic", "DAC_Vest_Commando_Base", "DAC_Commando_Hud", "ItemMap", "SWLB_comlink", "ItemCompass"
        };
        backpack = "DAC_Backpack_Zulu_Medic";
    };
    class DAC_Unit_Zulu_DM: DAC_Unit_Commando_DM_Base
    {
        displayName = "Clone Commando Designated Marksman (Zulu [Cyan])";
        editorSubcategory = "DAC_Zulu";

        uniformClass = "DAC_Uniform_Zulu_DM";
        hiddenSelectionsTextures[] =
        {
            "DAC_Armors\Zulu\Data\Uniforms\Zulu_Uniform_DM_Upper.paa",
            "DAC_Armors\Zulu\Data\Uniforms\Zulu_Uniform_DM_Lower.paa"
        };

        linkedItems[] =
        {
            "DAC_Helmet_Zulu_DM", "DAC_Vest_Commando_DM_Base", "DAC_Commando_Hud", "ItemMap", "SWLB_comlink", "ItemCompass"
        };
        respawnLinkedItems[] =
        {
            "DAC_Helmet_Zulu_DM", "DAC_Vest_Commando_DM_Base", "DAC_Commando_Hud", "ItemMap", "SWLB_comlink", "ItemCompass"
        };
        backpack = "DAC_Backpack_Zulu_DM";
    };

    // ┌───────────────────┐
    // │     Backpacks     │
    // └───────────────────┘
    class DAC_Backpack_RTO_Base;
    class DAC_Backpack_EOD_Base;
    class DAC_Backpack_Tech_Base;
    class DAC_Backpack_Base;

    class DAC_Backpack_Zulu_SL: DAC_Backpack_RTO_Base
    {
        displayName = "[DA] Katarn II Clone Commando RTO Backpack (Zulu [Galahad])";
        hiddenSelectionsTextures[] =
        {
            "DAC_Armors\Zulu\Data\Backpacks\Zulu_BP_SL.paa",
            "DAC_Armors\Zulu\Data\Backpacks\Zulu_BP_SL.paa"
        };
    }
    class DAC_Backpack_Zulu_SL_Huge: DAC_Backpack_Zulu_SL
    {
        displayName = "[DA] Katarn II Clone Commando RTO Backpack (Zulu [Galahad]) (Huge)";
        maximumLoad = HUGE_SIZE;
    }

    class DAC_Backpack_Zulu_EOD: DAC_Backpack_EOD_Base
    {
        displayName = "[DA] Katarn II Clone Commando EOD Backpack (Zulu [Thor])";
        hiddenSelectionsTextures[] =
        {
            "DAC_Armors\Zulu\Data\Backpacks\Zulu_BP_EOD.paa",
            "DAC_Armors\Zulu\Data\Backpacks\Zulu_BP_EOD.paa"
        };
    };
    class DAC_Backpack_Zulu_EOD_Huge: DAC_Backpack_Zulu_EOD
    {
        displayName = "[DA] Katarn II Clone Commando EOD Backpack (Zulu [Thor]) (Huge)";
        maximumLoad = HUGE_SIZE;
    };

    class DAC_Backpack_Zulu_Medic : DAC_Backpack_Tech_Base
    {
        displayName = "[DA] Katarn II Clone Commando Medic Backpack (Zulu [Cherryy])";
        hiddenSelectionsTextures[] =
            {
                "DAC_Armors\Zulu\Data\Backpacks\Zulu_BP_Medic_Base.paa",
                "DAC_Armors\Zulu\Data\Backpacks\Zulu_BP_Medic_Base.paa",
                "DAC_Armors\Zulu\Data\Backpacks\Zulu_BP_Medic_Addon.paa"
            };
    };
    class DAC_Backpack_Zulu_Medic_Huge : DAC_Backpack_Zulu_Medic
    {
        displayName = "[DA] Katarn II Clone Commando Medic Backpack (Zulu [Cherryy]) (Huge)";
        maximumLoad = HUGE_SIZE;
    };

    class DAC_Backpack_Zulu_DM: DAC_Backpack_Base
    {
        displayName = "[DA] Katarn II Clone Commando Backpack (Zulu [Cyan])";
        hiddenSelectionsTextures[] =
        {
            "DAC_Armors\Zulu\Data\Backpacks\Zulu_BP_DM.paa",
            "DAC_Armors\Zulu\Data\Backpacks\Zulu_BP_DM.paa"
        };
    };
    class DAC_Backpack_Zulu_DM_Huge: DAC_Backpack_Zulu_DM
    {
        displayName = "[DA] Katarn II Clone Commando Backpack (Zulu [Cyan]) (Huge)";
        maximumLoad = HUGE_SIZE;
    };

    class DAC_HelmetHolder_Commando_Base;
    HELMET_HOLDER(DAC_HelmetHolder_Zulu_SL, Katarn I Helmet (Zulu [Galahad]), DAC_Helmet_Zulu_SL);
    HELMET_HOLDER(DAC_HelmetHolder_Zulu_EOD, Katarn I Helmet (Zulu [Thor]), DAC_Helmet_Zulu_EOD);
    HELMET_HOLDER(DAC_HelmetHolder_Zulu_Medic, Katarn I Helmet (Zulu [Cherryy]), DAC_Helmet_Zulu_Medic);
    HELMET_HOLDER(DAC_HelmetHolder_Zulu_DM, Katarn I Helmet (Zulu [Cyan]), DAC_Helmet_Zulu_DM);
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
                class Zulu
                {
                    faction = "DAC_Republic";
                    name = "Zulu Squad";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    side = 1;

                    class Object0
                    {
                        side = 1;
                        vehicle = "DAC_Unit_Zulu_SL";
                        description = "Squad Lead@Zulu";
                        rank = "SERGEANT";
                        position[] = { 0, 0, 0 };
                        dir = 0;
                        isPlayable = 1;
                    };
                    class Object1: Object0
                    {
                        vehicle = "DAC_Unit_Zulu_EOD";
                        description = "Explosives Specialist";
                        rank = "CORPORAL";
                        position[] = { 1, -1, 0 };
                    };
                    class Object2: Object1
                    {
                        vehicle = "DAC_Unit_Zulu_Medic";
                        description = "Medic";
                        position[] = { -1, -1, 0 };
                    };
                    class Object3: Object1
                    {
                        vehicle = "DAC_Unit_Zulu_DM";
                        description = "Designated Marksman";
                        position[] = { 2, -2, 0 };
                    };
                };
            };
        };
    };
};