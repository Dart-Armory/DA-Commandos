class CfgVehicles
{
    // ┌───────────────────┐
    // │       Units       │
    // └───────────────────┘
    class DAC_Unit_Commando_SL_Base;
    class DAC_Unit_XRay_SL: DAC_Unit_Commando_SL_Base
    {
        displayName = "Clone Commando Squad Leader (X-Ray [Nix])";
        editorSubcategory = "DAC_SOB_XRay";

        uniformClass = "DAC_Uniform_XRay_SL";
        hiddenSelectionsTextures[] =
        {
            "\DA\DAC\Customs\data\uniforms\commando\xray\SL_upper.paa",
            "\DA\DAC\Customs\data\uniforms\commando\xray\SL2_lower.paa"
        };

        linkedItems[] =
        {
            "DAC_Helmet_XRay_SL", "DAC_Vest_Commando_SL_Base", "DAC_NVG_Chip_NVTI", "DAC_Commando_Hud", "SWLB_comlink", LINKED_ITEMS
        };
        respawnLinkedItems[] =
        {
            "DAC_Helmet_XRay_SL", "DAC_Vest_Commando_SL_Base", "DAC_NVG_Chip_NVTI", "DAC_Commando_Hud", "SWLB_comlink", LINKED_ITEMS
        };
        backpack = "DAC_Backpack_XRay_SL";
    };

    class DAC_Unit_Commando_EOD_Base;
    class DAC_Unit_XRay_EOD: DAC_Unit_Commando_EOD_Base
    {
        displayName = "Clone Commando Explosives Specialist (X-Ray [Dart])";
        editorSubcategory = "DAC_SOB_XRay";

        uniformClass = "DAC_Uniform_XRay_EOD";
        hiddenSelectionsTextures[] =
        {
            "\DA\DAC\Customs\data\uniforms\commando\xray\EOD_upper.paa",
            "\DA\DAC\Customs\data\uniforms\commando\xray\EOD_lower.paa"
        };

        linkedItems[] =
        {
            "DAC_Helmet_XRay_EOD", "DAC_Vest_Commando_EOD_Base", "DAC_NVG_Chip_NV", "DAC_Commando_Hud", "SWLB_comlink", LINKED_ITEMS
        };
        respawnLinkedItems[] =
        {
            "DAC_Helmet_XRay_EOD", "DAC_Vest_Commando_EOD_Base", "DAC_NVG_Chip_NV", "DAC_Commando_Hud", "SWLB_comlink", LINKED_ITEMS
        };
        backpack = "DAC_Backpack_XRay_EOD";
    };

    class DAC_Unit_Commando_Tech_Base;
    class DAC_Unit_XRay_Medic: DAC_Unit_Commando_Tech_Base
    {
        displayName = "Clone Commando Medic (X-Ray [Doktor])";
        editorSubcategory = "DAC_SOB_XRay";

        uniformClass = "DAC_Uniform_XRay_Medic";
        hiddenSelectionsTextures[] =
        {
            "\DA\DAC\Customs\data\uniforms\commando\xray\Medic2_upper.paa",
            "\DA\DAC\Customs\data\uniforms\commando\xray\Medic_lower.paa"
        };

        linkedItems[] =
        {
            "DAC_Helmet_XRay_Medic", "DAC_Vest_Commando_Base", "DAC_NVG_Commando_Antenna", "DAC_Commando_Hud", "SWLB_comlink", LINKED_ITEMS
        };
        respawnLinkedItems[] =
        {
            "DAC_Helmet_XRay_Medic", "DAC_Vest_Commando_Base", "DAC_NVG_Commando_Antenna", "DAC_Commando_Hud", "SWLB_comlink", LINKED_ITEMS
        };
        backpack = "DAC_Backpack_XRay_Medic";
    };

    class DAC_Unit_Commando_DM_Base;
    class DAC_Unit_XRay_DM: DAC_Unit_Commando_DM_Base
    {
        displayName = "Clone Commando Designated Marksman (X-Ray [Frost])";
        editorSubcategory = "DAC_SOB_XRay";

        uniformClass = "DAC_Uniform_XRay_DM";
        hiddenSelectionsTextures[] =
        {
            "\DA\DAC\Customs\data\uniforms\commando\xray\DM_upper.paa",
            "\DA\DAC\Customs\data\uniforms\commando\xray\DM_lower.paa"
        };

        linkedItems[] =
        {
            "DAC_Helmet_XRay_DM", "DAC_Vest_Commando_DM_Base", "DAC_NVG_Chip_NVTI", "DAC_Commando_Hud", "SWLB_comlink", LINKED_ITEMS
        };
        respawnLinkedItems[] =
        {
            "DAC_Helmet_XRay_DM", "DAC_Vest_Commando_DM_Base", "DAC_NVG_Chip_NVTI", "DAC_Commando_Hud", "SWLB_comlink", LINKED_ITEMS
        };
        backpack = "DAC_Backpack_XRay_DM";
    };

    class DAC_Unit_Zulu_SL: DAC_Unit_Commando_SL_Base
    {
        author = "Cyan";
        displayName = "Clone Commando Squad Leader (Zulu [Galahad])";
        editorSubcategory = "DAC_SOB_Zulu";

        uniformClass = "DAC_Uniform_Zulu_SL";
        hiddenSelectionsTextures[] =
        {
            "\DA\DAC\Customs\data\uniforms\commando\zulu\SL_upper.paa",
            "\DA\DAC\Customs\data\uniforms\commando\zulu\SL_upper.paa"
        };

        linkedItems[] =
        {
            "DAC_Helmet_Zulu_SL", "DAC_Vest_Commando_SL_Base", "DAC_NVG_Chip_NVTI", "DAC_Commando_Hud", "SWLB_comlink", LINKED_ITEMS
        };
        respawnLinkedItems[] =
        {
            "DAC_Helmet_Zulu_SL", "DAC_Vest_Commando_SL_Base", "DAC_NVG_Chip_NVTI", "DAC_Commando_Hud", "SWLB_comlink", LINKED_ITEMS
        };
        backpack = "DAC_Backpack_Zulu_SL";
    };
    class DAC_Unit_Zulu_EOD: DAC_Unit_Commando_EOD_Base
    {
        author = "Cyan";
        displayName = "Clone Commando Explosives Specialist (Zulu [Thor])";
        editorSubcategory = "DAC_SOB_Zulu";

        uniformClass = "DAC_Uniform_Zulu_EOD";
        hiddenSelectionsTextures[] =
        {
            "\DA\DAC\Customs\data\uniforms\commando\zulu\EOD_upper.paa",
            "\DA\DAC\Customs\data\uniforms\commando\zulu\EOD_upper.paa"
        };

        linkedItems[] =
        {
            "DAC_Helmet_Zulu_EOD", "DAC_Vest_Commando_EOD_Base", "DAC_NVG_Chip_NV", "DAC_Commando_Hud", "SWLB_comlink", LINKED_ITEMS
        };
        respawnLinkedItems[] =
        {
            "DAC_Helmet_Zulu_EOD", "DAC_Vest_Commando_EOD_Base", "DAC_NVG_Chip_NV", "DAC_Commando_Hud", "SWLB_comlink", LINKED_ITEMS
        };
        backpack = "DAC_Backpack_Zulu_EOD";
    };
    class DAC_Unit_Zulu_Medic: DAC_Unit_Commando_Tech_Base
    {
        author = "Cyan";
        displayName = "Clone Commando Medic (Zulu [Cherryy])";
        editorSubcategory = "DAC_SOB_Zulu";

        uniformClass = "DAC_Uniform_Zulu_Medic";
        hiddenSelectionsTextures[] =
        {
            "\DA\DAC\Customs\data\uniforms\commando\zulu\Medic_upper.paa",
            "\DA\DAC\Customs\data\uniforms\commando\zulu\Medic_upper.paa"
        };

        linkedItems[] =
        {
            "DAC_Helmet_Zulu_Medic", "DAC_Vest_Commando_Base", "DAC_NVG_Commando_Antenna", "DAC_Commando_Hud", "SWLB_comlink", LINKED_ITEMS
        };
        respawnLinkedItems[] =
        {
            "DAC_Helmet_Zulu_Medic", "DAC_Vest_Commando_Base", "DAC_NVG_Commando_Antenna", "DAC_Commando_Hud", "SWLB_comlink", LINKED_ITEMS
        };
        backpack = "DAC_Backpack_Zulu_Medic";
    };
    class DAC_Unit_Zulu_DM: DAC_Unit_Commando_DM_Base
    {
        author = "Cyan";
        displayName = "Clone Commando Designated Marksman (Zulu [Cyan])";
        editorSubcategory = "DAC_SOB_Zulu";

        uniformClass = "DAC_Uniform_Zulu_DM";
        hiddenSelectionsTextures[] =
        {
            "\DA\DAC\Customs\data\uniforms\commando\zulu\DM_upper.paa",
            "\DA\DAC\Customs\data\uniforms\commando\zulu\DM_upper.paa"
        };

        linkedItems[] =
        {
            "DAC_Helmet_Zulu_DM", "DAC_Vest_Commando_DM_Base", "DAC_NVG_Commando_Visor", "DAC_Commando_Hud", "SWLB_comlink", LINKED_ITEMS
        };
        respawnLinkedItems[] =
        {
            "DAC_Helmet_Zulu_DM", "DAC_Vest_Commando_DM_Base", "DAC_NVG_Commando_Visor", "DAC_Commando_Hud", "SWLB_comlink", LINKED_ITEMS
        };
        backpack = "DAC_Backpack_Zulu_DM";
    };

    // ┌───────────────────┐
    // │     Backpacks     │
    // └───────────────────┘
    class DAC_Backpack_RTO_Base;
    class DAC_Backpack_XRay_SL: DAC_Backpack_RTO_Base
    {
        displayName = "[DA] Katarn II Clone Commando RTO Backpack (X-Ray [Nix])";
        hiddenSelectionsTextures[] =
        {
            "\DA\DAC\Customs\data\backpacks\commando\xray\SL2_camo1.paa",
            "\DA\DAC\Customs\data\backpacks\commando\xray\SL2_camo1.paa"
        };
    };
    class DAC_Backpack_XRay_SL_Huge: DAC_Backpack_XRay_SL
    {
        displayName = "[DA] Katarn II Clone Commando RTO Backpack (X-Ray [Nix]) (Huge)";
        maximumLoad = LOAD_BACKPACK_COMMANDO_HUGE;
    };

    class DAC_Backpack_EOD_Base;
    class DAC_Backpack_XRay_EOD: DAC_Backpack_EOD_Base
    {
        displayName = "[DA] Katarn II Clone Commando EOD Backpack (X-Ray [Dart])";
        hiddenSelectionsTextures[] =
        {
            "\DA\DAC\Customs\data\backpacks\commando\xray\EOD_camo1.paa",
            "\DA\DAC\Customs\data\backpacks\commando\xray\EOD_camo1.paa"
        };
    };
    class DAC_Backpack_XRay_EOD_Huge: DAC_Backpack_XRay_EOD
    {
        displayName = "[DA] Katarn II Clone Commando EOD Backpack (X-Ray [Dart]) (Huge)";
        maximumLoad = LOAD_BACKPACK_COMMANDO_HUGE;
    };

    class DAC_Backpack_Tech_Base;
    class DAC_Backpack_XRay_Medic: DAC_Backpack_Tech_Base
    {
        displayName = "[DA] Katarn II Clone Commando Medic Backpack (X-Ray [Doktor])";
        hiddenSelectionsTextures[] =
        {
            "\DA\DAC\Customs\data\backpacks\commando\xray\Medic_camo1.paa",
            "\DA\DAC\Customs\data\backpacks\commando\xray\Medic_camo1.paa",
            "\DA\DAC\Customs\data\backpacks\commando\xray\Medic_camo2.paa"
        };
    };
    class DAC_Backpack_XRay_Medic_Huge: DAC_Backpack_XRay_Medic
    {
        displayName = "[DA] Katarn II Clone Commando Medic Backpack (X-Ray [Doktor]) (Huge)";
        maximumLoad = LOAD_BACKPACK_COMMANDO_HUGE;
    };

    class DAC_Backpack_Base;
    class DAC_Backpack_XRay_DM: DAC_Backpack_Base
    {
        displayName = "[DA] Katarn II Clone Commando Backpack (X-Ray [Frost])";
        hiddenSelectionsTextures[] =
        {
            "\DA\DAC\Customs\data\backpacks\commando\xray\DM_camo1.paa",
            "\DA\DAC\Customs\data\backpacks\commando\xray\DM_camo1.paa"
        };
    };
    class DAC_Backpack_XRay_DM_Huge: DAC_Backpack_XRay_DM
    {
        displayName = "[DA] Katarn II Clone Commando Backpack (X-Ray [Frost]) (Huge)";
        maximumLoad = LOAD_BACKPACK_COMMANDO_HUGE;
    };

    class DAC_Backpack_Zulu_SL: DAC_Backpack_RTO_Base
    {
        displayName = "[DA] Katarn II Clone Commando RTO Backpack (Zulu [Galahad])";
        hiddenSelectionsTextures[] =
        {
            "\DA\DAC\Customs\data\backpacks\commando\zulu\SL_camo1.paa",
            "\DA\DAC\Customs\data\backpacks\commando\zulu\SL_camo1.paa"
        };
    };
    class DAC_Backpack_Zulu_SL_Huge: DAC_Backpack_Zulu_SL
    {
        displayName = "[DA] Katarn II Clone Commando RTO Backpack (Zulu [Galahad]) (Huge)";
        maximumLoad = LOAD_BACKPACK_COMMANDO_HUGE;
    };

    class DAC_Backpack_Zulu_EOD: DAC_Backpack_EOD_Base
    {
        displayName = "[DA] Katarn II Clone Commando EOD Backpack (Zulu [Thor])";
        hiddenSelectionsTextures[] =
        {
            "\DA\DAC\Customs\data\backpacks\commando\zulu\EOD_camo1.paa",
            "\DA\DAC\Customs\data\backpacks\commando\zulu\EOD_camo1.paa"
        };
    };
    class DAC_Backpack_Zulu_EOD_Huge: DAC_Backpack_Zulu_EOD
    {
        displayName = "[DA] Katarn II Clone Commando EOD Backpack (Zulu [Thor]) (Huge)";
        maximumLoad = LOAD_BACKPACK_COMMANDO_HUGE;
    };

    class DAC_Backpack_Zulu_Medic: DAC_Backpack_Tech_Base
    {
        displayName = "[DA] Katarn II Clone Commando Medic Backpack (Zulu [Cherryy])";
        hiddenSelectionsTextures[] =
        {
            "\DA\DAC\Customs\data\backpacks\commando\zulu\Medic_camo1.paa",
            "\DA\DAC\Customs\data\backpacks\commando\zulu\Medic_camo1.paa",
            "\DA\DAC\Customs\data\backpacks\commando\zulu\Medic_camo2.paa"
        };
    };
    class DAC_Backpack_Zulu_Medic_Huge: DAC_Backpack_Zulu_Medic
    {
        displayName = "[DA] Katarn II Clone Commando Medic Backpack (Zulu [Cherryy]) (Huge)";
        maximumLoad = LOAD_BACKPACK_COMMANDO_HUGE;
    };

    class DAC_Backpack_Zulu_DM: DAC_Backpack_Base
    {
        displayName = "[DA] Katarn II Clone Commando Backpack (Zulu [Cyan])";
        hiddenSelectionsTextures[] =
        {
            "\DA\DAC\Customs\data\backpacks\commando\zulu\DM_camo1.paa",
            "\DA\DAC\Customs\data\backpacks\commando\zulu\DM_camo1.paa"
        };
    };
    class DAC_Backpack_Zulu_DM_Huge: DAC_Backpack_Zulu_DM
    {
        displayName = "[DA] Katarn II Clone Commando Backpack (Zulu [Cyan]) (Huge)";
        maximumLoad = LOAD_BACKPACK_COMMANDO_HUGE;
    };
};