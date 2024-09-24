#include QMK_KEYBOARD_H

#ifdef TAP_DANCE_ENABLE
#include "tapdances.c"
#include "keymap_spanish.h"
// https://github.com/qmk/qmk_firmware/blob/master/quantum/keymap_extras/keymap_spanish.h#L78
#endif

// Layer tap example -> LT(_NUM, KC_BSPC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_split_3x6_3(
        //,-----------------------------------------------------------------------.                    ,-----------------------------------------------------------------------.
              KC_NO,      ES_Q,       ES_W,       ES_E,       ES_R,       ES_T,                            ES_Y,      ES_U,        ES_I,       ES_O,       ES_P,      KC_NO,
        //|-----------+-----------+-----------+-----------+-----------+-----------|                    |-----------+-----------+-----------+-----------+-----------+-----------|
              KC_NO,  LSFT_T(ES_A),   ES_S,       ES_D,       ES_F,       ES_G,                            ES_H,      ES_J,        ES_K,       ES_L,  RSFT_T(ES_NTIL), KC_NO,
        //|-----------+-----------+-----------+-----------+-----------+-----------|                    |-----------+-----------+-----------+-----------+-----------+-----------|
              KC_NO,  LCTL_T(ES_Z),LGUI_T(ES_X),LALT_T(ES_C), ES_V,       ES_B,                            ES_N,      ES_M,LALT_T(ES_COMM),RALT_T(ES_DOT),RCTL_T(ES_SLSH),KC_NO,
        //|-----------+-----------+-----------+-----------+-----------+-----------|                    |-----------+-----------+-----------+-----------+-----------+-----------|
                                    LT(_MEDIA, KC_ESC), LT(_NAV, KC_SPC), LT(_NUM, KC_TAB),       LT(_NUM_1, KC_ENTER), LT(_SYM_2, KC_BSPC),LT(_FN, KC_DEL)
        //                                  '-------------------------------------'                    '-------------------------------------'
    ),

    [_SYM_1] = LAYOUT_split_3x6_3(
        //,-----------------------------------------------------------------------.                    ,-----------------------------------------------------------------------.
              KC_NO,     ES_EXLM,    ES_QUES,    ES_DQUO,    ES_LABK,    ES_RABK,                          KC_NO,     KC_NO,       KC_NO,      KC_NO,      KC_NO,      KC_NO,
        //|-----------+-----------+-----------+-----------+-----------+-----------|                    |-----------+-----------+-----------+-----------+-----------+-----------|
              KC_NO,     ES_AMPR,    ES_PIPE,    ES_BSLS,    ES_LCBR,    ES_RCBR,                          KC_NO,     KC_NO,       KC_NO,      KC_NO,      KC_NO,      KC_NO,
        //|-----------+-----------+-----------+-----------+-----------+-----------|                    |-----------+-----------+-----------+-----------+-----------+-----------|
              KC_NO,     ES_CIRC,    ES_TILD,     ES_AT,     ES_LBRC,    ES_RBRC,                          KC_NO,     KC_NO,       KC_NO,      KC_NO,      KC_NO,      KC_NO,
        //|-----------+-----------+-----------+-----------+-----------+-----------|                    |-----------+-----------+-----------+-----------+-----------+-----------|
                                                ES_LCBR,    ES_RCBR,     ES_UNDS,                          KC_NO,     KC_NO,       KC_NO
        //                                  '-------------------------------------'                    '-------------------------------------'
    ),

    [_SYM_2] = LAYOUT_split_3x6_3(
        //,-----------------------------------------------------------------------.                    ,-----------------------------------------------------------------------.
              KC_NO,     ES_IEXL,    ES_IQUE,    ES_QUOT,    ES_EURO,     KC_NO,                           KC_NO,     KC_NO,       KC_NO,      KC_NO,      KC_NO,      KC_NO,
        //|-----------+-----------+-----------+-----------+-----------+-----------|                    |-----------+-----------+-----------+-----------+-----------+-----------|
              KC_NO,     ES_FORD,    ES_MORD,    ES_SLSH,     ES_DLR,     KC_NO,                           KC_NO,     KC_NO,       KC_NO,      KC_NO,      KC_NO,      KC_NO,
        //|-----------+-----------+-----------+-----------+-----------+-----------|                    |-----------+-----------+-----------+-----------+-----------+-----------|
              KC_NO,     ES_DIAE,    ES_NOT,     ES_BULT,     KC_NO,      KC_NO,                           KC_NO,     KC_NO,       KC_NO,      KC_NO,      KC_NO,      KC_NO,
        //|-----------+-----------+-----------+-----------+-----------+-----------|                    |-----------+-----------+-----------+-----------+-----------+-----------|
                                                  KC_NO,      KC_NO,      KC_NO,                           KC_NO,     KC_NO,       KC_NO
        //                                  '-------------------------------------'                    '-------------------------------------'
    ),
    
    [_FN] = LAYOUT_split_3x6_3(

        //,-----------------------------------------------------------------------.                    ,-----------------------------------------------------------------------.
              KC_NO,     KC_F1,       KC_F2,      KC_F3,      KC_F4,     KC_PSCR,                          KC_NO,     KC_NO,       KC_NO,      KC_NO,      KC_NO,      KC_NO,
        //|-----------+-----------+-----------+-----------+-----------+-----------|                    |-----------+-----------+-----------+-----------+-----------+-----------|
              KC_NO,     KC_F5,       KC_F6,      KC_F7,      KC_F8,     KC_INS,                           KC_NO,     KC_NO,       KC_NO,      KC_NO,      KC_NO,      KC_NO,
        //|-----------+-----------+-----------+-----------+-----------+-----------|                    |-----------+-----------+-----------+-----------+-----------+-----------|
              KC_NO,     KC_F9,       KC_F10,    KC_F11,      KC_F12,     KC_NO,                           KC_NO,     KC_NO,       KC_NO,      KC_NO,      KC_NO,      KC_NO,
        //|-----------+-----------+-----------+-----------+-----------+-----------|                    |-----------+-----------+-----------+-----------+-----------+-----------|
                                                 KC_MENU,     KC_NO,      KC_NO,                           KC_NO,     KC_NO,       KC_NO
        //                                  '-------------------------------------'                    '-------------------------------------'
    )

    [_NUM] = LAYOUT_split_3x6_3(

        //,-----------------------------------------------------------------------.                    ,-----------------------------------------------------------------------.
              KC_NO,      KC_NO,     KC_NO,       KC_NO,      KC_NO,      KC_NO,                          ES_ASTR,     ES_7,       ES_8,       ES_9,      ES_PERC,     KC_NO,
        //|-----------+-----------+-----------+-----------+-----------+-----------|                    |-----------+-----------+-----------+-----------+-----------+-----------|
              KC_NO,    KC_CAPS,     KC_NO,       KC_NO,      KC_NO,      KC_NO,                          ES_SLSH,     ES_4,       ES_5,       ES_6,      ES_EQL,      KC_NO,
        //|-----------+-----------+-----------+-----------+-----------+-----------|                    |-----------+-----------+-----------+-----------+-----------+-----------|
              KC_NO,    KC_UNDO,     KC_CUT,     KC_COPY,   KC_PASTE,     KC_NO,                          ES_PLUS,     ES_1,       ES_2,       ES_3,      ES_HASH,     KC_NO,
        //|-----------+-----------+-----------+-----------+-----------+-----------|                    |-----------+-----------+-----------+-----------+-----------+-----------|
                                                  KC_NO,      KC_NO,      KC_NO,                          ES_MINS,     ES_0,       ES_DOT
        //                                  '-------------------------------------'                    '-------------------------------------'
    ),

    [_NAV] = LAYOUT_split_3x6_3(

        //,-----------------------------------------------------------------------.                    ,-----------------------------------------------------------------------.
              KC_NO,     KC_NO,       KC_NO,      KC_NO,      KC_NO,      KC_NO,                          KC_NO,      KC_HOME,     KC_UP,     KC_END,     KC_PGUP,     KC_NO,
        //|-----------+-----------+-----------+-----------+-----------+-----------|                    |-----------+-----------+-----------+-----------+-----------+-----------|
              KC_NO,     KC_NO,       KC_NO,      KC_NO,      KC_NO,      KC_NO,                          KC_NO,      KC_LEFT,    KC_DOWN,   KC_RIGHT,    KC_PGDN,     KC_NO,
        //|-----------+-----------+-----------+-----------+-----------+-----------|                    |-----------+-----------+-----------+-----------+-----------+-----------|
              KC_NO,     KC_NO,       KC_NO,      KC_NO,      KC_NO,      KC_NO,                          KC_NO,      KC_NO,      ES_SCLN,    ES_COLN,     KC_NO,      KC_NO,
        //|-----------+-----------+-----------+-----------+-----------+-----------|                    |-----------+-----------+-----------+-----------+-----------+-----------|
                                                  KC_NO,      KC_NO,      KC_NO,                          KC_NO,      KC_NO,       KC_NO
        //                                  '-------------------------------------'                    '-------------------------------------'
    ),
    
    [_MEDIA] = LAYOUT_split_3x6_3(

        //,-----------------------------------------------------------------------.                    ,-----------------------------------------------------------------------.
              KC_NO,     KC_NO,       KC_NO,      KC_NO,      KC_NO,      KC_NO,                           KC_NO,      KC_NO,    KC_VOLU,     KC_NO,      ES_GRV,     KC_NO,
        //|-----------+-----------+-----------+-----------+-----------+-----------|                    |-----------+-----------+-----------+-----------+-----------+-----------|
              KC_NO,     KC_NO,       KC_NO,      KC_NO,      KC_NO,      KC_NO,                           KC_NO,     KC_MPRV,   KC_VOLD,    KC_MNXT,    KC_QUOT,     KC_NO,
        //|-----------+-----------+-----------+-----------+-----------+-----------|                    |-----------+-----------+-----------+-----------+-----------+-----------|
              KC_NO,     KC_NO,       KC_NO,     ES_CCED,     KC_NO,      KC_NO,                           KC_NO,      KC_NO,      KC_NO,     KC_NO,      KC_NO,      KC_NO,
        //|-----------+-----------+-----------+-----------+-----------+-----------|                    |-----------+-----------+-----------+-----------+-----------+-----------|
                                                  KC_NO,      KC_NO,      KC_NO,                          KC_MSTP,    KC_MPLY,    KC_MUTE
        //                                  '-------------------------------------'                    '-------------------------------------'
    ),

};


