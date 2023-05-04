private _category = format ["CE: %1", localize LSTRING(Category)];

[
    QGVAR(fadeIndicator),
    "CHECKBOX",
    [localize LSTRING(fadeIndicator), LLSTRING(fadeIndicatorTooltip)],
    _category,
    false,
    false,
    { }
] call CBA_fnc_addSetting;

[
    QGVAR(showStanceIndicator),
    "CHECKBOX",
    [localize LSTRING(ShowStanceIndicator), LLSTRING(ShowStanceIndicatorTooltip)],
    _category,
    true,
    false,
    { }
] call CBA_fnc_addSetting;

[
    QGVAR(showStanceSlider),
    "CHECKBOX",
    [localize LSTRING(ShowStanceSlider), localize LSTRING(ShowStanceSliderTooltip)],
    _category,
    true,
    false,
    { }
] call CBA_fnc_addSetting;

[
    QGVAR(showSpeedSlider),
    "CHECKBOX",
    [localize LSTRING(ShowSpeedSlider), localize LSTRING(ShowSpeedSliderTooltip)],
    _category,
    true,
    false,
    { }
] call CBA_fnc_addSetting;
