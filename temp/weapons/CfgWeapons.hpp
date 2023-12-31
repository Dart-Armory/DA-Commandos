class CfgWeapons
{
    class JLTS_stun_muzzle;
    class DAC_Muzzle_Stun: JLTS_stun_muzzle
    {
        displayName = "Stun";
        magazines[] =
        {
            "JLTS_stun_mag_short",
            "JLTS_stun_mag_long"
        };
        magazineWell[] = {};
    };
};