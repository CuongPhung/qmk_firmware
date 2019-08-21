/* Copyright 2018 MechMerlin
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

#define _QWERTY 0
#define _NAV 1
#define _LIGHTS 2

#define TO_NAV LT(_NAV, KC_ESC)
#define TO_LIG MO(_LIGHTS)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT(
      KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,     KC_6,   KC_7,   KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_BSPC,
      KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,     KC_Y,   KC_U,   KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
      TO_NAV,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,     KC_H,   KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
      KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,     KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, TO_LIG,
      XXXXXXX, KC_LCTL, KC_LGUI,                   KC_SPACE,                 KC_RALT, KC_RGUI, XXXXXXX
      ),

  [_NAV] = LAYOUT(
      KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_TRNS, KC_DEL,
      XXXXXXX, KC_MPLY, KC_MPRV, KC_MNXT, XXXXXXX, XXXXXXX, XXXXXXX, KC_PGUP, KC_UP,   KC_PGDN, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
      KC_TRNS, KC_MUTE, KC_VOLD, KC_VOLU, XXXXXXX, XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX, XXXXXXX, XXXXXXX,
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
      KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS
      ),

  [_LIGHTS] = LAYOUT(
      KC_ESC,  RGB_M_P, RGB_M_B, RGB_M_R, RGB_M_SW, RGB_M_SN, RGB_M_K, RGB_M_X, RGB_M_G,  RGB_M_T, KC_F10,  KC_F11,  KC_F12,  KC_TRNS, RESET,
      KC_TRNS, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD,  RGB_SAI,  RGB_SAD, RGB_VAI, RGB_VAD, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS, BL_DEC,  BL_TOGG,  BL_INC,   BL_STEP, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_TRNS, KC_LALT,                   KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS
      ),

};


void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

