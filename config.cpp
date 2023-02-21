class CfgMods
{
	class Mod_Base;
	class DartArmory: Mod_Base
	{
		name = "[DA] Dart Armory";
	};
};

class CfgEditorCategories
{
	class DartArmory
	{
		displayName = "[DA] Dart Armory";
	};
};

class CfgEditorSubcategories
{
	class DA_XRay_Customs
	{
		// Custom Armor Units
		displayName = "X-Ray Squad Customs";
	};
};

class CfgPatches
{
	class XRayArmor
	{
		author = "DartRuffian";
		requiredVersion = 0.1;
		requiredAddons[] =
		{
			"SWLW_clones_spec",
			"SWLB_clones_spec_backpacks"
		};
		units[] =
		{
			// Units
			"XRay_Commando_SL",
			"XRay_Commando_EOD",
			"XRay_Commando_Medic",
			"XRay_Commando_Sniper",

			// Backpacks
			"XRay_BP_Commando_SL",
			"XRay_BP_Commando_SL_Huge",
			"XRay_BP_Commando_EOD",
			"XRay_BP_Commando_EOD_Huge",
			"XRay_BP_Commando_Medic",
			"XRay_BP_Commando_Medic_Huge",
			"XRay_BP_Commando_Sniper",
			"XRay_BP_Commando_Sniper_Huge"
		};
		weapons[] =
		{
			"XRay_Helmet_Commando_SL",
			"XRay_Helmet_Commando_EOD",
			"XRay_Helmet_Commando_Medic",
			"XRay_Helmet_Commando_Sniper",

			"XRay_Uniform_Commando_SL",
			"XRay_Uniform_Commando_EOD",
			"XRay_Uniform_Commando_Medic",
			"XRay_Uniform_Commando_Sniper",

			"XRay_Vest_Commando_SL",
			"XRay_Vest_Commando_EOD",
			"XRay_Vest_Commando_Medic",
			"XRay_Vest_Commando_Sniper"
		};
	};
};


class CfgWeapons
{
	// Commando Gear
	class SWLB_clone_commando_helmet_k1;
	class SWLB_clone_commando_uniform_k1;
	class SWLB_clone_commando_basic_armor_k1;
	class SWLB_clone_commando_sl_armor_k1;
	class SWLB_clone_commando_eod_armor_k1;
	class SWLB_clone_commando_sniper_armor_k1;
	// class SWLB_clone_commando_nvg; // Unused
	// Other
	class UniformItem;
	class VestItem;
	class ItemInfo;

	// Helmets
	class XRay_Helmet_Commando_Base: SWLB_clone_commando_helmet_k1
	{
		author = "DartRuffian";
		scope = 2;
		scopeArsenal = 2;

		displayName = "Katarn I Clone Commando Helmet (X-Ray [Plain])";
		hiddenSelectionsTextures[] =
		{
			"SWLB_clones_spec\data\helmet_co.paa",
			"SWLB_clones_spec\data\helmet_co.paa"
		};
	};
	class XRay_Helmet_Commando_SL: XRay_Helmet_Commando_Base
	{
		displayName = "Katarn I Clone Commando Helmet (X-Ray [Foreigner])";
		hiddenSelectionsTextures[] =
		{
			"SWLB_clones_spec\data\helmet_co.paa",
			"SWLB_clones_spec\data\helmet_co.paa"
		};
	};
	class XRay_Helmet_Commando_EOD: XRay_Helmet_Commando_Base
	{
		displayName = "Katarn I Clone Commando Helmet (X-Ray [Dart])";
		hiddenSelectionsTextures[] =
		{
			"XRayArmor\assets\helmets\Helmet_Commando_EOD.paa",
			"XRayArmor\assets\helmets\Helmet_Commando_EOD.paa"
		};
	};
	class XRay_Helmet_Commando_Medic: XRay_Helmet_Commando_Base
	{
		displayName = "Katarn I Clone Commando Helmet (X-Ray [Doc])";
		hiddenSelectionsTextures[] =
		{
			"SWLB_clones_spec\data\helmet_co.paa",
			"SWLB_clones_spec\data\helmet_co.paa"
		};
	};
	class XRay_Helmet_Commando_Sniper: XRay_Helmet_Commando_Base
	{
		displayName = "Katarn I Clone Commando Helmet (X-Ray [Glitch])";
		hiddenSelectionsTextures[] =
		{
			"SWLB_clones_spec\data\helmet_co.paa",
			"SWLB_clones_spec\data\helmet_co.paa"
		};
	};

	// Uniforms
	class XRay_Uniform_Commando_Base: SWLB_clone_commando_uniform_k1
	{
		author = "DartRuffian";
		scope = 2;
		scopeArsenal = 2;