//     [_EMPTY] = LAYOUT_split_3x6_3(
//         //,-----------------------------------------------------------------------.                    ,-----------------------------------------------------------------------.
//               KC_NO,     KC_NO,       KC_NO,      KC_NO,      KC_NO,      KC_NO,                           KC_NO,     KC_NO,       KC_NO,      KC_NO,      KC_NO,      KC_NO,
//         //|-----------+-----------+-----------+-----------+-----------+-----------|                    |-----------+-----------+-----------+-----------+-----------+-----------|
//               KC_NO,     KC_NO,       KC_NO,      KC_NO,      KC_NO,      KC_NO,                           KC_NO,     KC_NO,       KC_NO,      KC_NO,      KC_NO,      KC_NO,
//         //|-----------+-----------+-----------+-----------+-----------+-----------|                    |-----------+-----------+-----------+-----------+-----------+-----------|
//               KC_NO,     KC_NO,       KC_NO,      KC_NO,      KC_NO,      KC_NO,                           KC_NO,     KC_NO,       KC_NO,      KC_NO,      KC_NO,      KC_NO,
//         //|-----------+-----------+-----------+-----------+-----------+-----------|                    |-----------+-----------+-----------+-----------+-----------+-----------|
//                                                   KC_NO,      KC_NO,      KC_NO,                           KC_NO,     KC_NO,       KC_NO
//         //                                  '-------------------------------------'                    '-------------------------------------'
//     ),