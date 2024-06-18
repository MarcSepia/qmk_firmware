#include QMK_KEYBOARD_H

#ifdef TAP_DANCE_ENABLE
#include "tapdances.c"
#endif

// LGUI_T(KC_A): Esta función asigna la tecla KC_A y también actúa como la tecla de GUI (comúnmente conocida como tecla de Windows o Command en Mac) si se mantiene presionada.

// LALT_T(KC_S): Similar a la anterior, esta función asigna la tecla KC_S y actúa como la tecla Alt izquierda si se mantiene presionada.

// LCTL_T(KC_D): Esta función asigna la tecla KC_D y actúa como la tecla Ctrl izquierda si se mantiene presionada.

// LSFT_T(KC_F): Esta función asigna la tecla KC_F y actúa como la tecla Shift izquierda si se mantiene presionada.

// RSFT_T(KC_J): Asigna la tecla KC_J y actúa como la tecla Shift derecha si se mantiene presionada.

// RCTL_T(KC_K): Asigna la tecla KC_K y actúa como la tecla Ctrl derecha si se mantiene presionada.

// RALT_T(KC_L): Asigna la tecla KC_L y actúa como la tecla Alt derecha si se mantiene presionada.

// RGUI_T(KC_ENT): Asigna la tecla KC_ENT (Enter) y actúa como la tecla GUI (Windows/Command) derecha si se mantiene presionada.

// RALT_T(KC_GRAVE): Asigna la tecla KC_GRAVE (Grave Accent) y actúa como la tecla Alt derecha si se mantiene presionada.


// TD(TD_SEMI_QUOTE): TD significa "Tap Dance". Esta función permite que una tecla tenga múltiples funciones dependiendo de cuántas veces se pulse. TD_SEMI_QUOTE es una macro definida en otro lugar del keymap que especifica qué hace la tecla en diferentes situaciones.

// LT(_NUM, KC_BSPC): LT significa "Layer Tap". Esta función asigna la tecla KC_BSPC (retroceso) y también actúa como una tecla para cambiar a la capa _NUM cuando se mantiene presionada.


