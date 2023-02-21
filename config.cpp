#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgPatches.hpp"


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