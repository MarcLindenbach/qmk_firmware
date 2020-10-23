/* #include QMK_KEYBOARD_H */

/* const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = { */
/*   [0] = LAYOUT_arrow( */
/*       KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, */
/*       LCTL_T(KC_TAB), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, */
/*       KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_UP, KC_RSFT, */
/*       KC_LCTL, KC_LGUI, KC_LALT, LT(1,KC_ENT), LT(2,KC_SPC), KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT */
/*       ), */
/*   [1] = LAYOUT_arrow( */
/*       KC_GRV, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_MINS, */
/*       KC_DEL, KC_NO, KC_NO, KC_NO, KC_PLUS, KC_NO, KC_NO, KC_EQL, KC_LCBR, KC_RCBR, KC_NO, KC_BSLS, */
/*       KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PGUP, KC_NO, KC_NO, */
/*       KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO, KC_HOME, KC_PGDN, KC_END), */
/*   [2] = LAYOUT_arrow( */
/*       KC_TILD, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_UNDS, KC_DEL, */
/*       KC_NO, KC_NO, KC_NO, KC_PLUS, KC_NO, KC_NO, KC_EQL, KC_LBRC, KC_RBRC, KC_NO, KC_BSLS, */
/*       KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, */
/*       KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO) */
/* }; */

#include "planck.h"
#include "action_layer.h"
#include "muse.h"

extern keymap_config_t keymap_config;

enum planck_layers {
  _QWERTY,
  _LOWER,
  _RAISE,
};

#define LOWER LT(_LOWER, KC_ENT)
#define RAISE LT(_RAISE, KC_SPC)
#define CTAB MT(MOD_LCTL, KC_TAB)
#define SENT MT(MOD_RSFT, KC_ENT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_QWERTY] = LAYOUT_planck_grid(
    KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
    CTAB,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_UP,   KC_RSFT,
    _______, KC_LCTL, KC_LGUI, KC_LALT, LOWER,  LOWER,    RAISE,   RAISE,   KC_RCTL, KC_LEFT, KC_DOWN, KC_RIGHT
),

[_LOWER] = LAYOUT_planck_grid(
    KC_GRV,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,  KC_MINS,
    KC_DEL,  _______, _______, _______, KC_PLUS, _______, _______, KC_EQL,  KC_LCBR, KC_RCBR, _______, KC_BSLS,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_PGUP, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_HOME, KC_PGDN, KC_END
),

[_RAISE] = LAYOUT_planck_grid(
    KC_TILD, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_UNDS,
    KC_DEL,  _______, _______, _______, KC_PLUS, _______, _______, KC_EQL,  _______, _______, _______, KC_PIPE,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
),
};
