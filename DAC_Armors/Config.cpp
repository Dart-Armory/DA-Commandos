class CfgMods
{
	class Mod_Base;
	class DA_Commando_Mod: Mod_Base
	{
		name = "[DA] Commando Squads";
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

	class DA_Commandos_OPFOR
    {
		// Mod Info
        dlc = "DA_Commando_Mod";
        author = "DartRuffian";
		
		// Scope
        scope = 2;
        scopeCurator = 2;
		
        displayName = "[DA] Commando Squads";
		side = 0;
    };
};