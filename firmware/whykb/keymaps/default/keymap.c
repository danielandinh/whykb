#include QMK_KEYBOARD_H
#include <stdio.h>

char wpm_str[10];

// define keymap and layers
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_default(
        KC_TAB,     KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_BSPC,
        KC_LCTL,    KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_ENT,
        KC_LSFT,    MO(1),  KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_SLSH,    KC_RSFT,    KC_UP,
        KC_LGUI,    KC_LALT,                        KC_SPC,                 MO(2),  KC_LEFT,    KC_DOWN,    KC_RGHT
    ),

    [1] = LAYOUT_default(
        KC_TAB,     KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_BSPC,
        KC_LCTL,    KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_ENT,
        KC_LSFT,    KC_N,   KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_SLSH,    KC_RSFT,    KC_UP,
        KC_LGUI,    KC_LALT,                        KC_SPC,                 KC_F,   KC_LEFT,    KC_DOWN,    KC_RGHT
    ),

    [2] = LAYOUT_default(
        KC_TAB,     KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_BSPC,
        KC_LCTL,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_F11,  KC_F12,  KC_ENT,
        KC_LSFT,    KC_N,   KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_SLSH,    KC_RSFT,    KC_UP,
        KC_LGUI,    KC_LALT,                        KC_SPC,                 KC_F,   KC_LEFT,    KC_DOWN,    KC_RGHT
    )
};

// Turning knob changes volume
#ifdef ENCODER_ENABLE
bool encoder_update_kb(uint8_t index, bool clockwise) {
    if (!encoder_update_user(index, clockwise)) {
        return false;
    }
	// Volume control
	if (clockwise) {
		tap_code(KC_VOLU);
	} else {
		tap_code(KC_VOLD);
	}
	return false;
}
#endif


#ifdef OLED_ENABLE
// Used to draw on to the oled screen
bool oled_task_user(void) {                        
    oled_write_P(PSTR("Hello"), false);
    return true;
}
#endif