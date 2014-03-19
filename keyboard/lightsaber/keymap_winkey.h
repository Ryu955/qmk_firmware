static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    KEYMAP(\
        ESC, F1,  F2,   F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, DEL,      INS,    PSCR,    SLCK,       BRK,      \
        GRV, 1,   2,    3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC,     NUMLOCK,KP_SLASH,KP_ASTERISK,KP_MINUS, \
        TAB, Q,   W,    E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS,     KP_7,   KP_8,    KP_9,       KP_PLUS,  \
        CAPS,A,   S,    D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,FN0, ENT,      KP_4,   KP_5,    KP_6,       NO,       \
        LSFT,     Z,    X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,NO,  RSFT,     KP_1,   KP_2,    KP_3,       KP_ENTER, \
        LCTL,LGUI,LALT,                SPC,                NO,  RALT,RGUI,RCTL,     KP_0,   NO,      KP_DOT,     NO)
};

static const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_BACKLIGHT_STEP()
};
