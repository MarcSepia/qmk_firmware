#include QMK_KEYBOARD_H
#include "keymap_spanish.h"
// https://github.com/qmk/qmk_firmware/blob/master/quantum/keymap_extras/keymap_spanish.h#L78

enum language_options {
    LANG_SPANISH,
    LANG_ENGLISH,
    LANG_JAPANESE
};

uint8_t language = LANG_SPANISH;

enum custom_keycodes {
	CUT = SAFE_RANGE,
	COPY,
	PASTE,
	UNDO,
	LANG,
	HIRAGANA,
	LANG_TOGL_SP,
	LANG_TOGL_EN,
	LANG_TOGL_JP 
};

inline uint16_t lang_key(uint16_t sp_key, uint16_t en_key, uint16_t jp_key) {
    switch (language) {
        case LANG_SPANISH:
            return sp_key;
        case LANG_ENGLISH:
            return en_key;
        case LANG_JAPANESE:
            return jp_key;
        default:
            return sp_key; // Valor por defecto, en caso de que `language` sea inválido
    }
}


// Define language-specific key mappings for letters
#define LT_A lang_key(ES_A, EN_A, JP_A) // A
#define LT_B lang_key(ES_B, EN_B, JP_B) // B
#define LT_C lang_key(ES_C, EN_C, JP_C) // C
#define LT_D lang_key(ES_D, EN_D, JP_D) // D
#define LT_E lang_key(ES_E, EN_E, JP_E) // E
#define LT_F lang_key(ES_F, EN_F, JP_F) // F
#define LT_G lang_key(ES_G, EN_G, JP_G) // G
#define LT_H lang_key(ES_H, EN_H, JP_H) // H
#define LT_I lang_key(ES_I, EN_I, JP_I) // I
#define LT_J lang_key(ES_J, EN_J, JP_J) // J
#define LT_K lang_key(ES_K, EN_K, JP_K) // K
#define LT_L lang_key(ES_L, EN_L, JP_L) // L
#define LT_M lang_key(ES_M, EN_M, JP_M) // M
#define LT_N lang_key(ES_N, EN_N, JP_N) // N
#define LT_O lang_key(ES_O, EN_O, JP_O) // O
#define LT_P lang_key(ES_P, EN_P, JP_P) // P
#define LT_Q lang_key(ES_Q, EN_Q, JP_Q) // Q
#define LT_R lang_key(ES_R, EN_R, JP_R) // R
#define LT_S lang_key(ES_S, EN_S, JP_S) // S
#define LT_T lang_key(ES_T, EN_T, JP_T) // T
#define LT_U lang_key(ES_U, EN_U, JP_U) // U
#define LT_V lang_key(ES_V, EN_V, JP_V) // V
#define LT_W lang_key(ES_W, EN_W, JP_W) // W
#define LT_X lang_key(ES_X, EN_X, JP_X) // X
#define LT_Y lang_key(ES_Y, EN_Y, JP_Y) // Y
#define LT_Z lang_key(ES_Z, EN_Z, JP_Z) // Z
#define LT_NTIL lang_key(ES_NTIL, EN_N, JP_N) // Ñ

