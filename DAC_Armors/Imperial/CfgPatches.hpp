class CfgPatches
{
	class DAC_Imperial
	{
		author = "DartRuffian";
		addonRootClass = "DA_Commando_Mod";
		requiredVersion = 0.1;
		requiredAddons[] =
		{
			"DAC_Main"
				// Base Helmet, Uniform, Units, etc.
		};
		units[] =
		{
			// Units
			"DAC_Unit_Imperial_Commando",
			"DAC_Unit_Imperial_Commando_OPFOR",
			"DAC_Unit_Imperial_Commando_SL",
			"DAC_Unit_Imperial_Commando_SL_OPFOR",
			"DAC_Unit_Imperial_Commando_EOD",
			"DAC_Unit_Imperial_Commando_EOD_OPFOR",
			"DAC_Unit_Imperial_Commando_DM",
			"DAC_Unit_Imperial_Commando_DM_OPFOR",
			"DAC_Unit_Imperial_Commando_Tech",
			"DAC_Unit_Imperial_Commando_Tech_OPFOR"
		};
		weapons[] =
		{
			// Helmets
			"DAC_Helmet_Imperial_Commando",

			// Uniforms
			"DAC_Uniform_Imperial_Commando"
		};
	};
};