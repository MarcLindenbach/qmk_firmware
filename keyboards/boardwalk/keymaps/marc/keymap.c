#include QMK_KEYBOARD_H
#define KC_CTAB MT(MOD_LCTL, KC_TAB)
#define KC_SHNT MT(MOD_RSFT, KC_ENT)

// Layer shorthand
enum layer {
  _7U,
  _FN,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

 [_7U] = LAYOUT_ortho_7u(
  KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_EQL,  KC_PLUS, KC_6,   KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,  \
  KC_GRV,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_BSLS, KC_PIPE, KC_Y,   KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,  \
  KC_CTAB, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_LCBR, KC_RCBR, KC_H,   KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,  \
  KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_LBRC, KC_RBRC, KC_N,   KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_SHNT,  \
           KC_LALT, KC_LGUI,                              LT(1, KC_SPC),                            KC_RGUI, KC_RCTL            \
 ),

 [_FN] = LAYOUT_ortho_7u(
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RESET,   \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_DEL,  \
  _______, _______, KC_LCBR, KC_EQL,  KC_RCBR, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, EEP_RST, \
  KC_LPRN, _______, KC_LBRC, KC_PLUS, KC_RBRC, _______, _______, _______, _______, _______, _______, _______, _______, KC_RPRN, \
           _______, _______,                                _______,                                 _______, _______           \
 )
};
