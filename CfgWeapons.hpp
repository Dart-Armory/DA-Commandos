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
			"XRayArmor\assets\helmets\Helmet_Commando_SL.paa",
			"XRayArmor\assets\helmets\Helmet_Commando_SL.paa"
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
			"XRayArmor\assets\helmets\Helmet_Commando_Medic.paa",
			"XRayArmor\assets\helmets\Helmet_Commando_Medic.paa"
		};
	};
	class XRay_Helmet_Commando_Sniper: XRay_Helmet_Commando_Base
	{
		displayName = "Katarn I Clone Commando Helmet (X-Ray [Glitch])";
		hiddenSelectionsTextures[] =
		{
			"XRayArmor\assets\helmets\Helmet_Commando_Sniper.paa",
			"XRayArmor\assets\helmets\Helmet_Commando_Sniper.paa"
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
			uniformClass = "XRay_Commando_SL_Custom";
			uniformType = "Neopren";
		};
	};
	class XRay_Uniform_Commando_EOD: XRay_Uniform_Commando_Base
	{
		displayName = "Katarn I Clone Commando Armor (X-Ray [Dart])";
		class ItemInfo: ItemInfo
		{
			uniformClass = "XRay_Commando_EOD_Custom";
			uniformType = "Neopren";
		};
	};
	class XRay_Uniform_Commando_Medic: XRay_Uniform_Commando_Base
	{
		displayName = "Katarn I Clone Commando Armor (X-Ray [Doc])";
		class ItemInfo: ItemInfo
		{
			uniformClass = "XRay_Commando_Medic_Custom";
			uniformType = "Neopren";
		};
	};
	class XRay_Uniform_Commando_Sniper: XRay_Uniform_Commando_Base
	{
		displayName = "Katarn I Clone Commando Armor (X-Ray [Glitch])";
		class ItemInfo: ItemInfo
		{
			uniformClass = "XRay_Commando_Sniper_Custom";
			uniformType = "Neopren";
		};
	};

	// Vests
	class XRay_Vest_Commando_SL: SWLB_clone_commando_sl_armor_k1
	{
		author = "DartRuffian";
		displayName = "Katarn I Clone Commando Squad Leader Pauldron (X-Ray)";
		class ItemInfo: ItemInfo
		{
			vestType = "Rebreather";
		};
	};
	class XRay_Vest_Commando_EOD: SWLB_clone_commando_eod_armor_k1
	{
		author = "DartRuffian";
		displayName = "Katarn I Clone Commando EOD Vest (X-Ray)";
		class ItemInfo: ItemInfo
		{
			vestType = "Rebreather";
		};
	};
	class XRay_Vest_Commando_Medic: SWLB_clone_commando_basic_armor_k1
	{
		author = "DartRuffian";
		displayName = "Katarn I Clone Commando Medic Vest (X-Ray)";
		class ItemInfo: ItemInfo
		{
			vestType = "Rebreather";
		};
	};
	class XRay_Vest_Commando_Sniper: SWLB_clone_commando_sniper_armor_k1
	{
		author = "DartRuffian";
		displayName = "Katarn I Clone Commando Sniper Vest (X-Ray)";
		class ItemInfo: ItemInfo
		{
			vestType = "Rebreather";
		};
	};
};