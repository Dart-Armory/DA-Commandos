class CfgMagazines
{
    class LFP_mag_base;
    class LFP_DC17M_Mag: LFP_mag_base
    {
        GVAR(isBlasterMag) = TRUE;
    };

    class LFP_DC17M_GL: LFP_mag_base
    {
        ammo = QCLASS(Ammo_DC17M_GL);
        GVAR(isGLMag) = TRUE;
    };

    class LFP_DC17M_Mag_Sniper: LFP_mag_base
    {
        GVAR(isSniperMag) = TRUE;
    };
};