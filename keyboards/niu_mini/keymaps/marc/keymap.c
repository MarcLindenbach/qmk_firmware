#include QMK_KEYBOARD_H

enum layers {
  _QWERTY,
  _LOWER,
  _RAISE,
};

enum keycodes {
  LOWER,
  RAISE,
};

#define CTL_TAB MT(MOD_LCTL,KC_TAB)
#define SH_ENT MT(MOD_RSFT, KC_ENT)
#define BSLOWER LT(_LOWER, KC_BSPC)
#define SPRAISE LT(_RAISE, KC_SPC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = {
    {KC_GRAVE,KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_MINS},
    {CTL_TAB, KC_A ,   KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT},
    {KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, SH_ENT },
    {KC_HYPR, _______, _______, KC_LALT, KC_LGUI, BSLOWER, SPRAISE, KC_RGUI, KC_RALT, _______, _______, KC_RCTL}
  },

  [_LOWER] = {
    {KC_ESC , KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_PLUS, KC_EQL , KC_BSLS},
    {KC_DEL , _______, KC_VOLD, KC_VOLU, _______, _______, _______, KC_LCBR, KC_EQL,  KC_RCBR, _______, _______},
    {KC_LPRN, _______, _______, _______, _______, _______, _______, KC_LBRC, KC_PLUS, KC_RBRC, _______, KC_RPRN},
    {_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______}
  },

  [_RAISE] = {
    {KC_ESC , KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_PIPE},
    {KC_DEL , _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, _______, _______},
    {KC_LSFT, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_RSFT},
    {_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______}
  },
};
