#include "script_component.hpp"


[
    QGVAR(addRadioToPlayers),
    "CHECKBOX",
    ["Assign Radio", "Automatically assign radios to players without one when the mission starts."],
    ["Dart Armory Commandos", QUOTE(COMPONENT_BEAUTIFIED)],
    true,
    TRUE
] call CBA_fnc_addSetting;