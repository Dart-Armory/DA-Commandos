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