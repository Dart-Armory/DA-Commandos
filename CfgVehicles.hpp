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
	class XRay_Commando_SL_Base: SWLB_clone_commando_sl_base
	{
		author = "DartRuffian";
		editorCategory = "DartArmory";
		editorSubcategory = "DA_XRay_Base";

		displayName = "Clone Commando Squad Leader (X-Ray)";

		uniformClass = "XRay_Uniform_Commando_Base";

		linkedItems[] =
		{
			"XRay_Helmet_Commando_Base","XRay_Vest_Commando_SL","lsd_gar_republicCommando_hud","ItemMap","SWLB_comlink","ItemCompass",
		};
		respawnLinkedItems[] =
		{
			"XRay_Helmet_Commando_Base","XRay_Vest_Commando_SL","lsd_gar_republicCommando_hud","ItemMap","SWLB_comlink","ItemCompass",
		};
		backpack = "XRay_BP_Commando_SL_Base";
	};
	class XRay_Commando_EOD_Base: SWLB_clone_commando_eod_base
	{
		author = "DartRuffian";
		editorCategory = "DartArmory";
		editorSubcategory = "DA_XRay_Base";

		displayName = "Clone Commando EOD (X-Ray)";

		uniformClass = "XRay_Uniform_Commando_Base";

		linkedItems[] =
		{
			"XRay_Helmet_Commando_Base","XRay_Vest_Commando_EOD","lsd_gar_republicCommando_hud","ItemMap","SWLB_comlink","ItemCompass",
		};
		respawnLinkedItems[] =
		{
			"XRay_Helmet_Commando_Base","XRay_Vest_Commando_EOD","lsd_gar_republicCommando_hud","ItemMap","SWLB_comlink","ItemCompass",
		};
		backpack = "XRay_BP_Commando_EOD_Base";
	};
	class XRay_Commando_Medic_Base: SWLB_clone_commando_base
	{
		author = "DartRuffian";
		editorCategory = "DartArmory";
		editorSubcategory = "DA_XRay_Base";
		
		displayName = "Clone Commando Medic (X-Ray)";

		uniformClass = "XRay_Uniform_Commando_Base";

		linkedItems[] =
		{
			"XRay_Helmet_Commando_Base","XRay_Vest_Commando_Medic","lsd_gar_republicCommando_hud","ItemMap","SWLB_comlink","ItemCompass",
		};
		respawnLinkedItems[] =
		{
			"XRay_Helmet_Commando_Base","XRay_Vest_Commando_Medic","lsd_gar_republicCommando_hud","ItemMap","SWLB_comlink","ItemCompass",
		};
		backpack = "XRay_BP_Commando_Medic_Base";
	};
	class XRay_Commando_Sniper_Base: SWLB_clone_commando_sniper_base
	{
		author = "DartRuffian";
		editorCategory = "DartArmory";
		editorSubcategory = "DA_XRay_Base";
		
		displayName = "Clone Commando Sniper (X-Ray)";

		uniformClass = "XRay_Uniform_Commando_Base";

		linkedItems[] =
		{
			"XRay_Helmet_Commando_Base","XRay_Vest_Commando_Sniper","lsd_gar_republicCommando_hud","ItemMap","SWLB_comlink","ItemCompass",
		};
		respawnLinkedItems[] =
		{
			"XRay_Helmet_Commando_Base","XRay_Vest_Commando_Sniper","lsd_gar_republicCommando_hud","ItemMap","SWLB_comlink","ItemCompass",
		};
		backpack = "XRay_BP_Commando_Sniper_Base";
	};

	// Customs
	class XRay_Commando_SL_Custom: XRay_Commando_SL_Base
	{
		editorSubcategory = "DA_XRay_Customs";

		displayName = "Foreigner (X-Ray [Squad Lead])";

		uniformClass = "XRay_Uniform_Commando_SL";
		hiddenSelectionsTextures[] =
		{
			"XRayArmor\assets\uniforms\Uniform_Commando_SL_Upper.paa",
			"XRayArmor\assets\uniforms\Uniform_Commando_SL_Lower.paa"
		};

		linkedItems[] =
		{
			"XRay_Helmet_Commando_SL","XRay_Vest_Commando_SL","lsd_gar_republicCommando_hud","ItemMap","SWLB_comlink","ItemCompass",
		};
		respawnLinkedItems[] =
		{
			"XRay_Helmet_Commando_SL","XRay_Vest_Commando_SL","lsd_gar_republicCommando_hud","ItemMap","SWLB_comlink","ItemCompass",
		};
		backpack = "XRay_BP_Commando_SL_Custom";
	};
	class XRay_Commando_EOD_Custom: XRay_Commando_EOD_Base
	{
		editorSubcategory = "DA_XRay_Customs";

		displayName = "Dart (X-Ray [EOD])";

		uniformClass = "XRay_Uniform_Commando_EOD";
		hiddenSelectionsTextures[] =
		{
			"XRayArmor\assets\uniforms\Uniform_Commando_EOD_Upper.paa",
			"XRayArmor\assets\uniforms\Uniform_Commando_EOD_Lower.paa"
		};

		linkedItems[] =
		{
			"XRay_Helmet_Commando_EOD","XRay_Vest_Commando_EOD","lsd_gar_republicCommando_hud","ItemMap","SWLB_comlink","ItemCompass",
		};
		respawnLinkedItems[] =
		{
			"XRay_Helmet_Commando_EOD","XRay_Vest_Commando_EOD","lsd_gar_republicCommando_hud","ItemMap","SWLB_comlink","ItemCompass",
		};
		backpack = "XRay_BP_Commando_EOD_Custom";
	};
	class XRay_Commando_Medic_Custom: XRay_Commando_Medic_Base
	{
		editorSubcategory = "DA_XRay_Customs";
		
		displayName = "Doc (X-Ray [Medic])";

		uniformClass = "XRay_Uniform_Commando_Medic";
		hiddenSelectionsTextures[] =
		{
			"XRayArmor\assets\uniforms\Uniform_Commando_Medic_Upper.paa",
			"XRayArmor\assets\uniforms\Uniform_Commando_Medic_Lower.paa"
		};

		linkedItems[] =
		{
			"XRay_Helmet_Commando_Medic","XRay_Vest_Commando_Medic","lsd_gar_republicCommando_hud","ItemMap","SWLB_comlink","ItemCompass",
		};
		respawnLinkedItems[] =
		{
			"XRay_Helmet_Commando_Medic","XRay_Vest_Commando_Medic","lsd_gar_republicCommando_hud","ItemMap","SWLB_comlink","ItemCompass",
		};
		backpack = "XRay_BP_Commando_Medic_Custom";
	};
	class XRay_Commando_Sniper_Custom: XRay_Commando_Sniper_Base
	{
		author = "DartRuffian";
		editorCategory = "DartArmory";
		editorSubcategory = "DA_XRay_Customs";
		
		displayName = "Glitch (X-Ray [Sniper])";

		uniformClass = "XRay_Uniform_Commando_Sniper";
		hiddenSelectionsTextures[] =
		{
			"XRayArmor\assets\uniforms\Uniform_Commando_Sniper_Upper.paa",
			"XRayArmor\assets\uniforms\Uniform_Commando_Sniper_Lower.paa"
		};

		linkedItems[] =
		{
			"XRay_Helmet_Commando_Sniper","XRay_Vest_Commando_Sniper","lsd_gar_republicCommando_hud","ItemMap","SWLB_comlink","ItemCompass",
		};
		respawnLinkedItems[] =
		{
			"XRay_Helmet_Commando_Sniper","XRay_Vest_Commando_Sniper","lsd_gar_republicCommando_hud","ItemMap","SWLB_comlink","ItemCompass",
		};
		backpack = "XRay_BP_Commando_Sniper_Custom";
	};


	// Backpacks
	// Base
	class XRay_BP_Commando_SL_Base: SWLB_clone_commando_backpack_k2_rto
	{
		author = "DartRuffian";
		displayName = "Katarn II Clone Commando RTO Backpack (X-Ray [Plain])";
		maximumLoad = 740;
	};

	class XRay_BP_Commando_SL_Base_Huge: XRay_BP_Commando_SL_Base
	{
		displayName = "Katarn II Clone Commando RTO Backpack (X-Ray [Plain]) (Huge)";
		maximumLoad = 1100;
	};

	class XRay_BP_Commando_EOD_Base: SWLB_clone_commando_backpack_k2_eod
	{
		author = "DartRuffian";
		displayName = "Katarn II Clone Commando EOD Backpack (X-Ray [Plain])";
		maximumLoad = 740;
	};

	class XRay_BP_Commando_EOD_Base_Huge: XRay_BP_Commando_EOD_Base
	{
		displayName = "Katarn II Clone Commando EOD Backpack (X-Ray [Plain]) (Huge)";
		maximumLoad = 1100;
	};

	class XRay_BP_Commando_Medic_Base: SWLB_clone_commando_backpack_k2_tech
	{
		author = "DartRuffian";
		displayName = "Katarn II Clone Commando Medic Backpack (X-Ray [Plain])";	
		maximumLoad = 740;
	};

	class XRay_BP_Commando_Medic_Base_Huge: XRay_BP_Commando_Medic_Base
	{
		displayName = "Katarn II Clone Commando Medic Backpack (X-Ray [Plain]) (Huge)";	
		maximumLoad = 1100;
	};

	class XRay_BP_Commando_Sniper_Base: SWLB_clone_commando_backpack_k2
	{
		author = "DartRuffian";
		displayName = "Katarn II Clone Commando Sniper Backpack (X-Ray [Plain])";
		maximumLoad = 740;
	};

	class XRay_BP_Commando_Sniper_Base_Huge: XRay_BP_Commando_Sniper_Base
	{
		displayName = "Katarn II Clone Commando Sniper Backpack (X-Ray [Plain]) (Huge)";
		maximumLoad = 1100;
	};

	// Customs
	class XRay_BP_Commando_SL_Custom: XRay_BP_Commando_SL_Base
	{
		displayName = "Katarn II Clone Commando RTO Backpack (X-Ray [Foreigner])";
		hiddenSelectionsTextures[] =
		{
			"XRayArmor\assets\backpacks\Backpack_Commando_SL.paa",
			"XRayArmor\assets\backpacks\Backpack_Commando_SL.paa"
		};
	};
	class XRay_BP_Commando_SL_Custom_Huge: XRay_BP_Commando_SL_Base_Huge
	{
		displayName = "Katarn II Clone Commando RTO Backpack (X-Ray [Foreigner]) (Huge)";
		hiddenSelectionsTextures[] =
		{
			"XRayArmor\assets\backpacks\Backpack_Commando_SL.paa",
			"XRayArmor\assets\backpacks\Backpack_Commando_SL.paa"
		};
	};

	class XRay_BP_Commando_EOD_Custom: XRay_BP_Commando_EOD_Base
	{
		displayName = "Katarn II Clone Commando EOD Backpack (X-Ray [Dart])";
		hiddenSelectionsTextures[] =
		{
			"XRayArmor\assets\backpacks\BP_Commando_EOD.paa",
			"XRayArmor\assets\backpacks\BP_Commando_EOD.paa"
		};
	};
	class XRay_BP_Commando_EOD_Custom_Huge: XRay_BP_Commando_EOD_Base_Huge
	{
		displayName = "Katarn II Clone Commando EOD Backpack (X-Ray [Dart]) (Huge)";
		hiddenSelectionsTextures[] =
		{
			"XRayArmor\assets\backpacks\BP_Commando_EOD.paa",
			"XRayArmor\assets\backpacks\BP_Commando_EOD.paa"
		};
	};

	class XRay_BP_Commando_Medic_Custom: XRay_BP_Commando_Medic_Base
	{
		displayName = "Katarn II Clone Commando Medic Backpack (X-Ray [Doc])";
		hiddenSelectionsTextures[] =
		{
			"XRayArmor\assets\backpacks\BP_Commando_Medic_Base.paa",
			"XRayArmor\assets\backpacks\BP_Commando_Medic_Base.paa",
			"XRayArmor\assets\backpacks\BP_Commando_Medic_Extra.paa"
		};
	};
	class XRay_BP_Commando_Medic_Custom_Huge: XRay_BP_Commando_Medic_Base_Huge
	{
		displayName = "Katarn II Clone Commando Medic Backpack (X-Ray [Doc]) (Huge)";
		hiddenSelectionsTextures[] =
		{
			"XRayArmor\assets\backpacks\BP_Commando_Medic_Base.paa",
			"XRayArmor\assets\backpacks\BP_Commando_Medic_Base.paa",
			"XRayArmor\assets\backpacks\BP_Commando_Medic_Extra.paa"
		};
	};

	class XRay_BP_Commando_Sniper_Custom: XRay_BP_Commando_Sniper_Base
	{
		displayName = "Katarn II Clone Commando Sniper Backpack (X-Ray [Glitch])";
		hiddenSelectionsTextures[] =
		{
			"XRayArmor\assets\backpacks\Backpack_Commando_Sniper.paa",
			"XRayArmor\assets\backpacks\Backpack_Commando_Sniper.paa"
		};
	};
	class XRay_BP_Commando_Sniper_Custom_Huge: XRay_BP_Commando_Sniper_Base_Huge
	{
		displayName = "Katarn II Clone Commando Sniper Backpack (X-Ray [Glitch]) (Huge)";
		hiddenSelectionsTextures[] =
		{
			"XRayArmor\assets\backpacks\Backpack_Commando_Sniper.paa",
			"XRayArmor\assets\backpacks\Backpack_Commando_Sniper.paa"
		};
	};
};