		displayName = "Katarn I Clone Commando Armor (X-Ray [Plain])";
		class ItemInfo: ItemInfo
		{
			uniformType = "Neopren";
		};
	};
	class XRay_Uniform_Commando_SL: XRay_Uniform_Commando_Base
	{
		displayName = "Katarn I Clone Commando Armor (X-Ray [Foreigner])";
		class ItemInfo: ItemInfo
		{
			uniformClass = "XRay_Commando_SL";
			uniformType = "Neopren";
		};
	};
	class XRay_Uniform_Commando_EOD: XRay_Uniform_Commando_Base
	{
		displayName = "Katarn I Clone Commando Armor (X-Ray [Dart])";
		class ItemInfo: ItemInfo
		{
			uniformClass = "XRay_Commando_EOD";
			uniformType = "Neopren";
		};
	};
	class XRay_Uniform_Commando_Medic: XRay_Uniform_Commando_Base
	{
		displayName = "Katarn I Clone Commando Armor (X-Ray [Doc])";
		class ItemInfo: ItemInfo
		{
			uniformClass = "XRay_Commando_Medic";
			uniformType = "Neopren";
		};
	};
	class XRay_Uniform_Commando_Sniper: XRay_Uniform_Commando_Base
	{
		displayName = "Katarn I Clone Commando Armor (X-Ray [Glitch])";
		class ItemInfo: ItemInfo
		{
			uniformClass = "XRay_Commando_Sniper";
			uniformType = "Neopren";
		};
	};

	// Vests
	// Basic Vests
	class XRay_Vest_Commando_SL_Base: SWLB_clone_commando_sl_armor_k1
	{
		author = "DartRuffian";
		displayName = "Katarn I Clone Commando Squad Leader Pauldron (X-Ray [Plain])";
		class ItemInfo: ItemInfo
		{
			vestType = "Rebreather";
		};
	};
	class XRay_Vest_Commando_EOD_Base: SWLB_clone_commando_eod_armor_k1
	{
		author = "DartRuffian";
		displayName = "Katarn I Clone Commando EOD Vest (X-Ray [Plain])";
		class ItemInfo: ItemInfo
		{
			vestType = "Rebreather";
		};
	};
	class XRay_Vest_Commando_Medic_Base: SWLB_clone_commando_basic_armor_k1
	{
		author = "DartRuffian";
		displayName = "Katarn I Clone Commando Medic Vest (X-Ray [Plain])";
		class ItemInfo: ItemInfo
		{
			vestType = "Rebreather";
		};
	};
	class XRay_Vest_Commando_Sniper_Base: SWLB_clone_commando_sniper_armor_k1
	{
		author = "DartRuffian";
		displayName = "Katarn I Clone Commando Sniper Vest (X-Ray [Plain])";
		class ItemInfo: ItemInfo
		{
			vestType = "Rebreather";
		};
	};

	// Custom Vests
	class XRay_Vest_Commando_SL_Custom: XRay_Vest_Commando_SL_Base
	{
		displayName = "Katarn I Clone Commando Squad Leader Pauldron (X-Ray [Foreigner])";
		hiddenSelectionsTextures[] =
		{
			"SWLB_clones_spec\data\camo2_co.paa",
			"SWLB_clones_spec\data\camo2_co.paa"
		};
	};
	class XRay_Vest_Commando_EOD_Custom: XRay_Vest_Commando_EOD_Base
	{
		displayName = "Katarn I Clone Commando EOD Vest (X-Ray [Dart])";
		hiddenSelectionsTextures[] =
		{
			"SWLB_clones_spec\data\camo2_co.paa",
			"SWLB_clones_spec\data\camo2_co.paa"
		};
	};
	class XRay_Vest_Commando_Medic_Custom: XRay_Vest_Commando_Medic_Base
	{
		displayName = "Katarn I Clone Commando Medic Vest (X-Ray [Doc])";
		hiddenSelectionsTextures[] =
		{
			"SWLB_clones_spec\data\camo2_co.paa",
			"SWLB_clones_spec\data\camo2_co.paa"
		};
	};
	class XRay_Vest_Commando_Sniper_Custom: XRay_Vest_Commando_Sniper_Base
	{
		displayName = "Katarn I Clone Commando Sniper Vest (X-Ray [Glitch])";
		hiddenSelectionsTextures[] =
		{
			"SWLB_clones_spec\data\camo2_co.paa",
			"SWLB_clones_spec\data\camo2_co.paa"
		};
	};
};

class CfgVehicles
{
	class SWLB_clone_commando_backpack_k2;
	class SWLB_clone_commando_backpack_k2_eod;
	class SWLB_clone_commando_backpack_k2_rto;
	class SWLB_clone_commando_backpack_k2_tech;

	class SWLB_clone_commando_base;
	class SWLB_clone_commando_sl_base;
	class SWLB_clone_commando_sniper_base;
	class SWLB_clone_commando_eod_base;

	// Units
	class XRay_Commando_SL: SWLB_clone_commando_sl_base
	{
		author = "DartRuffian";
		editorCategory = "DartArmory";
		editorSubcategory = "DA_XRay_Customs";

		displayName = "Foreigner (X-Ray [Squad Lead])";