// https://docs.qmk.fm/#/feature_advanced_keycodes


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_split_3x6_3(
        //,-----------------------------------------------------------------------.                    ,-----------------------------------------------------------------------.
              KC_NO,      KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,                            KC_Y,      KC_U,        KC_I,       KC_O,       KC_P,      KC_NO,
        //|-----------+-----------+-----------+-----------+-----------+-----------|                    |-----------+-----------+-----------+-----------+-----------+-----------|
              KC_NO,  LGUI_T(KC_A),LALT_T(KC_S),LCTL_T(KC_D),LSFT_T(KC_F), KC_G,                           KC_H,   RSFT_T(KC_J),RCTL_T(KC_K),RALT_T(KC_L),TD(TD_SEMI_QUOTE),KC_NO,
        //|-----------+-----------+-----------+-----------+-----------+-----------|                    |-----------+-----------+-----------+-----------+-----------+-----------|
              KC_NO,      KC_Z,        KC_X,      KC_C,       KC_V,       KC_B,                            KC_N,       KC_M,      KC_COMM,     KC_DOT,    KC_SLSH,    KC_NO,
        //|-----------+-----------+-----------+-----------+-----------+-----------|                    |-----------+-----------+-----------+-----------+-----------+-----------|
                                             TD(TD_ESC_TAB), LT(_NUM, KC_BSPC), LGUI_T(KC_SPC),       RGUI_T(KC_ENT), LT(_SYM, KC_DEL), RALT_T(KC_GRAVE)
        //                                  '-------------------------------------'                    '-------------------------------------'
    ),

    [_NUM] = LAYOUT_split_3x6_3(
        //,-----------------------------------------------------------------------.                    ,-----------------------------------------------------------------------.
              KC_NO,     KC_NO,   LCTL(KC_LEFT),  KC_UP,  LCTL(KC_RIGHT), KC_PGUP,                        KC_PLUS,    KC_P7,       KC_P8,     KC_P9,    KC_ASTERISK,   KC_NO,
        //|-----------+-----------+-----------+-----------+-----------+-----------|                    |-----------+-----------+-----------+-----------+-----------+-----------|
              KC_NO,   LCAG(KC_NO),  KC_LEFT,   KC_DOWN,    KC_RIGHT,    KC_PGDN,                         KC_MINUS,   KC_P4,       KC_P5,      KC_P6,    KC_SLASH,     KC_NO,
        //|-----------+-----------+-----------+-----------+-----------+-----------|                    |-----------+-----------+-----------+-----------+-----------+-----------|
              KC_NO,     KC_NO,      KC_NO,      KC_NO,      KC_HOME,    KC_END,                           KC_0,      KC_P1,       KC_P2,      KC_P3,     KC_PDOT,     KC_NO,
        //|-----------+-----------+-----------+-----------+-----------+-----------|                    |-----------+-----------+-----------+-----------+-----------+-----------|
                                                KC_TRNS,    KC_TRNS,     KC_TRNS,                         KC_TRNS,    MO(_FN),    KC_TRNS
        //                                  '-------------------------------------'                    '-------------------------------------'
    ),

    [_SYM] = LAYOUT_split_3x6_3(

        //,-----------------------------------------------------------------------.                    ,-----------------------------------------------------------------------.
              KC_NO,     KC_EXLM,     KC_AT,    KC_HASH,     KC_DLR,     KC_PERC,                         KC_CIRC,   KC_AMPR,     KC_ASTR,    KC_LPRN,    KC_RPRN,     KC_NO,
        //|-----------+-----------+-----------+-----------+-----------+-----------|                    |-----------+-----------+-----------+-----------+-----------+-----------|
              KC_NO,     KC_GRAVE,    KC_NO,      KC_NO,      KC_NO,      KC_NO,                          KC_MINS,   KC_EQUAL,    KC_LBRC,    KC_RBRC,    KC_BSLS,     KC_NO,
        //|-----------+-----------+-----------+-----------+-----------+-----------|                    |-----------+-----------+-----------+-----------+-----------+-----------|
              KC_NO,     KC_TILDE,    KC_NO,      KC_NO,      KC_NO,      KC_NO,                          KC_UNDS,    KC_PLUS,    KC_LCBR,    KC_RCBR,    KC_PIPE,     KC_NO,
        //|-----------+-----------+-----------+-----------+-----------+-----------|                    |-----------+-----------+-----------+-----------+-----------+-----------|
                                                 KC_TRNS,    MO(_FN),    KC_TRNS,                         KC_TRNS,    KC_TRNS,    KC_TRNS
        //                                  '-------------------------------------'                    '-------------------------------------'
    ),

    [_FN] = LAYOUT_split_3x6_3(

        //,-----------------------------------------------------------------------.                    ,-----------------------------------------------------------------------.
              KC_NO,      KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,                           KC_F6,      KC_F7,      KC_F8,      KC_F9,     KC_F10,     KC_NO,
        //|-----------+-----------+-----------+-----------+-----------+-----------|                    |-----------+-----------+-----------+-----------+-----------+-----------|
              KC_NO,     RGB_VAI,     KC_NO,     KC_MPRV,    KC_MNXT,   KC_MPLY,                           KC_MUTE,   KC_VOLD,    KC_VOLU,     KC_NO,     KC_F11,     KC_NO,
        //|-----------+-----------+-----------+-----------+-----------+-----------|                    |-----------+-----------+-----------+-----------+-----------+-----------|
              KC_NO,     RGB_VAD,    RGB_MOD,    RGB_TOG,     KC_NO,     KC_NO,                            KC_NO,      KC_NO,      KC_NO,      KC_NO,     KC_F12,     KC_NO,
        //|-----------+-----------+-----------+-----------+-----------+-----------|                    |-----------+-----------+-----------+-----------+-----------+-----------|
                                                 KC_TRNS,    KC_TRNS,   KC_TRNS,                          KC_TRNS,    KC_TRNS,     KC_TRNS
        //                                  '-------------------------------------'                    '-------------------------------------'
    )
};
