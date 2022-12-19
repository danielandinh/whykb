#include QMK_KEYBOARD_H

// define keymap and layers
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_default(
        KC_TAB,     KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_BSPC,
        KC_LCTL,    KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_ENT,
        KC_LSFT,    MO(1),  KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_SLSH,    KC_RSFT,    KC_UP,
        KC_LGUI,    KC_LALT,                        KC_SPC,                 MO(2),  KC_LEFT,    KC_DOWN,    KC_RGHT
    ),
};