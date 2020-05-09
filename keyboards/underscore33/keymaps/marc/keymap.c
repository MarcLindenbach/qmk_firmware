#include QMK_KEYBOARD_H

#define _______ KC_TRNS
#define XXXXXXX KC_NO

#define _BASE 0
#define _RAISE 1
#define _LOWER 2

#define CTRL_A MT(MOD_LCTL, KC_A)
#define CTRL_SE MT(MOD_LCTL, KC_SCLN)
#define LW_BSP LT(_LOWER, KC_BSPC)
#define RS_SPC LT(_RAISE, KC_SPC)
#define Z_SFT MT(MOD_LSFT, KC_Z)
#define F_ALT MT(MOD_LALT, KC_F)
#define SH_ENT MT(MOD_LSFT, KC_ENT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_33_split_space(
    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
    CTRL_A,  KC_S,    KC_D,    F_ALT,   KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    CTRL_SE,
    Z_SFT,   KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  SH_ENT,
                      KC_LGUI, LW_BSP,  RS_SPC,  KC_RGUI, KC_RALT
  ),

  [_LOWER] = LAYOUT_33_split_space(
    KC_EXLM,   KC_AT,   KC_HASH, KC_DLR , KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_DEL,  KC_BSPC,
    KC_TAB,    XXXXXXX, KC_BSLS, KC_GRV, KC_MINS, XXXXXXX, KC_LCBR, KC_EQL,  KC_RCBR, KC_QUOT,
    KC_LPRN,   XXXXXXX, KC_PIPE, KC_TILD, KC_UNDS, XXXXXXX, KC_LBRC, KC_PLUS, KC_RBRC, KC_RPRN,
                        _______, _______, _______, _______, _______
  ),

  [_RAISE] = LAYOUT_33_split_space(
    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
    KC_ESC,  XXXXXXX, XXXXXXX, KC_GRV,  KC_BSLS, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_DQT,
    _______, XXXXXXX, XXXXXXX, KC_TILD, KC_PIPE, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_SLSH,
                        _______, _______, _______, _______, _______
  )
};
