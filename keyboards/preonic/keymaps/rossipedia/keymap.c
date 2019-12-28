/* Copyright 2015-2017 Jack Humbert
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
#include "muse.h"
#include "rossipedia.h"

enum preonic_layers {
  _BASE,
  _LOWER,
  _RAISE,
  _ADJUST
};

enum preonic_keycodes {
  BASE = SAFE_RANGE,
  LOWER,
  RAISE,
  BACKLIT
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_BASE] = LAYOUT_preonic_2x2u( \
  //┌────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┐
     KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC, \
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,  \
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     CTL_ESC, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, \
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, RS_ENTR, \
  //├────────┼────────┼────────┼────────┼─────────────────┼─────────────────┼────────┼────────┼────────┼────────┤
     LWR_SFT, KC_LCTL, KC_LALT, TD_OSPC,       LOWER ,           KC_SPC,     OSM_GA , _______, _______, RAISE    \
  //└────────┴────────┴────────┴────────┴─────────────────┴─────────────────┴────────┴────────┴────────┴────────┘
),

[_LOWER] = LAYOUT_preonic_2x2u( \
  //┌────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┐
     KC_F12 , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , \
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, KC_VOLU, _______, KC_PLUS, KC_INS , KC_DEL , KC_HOME, KC_UP  , KC_END , KC_PGUP, _______, \
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_BRIU, KC_VOLD, _______, KC_UNDS, KC_MINS, KC_EQL,  KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, _______, \
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_BRID, KC_MUTE, _______, KC_LCBR, KC_LBRC, KC_RBRC, KC_RCBR, KC_DEL , _______, _______, _______, \
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______,     _______,           _______,     _______, _______, _______, _______  \
  //└────────┴────────┴────────┴────────┴─────────────────┴─────────────────┴────────┴────────┴────────┴────────┘
),

[_RAISE] = LAYOUT_preonic_2x2u( \
  //┌────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┐
     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______,     _______,           _______,     _______, _______, _______, _______  \
  //└────────┴────────┴────────┴────────┴─────────────────┴─────────────────┴────────┴────────┴────────┴────────┘
),

[_ADJUST] = LAYOUT_preonic_2x2u( \
  //┌────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┬────────┐
     RESET  , _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______,     _______,           _______,     _______, _______, _______, _______  \
  //└────────┴────────┴────────┴────────┴─────────────────┴─────────────────┴────────┴────────┴────────┴────────┘
)


};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case LOWER:
        if (record->event.pressed) {
            layer_on(_LOWER);
            update_tri_layer(_LOWER, _RAISE, _ADJUST);
        } else {
            layer_off(_LOWER);
            update_tri_layer(_LOWER, _RAISE, _ADJUST);
        }
        return false;
        break;
    case RAISE:
        if (record->event.pressed) {
            layer_on(_RAISE);
            update_tri_layer(_LOWER, _RAISE, _ADJUST);
        } else {
            layer_off(_RAISE);
            update_tri_layer(_LOWER, _RAISE, _ADJUST);
        }
        return false;
        break;
    }
    return true;
};

bool muse_mode = false;
uint8_t last_muse_note = 0;
uint16_t muse_counter = 0;
uint8_t muse_offset = 70;
uint16_t muse_tempo = 50;


void matrix_scan_user(void) {
#ifdef AUDIO_ENABLE
    if (muse_mode) {
        if (muse_counter == 0) {
            uint8_t muse_note = muse_offset + SCALE[muse_clock_pulse()];
            if (muse_note != last_muse_note) {
                stop_note(compute_freq_for_midi_note(last_muse_note));
                play_note(compute_freq_for_midi_note(muse_note), 0xF);
                last_muse_note = muse_note;
            }
        }
        muse_counter = (muse_counter + 1) % muse_tempo;
    } else {
        if (muse_counter) {
            stop_all_notes();
            muse_counter = 0;
        }
    }
#endif
}

bool music_mask_user(uint16_t keycode) {
  switch (keycode) {
    case RAISE:
    case LOWER:
      return false;
    default:
      return true;
  }
}
