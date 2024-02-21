class CfgWeapons
{
    // ┌───────────────────┐
    // │      Helmets      │
    // └───────────────────┘
    class CLASS(Helmet_Commando_Base);
    class CLASS(Helmet_XRay_SL): CLASS(Helmet_Commando_Base)
    {
        displayName = "[DA] Katarn I Clone Commando Helmet (X-Ray [Nix])";
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\helmets\commando\xray\SL_camo1_co.paa),
            QPATHTOF(data\helmets\commando\xray\SL_camo1_co.paa)
        };
    };
    class CLASS(Helmet_XRay_EOD): CLASS(Helmet_Commando_Base)
    {
        displayName = "[DA] Katarn I Clone Commando Helmet (X-Ray [Dart])";
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\helmets\commando\xray\EOD_camo1_co.paa),
            QPATHTOF(data\helmets\commando\xray\EOD_camo1_co.paa)
        };
    };
    class CLASS(Helmet_XRay_Medic): CLASS(Helmet_Commando_Base)
    {
        displayName = "[DA] Katarn I Clone Commando Helmet (X-Ray [Doktor])";
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\helmets\commando\xray\Medic_camo1_co.paa),
            QPATHTOF(data\helmets\commando\xray\Medic_camo1_co.paa)
        };
    };
    class CLASS(Helmet_XRay_DM): CLASS(Helmet_Commando_Base)
    {
        displayName = "[DA] Katarn I Clone Commando Helmet (X-Ray [Frost])";
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\helmets\commando\xray\DM_camo1_co.paa),
            QPATHTOF(data\helmets\commando\xray\DM_camo1_co.paa)
        };
    };

    class CLASS(Helmet_Zulu_SL): CLASS(Helmet_Commando_Base)
    {
        displayName = "[DA] Katarn I Clone Commando Helmet (Zulu [Galahad])";
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\helmets\commando\zulu\SL_camo1_co.paa),
            QPATHTOF(data\helmets\commando\zulu\SL_camo1_co.paa)
        };
    };
    class CLASS(Helmet_Zulu_EOD): CLASS(Helmet_Commando_Base)
    {
        displayName = "[DA] Katarn I Clone Commando Helmet (Zulu [Thor])";
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\helmets\commando\zulu\EOD_camo1_co.paa),
            QPATHTOF(data\helmets\commando\zulu\EOD_camo1_co.paa)
        };
    };
    class CLASS(Helmet_Zulu_Medic): CLASS(Helmet_Commando_Base)
    {
        displayName = "[DA] Katarn I Clone Commando Helmet (Zulu [Cherryy])";
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\helmets\commando\zulu\Medic_camo1_co.paa),
            QPATHTOF(data\helmets\commando\zulu\Medic_camo1_co.paa)
        };
    };
    class CLASS(Helmet_Zulu_DM): CLASS(Helmet_Commando_Base)
    {
        displayName = "[DA] Katarn I Clone Commando Helmet (Zulu [Cyan])";
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\helmets\commando\zulu\DM_camo1_co.paa),
            QPATHTOF(data\helmets\commando\zulu\DM_camo1_co.paa)
        };
    };

    // ┌────────────────────┐
    // │      Uniforms      │
    // └────────────────────┘
    class ls_sob_commando_uniform;
    class CLASS(Uniform_Commando_Base): ls_sob_commando_uniform
    {
        class ItemInfo;
    };
    class CLASS(Uniform_XRay_SL): CLASS(Uniform_Commando_Base)
    {
        displayName = "[DA] Katarn I Clone Commando Armor (X-Ray [Nix])";
        class ItemInfo: ItemInfo
        {
            uniformClass = QCLASS(Unit_XRay_SL);
        };
    };
    class CLASS(Uniform_XRay_EOD): CLASS(Uniform_Commando_Base)
    {
        displayName = "[DA] Katarn I Clone Commando Armor (X-Ray [Dart])";
        class ItemInfo: ItemInfo
        {
            uniformClass = QCLASS(Unit_XRay_EOD);
        };
    };
    class CLASS(Uniform_XRay_Medic): CLASS(Uniform_Commando_Base)
    {
        displayName = "[DA] Katarn I Clone Commando Armor (X-Ray [Doktor])";
        class ItemInfo: ItemInfo
        {
            uniformClass = QCLASS(Unit_XRay_Medic);
        };
    };
    class CLASS(Uniform_XRay_DM): CLASS(Uniform_Commando_Base)
    {
        displayName = "[DA] Katarn I Clone Commando Armor (X-Ray [Frost])";
        class ItemInfo: ItemInfo
        {
            uniformClass = QCLASS(Unit_XRay_DM);
        };
    };

    class CLASS(Uniform_Zulu_SL): CLASS(Uniform_Commando_Base)
    {
        author = "Cyan";
        displayName = "[DA] Katarn I Clone Commando Armor (Zulu [Galahad])";
        class ItemInfo: ItemInfo
        {
            uniformClass = QCLASS(Unit_Zulu_SL);
        };
    };
    class CLASS(Uniform_Zulu_EOD): CLASS(Uniform_Commando_Base)
    {
        author = "Cyan";
        displayName = "[DA] Katarn I Clone Commando Armor (Zulu [Thor])";
        class ItemInfo: ItemInfo
        {
            uniformClass = QCLASS(Unit_Zulu_EOD);
        };
    };
    class CLASS(Uniform_Zulu_Medic): CLASS(Uniform_Commando_Base)
    {
        author = "Cyan";
        displayName = "[DA] Katarn I Clone Commando Armor (Zulu [Cherryy])";
        class ItemInfo: ItemInfo
        {
            uniformClass = QCLASS(Unit_Zulu_Medic);
        };
    };
    class CLASS(Uniform_Zulu_DM): CLASS(Uniform_Commando_Base)
    {
        author = "Cyan";
        displayName = "[DA] Katarn I Clone Commando Armor (Zulu [Cyan])";
        class ItemInfo: ItemInfo
        {
            uniformClass = QCLASS(Unit_Zulu_DM);
        };
    };
};