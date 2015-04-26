#pragma once

#define UI_SUCCEEDED(res) (((UI_RESULT)(res)) >= 0)
#define UI_FAILED(res) (((UI_RESULT)(res)) < 0)

enum UI_RESULT : int {
    UI_S_OK = 0,

    UI_E_FAIL = -1,

    UI_E_INIT_MODULE = -2,
    UI_E_INIT_REG_VALUE = -3,
    UI_E_INIT_REG_KEY = -4,
    UI_E_INIT_BROWSER_VERSION = -5,
};

enum WINDOW_POSITION : int {
    WINDOW_POSITION_AUTO = 0,
    WINDOW_POSITION_CENTERED = 1,
    WINDOW_POSITION_PX = 2,
    WINDOW_POSITION_PERCENT = 3,
};

enum WINDOW_STATE : int {
    WINDOW_STATE_NORMAL = 0,
    WINDOW_STATE_HIDDEN = 1,
    WINDOW_STATE_MAXIMIZED = 2,
    WINDOW_STATE_MINIMIZED = 3,
    WINDOW_STATE_FULLSCREEN = 4,
};

enum MENU_TYPE : int {
    MENU_TYPE_SIMPLE = 0,
    MENU_TYPE_SEPARATOR = 1,
};

enum ALERT_TYPE : int {
    ALERT_INFO = 0,
    ALERT_ERROR = 1
};