#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _ADJUST 16

#define Z_SFT MT(MOD_LSFT, KC_Z)
#define SH_ENT MT(MOD_RSFT, KC_ENT)
#define SPC_RSE LT(_RAISE, KC_SPC)
#define LWR LT(_LOWER, KC_BSPC)
#define CTRL_A MT(MOD_LCTL, KC_A)
#define CTRL_SC MT(MOD_LCTL, KC_SCLN)
#define CMD_J MT(MOD_RGUI, KC_J)

const uint16_t  PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_QWERTY] = LAYOUT(
  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
  CTRL_A,  KC_S,    KC_D,    KC_F,    KC_G,         KC_H,    CMD_J,   KC_K,    KC_L,    CTRL_SC,
  Z_SFT,   KC_X,    KC_C,    KC_V,    KC_B,         KC_N,    KC_M,    KC_COMM, KC_DOT,  SH_ENT,
                    KC_LALT, KC_LGUI, LWR,          SPC_RSE, KC_RGUI, KC_RALT
),

[_RAISE] = LAYOUT(
  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,         KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
  KC_BSLS, KC_LCBR, KC_EQL,  KC_RCBR, KC_GRV,       KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_QUOT,
  KC_PIPE, KC_LBRC, KC_PLUS, KC_RBRC, KC_TILD,      XXXXXXX, XXXXXXX, XXXXXXX, KC_QUES, KC_SLSH,
                    _______, _______, _______,      _______, _______, _______
),

[_LOWER] = LAYOUT(
  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,      KC_CIRC, KC_AMPR, KC_ASTR, _______, KC_DEL,
  KC_TAB,  _______, _______, _______, _______,      _______, _______, _______, KC_MINS, KC_DQT,
  KC_LPRN, _______, _______, _______, _______,      _______, _______, _______, KC_UNDS, KC_RPRN,
                    _______, _______, _______,      _______, _______, _______
),
};
