/*
 * Author: DartRuffian
 * Loads all option/keybind functions from the Settings category
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Examples:
 * call DAC_fnc_loadAllSettings;
 */


private _settingsFuncs = configProperties
[
    configFile >> "CfgFunctions" >> "DAC" >> "Settings"
] apply { configName _x; };
_settingsFuncs deleteAt (_settingsFuncs find "loadAllSettings");

{
    private _name = compile (format ["call DAC_fnc_%1", _x]);
    call _name;
} forEach _settingsFuncs;