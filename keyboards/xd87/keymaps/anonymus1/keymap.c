#include QMK_KEYBOARD_H

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
  QMKBEST = SAFE_RANGE,
  QMKURL,
  POOPIN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_tkl_ansi(
      KC_ESC,  KC_F1,  KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8,  KC_F9,  KC_F10, KC_F11,  KC_F12,                      KC_PSCR, KC_SLCK, KC_PAUS,
      KC_GRV,  KC_1,   KC_2,  KC_3,  KC_4,  KC_5,  KC_6,  KC_7,  KC_8,   KC_9,   KC_0,   KC_MINS, KC_EQL,  KC_BSPC,            KC_INS,  KC_HOME, KC_PGUP,
      KC_TAB,  KC_Q,   KC_W,  KC_E,  KC_R,  KC_T,  KC_Y,  KC_U,  KC_I,   KC_O,   KC_P,   KC_LBRC, KC_RBRC, KC_BSLS,            KC_DEL,  KC_END,  KC_PGDN,
      KC_CAPS, KC_A,   KC_S,  KC_D,  KC_F,  KC_G,  KC_H,  KC_J,  KC_K,   KC_L,   KC_SCLN,KC_QUOT,          KC_ENT,                                       
      KC_LSFT, KC_Z,   KC_X,  KC_C,  KC_V,  KC_B,  KC_N,  KC_M,  KC_COMM,KC_DOT, KC_SLSH,                  KC_RSFT,                     KC_UP,           
      KC_LCTL, KC_LGUI,KC_LALT,                     KC_SPC,                      KC_RALT,MO(1),   KC_APP,  KC_RCTL,            KC_LEFT, KC_DOWN, KC_RGHT   ),
  [1] = LAYOUT_tkl_ansi(
      RESET, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MRWD, KC_MPLY, KC_MFFD, KC_TRNS, KC_TRNS, KC_TRNS, KC_BRID, KC_BRIU,           KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, POOPIN, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, RGB_TOG, RGB_VAI, RGB_MOD, RGB_HUI, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_TRNS, RGB_VAD, RGB_RMOD,RGB_HUD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,                            
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS,           KC_TRNS,         
      KC_TRNS, KC_TRNS, KC_TRNS,                          KC_TRNS,                              KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS   )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QMKBEST:
      if (record->event.pressed) {
        // when keycode QMKBEST is pressed
        SEND_STRING("QMK is the best thing ever!");
      } else {
        // when keycode QMKBEST is released
      }
      break;
    case QMKURL:
      if (record->event.pressed) {
        // when keycode QMKURL is pressed
        SEND_STRING("https://qmk.fm/" SS_TAP(X_ENTER));
      } else {
        // when keycode QMKURL is released
      }
      break;
    case POOPIN:
      if (record->event.pressed) {
		SEND_STRING("I really just hit my poopin button™" SS_TAP(X_ENTER));
      } else {
		// released
	  }
  }
  return true;
}

void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

void led_set_user(uint8_t usb_led) {

}
