/* Copyright 2018 MechMerlin
 * Copyright 2018 Logan Huskins
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

#define _BASE 0
#define _FN 1
#define _LED 2

#define _____ KC_TRNS
#define OOOOO KC_TRNS //keep these transparent for layer switching
#define XXXXX KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_60_ansi(
    KC_GESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC,
    KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
    LT(_FN, KC_CAPS), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
    KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, RSFT_T(KC_UP),
    KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_RALT, RGUI_T(KC_LEFT), LT(_FN, KC_DOWN), RCTL_T(KC_RGHT)
  ),

  [_FN] = LAYOUT_60_ansi(
    KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_DEL,
    _____, _____, KC_UP, _____, _____, _____, _____, _____, _____, _____, KC_PSCR, KC_SLCK, KC_PAUS, _____,
    OOOOO, KC_LEFT, KC_DOWN, KC_RGHT, _____, _____, _____, _____, _____, KC_INS, KC_HOME, KC_PGUP, _____,
    _____, KC_VOLU, KC_VOLD, KC_MUTE, _____, _____, _____, _____, _____, KC_END, KC_PGDN, KC_RSFT,
    _____, _____, _____, _____, _____, MO(_LED), OOOOO, KC_RCTL
  ),

  [_LED] = LAYOUT_60_ansi(
    _____, _____, _____, _____, _____, _____, _____, _____, _____, _____, _____, _____, _____, RESET,
    BL_TOGG, BL_INC, BL_DEC, BL_STEP, _____, _____, _____, _____, _____, _____, _____, _____, _____, _____,
    RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, RGB_M_P, RGB_M_B, RGB_M_R, RGB_M_SW, _____, _____, _____,
    OOOOO, RGB_RMOD, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, RGB_M_SN, RGB_M_K, RGB_M_X, RGB_M_G, _____, _____,
    _____, _____, _____, _____, _____, OOOOO, OOOOO, _____
  ),
};