// Define language-specific key mappings for symbols
#define LT_EXLM lang_key(ES_EXLM, EN_EXLM, JP_EXLM) // !
#define LT_QUES lang_key(ES_QUES, EN_QUES, JP_QUES) // ?
#define LT_LCBR lang_key(ES_LCBR, EN_LCBR, JP_LCBR) // {
#define LT_RCBR lang_key(ES_RCBR, EN_RCBR, JP_RCBR) // }
#define LT_PIPE lang_key(ES_PIPE, EN_PIPE, JP_PIPE) // |
#define LT_SLSH lang_key(ES_SLSH, EN_SLSH, JP_SLSH) // /
#define LT_DQUO lang_key(ES_DQUO, EN_DQUO, JP_DQUO) // "
#define LT_LPRN lang_key(ES_LPRN, EN_LPRN, JP_LPRN) // (
#define LT_RPRN lang_key(ES_RPRN, EN_RPRN, JP_RPRN) // )
#define LT_AMPR lang_key(ES_AMPR, EN_AMPR, JP_AMPR) // &
#define LT_AT lang_key(ES_AT, EN_AT, JP_AT) // @
#define LT_TILD lang_key(ES_TILD, EN_TILD, JP_TILD) // ~
#define LT_LBRC lang_key(ES_LBRC, EN_LBRC, JP_LBRC) // [
#define LT_RBRC lang_key(ES_RBRC, EN_RBRC, JP_RBRC) // ]
#define LT_CIRC lang_key(ES_CIRC, EN_CIRC, JP_CIRC) // ^
#define LT_LABK lang_key(ES_LABK, EN_LABK, JP_LABK) // <
#define LT_RABK lang_key(ES_RABK, EN_RABK, JP_RABK) // >
#define LT_EQL lang_key(ES_EQL, EN_EQL, JP_EQL) // =
#define LT_IEXL lang_key(ES_IEXL, EN_IEXL, JP_IEXL) // ¡
#define LT_IQUE lang_key(ES_IQUE, EN_IQUE, JP_IQUE) // ¿
#define LT_EURO lang_key(ES_EURO, EN_EURO, JP_EURO) // €
#define LT_UNDS lang_key(ES_UNDS, EN_UNDS, JP_UNDS) // _
#define LT_FORD lang_key(ES_FORD, EN_FORD, JP_FORD) // ª
#define LT_BSLS lang_key(ES_BSLS, EN_BSLS, JP_BSLS) // "\"
#define LT_QUOT lang_key(ES_QUOT, EN_QUOT, JP_QUOT) // '
#define LT_DLR lang_key(ES_DLR, EN_DLR, JP_DLR) // $
#define LT_MINS lang_key(ES_MINS, EN_MINS, JP_MINS) // -
#define LT_MORD lang_key(ES_MORD, EN_MORD, JP_MORD) // º
#define LT_DIAE lang_key(ES_DIAE, EN_DIAE, JP_DIAE) // ¨
#define LT_NOT lang_key(ES_NOT, EN_NOT, JP_NOT) // ¬
#define LT_BULT lang_key(ES_BULT, EN_BULT, JP_BULT) // ·
#define LT_HASH lang_key(ES_HASH, EN_HASH, JP_HASH) // #
#define LT_ASTR lang_key(ES_ASTR, EN_ASTR, JP_ASTR) // *
#define LT_PLUS lang_key(ES_PLUS, EN_PLUS, JP_PLUS) // +
#define LT_PERC lang_key(ES_PERC, EN_PERC, JP_PERC) // %
#define LT_COMM lang_key(ES_COMM, EN_COMM, JP_COMM) // ,
#define LT_DOT lang_key(ES_DOT, EN_DOT, JP_DOT) // .
#define LT_GRV lang_key(ES_GRV, EN_GRV, JP_GRV) // `
#define LT_CCED lang_key(ES_CCED, EN_CCED, JP_CCED) // ç


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_QWERTY] = LAYOUT_split_3x6_3(
		//,-----------------------------------------------------------------------.                    ,-----------------------------------------------------------------------.
			  KC_NO,      ES_Q,       ES_W,       ES_E,       ES_R,       ES_T,                            ES_Y,      ES_U,        ES_I,       ES_O,       ES_P,      KC_NO,
		//|-----------+-----------+-----------+-----------+-----------+-----------|                    |-----------+-----------+-----------+-----------+-----------+-----------|
			  KC_NO,  LCTL_T(ES_A),LGUI_T(ES_S),LALT_T(ES_D),LSFT_T(ES_F),ES_G,                            ES_H,  RSFT_T(ES_J),LALT_T(ES_K),LGUI_T(ES_L),RCTL_T(ES_NTIL),KC_NO,
		//|-----------+-----------+-----------+-----------+-----------+-----------|                    |-----------+-----------+-----------+-----------+-----------+-----------|
			  KC_NO,      ES_Z,       ES_X,       ES_C,       ES_V,       ES_B,                            ES_N,      ES_M,       ES_COMM,    ES_DOT,     ES_MINS,    KC_NO,
		//|-----------+-----------+-----------+-----------+-----------+-----------|                    |-----------+-----------+-----------+-----------+-----------+-----------|
									LT(_MEDIA, KC_ESC), LT(_NAV, KC_SPC), LT(_NUM, KC_TAB),       LT(_SYM_1, KC_ENTER), LT(_SYM_2, KC_BSPC),LT(_FN, KC_DEL)
		//                                  '-------------------------------------'                    '-------------------------------------'
	),

	[_SYM_1] = LAYOUT_split_3x6_3(
		//,-----------------------------------------------------------------------.                    ,-----------------------------------------------------------------------.
			  KC_NO,    ES_EXLM,     ES_QUES,    ES_LCBR,    ES_RCBR,    ES_PIPE,                          KC_NO,     KC_NO,       KC_NO,      KC_NO,      KC_NO,      KC_NO,
		//|-----------+-----------+-----------+-----------+-----------+-----------|                    |-----------+-----------+-----------+-----------+-----------+-----------|
			  KC_NO,    ES_SLSH,     ES_DQUO,    ES_LPRN,    ES_RPRN,    ES_AMPR,                          KC_NO,     KC_NO,       KC_NO,      KC_NO,      KC_NO,      KC_NO,
		//|-----------+-----------+-----------+-----------+-----------+-----------|                    |-----------+-----------+-----------+-----------+-----------+-----------|
			  KC_NO,     ES_AT,      ES_TILD,    ES_LBRC,    ES_RBRC,    ES_CIRC,                          KC_NO,     KC_NO,       KC_NO,      KC_NO,      KC_NO,      KC_NO,
		//|-----------+-----------+-----------+-----------+-----------+-----------|                    |-----------+-----------+-----------+-----------+-----------+-----------|
												ES_LABK,    ES_RABK,     ES_EQL,                           KC_NO,     KC_NO,       KC_NO
		//                                  '-------------------------------------'                    '-------------------------------------'
	),

	[_SYM_2] = LAYOUT_split_3x6_3(
		//,-----------------------------------------------------------------------.                    ,-----------------------------------------------------------------------.
			  KC_NO,     ES_IEXL,    ES_IQUE,    ES_EURO,    ES_UNDS,    ES_FORD,                          KC_NO,     KC_HOME,     KC_UP,     KC_END,     KC_PGUP,     KC_NO,
		//|-----------+-----------+-----------+-----------+-----------+-----------|                    |-----------+-----------+-----------+-----------+-----------+-----------|
			  KC_NO,     ES_BSLS,    ES_QUOT,     ES_DLR,    ES_MINS,    ES_MORD,                          KC_NO,     KC_LEFT,    KC_DOWN,   KC_RIGHT,    KC_PGDN,     KC_NO,
		//|-----------+-----------+-----------+-----------+-----------+-----------|                    |-----------+-----------+-----------+-----------+-----------+-----------|
			  KC_NO,     ES_DIAE,    ES_NOT,     ES_BULT,    ES_HASH,     KC_NO,                           KC_NO,     KC_NO,       KC_NO,      KC_NO,      KC_NO,      KC_NO,
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
	),

	[_NUM] = LAYOUT_split_3x6_3(
		//,-----------------------------------------------------------------------.                    ,-----------------------------------------------------------------------.
			  KC_NO,      LANG,  LANG_TOGL_SP,LANG_TOGL_EN,LANG_TOGL_JP, HIRAGANA,                        ES_ASTR,     ES_7,       ES_8,       ES_9,      ES_PERC,     KC_NO,
		//|-----------+-----------+-----------+-----------+-----------+-----------|                    |-----------+-----------+-----------+-----------+-----------+-----------|
			  KC_NO,    KC_CAPS,     KC_NO,       KC_NO,      KC_NO,      KC_NO,                          ES_SLSH,     ES_4,       ES_5,       ES_6,      ES_EQL,      KC_NO,
		//|-----------+-----------+-----------+-----------+-----------+-----------|                    |-----------+-----------+-----------+-----------+-----------+-----------|
			  KC_NO,      UNDO,       CUT,        COPY,       PASTE,      KC_NO,                          ES_PLUS,     ES_1,       ES_2,       ES_3,      ES_HASH,     KC_NO,
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
			  KC_NO,     KC_NO,       KC_NO,      KC_NO,      KC_NO,      KC_NO,                          KC_NO,      KC_NO,       KC_NO,     KC_NO,      KC_NO,      KC_NO,
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



uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
	switch (keycode) {
		case LCTL_T(ES_A):
		case LGUI_T(ES_S):
		case LALT_T(ES_D):
		case LSFT_T(ES_F):
		case RSFT_T(ES_J):
		case LALT_T(ES_K):
		case LGUI_T(ES_L):
		case RCTL_T(ES_NTIL):
		case LT(_MEDIA, KC_ESC):
		case LT(_NAV, KC_SPC):
		case LT(_NUM, KC_TAB):
		case LT(_SYM_1, KC_ENTER):
		case LT(_SYM_2, KC_BSPC):
		case LT(_FN, KC_DEL):
			return 180;
		default:
			return 100;
	}
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	switch (keycode) {
		case CUT:
			if (record->event.pressed) {
				// Ctrl+X (Cut)
				register_code(KC_LCTL);
				register_code(KC_X);
				unregister_code(KC_X);
				unregister_code(KC_LCTL);
			}
			return false;

		case COPY:
			if (record->event.pressed) {
				// Ctrl+C (Copy)
				register_code(KC_LCTL);
				register_code(KC_C);
				unregister_code(KC_C);
				unregister_code(KC_LCTL);
			}
			return false;

		case PASTE:
			if (record->event.pressed) {
				// Ctrl+V (Paste)
				register_code(KC_LCTL);
				register_code(KC_V);
				unregister_code(KC_V);
				unregister_code(KC_LCTL);
			}
			return false;

		case UNDO:
			if (record->event.pressed) {
				// Ctrl+Z (Undo)
				register_code(KC_LCTL);
				register_code(KC_Z);
				unregister_code(KC_Z);
				unregister_code(KC_LCTL);
			}
			return false;

		case HIRAGANA:
			if (record->event.pressed) {
				// Shift + Caps Lock
				register_code(KC_LSFT);
				register_code(KC_CAPS);
				unregister_code(KC_CAPS);
				unregister_code(KC_LSFT);
			}
			return false;

		case LANG:
			if (record->event.pressed) {
				// Alt + Shift
				register_code(KC_LALT);
				register_code(KC_LSFT);
				unregister_code(KC_LSFT);
				unregister_code(KC_LALT);
			}
			return false;

        case LANG_TOGL_SP:
            language = LANG_SPANISH;
            return false;

        case LANG_TOGL_EN:
            language = LANG_ENGLISH;
            return false;

        case LANG_TOGL_JP:
            language = LANG_JAPANESE;
            return false;

		default:
			return true; // Process other keys normally
	}
	return true;
}
