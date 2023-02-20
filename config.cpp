class CfgFactionClasses
{
	class DA_Commandos_XRay
	{
		dlc = "DA_Customs";
		author = "DartRuffian";
		scope = 2;
		scopeCurator = 2;
		displayName = "[DA] Dart Armory"
	};
};

class CfgEditorSubcategories
{
	class DA_XRay
	{
		dlc = "DA";
		author = "DartRuffian";
		scope = 2;
		scopeCurator = 2;
		displayName = "X-Ray Commando Squad";
	};
}

class CfgPatches
{
	class ls_armor_bluefor
	{
		author="Dart";
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"SWLW_clones_spec",
			"SWLB_clones_spec_backpacks"
		};
		units[]=
		{
			// Units
			"XRAY_Foreigner_Commando",
			"XRAY_Dart_Commando",
			"XRAY_Doc_Commando",
			"XRAY_Glitch_Commando",

			// Backpacks
			"XRAY_BP_Commando_SL",
			"XRAY_BP_Commando_SL_Huge",
			"XRAY_BP_Commando_EOD",
			"XRAY_BP_Commando_EOD_Huge",
			"XRAY_BP_Commando_Medic",
			"XRAY_BP_Commando_Medic_Huge",
			"XRAY_BP_Commando_Sniper",
			"XRAY_BP_Commando_Sniper_Huge"
		};
		weapons[]=
		{
			"XRAY_Helmet_Commando_SL",
			"XRAY_Helmet_Commando_EOD",
			"XRAY_Helmet_Commando_Medic",
			"XRAY_Helmet_Commando_Sniper",

			"XRAY_Uniform_Commando_SL",
			"XRAY_Uniform_Commando_EOD",
			"XRAY_Uniform_Commando_Medic",
			"XRAY_Uniform_Commando_Sniper",

			"XRAY_Vest_Commando_SL",
			"XRAY_Vest_Commando_EOD",
			"XRAY_Vest_Commando_Medic",
			"XRAY_Vest_Commando_Sniper",
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
	class XRAY_Helmet_Commando_SL: SWLB_clone_commando_helmet_k1
	{
		author = "DartRuffian";
		displayName = "Katarn I Clone Commando Helmet (X-Ray [Foreigner])";
		hiddenSelectionsTextures[]=
		{
			"SWLB_clones_spec\data\helmet_co.paa",
			"SWLB_clones_spec\data\helmet_co.paa"
		};
	};
	class XRAY_Helmet_Commando_EOD: SWLB_clone_commando_helmet_k1
	{
		author = "DartRuffian";
		displayName = "Katarn I Clone Commando Helmet (X-Ray [Dart])";
		hiddenSelectionsTextures[]=
		{
			"SWLB_clones_spec\data\helmet_co.paa",
			"SWLB_clones_spec\data\helmet_co.paa"
		};
	};
	class XRAY_Helmet_Commando_Medic: SWLB_clone_commando_helmet_k1
	{
		author = "DartRuffian";
		displayName = "Katarn I Clone Commando Helmet (X-Ray [Doc])";
		hiddenSelectionsTextures[]=
		{
			"SWLB_clones_spec\data\helmet_co.paa",
			"SWLB_clones_spec\data\helmet_co.paa"
		};
	};
	class XRAY_Helmet_Commando_Sniper: SWLB_clone_commando_helmet_k1
	{
		author = "DartRuffian";
		displayName = "Katarn I Clone Commando Helmet (X-Ray [Glitch])";
		hiddenSelectionsTextures[]=
		{
			"SWLB_clones_spec\data\helmet_co.paa",
			"SWLB_clones_spec\data\helmet_co.paa"
		};
	};

	// Uniforms
	class XRAY_Uniform_Commando_SL: SWLB_clone_commando_uniform_k1
	{
		author = "DartRuffian";
		displayName = "Katarn I Clone Commando Armor (X-Ray [Foreigner])";
		class ItemInfo: ItemInfo
		{
			uniformClass = "XRAY_Commando_SL";
			uniformType = "Neopren";
		};
	};
	class XRAY_Uniform_Commando_EOD: SWLB_clone_commando_uniform_k1
	{
		author = "DartRuffian";
		displayName = "Katarn I Clone Commando Armor (X-Ray [Dart])";
		class ItemInfo: ItemInfo
		{
			uniformClass = "XRAY_Commando_EOD";
			uniformType = "Neopren";
		};
	};
	class XRAY_Uniform_Commando_Medic: SWLB_clone_commando_uniform_k1
	{
		author = "DartRuffian";
		displayName = "Katarn I Clone Commando Armor (X-Ray [Doc])";
		class ItemInfo: ItemInfo
		{
			uniformClass = "XRAY_Commando_Medic";
			uniformType = "Neopren";
		};
	};
	class XRAY_Uniform_Commando_Sniper: SWLB_clone_commando_uniform_k1
	{
		author = "DartRuffian";
		displayName = "Katarn I Clone Commando Armor (X-Ray [Glitch])";
		class ItemInfo: ItemInfo
		{
			uniformClass = "XRAY_Commando_Sniper";
			uniformType = "Neopren";
		};
	};

	// Vests
	class XRAY_Vest_Commando_SL: SWLB_clone_commando_sl_armor_k1
	{
		author = "DartRuffian";
		displayName = "Katarn I Clone Commando Squad Leader Pauldron (X-Ray [Foreigner])";
		class ItemInfo: ItemInfo
		{
			vestType = "Rebreather";
		};
	};
	class XRAY_Vest_Commando_EOD: SWLB_clone_commando_eod_armor_k1
	{
		author = "DartRuffian";
		displayName = "Katarn I Clone Commando EOD Vest (X-Ray [Dart])";
		class ItemInfo: ItemInfo
		{
			vestType = "Rebreather";
		};
	};
	class XRAY_Vest_Commando_Medic: SWLB_clone_commando_basic_armor_k1
	{
		author = "DartRuffian";
		displayName = "Katarn I Clone Commando Medic Vest (X-Ray [Doc])";
		class ItemInfo: ItemInfo
		{
			vestType = "Rebreather";
		};
	};
	class XRAY_Vest_Commando_Sniper: SWLB_clone_commando_sniper_armor_k1
	{
		author = "DartRuffian";
		displayName = "Katarn I Clone Commando Sniper Vest (X-Ray [Glitch])";
		class ItemInfo: ItemInfo
		{
			vestType = "Rebreather";
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
	class XRAY_Commando_SL: SWLB_clone_commando_sl_base
	{
		author = "DartRuffian";
		editorSubcategory = "DA_XRay";
		displayName = "Clone Commando Squad Leader - Foreigner";

		uniformClass = "XRAY_Uniform_Commando_SL";
		hiddenSelectionsTextures[] =
		{
			"SWLB_clones_spec\data\camo1_co.paa",
			"SWLB_clones_spec\data\camo2_co.paa"
		};
		backpack = "XRAY_BP_Commando_SL";
	};
	class XRAY_Commando_EOD: SWLB_clone_commando_eod_base
	{
		author = "DartRuffian";
		editorSubcategory = "DA_XRay";
		displayName = "Clone Commando EOD Specialist - Dart";

		uniformClass = "XRAY_Uniform_Commando_EOD";
		hiddenSelectionsTextures[]=
		{
			"SWLB_clones_spec\data\camo1_co.paa",
			"SWLB_clones_spec\data\camo2_co.paa"
		};
		backpack = "XRAY_BP_Commando_EOD";
	};
	class XRAY_Commando_Medic: SWLB_clone_commando_base
	{
		author = "DartRuffian";
		editorSubcategory = "DA_XRay";
		displayName = "Clone Commando Medic - Doc";

		uniformClass = "XRAY_Uniform_Commando_Medic";
		hiddenSelectionsTextures[]=
		{
			"SWLB_clones_spec\data\camo1_co.paa",
			"SWLB_clones_spec\data\camo2_co.paa"
		};
		backpack = "XRAY_BP_Commando_Medic";
	};
	class XRAY_Commando_Sniper: SWLB_clone_commando_sniper_base
	{
		author = "DartRuffian";
		editorSubcategory = "DA_XRay";
		displayName = "Clone Commando Sniper - Glitch";

		uniformClass = "XRAY_Uniform_Commando_Sniper";
		hiddenSelectionsTextures[]=
		{
			"SWLB_clones_spec\data\camo1_co.paa",
			"SWLB_clones_spec\data\camo2_co.paa"
		};
		backpack = "XRAY_BP_Commando_Sniper";
	};

	// Backpacks
	class XRAY_BP_Commando_SL: SWLB_clone_commando_backpack_k2_rto
	{
		author = "DartRuffian";
		displayName = "Katarn II Clone Commando RTO Backpack (X-Ray [Foreigner])";

		hiddenSelectionsTextures[]=
		{
			"\SWLB_clones_spec\backpacks\data\backpack_co.paa",
			"\SWLB_clones_spec\backpacks\data\backpack_co.paa"
		};
		maximumLoad = 740;
	};

	class XRAY_BP_Commando_SL_Huge: XRAY_BP_Commando_SL
	{
		displayName = "Katarn II Clone Commando RTO Backpack (X-Ray [Foreigner]) (Huge)";
		maximumLoad = 1100;
	};

	class XRAY_BP_Commando_EOD: SWLB_clone_commando_backpack_k2_eod
	{
		author = "DartRuffian";
		displayName = "Katarn II Clone Commando EOD Backpack (X-Ray [Dart])";

		hiddenSelectionsTextures[]=
		{
			"\SWLB_clones_spec\backpacks\data\backpack_co.paa",
			"\SWLB_clones_spec\backpacks\data\backpack_co.paa"
		};
		maximumLoad = 740;
	};

	class XRAY_BP_Commando_EOD_Huge: XRAY_BP_Commando_EOD
	{
		displayName = "Katarn II Clone Commando EOD Backpack (X-Ray [Dart]) (Huge)";
		maximumLoad = 1100;
	};

	class XRAY_BP_Commando_Medic: SWLB_clone_commando_backpack_k2_tech
	{
		author = "DartRuffian";
		displayName = "Katarn II Clone Commando Medic Backpack (X-Ray [Doc])";	

		hiddenSelectionsTextures[]=
		{
			"\SWLB_clones_spec\backpacks\data\backpack_co.paa",
			"\SWLB_clones_spec\backpacks\data\backpack_co.paa"
		};
		maximumLoad = 740;
	};

	class XRAY_BP_Commando_Medic_Huge: XRAY_BP_Commando_Medic
	{
		displayName = "Katarn II Clone Commando Medic Backpack (X-Ray [Doc]) (Huge)";	
		maximumLoad = 1100;
	};

	class XRAY_BP_Commando_Sniper: SWLB_clone_commando_backpack_k2
	{
		author = "DartRuffian";
		displayName = "Katarn II Clone Commando Sniper Backpack (X-Ray [Glitch])";

		hiddenSelectionsTextures[]=
		{
			"\SWLB_clones_spec\backpacks\data\backpack_co.paa",
			"\SWLB_clones_spec\backpacks\data\backpack_co.paa"
		};
		maximumLoad = 740;
	};

	class XRAY_BP_Commando_Sniper_Huge: XRAY_BP_Commando_Sniper
	{
		displayName = "Katarn II Clone Commando Sniper Backpack (X-Ray [Glitch]) (Huge)";
		maximumLoad = 1100;
	};
};