#include QMK_KEYBOARD_H

#define _BL 0
#define _FL 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Keymap _BL: (Base Layer) Default Layer
     * ,----------------------------------------------------------------.
     * |Esc | 1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backsp |Del|
     * |----------------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|  \  |Home|
     * |----------------------------------------------------------------|
     * |CAPS   |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return |End|
     * |----------------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift | Up|FN |
     * |----------------------------------------------------------------|
     * |Ctrl  |Alt  |         Space           |Alt  |Ctrl  |Lef|Dow|Rig |
     * `----------------------------------------------------------------'
     */
    [_BL] = LAYOUT_65_ansi(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_DEL,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_HOME,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,  KC_END,
        KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,   MO(_FL),
        KC_LCTL,   KC_LALT,                                    KC_SPC,                         KC_RALT,   KC_RCTL,   KC_LEFT, KC_DOWN, KC_RGHT
    ),

    /* Keymap _FL: Function Layer
     * ,----------------------------------------------------------------.
     * |~  | F1|F2 |F3 |F4 |F5 |F6 |F7 |F8 |F9 |F10|F11|F12|Del    |Ins |
     * |----------------------------------------------------------------|
     * |QK_BOOT|   |Up |   |   |   |   |   |   |   |   |   |   |     |    |
     * |----------------------------------------------------------------|
     * |      |<- |Dn | ->|   |   |   |   |   |   |   |   |        |    |
     * |----------------------------------------------------------------|
     * |HUI   |SAI|VAI|RGBMOD|BL-|BL |BL+|   |   |   |   |Play |V+ |Mut |
     * |----------------------------------------------------------------|
     * |HUD  |VAD  |         RGB_Tog           |    |    | <B-|V- |B+>  |
     * `----------------------------------------------------------------'
     */
    [_FL] = LAYOUT_65_ansi(
        KC_TILDE,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,  KC_INS,
        QK_BOOT,   _______, KC_UP,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______,
        RGB_HUI,          RGB_SAI, RGB_VAI, RGB_MOD, BL_DOWN, BL_TOGG, BL_UP,   _______, _______, _______, _______, KC_MPLY, KC_VOLU, KC_MUTE,
        RGB_HUD,   RGB_VAD,                                    RGB_TOG,                        _______,   KC_TRNS,    KC_BRID, KC_VOLD, KC_BRIU
    ),
};
