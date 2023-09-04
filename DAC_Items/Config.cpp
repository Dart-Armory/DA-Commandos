#include "CfgPatches.hpp"


class CfgWeapons
{
    class CBA_MiscItem;
    class CBA_MiscItem_ItemInfo;
    class WBK_KatarnCloneKnife: CBA_MiscItem
    {
        // Fixes the vibroblade counting as a mine detector
        displayName = "Katarn I Knuckle Vibroblade";
        descriptionShort = "A retractable blade inside the Katarn-class armor.";

        picture = "\DAC_Items\Data\Textures\UI\Katarn_Knife_UI.paa";

        simulation = "Weapon";

        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass = 2;
        };
    };
};