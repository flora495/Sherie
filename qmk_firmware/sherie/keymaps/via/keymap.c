// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │Tab│ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ [ │ BS│
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ctr│ A │ S │ D │ F │ G │ H │ J │ K │ L │ - │ ] │Ent│
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │Sft│ Z │ X │ C │ V │ B │ N │ M │ , │ . │ ; │ : │sft│
     * └───┴───┼───┼───┼───┼───┼───┼───┼───┼───┼───┴───┴───┘
     *         │Esc│win│Fn │spc│Fn │Alt│Fn2│ctr│
     *         └───┴───┴───┴───┴───┴───┴───┴───┘
     */
    [0] = LAYOUT(
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,   KC_T,  KC_Y,    KC_U,    KC_I,    KC_O,     KC_P,     KC_RBRC,  KC_BSPC,
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,   KC_G,  KC_H,    KC_J,    KC_K,    KC_L,     KC_MINS,  KC_BSLS,  KC_ENT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,   KC_B,  KC_N,    KC_M,    KC_COMM, KC_DOT,   KC_SCLN,  KC_QUOT,  KC_RSFT,
                          KC_ESC,  KC_LWIN, LT(1,KC_INT5),  KC_SPC,LT(1,KC_INT4),   KC_RALT, LT(2,KC_APP),   KC_RCTL
    ),
    [1] = LAYOUT(
        KC_ASTR, KC_EXLM, KC_7,    KC_8,    KC_9,   KC_PSLS, KC_INT1,   KC_HOME, KC_UP,   KC_END,   XXXXXXX,  KC_RCBR,  KC_DEL,
        KC_LPRN, KC_0,    KC_4,    KC_5,    KC_6,   KC_LBRC, S(KC_INT1),   KC_LEFT, KC_DOWN, KC_RIGHT, KC_UNDS,  KC_PIPE,  KC_ENT,
        KC_LSFT, KC_QUES, KC_1,    KC_2,    KC_3,   KC_AT,   KC_AMPR,  KC_HASH,    KC_LT, KC_GT,   KC_COLN,  KC_DQT,  KC_RSFT,
                          KC_ESC,  KC_LWIN, XXXXXXX,KC_SPC,XXXXXXX,   KC_RALT, MO(2),   KC_RCTL
    ),
    [2] = LAYOUT(
        KC_TAB, XXXXXXX, KC_F7,    KC_F8,    KC_F9,  KC_F10,XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX,   XXXXXXX,  XXXXXXX,  XXXXXXX,
        KC_LCTL, XXXXXXX,KC_F4,    KC_F5,    KC_F6,  KC_F11,  XXXXXXX,    XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX,  XXXXXXX,  XXXXXXX,
        KC_LSFT, XXXXXXX, KC_F1,  KC_F2,    KC_F3,   KC_F12,  XXXXXXX,    XXXXXXX,    XXXXXXX, XXXXXXX,   XXXXXXX,  XXXXXXX,  KC_RSFT,
                          KC_ESC,  KC_LWIN, MO(1),  KC_SPC,MO(1),   KC_RALT, MO(2),   KC_RCTL
    ),
    [3] = LAYOUT(
        XXXXXXX, XXXXXXX, XXXXXXX,   XXXXXXX, XXXXXXX, XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX,XXXXXXX,XXXXXXX, XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX, XXXXXXX, XXXXXXX,XXXXXXX,
        XXXXXXX, XXXXXXX,XXXXXXX,   XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX, XXXXXXX,XXXXXXX, XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
                          XXXXXXX,XXXXXXX,XXXXXXX, XXXXXXX,XXXXXXX,XXXXXXX, XXXXXXX,XXXXXXX
    )
};
