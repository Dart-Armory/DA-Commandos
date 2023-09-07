class CfgMods
{
    class Mod_Base;
    class DA_Commando_Mod: Mod_Base
    {
        name = "[DA] Commando Squads";
        logo = "DAC_Armors\dac_logo.paa";
        logoOver = "DAC_Armors\dac_logo.paa";
        picture = "DAC_Armors\dac_logo.paa";
    };
};


class CfgPatches
{
    class DA_Commando_Mod
    {
        author = "DartRuffian";
        requiredVersion = 0.1;
        requiredAddons[] = {};
        units[] = {};
        weapons[] = {};
    };
};


class CfgFactionClasses
{
    class DA_Commandos
    {
        // Mod Info
        dlc = "DA_Commando_Mod";
        author = "DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        displayName = "[DA] Commando Squads";
    };

    class DA_Commandos_OPFOR: DA_Commandos
    {
        side = 0;
    };
};


class CfgEditorCategories
{
    class DAC_Objects
    {
        dlc = "BNA_KC";
        author = "DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        displayName = "[DA] Objects";
    };
};


class CfgEditorSubcategories
{
    class DAC_Objects_Helmets
    {
        dlc = "BNA_KC";
        author = "DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        displayName = "Helmets";
    };
}