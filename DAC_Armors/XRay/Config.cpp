#include "CfgPatches.hpp"
#include "\DAC_Armors\Macros.hpp"

class CfgEditorSubcategories
{
    class DAC_XRay
    {
        displayName = "X-Ray Clone Commando Squad";
    };
};


class CfgWeapons
{
    class ItemInfo;
    // ┌───────────────────┐
    // │      Helmets      │
    // └───────────────────┘
    class DAC_Helmet_Commando_Base;
    class DAC_Helmet_XRay_SL: DAC_Helmet_Commando_Base
    {
        displayName = "[DA] Katarn I Clone Commando Helmet (X-Ray [Nix])";
        hiddenSelectionsTextures[] =
        {
            "DAC_Armors\XRay\Data\Helmets\XRay_Helmet_SL.paa",
            "DAC_Armors\XRay\Data\Helmets\XRay_Helmet_SL.paa"
        };
    };
    class DAC_Helmet_XRay_EOD: DAC_Helmet_Commando_Base
    {
        displayName = "[DA] Katarn I Clone Commando Helmet (X-Ray [Dart])";
        hiddenSelectionsTextures[] =
        {
            "DAC_Armors\XRay\Data\Helmets\XRay_Helmet_EOD.paa",
            "DAC_Armors\XRay\Data\Helmets\XRay_Helmet_EOD.paa"
        };
    };
    class DAC_Helmet_XRay_Medic: DAC_Helmet_Commando_Base
    {
        displayName = "[DA] Katarn I Clone Commando Helmet (X-Ray [Doktor])";
        hiddenSelectionsTextures[] =
        {
            "DAC_Armors\XRay\Data\Helmets\XRay_Helmet_Medic.paa",
            "DAC_Armors\XRay\Data\Helmets\XRay_Helmet_Medic.paa"
        };
    };
    class DAC_Helmet_XRay_DM: DAC_Helmet_Commando_Base
    {
        displayName = "[DA] Katarn I Clone Commando Helmet (X-Ray [Frost])";
        hiddenSelectionsTextures[] =
        {
            "DAC_Armors\XRay\Data\Helmets\XRay_Helmet_DM.paa",
            "DAC_Armors\XRay\Data\Helmets\XRay_Helmet_DM.paa"
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
    class DAC_Uniform_XRay_SL: DAC_Uniform_Commando_Base
    {
        displayName = "[DA] Katarn I Clone Commando Armor (X-Ray [Nix])";
        class ItemInfo: ItemInfo
        {
            uniformClass = "DAC_Unit_XRay_SL";
        };
    };
    class DAC_Uniform_XRay_EOD: DAC_Uniform_Commando_Base
    {
        displayName = "[DA] Katarn I Clone Commando Armor (X-Ray [Dart])";
        class ItemInfo: ItemInfo
        {
            uniformClass = "DAC_Unit_XRay_EOD";
        };
    };
    class DAC_Uniform_XRay_Medic: DAC_Uniform_Commando_Base
    {
        displayName = "[DA] Katarn I Clone Commando Armor (X-Ray [Doktor])";
        class ItemInfo: ItemInfo
        {
            uniformClass = "DAC_Unit_XRay_Medic";
        };
    };
    class DAC_Uniform_XRay_DM: DAC_Uniform_Commando_Base
    {
        displayName = "[DA] Katarn I Clone Commando Armor (X-Ray [Frost])";
        class ItemInfo: ItemInfo
        {
            uniformClass = "DAC_Unit_XRay_DM";
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

    class DAC_Unit_XRay_SL: DAC_Unit_Commando_SL_Base
    {
        displayName = "Clone Commando Squad Leader (X-Ray [Nix])";
        editorSubcategory = "DAC_XRay";

        uniformClass = "DAC_Uniform_XRay_SL";
        hiddenSelectionsTextures[] =
        {
            "DAC_Armors\XRay\Data\Uniforms\XRay_Uniform_SL_Upper.paa",
            "DAC_Armors\XRay\Data\Uniforms\XRay_Uniform_SL2_Lower.paa"
        };

        linkedItems[] =
        {
            "DAC_Helmet_XRay_SL", "DAC_Vest_Commando_SL_Base", "DAC_Commando_Hud", "ItemMap", "SWLB_comlink", "ItemCompass"
        };
        respawnLinkedItems[] =
        {
            "DAC_Helmet_XRay_SL", "DAC_Vest_Commando_SL_Base", "DAC_Commando_Hud", "ItemMap", "SWLB_comlink", "ItemCompass"
        };
        backpack = "DAC_Backpack_XRay_SL";
    };
    class DAC_Unit_XRay_EOD: DAC_Unit_Commando_EOD_Base
    {
        displayName = "Clone Commando Explosives Specialist (X-Ray [Dart])";
        editorSubcategory = "DAC_XRay";

        uniformClass = "DAC_Uniform_XRay_EOD";
        hiddenSelectionsTextures[] =
        {
            "DAC_Armors\XRay\Data\Uniforms\XRay_Uniform_EOD_Upper.paa",
            "DAC_Armors\XRay\Data\Uniforms\XRay_Uniform_EOD_Lower.paa"
        };

        linkedItems[] =
        {
            "DAC_Helmet_XRay_EOD", "DAC_Vest_Commando_EOD_Base", "DAC_Commando_Hud", "ItemMap", "SWLB_comlink", "ItemCompass"
        };
        respawnLinkedItems[] =
        {
            "DAC_Helmet_XRay_EOD", "DAC_Vest_Commando_EOD_Base", "DAC_Commando_Hud", "ItemMap", "SWLB_comlink", "ItemCompass"
        };
        backpack = "DAC_Backpack_XRay_EOD";
    };
    class DAC_Unit_XRay_Medic: DAC_Unit_Commando_Tech_Base
    {
        displayName = "Clone Commando Medic (X-Ray [Doktor])";
        editorSubcategory = "DAC_XRay";

        uniformClass = "DAC_Uniform_XRay_Medic";
        hiddenSelectionsTextures[] =
        {
            "DAC_Armors\XRay\Data\Uniforms\XRay_Uniform_Medic2_Upper.paa",
            "DAC_Armors\XRay\Data\Uniforms\XRay_Uniform_Medic_Lower.paa"
        };

        linkedItems[] =
        {
            "DAC_Helmet_XRay_Medic", "DAC_Vest_Commando_Base", "DAC_Commando_Hud", "ItemMap", "SWLB_comlink", "ItemCompass"
        };
        respawnLinkedItems[] =
        {
            "DAC_Helmet_XRay_Medic", "DAC_Vest_Commando_Base", "DAC_Commando_Hud", "ItemMap", "SWLB_comlink", "ItemCompass"
        };
        backpack = "DAC_Backpack_XRay_Medic";
    };
    class DAC_Unit_XRay_DM: DAC_Unit_Commando_DM_Base
    {
        displayName = "Clone Commando Designated Marksman (X-Ray [Frost])";
        editorSubcategory = "DAC_XRay";

        uniformClass = "DAC_Uniform_XRay_DM";
        hiddenSelectionsTextures[] =
        {
            "DAC_Armors\XRay\Data\Uniforms\XRay_Uniform_DM_Upper.paa",
            "DAC_Armors\XRay\Data\Uniforms\XRay_Uniform_DM_Lower.paa"
        };

        linkedItems[] =
        {
            "DAC_Helmet_XRay_DM", "DAC_Vest_Commando_DM_Base", "DAC_Commando_Hud", "ItemMap", "SWLB_comlink", "ItemCompass"
        };
        respawnLinkedItems[] =
        {
            "DAC_Helmet_XRay_DM", "DAC_Vest_Commando_DM_Base", "DAC_Commando_Hud", "ItemMap", "SWLB_comlink", "ItemCompass"
        };
        backpack = "DAC_Backpack_XRay_DM";
    };

    // ┌───────────────────┐
    // │     Backpacks     │
    // └───────────────────┘
    class DAC_Backpack_RTO_Base;
    class DAC_Backpack_EOD_Base;
    class DAC_Backpack_Tech_Base;
    class DAC_Backpack_Base;

    class DAC_Backpack_XRay_SL: DAC_Backpack_RTO_Base
    {
        displayName = "[DA] Katarn II Clone Commando RTO Backpack (X-Ray [Nix])";
        hiddenSelectionsTextures[] =
        {
            "DAC_Armors\XRay\Data\Backpacks\XRay_BP_SL2.paa",
            "DAC_Armors\XRay\Data\Backpacks\XRay_BP_SL2.paa"
        };
    };
    class DAC_Backpack_XRay_SL_Huge: DAC_Backpack_XRay_SL
    {
        displayName = "[DA] Katarn II Clone Commando RTO Backpack (X-Ray [Nix]) (Huge)";
        maximumLoad = HUGE_SIZE;
    };

    class DAC_Backpack_XRay_EOD: DAC_Backpack_EOD_Base
    {
        displayName = "[DA] Katarn II Clone Commando EOD Backpack (X-Ray [Dart])";
        hiddenSelectionsTextures[] =
        {
            "DAC_Armors\XRay\Data\Backpacks\XRay_BP_EOD.paa",
            "DAC_Armors\XRay\Data\Backpacks\XRay_BP_EOD.paa"
        };
    };
    class DAC_Backpack_XRay_EOD_Huge: DAC_Backpack_XRay_EOD
    {
        displayName = "[DA] Katarn II Clone Commando EOD Backpack (X-Ray [Dart]) (Huge)";
        maximumLoad = HUGE_SIZE;
    };

    class DAC_Backpack_XRay_Medic: DAC_Backpack_Tech_Base
    {
        displayName = "[DA] Katarn II Clone Commando Medic Backpack (X-Ray [Doktor])";
        hiddenSelectionsTextures[] =
        {
            "DAC_Armors\XRay\Data\Backpacks\XRay_BP_Medic_Base.paa",
            "DAC_Armors\XRay\Data\Backpacks\XRay_BP_Medic_Base.paa",
            "DAC_Armors\XRay\Data\Backpacks\XRay_BP_Medic_Addon.paa"
        };
    };
    class DAC_Backpack_XRay_Medic_Huge: DAC_Backpack_XRay_Medic
    {
        displayName = "[DA] Katarn II Clone Commando Medic Backpack (X-Ray [Doktor]) (Huge)";
        maximumLoad = HUGE_SIZE;
    };

    class DAC_Backpack_XRay_DM: DAC_Backpack_Base
    {
        displayName = "[DA] Katarn II Clone Commando Backpack (X-Ray [Frost])";
        hiddenSelectionsTextures[] =
        {
            "DAC_Armors\XRay\Data\Backpacks\XRay_BP_DM.paa",
            "DAC_Armors\XRay\Data\Backpacks\XRay_BP_DM.paa"
        };
    };
    class DAC_Backpack_XRay_DM_Huge: DAC_Backpack_XRay_DM
    {
        displayName = "[DA] Katarn II Clone Commando Backpack (X-Ray [Frost]) (Huge)";
        maximumLoad = HUGE_SIZE;
    };

    class DAC_HelmetHolder_Commando_Base;
    HELMET_HOLDER(DAC_HelmetHolder_XRay_SL, Katarn I Helmet (X-Ray [Nix]), DAC_Helmet_XRay_SL);
    HELMET_HOLDER(DAC_HelmetHolder_XRay_EOD, Katarn I Helmet (X-Ray [Dart]), DAC_Helmet_XRay_EOD);
    HELMET_HOLDER(DAC_HelmetHolder_XRay_Medic, Katarn I Helmet (X-Ray [Doktor]), DAC_Helmet_XRay_Medic);
    HELMET_HOLDER(DAC_HelmetHolder_XRay_DM, Katarn I Helmet (X-Ray [Frost]), DAC_Helmet_XRay_DM);
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
                class XRay
                {
                    faction = "DAC_Republic";
                    name = "X-Ray Squad";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    side = 1;

                    class Object0
                    {
                        side = 1;
                        vehicle = "DAC_Unit_XRay_SL";
                        description = "Squad Lead@X-Ray";
                        rank = "SERGEANT";
                        position[] = { 0, 0, 0 };
                        dir = 0;
                        isPlayable = 1;
                    };
                    class Object1: Object0
                    {
                        vehicle = "DAC_Unit_XRay_EOD";
                        description = "Explosives Specialist";
                        rank = "CORPORAL";
                        position[] = { 1, -1, 0 };
                    };
                    class Object2: Object1
                    {
                        vehicle = "DAC_Unit_XRay_Medic";
                        description = "Medic";
                        position[] = { -1, -1, 0 };
                    };
                    class Object3: Object1
                    {
                        vehicle = "DAC_Unit_XRay_DM";
                        description = "Designated Marksman";
                        position[] = { 2, -2, 0 };
                    };
                };
            };
        };
    };
};