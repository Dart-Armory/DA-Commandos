#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Gives a LS radio to the given playable unit if they do not already have a radio.
 *
 * Arguments:
 * unit: Object - The unit to assign a radio to
 *
 * Return Value:
 * None
 *
 * Examples:
 * init = "_this call DAC_fnc_addRadio";
 */


params ["_unit"];
if !(GVAR(addRadioToPlayers)) exitWith {};

if (isPlayer _unit and _unit getSlotItemName 611 isEqualTo "") then
{
    _unit linkItem "SWLB_comlink";
};