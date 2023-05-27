#include "CfgVehicles.hpp"
#include "CfgPatches.hpp"


class CfgEditorSubcategories
{
	class DAC_Base
	{
		displayName = "Commando Squad Base";
	};
};


class CfgWeapons
{
	class ItemInfo;

	// ┌───────────────────┐
    // │      Helmets      │
    // └───────────────────┘
	class SWLB_clone_commando_helmet_k1;

	class DAC_Helmet_Commando_Base: SWLB_clone_commando_helmet_k1
	{
		// Mod Info
		dlc = "DA_Commandos";
		author = "DartRuffian";

		// Scope
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;

		displayName = "[DA] Katarn I Commando Helmet";
		hiddenSelectionsTextures[] =
		{
			DAC_Armors\Main\Data\Helmets\Commando_Helmet_Base.paa, // Visor
			DAC_Armors\Main\Data\Helmets\Commando_Helmet_Base.paa  // Main Helmet
		};
	};

	// ┌────────────────────┐
    // │      Uniforms      │
    // └────────────────────┘
	class U_B_CombatUniform_mcam;
	class SWLB_clone_commando_uniform_k1: U_B_CombatUniform_mcam
	{
		class ItemInfo;
	};

	class DAC_Uniform_Commando_Base: SWLB_clone_commando_uniform_k1
	{
		// Mod Info
		dlc = "DA_Commandos";
		author = "DartRuffian";

		// Scope
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;

		displayName = "[DA] Katarn I Commando Armor";
		class ItemInfo: ItemInfo
		{
			uniformClass = "DAC_Unit_Commando_Base";
			uniformType = "Neopren";
			modelSides[] = {0, 1, 2, 3};
		};
	};

	// ┌───────────────────┐
    // │       Vests       │
    // └───────────────────┘
	class V_PlateCarrier1_rgr;

	class SWLB_clone_commando_basic_armor_k1: V_PlateCarrier1_rgr { class ItemInfo; };
	class SWLB_clone_commando_sl_armor_k1: V_PlateCarrier1_rgr { class ItemInfo; };
	class SWLB_clone_commando_eod_armor_k1: V_PlateCarrier1_rgr { class ItemInfo; };
	class SWLB_clone_commando_sniper_armor_k1: V_PlateCarrier1_rgr { class ItemInfo; };
	class SWLB_clone_commando_tech_armor_k1: V_PlateCarrier1_rgr { class ItemInfo; };

	// Vests currently cannot be retextured due to the hiddenSelections not being set correctly

	class DAC_Vest_Commando_Base: SWLB_clone_commando_basic_armor_k1
	{
		// Mod Info
		dlc = "DA_Commandos";
		author = "DartRuffian";

		// Scope
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;

		displayName = "[DA] Katarn I Commando Vest (Base)";
		class ItemInfo: ItemInfo
		{
			vestType = "Rebreather";
		};
	};

	class DAC_Vest_Commando_SL_Base: SWLB_clone_commando_sl_armor_k1
	{
		// Mod Info
		dlc = "DA_Commandos";
		author = "DartRuffian";

		// Scope
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;

		displayName = "[DA] Katarn I Commando Vest (SL)";
		class ItemInfo: ItemInfo
		{
			vestType = "Rebreather";
		};
		hiddenSelectionsTextures[] =
        {
            DAC_Armors\Main\Data\Vests\Commando_Vests_AiO.paa
        };
	};

	class DAC_Vest_Commando_EOD_Base: SWLB_clone_commando_eod_armor_k1
	{
		// Mod Info
		dlc = "DA_Commandos";
		author = "DartRuffian";

		// Scope
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;

		displayName = "[DA] Katarn I Commando Vest (EOD)";
		class ItemInfo: ItemInfo
		{
			vestType = "Rebreather";
		};
		hiddenSelectionsTextures[] =
        {
            DAC_Armors\Main\Data\Vests\Commando_Vests_AiO.paa
        };
	};

	class DAC_Vest_Commando_DM_Base: SWLB_clone_commando_sniper_armor_k1
	{
		// Mod Info
		dlc = "DA_Commandos";
		author = "DartRuffian";

		// Scope
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;

		displayName = "[DA] Katarn I Commando Vest (DM)";
		class ItemInfo: ItemInfo
		{
			vestType = "Rebreather";
		};
		hiddenSelectionsTextures[] =
        {
            DAC_Armors\Main\Data\Vests\Commando_Vests_AiO.paa,
			DAC_Armors\Main\Data\Vests\Commando_Vests_AiO.paa
        };
	};

	class DAC_Vest_Commando_Tech_Base: SWLB_clone_commando_tech_armor_k1
	{
		// Mod Info
		dlc = "DA_Commandos";
		author = "DartRuffian";

		// Scope
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;

		displayName = "[DA] Katarn I Commando Vest (Tech)";
		class ItemInfo: ItemInfo
		{
			vestType = "Rebreather";
		};
		hiddenSelectionsTextures[] =
        {
            DAC_Armors\Main\Data\Vests\Commando_Vests_AiO.paa
        };
	};

	// ┌──────────────────┐
    // │       NVGs       │
    // └──────────────────┘
	class SWLB_clone_commando_nvg;
	class SWLB_clone_commando_nvg_antenna;

	class DAC_NVG_Commando_Visor: SWLB_clone_commando_nvg
	{
		// Mod Info
		dlc = "DA_Commandos";
		author = "DartRuffian";

		// Scope
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;

		displayName = "[DA] Katarn I Commando Visor";
		hiddenSelectionsTextures[] =
		{
			DAC_Armors\Main\Data\NVGs\Commando_NVG_Visor.paa,
			DAC_Armors\Main\Data\NVGs\Commando_NVG_Visor.paa
		};

		visionMode[] = { "Normal", "NVG", "TI" };
		thermalMode[] = { 0, 1 }; // WHOT, BHOT
	};

	class DAC_NVG_Commando_Antenna: SWLB_clone_commando_nvg_antenna
	{
		// Mod Info
		dlc = "DA_Commandos";
		author = "DartRuffian";

		// Scope
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;

		displayName = "[DA] Katarn I Commando Antenna";
		hiddenSelectionsTextures[] =
		{
			DAC_Armors\Main\Data\NVGs\Commando_NVG_Antenna.paa
		};

		visionMode[] = { "Normal", "NVG", "TI" };
		thermalMode[] = { 0, 1 }; // WHOT, BHOT
	};
};