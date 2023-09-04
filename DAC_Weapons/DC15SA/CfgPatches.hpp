class CfgPatches
{
    class DAC_Weapons_DC15SA
    {
        author = "DartRuffian";
        addonRootClass = "DA_Commando_Weapons";
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "LF_Weapon_Unit_RazorBlade",
            "JLTS_weapons_Core" // Stun muzzle
        };
        units[] = {};
        weapons[] =
        {
            "DAC_DC15SA"
        };
    };
    class DAC_DC15SA: DAC_Weapons_DC15SA // Legacy name
    {
        requiredAddons[] = {};
        weapons[] = {};
    };
};