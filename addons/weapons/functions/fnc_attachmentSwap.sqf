#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Swaps weapons attachments on compatible weapons when reloading.
 *
 * Arguments:
 * See https://community.bistudio.com/wiki/Arma_3:_Event_Handlers/Reloaded
 *
 * Return Value:
 * None
 *
 * Examples:
 * reloaded = "_this call DAC_weapons_fnc_attachmentSwap";
 */


params ["_unit", "_weapon", "_muzzle", "_newMagazine", "_oldMagazine"];
private ["_isEnabled", "_attachments"];

_isEnabled = [
    configFile >> "CfgWeapons" >> _weapon,
    QGVAR(attachmentSwapEnabled),
    FALSE
] call BIS_fnc_returnConfigEntry;

_attachments = [
    configFile >> "CfgWeapons" >> _weapon,
    QGVAR(attachments),
    []
] call BIS_fnc_returnConfigEntry;

TRACE_5("fnc_attachmentSwap", _unit, _weapon, _newMagazine, _isEnabled, _attachments);

if (_isEnabled isEqualTo FALSE or _attachments isEqualTo []) exitWith {};

{
	private ["_property", "_attachment", "_matches"];
	_x params ["_property", "_attachment"];

    _matches = [
        configFile >> "CfgMagazines" >> _newMagazine#0,
        _property,
        FALSE
    ] call BIS_fnc_returnConfigEntry;

    // Only add the first attachment that matches
    if (_matches isEqualTo TRUE) exitWith {
        _unit addWeaponItem [_weapon, _attachment, true];
		INFO_2("Adding attachment %1 to %2", _attachment, _weapon);
    };
} forEach _attachments;