#include "CfgPatches.hpp"


class CfgWeapons
{
    class LFP_rifle_base;
    class LFP_DC17M: LFP_rifle_base
    {
        class OpticsModes
        {
            class optics;
            class scope;
        };
    };
    class DAC_DC17M: LFP_DC17M
    {
        // Mod Info
        dlc = "DA_Commandos";
        author = "DartRuffian";

        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[DA] DC-17M";

        DAC_attachmentSwap = 1; // Enables attachment swapping
        DAC_attachments[] =     // Array of magazine properties to check and the attachment to use
        {
            { "DAC_DC17M_isBlasterMag", "lfp_dc17m_attachment_blaster" },
            { "DAC_DC17M_isGLMag", "lfp_dc17m_attachment_gl" },
            { "DAC_DC17M_isSniperMag", "lfp_dc17m_attachment_sniper" }
        };

        class OpticsModes: OpticsModes
        {
            delete optics;
            class scope: scope {};
        };

        class LinkedItems
        {
            class LinkedItemsMuzzle
            {
                slot = "MuzzleSlot";
                item = "lfp_dc17m_attachment_blaster";
            };
        };
    };

    class DAC_DC17M_Sniper: DAC_DC17M
    {
        displayName = "[DA] DC-17M Sniper";

        // Sniper mag first to load it by default
        magazines[] = { "LFP_DC17M_Mag_Sniper", "LFP_DC17M_Mag", "LFP_DC17M_GL" };

        class OpticsModes: OpticsModes
        {
            class optics
            {
                discreteDistance[] = { 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200 };
                discreteDistanceInitIndex = 1;
                discreteFov[] = { "0.25/3", "0.25/6", "0.25/9", "0.25/12", "0.25/15", "0.25/20" };
                discreteInitIndex = 0;

                opticsZoomInit = 0.125;
                opticsZoomMax = 0.125;
                opticsZoomMin = 0.0625;
                useModelOptics = 1;

                distanceZoomMax = 1200;
                distanceZoomMin = 300;

                cameraDir = "";
                memoryPointCamera = "eye2";

                opticsDisablePeripherialVision = 1;
                opticsFlare = 1;
                opticsID = 1;
                opticsPPEffects[] = { "OpticsCHAbera2", "OpticsBlur3" };

                visionMode[] = { "Normal", "NVG", "TI" };
                thermalMode[] = { 0 };
            };
            class scope: scope {};
        };
    };

    class DAC_Weap_DC17M: DAC_DC17M
    {
        scope = 1;
        scopeArsenal = 0;
    };
};


class CfgMagazines
{
    class LFP_mag_base;
    class LFP_DC17M_Mag: LFP_mag_base
    {
        DAC_DC17M_isBlasterMag = 1;
    };

    class LFP_DC17M_GL: LFP_mag_base
    {
        ammo = "DAC_Ammo_DC17M_GL";
        DAC_DC17M_isGLMag = 1;
    };

    class LFP_DC17M_Mag_Sniper: LFP_mag_base
    {
        DAC_DC17M_isSniperMag = 1;
    };
};


class CfgAmmo
{
    class LFP_ammo_DC17M_gr;
    class DAC_Ammo_DC17M_GL: LFP_ammo_DC17M_gr
    {
        coefgravity = 0;
    };
};