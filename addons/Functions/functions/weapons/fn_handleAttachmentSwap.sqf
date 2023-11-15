#include "..\..\script_component.hpp"
/*
 * Author: DartRuffian
 * Handles automatic weapon attachment switching for different magazines.
 *
 * Arguments:
 * See https://community.bistudio.com/wiki/Arma_3:_Event_Handlers/Reloaded
 *
 * Return Value:
 * None
 *
 * Examples:
 * reloaded = "_this call DAC_fnc_handleAttachmentSwap";
 */


params ["_unit", "_weapon", "_muzzle", "_newMagazine", "_oldMagazine"];
private ["_isEnabled", "_attachments"];

_isEnabled =
[
	configFile >> "CfgWeapons" >> _weapon,
	QEGVAR(weapons,attachmentSwap),
	FALSE
] call BIS_fnc_returnConfigEntry;

_attachments =
[
    configFile >> "CfgWeapons" >> _weapon,
    QEGVAR(weapons,attachments),
    []
] call BIS_fnc_returnConfigEntry;

if (_isEnabled isEqualTo FALSE) exitWith {};
if (_attachments isEqualTo []) exitWith
{
	if !(isMultiplayer) then
	{
		WARNING_1("[%1] has attachment swapping enabled, but does not have any attachments configured.", _weapon);
	};
};

{
	private ["_property", "_attachment", "_isMatch"];
	_x params ["_property", "_attachment"];

	_isMatch =
	[
		configFile >> "CfgMagazines" >> _newMagazine#0,
		_property,
		FALSE
	] call BIS_fnc_returnConfigEntry;

	if (_isMatch isEqualTo TRUE) exitWith
	{
		_unit addWeaponItem [_weapon, _attachment];
	};
} forEach _attachments;