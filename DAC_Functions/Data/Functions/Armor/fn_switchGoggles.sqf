/*
 * Author: DartRuffian
 * CBA frame handler that triggers every five seconds to check if the local player is in water.
 * If the local player is in water, their goggles will be switched to the underwater version (if supported).
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Examples:
 * call DAC_fnc_switchGoggles;
 */


[
    {
        private _landGoggles =
        [
            configFile >> "CfgGlasses" >> goggles player,
            "DAC_Armor_landGoggles",
            ""
        ] call BIS_fnc_returnConfigEntry;
        private _waterGoggles =
        [
            configFile >> "CfgGlasses" >> goggles player,
            "DAC_Armor_waterGoggles",
            ""
        ] call BIS_fnc_returnConfigEntry;

        if (_landGoggles == "" or _waterGoggles == "") exitWith {};

        if (getDiverState player) then
        {
            player linkItem _waterGoggles;
        }
        else
        {
            player linkItem _landGoggles;
        };
    },
    5
] call CBA_fnc_addPerFrameHandler;