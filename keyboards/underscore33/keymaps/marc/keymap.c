#include QMK_KEYBOARD_H

#define _______ KC_TRNS
#define XXXXXXX KC_NO

#define _BASE 0
#define _RAISE 1
#define _LOWER 2

#define CTRL_A MT(MOD_LCTL, KC_A)
#define CTRL_SE MT(MOD_LCTL, KC_SCLN)
#define LW_F LT(_LOWER, KC_F)
#define RS_SPC LT(_RAISE, KC_SPC)
#define Z_SFT MT(MOD_LSFT, KC_Z)
#define GUI_J MT(MOD_LGUI, KC_J)
#define ALT_D MT(MOD_LALT, KC_D)
#define SH_ENT MT(MOD_LSFT, KC_ENT)
#define SH_SLSH MT(MOD_RSFT, KC_SLSH)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_33_split_space(
    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
    CTRL_A,  KC_S,    ALT_D,    LW_F,   KC_G,    KC_H,    GUI_J,   KC_K,    KC_L,    CTRL_SE,
    Z_SFT,   KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  SH_ENT,
                      KC_LGUI, _______, RS_SPC,  _______, KC_RALT
  ),

  [_RAISE] = LAYOUT_33_split_space(
    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
    KC_BSLS, KC_LCBR, KC_EQL,  KC_RCBR, KC_GRV,  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_QUOT,
    _______, KC_LBRC, KC_PLUS, KC_RBRC, KC_TILD, _______, _______, _______, _______, SH_SLSH,
                        _______, _______, _______, _______, _______
  ),

  [_LOWER] = LAYOUT_33_split_space(
    KC_ESC,  KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_EXLM, KC_BSPC,
    KC_TAB,  _______, _______, _______, _______, _______, _______, _______, KC_UNDS, KC_MINS,
    KC_LPRN, _______, _______, _______, _______, _______, _______, _______, _______, KC_RPRN,
                        _______, _______, KC_BSPC, _______, _______
  ),
};
