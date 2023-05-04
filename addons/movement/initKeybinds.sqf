#define INPUT_MOUSE_SCROLL_UP	0xF8
#define INPUT_MOUSE_SCROLL_DOWN	0xF9
private _category = format ["CE: %1", localize LSTRING(Category)];

[
    _category,
    QGVAR(movementSpeedUp),
    [localize LSTRING(MovementSpeedUp), localize LSTRING(MovementSpeedUpTooltip)], {
        GVAR(speed) = (GVAR(speed) + 1) min 7;
    }, { },
    [INPUT_MOUSE_SCROLL_UP, [false, true, false]]
    ] call CBA_fnc_addKeybind;

    [
    _category,
    QGVAR(movementSpeedDown),
    [localize LSTRING(MovementSpeedDown), localize LSTRING(MovementSpeedDownTooltip)], {
        GVAR(speed) = (GVAR(speed) - 1) max 0;
    }, { },
    [INPUT_MOUSE_SCROLL_DOWN, [false, true, false]]
] call CBA_fnc_addKeybind;
