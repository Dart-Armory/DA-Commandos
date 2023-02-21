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
	// Base Commandos

	// Customs
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

		linkedItems[] =
		{
			"XRay_Helmet_Commando_SL","XRay_Vest_Commando_SL_Custom","lsd_gar_republicCommando_hud","ItemMap","SWLB_comlink","ItemCompass",
		};
		respawnLinkedItems[] =
		{
			"XRay_Helmet_Commando_SL","XRay_Vest_Commando_SL_Custom","lsd_gar_republicCommando_hud","ItemMap","SWLB_comlink","ItemCompass",
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

		linkedItems[] =
		{
			"XRay_Helmet_Commando_EOD","XRay_Vest_Commando_EOD_Custom","lsd_gar_republicCommando_hud","ItemMap","SWLB_comlink","ItemCompass",
		};
		respawnLinkedItems[] =
		{
			"XRay_Helmet_Commando_EOD","XRay_Vest_Commando_EOD_Custom","lsd_gar_republicCommando_hud","ItemMap","SWLB_comlink","ItemCompass",
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

		linkedItems[] =
		{
			"XRay_Helmet_Commando_Medic","XRay_Vest_Commando_Medic_Custom","lsd_gar_republicCommando_hud","ItemMap","SWLB_comlink","ItemCompass",
		};
		respawnLinkedItems[] =
		{
			"XRay_Helmet_Commando_Medic","XRay_Vest_Commando_Medic_Custom","lsd_gar_republicCommando_hud","ItemMap","SWLB_comlink","ItemCompass",
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

		linkedItems[] =
		{
			"XRay_Helmet_Commando_Sniper","XRay_Vest_Commando_Sniper_Custom","lsd_gar_republicCommando_hud","ItemMap","SWLB_comlink","ItemCompass",
		};
		respawnLinkedItems[] =
		{
			"XRay_Helmet_Commando_Sniper","XRay_Vest_Commando_Sniper_Custom","lsd_gar_republicCommando_hud","ItemMap","SWLB_comlink","ItemCompass",
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