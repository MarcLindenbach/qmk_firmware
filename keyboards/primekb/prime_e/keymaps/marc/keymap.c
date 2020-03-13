/* Copyright 2018 Holten Campbell
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

#define _______ KC_TRNS
#define XXXXXXX KC_NO
#define KC_CTAB MT(MOD_LCTL, KC_TAB)
#define BCK_LWR LT(1, KC_BSPC)
#define SPC_RSE LT(2, KC_SPC)
#define KC_SHNT MT(MOD_RSFT, KC_ENT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  LAYOUT(
		KC_GRV,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,        KC_Y,     KC_U,    KC_I,      KC_O,     KC_P,     KC_MINS,  KC_BSLS,
		KC_CTAB,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,        KC_H,     KC_J,    KC_K,      KC_L,     KC_SCLN,  KC_QUOT,
		KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,        MO(3),    KC_N,    KC_M,      KC_COMM,  KC_DOT,   KC_SLSH,  KC_SHNT,
		KC_LCTL,  KC_LALT,                      KC_LGUI,  BCK_LWR,     SPC_RSE,  KC_RGUI,                                KC_RALT,  KC_RCTL
  ),

  LAYOUT(
    KC_ESC,   KC_EXLM,  KC_AT,    KC_HASH,  KC_DLR ,  KC_PERC,     KC_CIRC,  KC_AMPR,  KC_ASTR,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
    _______,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,     XXXXXXX,  KC_LCBR,  KC_EQL ,  KC_RCBR,  XXXXXXX,  _______,
    KC_LPRN,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,     XXXXXXX,  XXXXXXX,  KC_LBRC,  KC_PLUS,  KC_RBRC,  XXXXXXX,  KC_RPRN,
		_______,  _______,                      _______,  _______,     _______,  _______,                                _______,  _______
  ),

  LAYOUT(
		KC_DEL,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,        KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     XXXXXXX,  XXXXXXX,
		_______,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,     KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  XXXXXXX,  _______,
		XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,     KC_HOME,  KC_PGDN,  KC_PGUP,  KC_END,   XXXXXXX,  XXXXXXX,  XXXXXXX,
		_______,  _______,                      _______,  _______,     _______,  _______,                                _______,  _______
  ),

  LAYOUT(
		RESET,    KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,       KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,    KC_F11,   KC_F12,
		XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,     XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,   XXXXXXX,
		XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,     XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,   XXXXXXX,  XXXXXXX,
		XXXXXXX,  XXXXXXX,                      XXXXXXX,  XXXXXXX,	   XXXXXXX,  XXXXXXX,                                 XXXXXXX,  XXXXXXX
  )
};

void matrix_init_user(void) {
  // set CapsLock LED to output and low
  setPinOutput(B1);
  writePinLow(B1);
  // set NumLock LED to output and low
  setPinOutput(B2);
  writePinLow(B2);
  // set ScrollLock LED to output and low
  setPinOutput(B3);
  writePinLow(B3);
}

void matrix_scan_user(void) {

}


void led_set_user(uint8_t usb_led) {
  if (IS_LED_ON(usb_led, USB_LED_NUM_LOCK)) {
    writePinHigh(B2);
  } else {
    writePinLow(B2);
  }
  if (IS_LED_ON(usb_led, USB_LED_CAPS_LOCK)) {
    writePinHigh(B1);
  } else {
    writePinLow(B1);
  }
/*
  if (IS_LED_ON(usb_led, USB_LED_SCROLL_LOCK)) {
    writePinHigh(B3);
  } else {
    writePinLow(B3);
  }*/

}

//function for layer indicator LED
uint32_t layer_state_set_user(uint32_t state)
{
    if (biton32(state) == 1) {
    writePinHigh(B3);
	} else {
		writePinLow(B3);
    }
    return state;
}