		uniformClass = "XRay_Uniform_Commando_SL";
		hiddenSelectionsTextures[] =
		{
			"SWLB_clones_spec\data\camo1_co.paa",
			"SWLB_clones_spec\data\camo2_co.paa"
		};
		backpack = "XRay_BP_Commando_SL";
	};
	class XRay_Commando_EOD: SWLB_clone_commando_eod_base
	{
		author = "DartRuffian";
		editorCategory = "DartArmory";
		editorSubcategory = "DA_XRay_Customs";

		displayName = "Dart (X-Ray [EOD])";

		uniformClass = "XRay_Uniform_Commando_EOD";
		hiddenSelectionsTextures[] =
		{
			"XRayArmor\assets\uniforms\Uniform_Commando_Upper.paa",
			"XRayArmor\assets\uniforms\Uniform_Commando_Lower.paa"
		};
		backpack = "XRay_BP_Commando_EOD";
	};
	class XRay_Commando_Medic: SWLB_clone_commando_base
	{
		author = "DartRuffian";
		editorCategory = "DartArmory";
		editorSubcategory = "DA_XRay_Customs";
		
		displayName = "Doc (X-Ray [Medic])";

		uniformClass = "XRay_Uniform_Commando_Medic";
		hiddenSelectionsTextures[] =
		{
			"SWLB_clones_spec\data\camo1_co.paa",
			"SWLB_clones_spec\data\camo2_co.paa"
		};
		backpack = "XRay_BP_Commando_Medic";
	};
	class XRay_Commando_Sniper: SWLB_clone_commando_sniper_base
	{
		author = "DartRuffian";
		editorCategory = "DartArmory";
		editorSubcategory = "DA_XRay_Customs";
		
		displayName = "Glitch (X-Ray [Sniper])";

		uniformClass = "XRay_Uniform_Commando_Sniper";
		hiddenSelectionsTextures[] =
		{
			"SWLB_clones_spec\data\camo1_co.paa",
			"SWLB_clones_spec\data\camo2_co.paa"
		};
		backpack = "XRay_BP_Commando_Sniper";
	};

	// Backpacks
	class XRay_BP_Commando_SL: SWLB_clone_commando_backpack_k2_rto
	{
		author = "DartRuffian";
		displayName = "Katarn II Clone Commando RTO Backpack (X-Ray [Foreigner])";

		hiddenSelectionsTextures[] =
		{
			"SWLB_clones_spec\backpacks\data\backpack_co.paa",
			"SWLB_clones_spec\backpacks\data\backpack_co.paa"
		};
		maximumLoad = 740;
	};

	class XRay_BP_Commando_SL_Huge: XRay_BP_Commando_SL
	{
		displayName = "Katarn II Clone Commando RTO Backpack (X-Ray [Foreigner]) (Huge)";
		maximumLoad = 1100;
	};

	class XRay_BP_Commando_EOD: SWLB_clone_commando_backpack_k2_eod
	{
		author = "DartRuffian";
		displayName = "Katarn II Clone Commando EOD Backpack (X-Ray [Dart])";

		hiddenSelectionsTextures[] =
		{
			"XRayArmor\assets\backpacks\BP_Commando_EOD.paa",
			"XRayArmor\assets\backpacks\BP_Commando_EOD.paa"
		};
		maximumLoad = 740;
	};

	class XRay_BP_Commando_EOD_Huge: XRay_BP_Commando_EOD
	{
		displayName = "Katarn II Clone Commando EOD Backpack (X-Ray [Dart]) (Huge)";
		maximumLoad = 1100;
	};

	class XRay_BP_Commando_Medic: SWLB_clone_commando_backpack_k2_tech
	{
		author = "DartRuffian";
		displayName = "Katarn II Clone Commando Medic Backpack (X-Ray [Doc])";	

		hiddenSelectionsTextures[] =
		{
			"SWLB_clones_spec\backpacks\data\backpack_co.paa",
			"SWLB_clones_spec\backpacks\data\backpack_co.paa"
		};
		maximumLoad = 740;
	};

	class XRay_BP_Commando_Medic_Huge: XRay_BP_Commando_Medic
	{
		displayName = "Katarn II Clone Commando Medic Backpack (X-Ray [Doc]) (Huge)";	
		maximumLoad = 1100;
	};

	class XRay_BP_Commando_Sniper: SWLB_clone_commando_backpack_k2
	{
		author = "DartRuffian";
		displayName = "Katarn II Clone Commando Sniper Backpack (X-Ray [Glitch])";

		hiddenSelectionsTextures[] =
		{
			"SWLB_clones_spec\backpacks\data\backpack_co.paa",
			"SWLB_clones_spec\backpacks\data\backpack_co.paa"
		};
		maximumLoad = 740;
	};

	class XRay_BP_Commando_Sniper_Huge: XRay_BP_Commando_Sniper
	{
		displayName = "Katarn II Clone Commando Sniper Backpack (X-Ray [Glitch]) (Huge)";
		maximumLoad = 1100;
	};
};