#define INPUT_MOUSE_SCROLL_UP	0xF8
#define INPUT_MOUSE_SCROLL_DOWN	0xF9
private _category = format ["CE: %1", localize LSTRING(Category)];

[
  _category,
  QGVAR(movementSpeedUp),
  [localize LSTRING(MovementSpeedUp), localize LSTRING(MovementSpeedUpTooltip)],
  {
    _this call FUNC(increaseSpeed)
  },
  {

  },
  [INPUT_MOUSE_SCROLL_UP, [false, true, false]]
] call CBA_fnc_addKeybind;

[
  _category,
  QGVAR(movementSpeedDown),
  [localize LSTRING(MovementSpeedDown), localize LSTRING(MovementSpeedDownTooltip)],
  {
    _this call FUNC(decreaseSpeed);
  },
  {

  },
  [INPUT_MOUSE_SCROLL_DOWN, [false, true, false]]
] call CBA_fnc_addKeybind;
