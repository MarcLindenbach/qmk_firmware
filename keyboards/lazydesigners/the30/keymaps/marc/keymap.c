#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

#define _______ KC_TRNS
#define XXXXXXX KC_NO

#define _RAISE 1
#define _LOWER 2
#define Z_SFT MT(MOD_LSFT, KC_Z)
#define B_LWR LT(_LOWER, KC_B)
#define SPC_RSE LT(_RAISE, KC_SPC)
#define SH_DOT MT(MOD_RSFT, KC_DOT)
#define CTRL_A MT(MOD_LCTL, KC_A)
#define ALT_C MT(MOD_LALT, KC_C)
#define CMD_V MT(MOD_LGUI, KC_V)
#define CMD_J MT(MOD_RGUI, KC_J)
#define CTRL_SE MT(MOD_LCTL, KC_SCLN)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ortho_3x10(
    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
    CTRL_A,  KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    CMD_J,   KC_K,    KC_L,    CTRL_SE,
    Z_SFT,   KC_X,    ALT_C,   CMD_V,   B_LWR,   SPC_RSE, KC_N,    KC_M,    KC_COMM, SH_DOT
  ),

  [_LOWER] = LAYOUT_ortho_3x10(
    KC_EXLM,   KC_AT,   KC_HASH, KC_DLR , KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_DEL,  KC_BSPC,
    KC_TAB,    KC_ESC,  XXXXXXX, XXXXXXX, RESET,   XXXXXXX, KC_MINS, XXXXXXX, KC_SLSH, KC_QUOT,
    KC_LPRN,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_UNDS, XXXXXXX, KC_QUES, KC_RPRN
  ),

  [_RAISE] = LAYOUT_ortho_3x10(
    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
    KC_BSLS, KC_LCBR, KC_EQL,  KC_RCBR, KC_GRV,  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_DQT,
    KC_PIPE, KC_LBRC, KC_PLUS, KC_RBRC, KC_TILD, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_ENT
  )
};
