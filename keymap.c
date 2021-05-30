#include QMK_KEYBOARD_H
#include "keymap_french.h"


#define BASE   0    // Default layer
#define SPC    1    // Space layer


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* Keymap BASE: (Base Layer) Default Layer
   * ,-----------------------------------------------------------.
   * |Esc | 1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backsp |
   * |-----------------------------------------------------------|
   * |Tab  |  A|  Z|  E|  R|  T|  Y|  U|  I|  O|  P|  ^|  $|     |
   * |-------------------------------------------------------- R |
   * |CAPS   |  Q|  S|  D|  F|  G|  H|  J|  K|  L|  M|  ù|  *|   |
   * |-----------------------------------------------------------|
   * |Shft| < |  W|  X|  C|  V|  B|  N|  ,|  ;|  :|  !|Shift     |
   * |-----------------------------------------------------------|
   * |Ctrl|Gui |Alt |      Space           |AltGr|Gui |    |Ctrl |
   * `-----------------------------------------------------------|
   */

  [BASE] = LAYOUT_60_iso(
     KC_ESC, FR_AMPR, FR_EACU, FR_DQUO, FR_QUOT, FR_LPRN,  FR_MINS, FR_EGRV, FR_UNDS, FR_CCED, FR_AGRV, FR_RPRN,  FR_EQL, KC_BSPC,
     KC_TAB,    FR_A,    FR_Z,    FR_E,    FR_R,    FR_T,     FR_Y,    FR_U,    FR_I,    FR_O,    FR_P, FR_CIRC,  FR_DLR,
    KC_CAPS,    FR_Q,    FR_S,    FR_D,    FR_F,    FR_G,     FR_H,    FR_J,    FR_K,    FR_L,    FR_M, FR_UGRV, FR_ASTR,  KC_ENT,
    KC_LSFT, FR_LABK,    FR_W,    FR_X,    FR_C,    FR_V,     FR_B,    FR_N, FR_COMM, FR_SCLN, FR_COLN, FR_EXLM,       KC_RSFT,
    KC_LCTL, KC_LGUI, KC_LALT,                   LT(SPC, KC_SPC),                               KC_RALT, KC_RGUI, MO(SPC),  KC_RCTL
  ),

  [SPC] = LAYOUT_60_iso(
    FR_SUP2,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,    KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,  KC_DEL,
    _______, KC_VOLU, KC_VOLD, KC_MUTE, _______, _______, _______,  KC_HOME,   KC_UP,  KC_END, KC_PGUP, _______, _______,
    _______, KC_MPRV, KC_MNXT, KC_MPLY, _______, _______, _______,  KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______,      _______,
     BL_DEC,  BL_INC, _______,                        _______,                                 _______, _______, _______, _______
  )

};
