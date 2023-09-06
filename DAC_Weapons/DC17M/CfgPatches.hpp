class CfgPatches
{
    class DAC_Weapons_DC17M
    {
        author = "DartRuffian";
        addonRootClass = "DA_Commando_Weapons";
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "LF_Weapon_Unit_WestarM5"
                // DC-17M
        };
        units[] = {};
        weapons[] =
        {
            "DAC_DC17M",
            "DAC_DC17M_Sniper"
        };
    };
    class DAC_DC17M: DAC_Weapons_DC17M // Legacy name
    {
        requiredAddons[] = {};
        weapons[] = {};
    };
};