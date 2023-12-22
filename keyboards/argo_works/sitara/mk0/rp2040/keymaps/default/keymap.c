/* Copyright 2023 Jason Devadoss (@jasonj2232)
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

enum custom_layers {
    L1,
    L2,
    L3,
    L4,
    L5
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [L1] = LAYOUT_all(
        KC_ESC,    KC_Q,      KC_W,      KC_E,      KC_R,      KC_T,      KC_Y,      KC_U,      KC_I,      KC_O,      KC_P,      KC_BSPC,   KC_MUTE,
        KC_TAB,    KC_A,      KC_S,      KC_D,      KC_F,      KC_G,      KC_H,      KC_J,      KC_K,      KC_L,      KC_SCLN,   KC_ENT,
        KC_LSFT,   KC_NUBS,   KC_Z,      KC_X,      KC_C,      KC_V,      KC_B,      KC_N,      KC_M,      KC_COMM,   KC_DOT,    KC_RSFT,
        KC_LCTL,   KC_LGUI,   KC_LALT,   LT(1, KC_SPC),            LT(4, KC_SPC),            LT(2, KC_SPC),            KC_RALT,   KC_RGUI,   KC_RCTL
    ),
    [L2] = LAYOUT_all(
        KC_GRV,    KC_1,      KC_2,      KC_3,      KC_4,      KC_5,      KC_6,      KC_7,      KC_8,      KC_9,      KC_0,      KC_DEL,    KC_MPLY,
        KC_CAPS,   KC_MINS,   KC_EQL,    KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_LEFT,   KC_DOWN,   KC_UP,     KC_RGHT,   KC_INS,    KC_QUOT,
        KC_TRNS,   KC_PSCR,   KC_SCRL,   KC_PAUS,   KC_TRNS,   KC_TRNS,   KC_HOME,   KC_END,    KC_PGUP,   KC_PGDN,   KC_SLSH,   KC_TRNS,
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,                  KC_TRNS,                  MO(3),                    KC_TRNS,   KC_TRNS,   KC_TRNS
    ),
    [L3] = LAYOUT_all(
        KC_TILD,   KC_EXLM,   KC_AT,     KC_HASH,   KC_DLR,    KC_PERC,   KC_CIRC,   KC_AMPR,   KC_ASTR,   KC_LPRN,   KC_RPRN,   KC_TRNS,   KC_TRNS,
        KC_TRNS,   KC_UNDS,   KC_PLUS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_LBRC,   KC_RBRC,   KC_DQUO,
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_LCBR,   KC_RCBR,   KC_TRNS,
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,                  KC_TRNS,                  KC_TRNS,                  KC_TRNS,   KC_TRNS,   KC_TRNS
    ),
    [L4] = LAYOUT_all(
        KC_TRNS,   KC_F1,     KC_F2,     KC_F3,     KC_F4,     KC_F5,     KC_F6,     KC_F7,     KC_F8,     KC_F9,     KC_F10,    KC_TRNS,   KC_TRNS,
        KC_TRNS,   KC_F11,    KC_F12,    KC_F13,    KC_F14,    KC_F15,    KC_F16,    KC_F17,    KC_F18,    KC_F19,    KC_F20,    KC_TRNS,
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,                  KC_TRNS,                  KC_TRNS,                  KC_TRNS,   KC_TRNS,   KC_TRNS
    ),
    [L5] = LAYOUT_all(
        RGB_TOG,   RGB_HUI,   RGB_SAI,   RGB_VAI,   AU_TOGG,   CK_UP,     CK_RST,    MU_NEXT,   HF_TOGG,   HF_NEXT,   HF_CONU,   HF_FDBK,   KC_TRNS,
        RGB_MOD,   RGB_HUD,   RGB_SAD,   RGB_VAD,   CK_TOGG,   CK_DOWN,   MU_TOGG,   AU_NEXT,   HF_CONT,   HF_PREV,   HF_COND,   HF_RST,
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
        QK_BOOT,   QK_RBT,    QK_MAKE,   KC_TRNS,                  KC_TRNS,                  KC_TRNS,                  KC_TRNS,   KC_TRNS,   KC_TRNS
    )
};

#ifdef ENCODER_MAP_ENABLE
    const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
        [L1] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
        [L2] = { ENCODER_CCW_CW(KC_BRID, KC_BRIU) },
        [L3] = { ENCODER_CCW_CW(KC_MPRV, KC_MNXT) },
        [L4] = { ENCODER_CCW_CW(KC_WBAK, KC_WFWD) },
        [L5] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    };
#endif
