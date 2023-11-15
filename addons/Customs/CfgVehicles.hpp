class CfgVehicles
{
    class DAC_Unit_Commando_SL_Base;
    class DAC_Unit_XRay_SL: DAC_Unit_Commando_SL_Base
    {
        displayName = "Clone Commando Squad Leader (X-Ray [Nix])";
        editorSubcategory = "DAC_XRay";

        uniformClass = "DAC_Uniform_XRay_SL";
        hiddenSelectionsTextures[] =
        {
            "\DA\DAC\Customs\data\uniforms\xray\SL_upper.paa",
            "\DA\DAC\Customs\data\uniforms\xray\SL2_lower.paa"
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
        editorSubcategory = "DAC_XRay";

        uniformClass = "DAC_Uniform_XRay_EOD";
        hiddenSelectionsTextures[] =
        {
            "\DA\DAC\Customs\data\uniforms\xray\EOD_upper.paa",
            "\DA\DAC\Customs\data\uniforms\xray\EOD_lower.paa"
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
        editorSubcategory = "DAC_XRay";

        uniformClass = "DAC_Uniform_XRay_Medic";
        hiddenSelectionsTextures[] =
        {
            "\DA\DAC\Customs\data\uniforms\xray\Medic2_upper.paa",
            "\DA\DAC\Customs\data\uniforms\xray\Medic_lower.paa"
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
        editorSubcategory = "DAC_XRay";

        uniformClass = "DAC_Uniform_XRay_DM";
        hiddenSelectionsTextures[] =
        {
            "\DA\DAC\Customs\data\uniforms\xray\DM_upper.paa",
            "\DA\DAC\Customs\data\uniforms\xray\DM_lower.paa"
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
};