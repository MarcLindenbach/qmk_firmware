#include QMK_KEYBOARD_H

enum layers {
  _QWERTY,
  _RAISE,
};

enum keycodes {
  RAISE,
};

#define CTL_TAB MT(MOD_LCTL,KC_TAB)
#define KC_SHNT MT(MOD_RSFT, KC_ENT)
#define SPRAISE LT(_RAISE, KC_SPC)
#define GUI_J MT(MOD_LGUI, KC_J)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = {
    {KC_GRV,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC},
    {CTL_TAB, KC_A ,   KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    GUI_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT},
    {KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_SHNT },
    {KC_LCTL, KC_LALT, KC_LGUI, _______, _______, _______, SPRAISE, _______, _______, KC_RGUI, KC_RALT, KC_RCTL}
  },

  [_RAISE] = {
    {KC_ESC , KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS},
    {KC_DEL , KC_BSLS, KC_LCBR, KC_EQL,  KC_RCBR, _______, KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, _______, _______},
    {KC_LSFT, KC_PIPE, KC_LBRC, KC_PLUS, KC_RBRC, _______, _______, _______, _______, _______, _______, KC_RSFT},
    {_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______}
  },
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case KC_SHNT:
      return 170;
    default:
      return 180;
  }
}
