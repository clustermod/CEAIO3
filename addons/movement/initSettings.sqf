private _category = format ["CE: %1", localize LSTRING(Category)];

[
    QGVAR(showStanceIndicator),
    "CHECKBOX",
    [localize LSTRING(ShowStanceIndicator), LLSTRING(ShowStanceIndicatorTooltip)],
    _category,
    true,
    false,
    {
      (uiNamespace getVariable QGVAR(stance_indicator)) ctrlShow GVAR(showStanceIndicator)
    }
] call CBA_fnc_addSetting;

[
    QGVAR(showStanceSlider),
    "CHECKBOX",
    [localize LSTRING(ShowStanceSlider), localize LSTRING(ShowStanceSliderTooltip)],
    _category,
    true,
    false,
    {
      (uiNamespace getVariable QGVAR(stance_slider_bar)) ctrlShow GVAR(showStanceSlider);
      (uiNamespace getVariable QGVAR(stance_slider_arrow)) ctrlShow GVAR(showStanceSlider);
    }
] call CBA_fnc_addSetting;

[
    QGVAR(showSpeedSlider),
    "CHECKBOX",
    [localize LSTRING(ShowSpeedSlider), localize LSTRING(ShowSpeedSliderTooltip)],
    _category,
    true,
    false,
    {
      (uiNamespace getVariable QGVAR(speed_slider_bar)) ctrlShow GVAR(showSpeedSlider);
      (uiNamespace getVariable QGVAR(speed_slider_arrow)) ctrlShow GVAR(showSpeedSlider);
    }
] call CBA_fnc_addSetting;
