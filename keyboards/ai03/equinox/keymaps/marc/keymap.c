#include QMK_KEYBOARD_H

#define _______ KC_TRNS
#define XXXXXXX KC_NO

#define KC_CTAB MT(MOD_LCTL, KC_TAB)
#define BCK_LWR LT(1, KC_BSPC)
#define SPC_RSE LT(2, KC_SPC)
#define MINS_FN LT(3, KC_MINS)
#define KC_SHNT MT(MOD_RSFT, KC_ENT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_all(
		KC_GRV,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,    KC_I,      KC_O,     KC_P,     MINS_FN,
		KC_CTAB,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,    KC_K,      KC_L,     XXXXXXX,  KC_SCLN,
		KC_LSFT,  XXXXXXX,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,    KC_M,      KC_COMM,  KC_DOT,   KC_SHNT,
		KC_LALT,  XXXXXXX,  KC_LGUI,            BCK_LWR,       SPC_RSE,       SPC_RSE,            KC_RGUI,  XXXXXXX,  KC_RCTL
  ),

  [1] = LAYOUT_all(
    KC_ESC,   KC_EXLM,  KC_AT,    KC_HASH,  KC_DLR ,  KC_PERC,  KC_CIRC,  KC_AMPR,  KC_ASTR,  XXXXXXX,  XXXXXXX,  KC_BSLS,
    _______,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_LCBR,  KC_EQL ,  KC_RCBR,  XXXXXXX,  KC_QUOT,
    KC_LPRN,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_LBRC,  KC_PLUS,  KC_RBRC,  KC_RPRN,
		_______,  _______,  _______,            _______,       _______,       _______,            _______,  _______,  _______
  ),

  [2] = LAYOUT_all(
		KC_DEL,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_PIPE,
		_______,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  XXXXXXX,  KC_DQT,
		_______,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_SLSH,
		_______,  _______,  _______,            _______,       _______,       _______,            _______,  _______,  _______
  ),

  [3] = LAYOUT_all(
		RESET,    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
		EEP_RST,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
		_______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
		_______,  _______,  _______,            _______,       _______,       _______,            _______,  _______,  _______
  )
};
