class CfgWeapons
{
    class DAC_Helmet_Commando_Base;
    class DAC_Helmet_XRay_SL: DAC_Helmet_Commando_Base
    {
        displayName = "[DA] Katarn I Clone Commando Helmet (X-Ray [Nix])";
        hiddenSelectionsTextures[] =
        {
            "\DA\DAC\Customs\data\helmets\commando\xray\SL_camo1.paa",
            "\DA\DAC\Customs\data\helmets\commando\xray\SL_camo1.paa"
        };
    };
    class DAC_Helmet_XRay_EOD: DAC_Helmet_Commando_Base
    {
        displayName = "[DA] Katarn I Clone Commando Helmet (X-Ray [Dart])";
        hiddenSelectionsTextures[] =
        {
            "\DA\DAC\Customs\data\helmets\commando\xray\EOD_camo1.paa",
            "\DA\DAC\Customs\data\helmets\commando\xray\EOD_camo1.paa"
        };
    };
    class DAC_Helmet_XRay_Medic: DAC_Helmet_Commando_Base
    {
        displayName = "[DA] Katarn I Clone Commando Helmet (X-Ray [Doktor])";
        hiddenSelectionsTextures[] =
        {
            "\DA\DAC\Customs\data\helmets\commando\xray\Medic_camo1.paa",
            "\DA\DAC\Customs\data\helmets\commando\xray\Medic_camo1.paa"
        };
    };
    class DAC_Helmet_XRay_DM: DAC_Helmet_Commando_Base
    {
        displayName = "[DA] Katarn I Clone Commando Helmet (X-Ray [Frost])";
        hiddenSelectionsTextures[] =
        {
            "\DA\DAC\Customs\data\helmets\commando\xray\DM_camo1.paa",
            "\DA\DAC\Customs\data\helmets\commando\xray\DM_camo1.paa"
        };
    };

    class DAC_Helmet_Zulu_SL: DAC_Helmet_Commando_Base
    {
        displayName = "[DA] Katarn I Clone Commando Helmet (Zulu [Galahad])";
        hiddenSelectionsTextures[] =
        {
            "\DA\DAC\Customs\data\helmets\commando\zulu\SL_camo1.paa",
            "\DA\DAC\Customs\data\helmets\commando\zulu\SL_camo1.paa"
        };
    };
    class DAC_Helmet_Zulu_EOD: DAC_Helmet_Commando_Base
    {
        displayName = "[DA] Katarn I Clone Commando Helmet (Zulu [Thor])";
        hiddenSelectionsTextures[] =
        {
            "\DA\DAC\Customs\data\helmets\commando\zulu\EOD_camo1.paa",
            "\DA\DAC\Customs\data\helmets\commando\zulu\EOD_camo1.paa"
        };
    };
    class DAC_Helmet_Zulu_Medic: DAC_Helmet_Commando_Base
    {
        displayName = "[DA] Katarn I Clone Commando Helmet (Zulu [Cherryy])";
        hiddenSelectionsTextures[] =
        {
            "\DA\DAC\Customs\data\helmets\commando\zulu\Medic_camo1.paa",
            "\DA\DAC\Customs\data\helmets\commando\zulu\Medic_camo1.paa"
        };
    };
    class DAC_Helmet_Zulu_DM: DAC_Helmet_Commando_Base
    {
        displayName = "[DA] Katarn I Clone Commando Helmet (Zulu [Cyan])";
        hiddenSelectionsTextures[] =
        {
            "\DA\DAC\Customs\data\helmets\commando\zulu\DM_camo1.paa",
            "\DA\DAC\Customs\data\helmets\commando\zulu\DM_camo1.paa"
        };
    };

    class ls_sob_commando_uniform;
    class DAC_Uniform_Commando_Base: ls_sob_commando_uniform
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

    class DAC_Uniform_Zulu_SL: DAC_Uniform_Commando_Base
    {
        author = "Cyan";
        displayName = "[DA] Katarn I Clone Commando Armor (Zulu [Galahad])";
        class ItemInfo: ItemInfo
        {
            uniformClass = "DAC_Unit_Zulu_SL";
        };
    };
    class DAC_Uniform_Zulu_EOD: DAC_Uniform_Commando_Base
    {
        author = "Cyan";
        displayName = "[DA] Katarn I Clone Commando Armor (Zulu [Thor])";
        class ItemInfo: ItemInfo
        {
            uniformClass = "DAC_Unit_Zulu_EOD";
        };
    };
    class DAC_Uniform_Zulu_Medic: DAC_Uniform_Commando_Base
    {
        author = "Cyan";
        displayName = "[DA] Katarn I Clone Commando Armor (Zulu [Cherryy])";
        class ItemInfo: ItemInfo
        {
            uniformClass = "DAC_Unit_Zulu_Medic";
        };
    };
    class DAC_Uniform_Zulu_DM: DAC_Uniform_Commando_Base
    {
        author = "Cyan";
        displayName = "[DA] Katarn I Clone Commando Armor (Zulu [Cyan])";
        class ItemInfo: ItemInfo
        {
            uniformClass = "DAC_Unit_Zulu_DM";
        };
    };
};