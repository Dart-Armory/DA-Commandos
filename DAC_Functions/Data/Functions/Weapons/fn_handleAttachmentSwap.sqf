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

// Check if enabled and has attachments configured
private _isEnabled =
[
    configFile >> "CfgWeapons" >> _weapon,
    "DAC_attachmentSwap",
    0
] call BIS_fnc_returnConfigEntry;

private _attachments =
[
    configFile >> "CfgWeapons" >> _weapon,
    "DAC_attachments",
    []
] call BIS_fnc_returnConfigEntry;

if (_isEnabled isEqualTo 0) exitWith {};
if (_attachments isEqualTo []) exitWith
{
    // Debug message
    if !(isMultiplayer) then
    {
        systemChat format ["%1 has DAC_attachmentSwap enabled, but does not have any attachments configured.", _weapon];
    };
};

{
    private _property = _x#0;
    private _attachment = _x#1;

    private _matches =
    [
        configFile >> "CfgMagazines" >> _newMagazine#0,
        _property,
        0
    ] call BIS_fnc_returnConfigEntry;

    systemChat str _matches;

    // Only add the first attachment that matches
    if (_matches isEqualTo 1) exitWith
    {
        _unit addWeaponItem [_weapon, _attachment];
    };
} forEach _attachments;