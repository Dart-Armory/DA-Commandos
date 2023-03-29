#include "CfgPatches.hpp"


class CfgEditorSubcategories
{
	// DAC = Dart Armory Commandos
	class DAC_Imperial
	{
		displayName = "Imperial Commandos";
	};
	class DAC_Imperial_OPFOR
	{
		displayName = "Imperial Commandos";
		side = 0;
	};
};


class CfgWeapons
{
	// ┌───────────┐
    // │ Helmets │
    // └───────────┘
	class DAC_Helmet_Commando_Base;

	class DAC_Helmet_Imperial_Commando: DAC_Helmet_Commando_Base
	{
		displayName = "[DA] Katarn I Imperial Commando Helmet";
		hiddenSelectionsTextures[] =
		{
			DAC_Armors\Data\Imperial\Helmets\Imperial_Helmet.paa, // Visor
			DAC_Armors\Data\Imperial\Helmets\Imperial_Helmet.paa  // Main Helmet
		};
	};
	// ┌─────────────────┐
    // │   Uniforms   │
    // └─────────────────┘
	class DAC_Uniform_Commando_Base;
	class ItemInfo;

	class DAC_Uniform_Imperial_Commando: DAC_Uniform_Commando_Base
	{
		displayName = "[DA] Katarn I Imperial Commando Armor";
		class ItemInfo: ItemInfo
		{
			uniformClass = "DAC_Unit_Imperial_Commando";
			uniformType = "Neopren";
		};
	};
};


class CfgVehicles
{
	class ItemInfo;
	// ┌───────────────────────┐
    // │       Units       │
    // └───────────────────────┘
	class DAC_Unit_Commando_Base;
	class DAC_Unit_Commando_SL_Base;
	class DAC_Unit_Commando_EOD_Base;
	class DAC_Unit_Commando_DM_Base;
	class DAC_Unit_Commando_Tech_Base;

	class DAC_Unit_Imperial_Commando: DAC_Unit_Commando_Base
	{
		displayName = "Imperial Commando";
		editorSubcategory = "DAC_Imperial";

		uniformClass = "DAC_Uniform_Imperial_Commando";
		hiddenSelectionsTextures[] =
		{
			DAC_Armors\Data\Imperial\Uniforms\Imperial_Uniform_Upper.paa,
			DAC_Armors\Data\Imperial\Uniforms\Imperial_Uniform_Lower.paa
		};
		modelSides[] = {0, 1, 2, 3}; // Makes the model available to all sides

		linkedItems[] =
		{
			"DAC_Helmet_Imperial_Commando","DAC_Vest_Commando_Base","lsd_gar_republicCommando_hud","ItemMap","SWLB_comlink","ItemCompass"
		};
		respawnLinkedItems[] =
		{
			"DAC_Helmet_Imperial_Commando","DAC_Vest_Commando_Base","lsd_gar_republicCommando_hud","ItemMap","SWLB_comlink","ItemCompass"
		};
	};
	class DAC_Unit_Imperial_Commando_OPFOR: DAC_Unit_Imperial_Commando
	{
		faction = "DA_Commandos_OPFOR";
		editorSubcategory = "DAC_Imperial_OPFOR";
		side = 0;
	};
	
	class DAC_Unit_Imperial_Commando_SL: DAC_Unit_Commando_SL_Base
	{
		displayName = "Imperial Commando Squad Leader";
		editorSubcategory = "DAC_Imperial";

		uniformClass = "DAC_Uniform_Imperial_Commando";
		linkedItems[] =
		{
			"DAC_Helmet_Imperial_Commando","DAC_Vest_Commando_SL_Base","lsd_gar_republicCommando_hud","ItemMap","SWLB_comlink","ItemCompass"
		};
		respawnLinkedItems[] =
		{
			"DAC_Helmet_Imperial_Commando","DAC_Vest_Commando_SL_Base","lsd_gar_republicCommando_hud","ItemMap","SWLB_comlink","ItemCompass"
		};
	};
	class DAC_Unit_Imperial_Commando_SL_OPFOR: DAC_Unit_Imperial_Commando_SL
	{
		faction = "DA_Commandos_OPFOR";
		editorSubcategory = "DAC_Imperial_OPFOR";
		side = 0;
	};

	class DAC_Unit_Imperial_Commando_EOD: DAC_Unit_Commando_EOD_Base
	{
		displayName = "Imperial Commando Explosives Specialist";
		editorSubcategory = "DAC_Imperial";

		uniformClass = "DAC_Uniform_Imperial_Commando";
		linkedItems[] =
		{
			"DAC_Helmet_Imperial_Commando","DAC_Vest_Commando_EOD_Base","lsd_gar_republicCommando_hud","ItemMap","SWLB_comlink","ItemCompass"
		};
		respawnLinkedItems[] =
		{
			"DAC_Helmet_Imperial_Commando","DAC_Vest_Commando_EOD_Base","lsd_gar_republicCommando_hud","ItemMap","SWLB_comlink","ItemCompass"
		};
	};
	class DAC_Unit_Imperial_Commando_EOD_OPFOR: DAC_Unit_Imperial_Commando_EOD
	{
		faction = "DA_Commandos_OPFOR";
		editorSubcategory = "DAC_Imperial_OPFOR";
		side = 0;
	};

	class DAC_Unit_Imperial_Commando_DM: DAC_Unit_Commando_DM_Base
	{
		displayName = "Imperial Commando Designated Marksman";
		editorSubcategory = "DAC_Imperial";

		uniformClass = "DAC_Uniform_Imperial_Commando";
		linkedItems[] =
		{
			"DAC_Helmet_Imperial_Commando","DAC_Vest_Commando_DM_Base","DAC_NVG_Commando_Visor","lsd_gar_republicCommando_hud","ItemMap","SWLB_comlink","ItemCompass"
		};
		respawnLinkedItems[] =
		{
			"DAC_Helmet_Imperial_Commando","DAC_Vest_Commando_DM_Base","DAC_NVG_Commando_Visor","lsd_gar_republicCommando_hud","ItemMap","SWLB_comlink","ItemCompass"
		};
	};
	class DAC_Unit_Imperial_Commando_DM_OPFOR: DAC_Unit_Imperial_Commando_DM
	{
		faction = "DA_Commandos_OPFOR";
		editorSubcategory = "DAC_Imperial_OPFOR";
		side = 0;
	};

	class DAC_Unit_Imperial_Commando_Tech: DAC_Unit_Commando_Tech_Base
	{
		displayName = "Imperial Commando Tech Specialist";
		editorSubcategory = "DAC_Imperial";

		uniformClass = "DAC_Uniform_Imperial_Commando";
		linkedItems[] =
		{
			"DAC_Helmet_Imperial_Commando","DAC_Vest_Commando_Tech_Base","DAC_NVG_Commando_Antenna","lsd_gar_republicCommando_hud","ItemMap","SWLB_comlink","ItemCompass"
		};
		respawnLinkedItems[] =
		{
			"DAC_Helmet_Imperial_Commando","DAC_Vest_Commando_Tech_Base","DAC_NVG_Commando_Antenna","lsd_gar_republicCommando_hud","ItemMap","SWLB_comlink","ItemCompass"
		};
	};
	class DAC_Unit_Imperial_Commando_Tech_OPFOR: DAC_Unit_Imperial_Commando_Tech
	{
		faction = "DA_Commandos_OPFOR";
		editorSubcategory = "DAC_Imperial_OPFOR";
		side = 0;
	};
};