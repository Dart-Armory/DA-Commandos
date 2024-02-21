class CfgVehicles
{
    // ┌───────────────────┐
    // │       Units       │
    // └───────────────────┘
    class CLASS(Unit_Commando_SL_Base);
    class CLASS(Unit_XRay_SL): CLASS(Unit_Commando_SL_Base)
    {
        displayName = "Clone Commando Squad Leader (X-Ray [Nix])";
        editorSubcategory = QCLASS(Edsubcat_Commandos_XRay);
        editorPreview = QPATHTOF(data\previews\CLASS(Unit_XRay_SL2).jpg);

        uniformClass = QCLASS(Uniform_XRay_SL);
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\uniforms\commando\xray\SL_upper_co.paa),
            QPATHTOF(data\uniforms\commando\xray\SL2_lower_co.paa)
        };

        linkedItems[] =
        {
            QCLASS(Helmet_XRay_SL), QCLASS(Vest_Commando_SL_Base), QCLASS(NVG_Chip_NVTI), QCLASS(Commando_Hud), "SWLB_comlink", LINKED_ITEMS
        };
        respawnLinkedItems[] =
        {
            QCLASS(Helmet_XRay_SL), QCLASS(Vest_Commando_SL_Base), QCLASS(NVG_Chip_NVTI), QCLASS(Commando_Hud), "SWLB_comlink", LINKED_ITEMS
        };
        backpack = QCLASS(Backpack_XRay_SL);
    };

    class CLASS(Unit_Commando_EOD_Base);
    class CLASS(Unit_XRay_EOD): CLASS(Unit_Commando_EOD_Base)
    {
        displayName = "Clone Commando Explosives Specialist (X-Ray [Dart])";
        editorSubcategory = QCLASS(Edsubcat_Commandos_XRay);
        editorPreview = QPATHTOF(data\previews\CLASS(Unit_XRay_EOD).jpg);

        uniformClass = QCLASS(Uniform_XRay_EOD);
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\uniforms\commando\xray\EOD_upper_co.paa),
            QPATHTOF(data\uniforms\commando\xray\EOD_lower_co.paa)
        };

        linkedItems[] =
        {
            QCLASS(Helmet_XRay_EOD), QCLASS(Vest_Commando_EOD_Base), QCLASS(NVG_Chip_NV), QCLASS(Commando_Hud), "SWLB_comlink", LINKED_ITEMS
        };
        respawnLinkedItems[] =
        {
            QCLASS(Helmet_XRay_EOD), QCLASS(Vest_Commando_EOD_Base), QCLASS(NVG_Chip_NV), QCLASS(Commando_Hud), "SWLB_comlink", LINKED_ITEMS
        };
        backpack = QCLASS(Backpack_XRay_EOD);
    };

    class CLASS(Unit_Commando_Tech_Base);
    class CLASS(Unit_XRay_Medic): CLASS(Unit_Commando_Tech_Base)
    {
        displayName = "Clone Commando Medic (X-Ray [Doktor])";
        editorSubcategory = QCLASS(Edsubcat_Commandos_XRay);
        editorPreview = QPATHTOF(data\previews\CLASS(Unit_XRay_Medic).jpg);

        uniformClass = QCLASS(Uniform_XRay_Medic);
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\uniforms\commando\xray\Medic2_upper_co.paa),
            QPATHTOF(data\uniforms\commando\xray\Medic_lower_co.paa)
        };

        linkedItems[] =
        {
            QCLASS(Helmet_XRay_Medic), QCLASS(Vest_Commando_Base), QCLASS(NVG_Commando_Antenna), QCLASS(Commando_Hud), "SWLB_comlink", LINKED_ITEMS
        };
        respawnLinkedItems[] =
        {
            QCLASS(Helmet_XRay_Medic), QCLASS(Vest_Commando_Base), QCLASS(NVG_Commando_Antenna), QCLASS(Commando_Hud), "SWLB_comlink", LINKED_ITEMS
        };
        backpack = QCLASS(Backpack_XRay_Medic);
    };

    class CLASS(Unit_Commando_DM_Base);
    class CLASS(Unit_XRay_DM): CLASS(Unit_Commando_DM_Base)
    {
        displayName = "Clone Commando Designated Marksman (X-Ray [Frost])";
        editorSubcategory = QCLASS(Edsubcat_Commandos_XRay);
        editorPreview = QPATHTOF(data\previews\CLASS(Unit_XRay_DM).jpg);

        uniformClass = QCLASS(Uniform_XRay_DM);
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\uniforms\commando\xray\DM_upper_co.paa),
            QPATHTOF(data\uniforms\commando\xray\DM_lower_co.paa)
        };

        linkedItems[] =
        {
            QCLASS(Helmet_XRay_DM), QCLASS(Vest_Commando_DM_Base), QCLASS(NVG_Chip_NVTI), QCLASS(Commando_Hud), "SWLB_comlink", LINKED_ITEMS
        };
        respawnLinkedItems[] =
        {
            QCLASS(Helmet_XRay_DM), QCLASS(Vest_Commando_DM_Base), QCLASS(NVG_Chip_NVTI), QCLASS(Commando_Hud), "SWLB_comlink", LINKED_ITEMS
        };
        backpack = QCLASS(Backpack_XRay_DM);
    };

    class CLASS(Unit_Zulu_SL): CLASS(Unit_Commando_SL_Base)
    {
        author = "Cyan";
        displayName = "Clone Commando Squad Leader (Zulu [Galahad])";
        editorSubcategory = QCLASS(Edsubcat_Commandos_Zulu);
        editorPreview = QPATHTOF(data\previews\CLASS(Unit_Zulu_SL).jpg);

        uniformClass = QCLASS(Uniform_Zulu_SL);
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\uniforms\commando\zulu\SL_upper_co.paa),
            QPATHTOF(data\uniforms\commando\zulu\SL_upper_co.paa)
        };

        linkedItems[] =
        {
            QCLASS(Helmet_Zulu_SL), QCLASS(Vest_Commando_SL_Base), QCLASS(NVG_Chip_NVTI), QCLASS(Commando_Hud), "SWLB_comlink", LINKED_ITEMS
        };
        respawnLinkedItems[] =
        {
            QCLASS(Helmet_Zulu_SL), QCLASS(Vest_Commando_SL_Base), QCLASS(NVG_Chip_NVTI), QCLASS(Commando_Hud), "SWLB_comlink", LINKED_ITEMS
        };
        backpack = QCLASS(Backpack_Zulu_SL);
    };
    class CLASS(Unit_Zulu_EOD): CLASS(Unit_Commando_EOD_Base)
    {
        author = "Cyan";
        displayName = "Clone Commando Explosives Specialist (Zulu [Thor])";
        editorSubcategory = QCLASS(Edsubcat_Commandos_Zulu);
        editorPreview = QPATHTOF(data\previews\CLASS(Unit_Zulu_EOD).jpg);

        uniformClass = QCLASS(Uniform_Zulu_EOD);
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\uniforms\commando\zulu\EOD_upper_co.paa),
            QPATHTOF(data\uniforms\commando\zulu\EOD_upper_co.paa)
        };

        linkedItems[] =
        {
            QCLASS(Helmet_Zulu_EOD), QCLASS(Vest_Commando_EOD_Base), QCLASS(NVG_Chip_NV), QCLASS(Commando_Hud), "SWLB_comlink", LINKED_ITEMS
        };
        respawnLinkedItems[] =
        {
            QCLASS(Helmet_Zulu_EOD), QCLASS(Vest_Commando_EOD_Base), QCLASS(NVG_Chip_NV), QCLASS(Commando_Hud), "SWLB_comlink", LINKED_ITEMS
        };
        backpack = QCLASS(Backpack_Zulu_EOD);
    };
    class CLASS(Unit_Zulu_Medic): CLASS(Unit_Commando_Tech_Base)
    {
        author = "Cyan";
        displayName = "Clone Commando Medic (Zulu [Cherryy])";
        editorSubcategory = QCLASS(Edsubcat_Commandos_Zulu);
        editorPreview = QPATHTOF(data\previews\CLASS(Unit_Zulu_Medic).jpg);

        uniformClass = QCLASS(Uniform_Zulu_Medic);
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\uniforms\commando\zulu\Medic_upper_co.paa),
            QPATHTOF(data\uniforms\commando\zulu\Medic_upper_co.paa)
        };

        linkedItems[] =
        {
            QCLASS(Helmet_Zulu_Medic), QCLASS(Vest_Commando_Base), QCLASS(NVG_Commando_Antenna), QCLASS(Commando_Hud), "SWLB_comlink", LINKED_ITEMS
        };
        respawnLinkedItems[] =
        {
            QCLASS(Helmet_Zulu_Medic), QCLASS(Vest_Commando_Base), QCLASS(NVG_Commando_Antenna), QCLASS(Commando_Hud), "SWLB_comlink", LINKED_ITEMS
        };
        backpack = QCLASS(Backpack_Zulu_Medic);
    };
    class CLASS(Unit_Zulu_DM): CLASS(Unit_Commando_DM_Base)
    {
        author = "Cyan";
        displayName = "Clone Commando Designated Marksman (Zulu [Cyan])";
        editorSubcategory = QCLASS(Edsubcat_Commandos_Zulu);
        editorPreview = QPATHTOF(data\previews\CLASS(Unit_Zulu_DM).jpg);

        uniformClass = QCLASS(Uniform_Zulu_DM);
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\uniforms\commando\zulu\DM_upper_co.paa),
            QPATHTOF(data\uniforms\commando\zulu\DM_upper_co.paa)
        };

        linkedItems[] =
        {
            QCLASS(Helmet_Zulu_DM), QCLASS(Vest_Commando_DM_Base), QCLASS(NVG_Commando_Visor), QCLASS(Commando_Hud), "SWLB_comlink", LINKED_ITEMS
        };
        respawnLinkedItems[] =
        {
            QCLASS(Helmet_Zulu_DM), QCLASS(Vest_Commando_DM_Base), QCLASS(NVG_Commando_Visor), QCLASS(Commando_Hud), "SWLB_comlink", LINKED_ITEMS
        };
        backpack = QCLASS(Backpack_Zulu_DM);
    };

    // ┌───────────────────┐
    // │     Backpacks     │
    // └───────────────────┘
    class CLASS(Backpack_RTO_Base);
    class CLASS(Backpack_XRay_SL): CLASS(Backpack_RTO_Base)
    {
        displayName = "[DA] Katarn II Clone Commando RTO Backpack (X-Ray [Nix])";
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\backpacks\commando\xray\SL2_camo1_co.paa),
            QPATHTOF(data\backpacks\commando\xray\SL2_camo1_co.paa)
        };
    };
    class CLASS(Backpack_XRay_SL_Huge): CLASS(Backpack_XRay_SL)
    {
        displayName = "[DA] Katarn II Clone Commando RTO Backpack (X-Ray [Nix]) (Huge)";
        maximumLoad = LOAD_BACKPACK_COMMANDO_HUGE;
    };

    class CLASS(Backpack_EOD_Base);
    class CLASS(Backpack_XRay_EOD): CLASS(Backpack_EOD_Base)
    {
        displayName = "[DA] Katarn II Clone Commando EOD Backpack (X-Ray [Dart])";
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\backpacks\commando\xray\EOD_camo1_co.paa),
            QPATHTOF(data\backpacks\commando\xray\EOD_camo1_co.paa)
        };
    };
    class CLASS(Backpack_XRay_EOD_Huge): CLASS(Backpack_XRay_EOD)
    {
        displayName = "[DA] Katarn II Clone Commando EOD Backpack (X-Ray [Dart]) (Huge)";
        maximumLoad = LOAD_BACKPACK_COMMANDO_HUGE;
    };

    class CLASS(Backpack_Tech_Base);
    class CLASS(Backpack_XRay_Medic): CLASS(Backpack_Tech_Base)
    {
        displayName = "[DA] Katarn II Clone Commando Medic Backpack (X-Ray [Doktor])";
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\backpacks\commando\xray\Medic_camo1_co.paa),
            QPATHTOF(data\backpacks\commando\xray\Medic_camo1_co.paa),
            QPATHTOF(data\backpacks\commando\xray\Medic_camo2_co.paa)
        };
    };
    class CLASS(Backpack_XRay_Medic_Huge): CLASS(Backpack_XRay_Medic)
    {
        displayName = "[DA] Katarn II Clone Commando Medic Backpack (X-Ray [Doktor]) (Huge)";
        maximumLoad = LOAD_BACKPACK_COMMANDO_HUGE;
    };

    class CLASS(Backpack_Base);
    class CLASS(Backpack_XRay_DM): CLASS(Backpack_Base)
    {
        displayName = "[DA] Katarn II Clone Commando Backpack (X-Ray [Frost])";
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\backpacks\commando\xray\DM_camo1_co.paa),
            QPATHTOF(data\backpacks\commando\xray\DM_camo1_co.paa)
        };
    };
    class CLASS(Backpack_XRay_DM_Huge): CLASS(Backpack_XRay_DM)
    {
        displayName = "[DA] Katarn II Clone Commando Backpack (X-Ray [Frost]) (Huge)";
        maximumLoad = LOAD_BACKPACK_COMMANDO_HUGE;
    };

    class CLASS(Backpack_Zulu_SL): CLASS(Backpack_RTO_Base)
    {
        displayName = "[DA] Katarn II Clone Commando RTO Backpack (Zulu [Galahad])";
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\backpacks\commando\zulu\SL_camo1_co.paa),
            QPATHTOF(data\backpacks\commando\zulu\SL_camo1_co.paa)
        };
    };
    class CLASS(Backpack_Zulu_SL_Huge): CLASS(Backpack_Zulu_SL)
    {
        displayName = "[DA] Katarn II Clone Commando RTO Backpack (Zulu [Galahad]) (Huge)";
        maximumLoad = LOAD_BACKPACK_COMMANDO_HUGE;
    };

    class CLASS(Backpack_Zulu_EOD): CLASS(Backpack_EOD_Base)
    {
        displayName = "[DA] Katarn II Clone Commando EOD Backpack (Zulu [Thor])";
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\backpacks\commando\zulu\EOD_camo1_co.paa),
            QPATHTOF(data\backpacks\commando\zulu\EOD_camo1_co.paa)
        };
    };
    class CLASS(Backpack_Zulu_EOD_Huge): CLASS(Backpack_Zulu_EOD)
    {
        displayName = "[DA] Katarn II Clone Commando EOD Backpack (Zulu [Thor]) (Huge)";
        maximumLoad = LOAD_BACKPACK_COMMANDO_HUGE;
    };

    class CLASS(Backpack_Zulu_Medic): CLASS(Backpack_Tech_Base)
    {
        displayName = "[DA] Katarn II Clone Commando Medic Backpack (Zulu [Cherryy])";
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\backpacks\commando\zulu\Medic_camo1_co.paa),
            QPATHTOF(data\backpacks\commando\zulu\Medic_camo1_co.paa),
            QPATHTOF(data\backpacks\commando\zulu\Medic_camo2_co.paa)
        };
    };
    class CLASS(Backpack_Zulu_Medic_Huge): CLASS(Backpack_Zulu_Medic)
    {
        displayName = "[DA] Katarn II Clone Commando Medic Backpack (Zulu [Cherryy]) (Huge)";
        maximumLoad = LOAD_BACKPACK_COMMANDO_HUGE;
    };

    class CLASS(Backpack_Zulu_DM): CLASS(Backpack_Base)
    {
        displayName = "[DA] Katarn II Clone Commando Backpack (Zulu [Cyan])";
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\backpacks\commando\zulu\DM_camo1_co.paa),
            QPATHTOF(data\backpacks\commando\zulu\DM_camo1_co.paa)
        };
    };
    class CLASS(Backpack_Zulu_DM_Huge): CLASS(Backpack_Zulu_DM)
    {
        displayName = "[DA] Katarn II Clone Commando Backpack (Zulu [Cyan]) (Huge)";
        maximumLoad = LOAD_BACKPACK_COMMANDO_HUGE;
    };

    class GROUND_CLASS(Holder_Base);
    GROUND_HOLDER(Helmet_XRay_SL,"Katarn I Clone Commando Helmet (X-Ray [Nix]");
    GROUND_HOLDER(Helmet_XRay_EOD,"Katarn I Clone Commando Helmet (X-Ray [Dart]");
    GROUND_HOLDER(Helmet_XRay_Medic,"Katarn I Clone Commando Helmet (X-Ray [Doktor]");
    GROUND_HOLDER(Helmet_XRay_DM,"Katarn I Clone Commando Helmet (X-Ray [Frost]");
    GROUND_HOLDER(Helmet_Zulu_SL,"Katarn I Clone Commando Helmet (Zulu [Galahad]");
    GROUND_HOLDER(Helmet_Zulu_EOD,"Katarn I Clone Commando Helmet (Zulu [Thor]");
    GROUND_HOLDER(Helmet_Zulu_Medic,"Katarn I Clone Commando Helmet (Zulu [Cherryy]");
    GROUND_HOLDER(Helmet_Zulu_DM,"Katarn I Clone Commando Helmet (Zulu [Cyan]");
};