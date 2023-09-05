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
            class optics: optics
            {
                visionMode[] = { "Normal", "NVG", "TI"};
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
        DAC_DC17M_isGLMag = 1;
    };

    class LFP_DC17M_Mag_Sniper: LFP_mag_base
    {
        DAC_DC17M_isSniperMag = 1;
    };
};