#include QMK_KEYBOARD_H
#include "keymap_spanish.h"
#include "keymap_japanese.h"
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

enum custom_letters {
	LT_A = 0x1000,
	LT_B,
	LT_C,
	LT_D,
	LT_E,
	LT_F,
	LT_G,
	LT_H,
	LT_I,
	LT_J,
	LT_K,
	LT_L,
	LT_M,
	LT_N,
	LT_O,
	LT_P,
	LT_Q,
	LT_R,
	LT_S,
	LT_T,
	LT_U,
	LT_V,
	LT_W,
	LT_X,
	LT_Y,
	LT_Z,
	LT_NTIL, // ñ
	LT_CCED // ç
};


// Define language-specific key mappings for symbols
enum custom_symbols {
	LT_EXLM = 0x2000, // !
	LT_QUES, // ?
	LT_LCBR, // {
	LT_RCBR, // }
	LT_PIPE, // |
	LT_SLSH, // /
	LT_DQUO, // "
	LT_LPRN, // (
	LT_RPRN, // )
	LT_AMPR, // &
	LT_AT, // @
	LT_TILD, // ~
	LT_LBRC, // [
	LT_RBRC, // ]
	LT_CIRC, // ^
	LT_LABK, // <
	LT_RABK, // >
	LT_EQL, // =
	LT_IEXL, // ¡
	LT_IQUE, // ¿
	LT_EURO, // €
	LT_UNDS, // _
	LT_FORD, // ª
	LT_BSLS, // "\"
	LT_QUOT, // '
	LT_DLR, // $
	LT_MINS, // -
	LT_MORD, // º
	LT_DIAE, // ¨
	LT_NOT, // ¬
	LT_BULT, // ·
	LT_HASH, // #
	LT_ASTR, // *
	LT_PLUS, // +
	LT_PERC, // %
	LT_COMM, // ,
	LT_DOT, // .
	LT_GRV // `
};

// Define language-specific key mappings for letters
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


		// BEGIN - Letters

		case LT_A:
			if (record->event.pressed) {
				tap_code16(lang_key(ES_A, KC_A, JP_A));
			}
			return false;

		case LT_B:
			if (record->event.pressed) {
				tap_code16(lang_key(ES_B, KC_B, JP_B));
			}
			return false;

		case LT_C:
			if (record->event.pressed) {
				tap_code16(lang_key(ES_C, KC_C, JP_C));
			}
			return false;

		case LT_D:
			if (record->event.pressed) {
				tap_code16(lang_key(ES_D, KC_D, JP_D));
			}
			return false;

		case LT_E:
			if (record->event.pressed) {
				tap_code16(lang_key(ES_E, KC_E, JP_E));
			}
			return false;

		case LT_F:
			if (record->event.pressed) {
				tap_code16(lang_key(ES_F, KC_F, JP_F));
			}
			return false;

		case LT_G:
			if (record->event.pressed) {
				tap_code16(lang_key(ES_G, KC_G, JP_G));
			}
			return false;

		case LT_H:
			if (record->event.pressed) {
				tap_code16(lang_key(ES_H, KC_H, JP_H));
			}
			return false;

		case LT_I:
			if (record->event.pressed) {
				tap_code16(lang_key(ES_I, KC_I, JP_I));
			}
			return false;

		case LT_J:
			if (record->event.pressed) {
				tap_code16(lang_key(ES_J, KC_J, JP_J));
			}
			return false;

		case LT_K:
			if (record->event.pressed) {
				tap_code16(lang_key(ES_K, KC_K, JP_K));
			}
			return false;

		case LT_L:
			if (record->event.pressed) {
				tap_code16(lang_key(ES_L, KC_L, JP_L));
			}
			return false;

		case LT_M:
			if (record->event.pressed) {
				tap_code16(lang_key(ES_M, KC_M, JP_M));
			}
			return false;

		case LT_N:
			if (record->event.pressed) {
				tap_code16(lang_key(ES_N, KC_N, JP_N));
			}
			return false;

		case LT_O:
			if (record->event.pressed) {
				tap_code16(lang_key(ES_O, KC_O, JP_O));
			}
			return false;

		case LT_P:
			if (record->event.pressed) {
				tap_code16(lang_key(ES_P, KC_P, JP_P));
			}
			return false;

		case LT_Q:
			if (record->event.pressed) {
				tap_code16(lang_key(ES_Q, KC_Q, JP_Q));
			}
			return false;

		case LT_R:
			if (record->event.pressed) {
				tap_code16(lang_key(ES_R, KC_R, JP_R));
			}
			return false;

		case LT_S:
			if (record->event.pressed) {
				tap_code16(lang_key(ES_S, KC_S, JP_S));
			}
			return false;

		case LT_T:
			if (record->event.pressed) {
				tap_code16(lang_key(ES_T, KC_T, JP_T));
			}
			return false;

		case LT_U:
			if (record->event.pressed) {
				tap_code16(lang_key(ES_U, KC_U, JP_U));
			}
			return false;

		case LT_V:
			if (record->event.pressed) {
				tap_code16(lang_key(ES_V, KC_V, JP_V));
			}
			return false;

		case LT_W:
			if (record->event.pressed) {
				tap_code16(lang_key(ES_W, KC_W, JP_W));
			}
			return false;

		case LT_X:
			if (record->event.pressed) {
				tap_code16(lang_key(ES_X, KC_X, JP_X));
			}
			return false;

		case LT_Y:
			if (record->event.pressed) {
				tap_code16(lang_key(ES_Y, KC_Y, JP_Y));
			}
			return false;

		case LT_Z:
			if (record->event.pressed) {
				tap_code16(lang_key(ES_Z, KC_Z, JP_Z));
			}
			return false;

		case LT_NTIL:
			if (record->event.pressed) {
				tap_code16(lang_key(ES_NTIL, KC_N, JP_N));
			}
			return false;

		case LT_CCED:
			if (record->event.pressed) {
				tap_code16(lang_key(ES_CCED, KC_NO, KC_NO));
			}
			return false;

		// END - Letters


		// BEGIN - Symbols

		case LT_EXLM:
			if (record->event.pressed) {
				tap_code16(lang_key(ES_EXLM, KC_EXLM, JP_EXLM));
			}
			return false;

		case LT_QUES:
			if (record->event.pressed) {
				tap_code16(lang_key(ES_QUES, KC_QUES, JP_QUES));
			}
			return false;

		case LT_LCBR:
			if (record->event.pressed) {
				tap_code16(lang_key(ES_LCBR, KC_LCBR, JP_LCBR));
			}
			return false;

		case LT_RCBR:
			if (record->event.pressed) {
				tap_code16(lang_key(ES_RCBR, KC_RCBR, JP_RCBR));
			}
			return false;

		case LT_PIPE:
			if (record->event.pressed) {
				tap_code16(lang_key(ES_PIPE, KC_PIPE, JP_PIPE));
			}
			return false;

		case LT_SLSH:
			if (record->event.pressed) {
				tap_code16(lang_key(ES_SLSH, KC_SLSH, JP_SLSH));
			}
			return false;

		case LT_DQUO:
			if (record->event.pressed) {
				tap_code16(lang_key(ES_DQUO, KC_DQUO, JP_DQUO));
			}
			return false;

		case LT_LPRN:
			if (record->event.pressed) {
				tap_code16(lang_key(ES_LPRN, KC_LPRN, JP_LPRN));
			}
			return false;

		case LT_RPRN:
			if (record->event.pressed) {
				tap_code16(lang_key(ES_RPRN, KC_RPRN, JP_RPRN));
			}
			return false;

		case LT_AMPR:
			if (record->event.pressed) {
				tap_code16(lang_key(ES_AMPR, KC_AMPR, JP_AMPR));
			}
			return false;

		case LT_AT:
			if (record->event.pressed) {
				tap_code16(lang_key(ES_AT, KC_AT, JP_AT));
			}
			return false;

		case LT_TILD:
			if (record->event.pressed) {
				tap_code16(lang_key(ES_TILD, KC_TILD, JP_TILD));
			}
			return false;

		case LT_LBRC:
			if (record->event.pressed) {
				tap_code16(lang_key(ES_LBRC, KC_LBRC, JP_LBRC));
			}
			return false;

		case LT_RBRC:
			if (record->event.pressed) {
				tap_code16(lang_key(ES_RBRC, KC_RBRC, JP_RBRC));
			}
			return false;

		case LT_CIRC:
			if (record->event.pressed) {
				tap_code16(lang_key(ES_CIRC, KC_CIRC, JP_CIRC));
			}
			return false;

		case LT_LABK:
			if (record->event.pressed) {
				tap_code16(lang_key(ES_LABK, KC_LABK, JP_LABK));
			}
			return false;

		case LT_RABK:
			if (record->event.pressed) {
				tap_code16(lang_key(ES_RABK, KC_RABK, JP_RABK));
			}
			return false;

		case LT_EQL:
			if (record->event.pressed) {
				tap_code16(lang_key(ES_EQL, KC_EQL, JP_EQL));
			}
			return false;

		case LT_IEXL:
			if (record->event.pressed) {
				tap_code16(lang_key(ES_IEXL, ALGR(US_1), KC_NO));
			}
			return false;

		case LT_IQUE:
			if (record->event.pressed) {
				tap_code16(lang_key(ES_IQUE, ALGR(KC_SLSH), JP_QUES));
			}
			return false;

		case LT_EURO:
			if (record->event.pressed) {
				tap_code16(lang_key(ES_EURO, KC_EURO, JP_YEN));
			}
			return false;

		case LT_UNDS:
			if (record->event.pressed) {
				tap_code16(lang_key(ES_UNDS, KC_UNDS, JP_UNDS));
			}
			return false;

		case LT_FORD:
			if (record->event.pressed) {
				tap_code16(lang_key(ES_FORD, ALGR(US_5), JP_AT));
			}
			return false;

		case LT_BSLS:
			if (record->event.pressed) {
				tap_code16(lang_key(ES_BSLS, KC_BSLS, JP_BSLS));
			}
			return false;

		case LT_QUOT:
			if (record->event.pressed) {
				tap_code16(lang_key(ES_QUOT, KC_QUOT, JP_QUOT));
			}
			return false;

		case LT_DLR:
			if (record->event.pressed) {
				tap_code16(lang_key(ES_DLR, KC_DLR, JP_DLR));
			}
			return false;

		case LT_MINS:
			if (record->event.pressed) {
				tap_code16(lang_key(ES_MINS, KC_MINS, JP_MINS));
			}
			return false;

		case LT_MORD:
			if (record->event.pressed) {
				tap_code16(lang_key(ES_MORD, KC_MORD, JP_AT));
			}
			return false;

		case LT_DIAE:
			if (record->event.pressed) {
				tap_code16(lang_key(ES_DIAE, KC_DIAE, JP_CIRC));
			}
			return false;

		case LT_NOT:
			if (record->event.pressed) {
				tap_code16(lang_key(ES_NOT, KC_NOT, JP_CIRC));
			}
			return false;

		case LT_BULT:
			if (record->event.pressed) {
				tap_code16(lang_key(ES_BULT, KC_BULT, JP_COMM));
			}
			return false;

		case LT_HASH:
			if (record->event.pressed) {
				tap_code16(lang_key(ES_HASH, KC_HASH, JP_HASH));
			}
			return false;

		case LT_ASTR:
			if (record->event.pressed) {
				tap_code16(lang_key(ES_ASTR, KC_ASTR, JP_ASTR));
			}
			return false;

		case LT_PLUS:
			if (record->event.pressed) {
				tap_code16(lang_key(ES_PLUS, KC_PLUS, JP_PLUS));
			}
			return false;

		case LT_PERC:
			if (record->event.pressed) {
				tap_code16(lang_key(ES_PERC, KC_PERC, JP_PERC));
			}
			return false;

		case LT_COMM:
			if (record->event.pressed) {
				tap_code16(lang_key(ES_COMM, KC_COMM, JP_COMM));
			}
			return false;

		case LT_DOT:
			if (record->event.pressed) {
				tap_code16(lang_key(ES_DOT, KC_DOT, JP_DOT));
			}
			return false;

		case LT_GRV:
			if (record->event.pressed) {
				tap_code16(lang_key(ES_GRV, KC_GRV, JP_GRV));
			}
			return false;

		// END - Symbols


		default:
			return true; // Process other keys normally
	}
	return true;
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_QWERTY] = LAYOUT_split_3x6_3(
		//,-----------------------------------------------------------------------.                    ,-----------------------------------------------------------------------.
			  KC_NO,      LT_Q,       LT_W,       LT_E,       LT_R,       LT_T,                            LT_Y,      LT_U,        LT_I,       LT_O,       LT_P,      KC_NO,
		//|-----------+-----------+-----------+-----------+-----------+-----------|                    |-----------+-----------+-----------+-----------+-----------+-----------|
			  KC_NO,  LCTL_T(LT_A),LGUI_T(LT_S),LALT_T(LT_D),LSFT_T(LT_F),LT_G,                            LT_H,  RSFT_T(LT_J),LALT_T(LT_K),LGUI_T(LT_L),RCTL_T(LT_NTIL),KC_NO,
		//|-----------+-----------+-----------+-----------+-----------+-----------|                    |-----------+-----------+-----------+-----------+-----------+-----------|
			  KC_NO,      LT_Z,       LT_X,       LT_C,       LT_V,       LT_B,                            LT_N,      LT_M,       LT_COMM,    LT_DOT,     LT_MINS,    KC_NO,
		//|-----------+-----------+-----------+-----------+-----------+-----------|                    |-----------+-----------+-----------+-----------+-----------+-----------|
									LT(_MEDIA, KC_ESC), LT(_NAV, KC_SPC), LT(_NUM, KC_TAB),       LT(_SYM_1, KC_ENTER), LT(_SYM_2, KC_BSPC),LT(_FN, KC_DEL)
		//                                  '-------------------------------------'                    '-------------------------------------'
	),

	[_SYM_1] = LAYOUT_split_3x6_3(
		//,-----------------------------------------------------------------------.                    ,-----------------------------------------------------------------------.
			  KC_NO,    LT_EXLM,     LT_QUES,    LT_LCBR,    LT_RCBR,    LT_PIPE,                          KC_NO,     KC_NO,       KC_NO,      KC_NO,      KC_NO,      KC_NO,
		//|-----------+-----------+-----------+-----------+-----------+-----------|                    |-----------+-----------+-----------+-----------+-----------+-----------|
			  KC_NO,    LT_SLSH,     LT_DQUO,    LT_LPRN,    LT_RPRN,    LT_AMPR,                          KC_NO,     KC_NO,       KC_NO,      KC_NO,      KC_NO,      KC_NO,
		//|-----------+-----------+-----------+-----------+-----------+-----------|                    |-----------+-----------+-----------+-----------+-----------+-----------|
			  KC_NO,     LT_AT,      LT_TILD,    LT_LBRC,    LT_RBRC,    LT_CIRC,                          KC_NO,     KC_NO,       KC_NO,      KC_NO,      KC_NO,      KC_NO,
		//|-----------+-----------+-----------+-----------+-----------+-----------|                    |-----------+-----------+-----------+-----------+-----------+-----------|
												LT_LABK,    LT_RABK,     LT_EQL,                           KC_NO,     KC_NO,       KC_NO
		//                                  '-------------------------------------'                    '-------------------------------------'
	),

	[_SYM_2] = LAYOUT_split_3x6_3(
		//,-----------------------------------------------------------------------.                    ,-----------------------------------------------------------------------.
			  KC_NO,     LT_IEXL,    LT_IQUE,    LT_EURO,    LT_UNDS,    LT_FORD,                          KC_NO,     KC_HOME,     KC_UP,     KC_END,     KC_PGUP,     KC_NO,
		//|-----------+-----------+-----------+-----------+-----------+-----------|                    |-----------+-----------+-----------+-----------+-----------+-----------|
			  KC_NO,     LT_BSLS,    LT_QUOT,     LT_DLR,    LT_MINS,    LT_MORD,                          KC_NO,     KC_LEFT,    KC_DOWN,   KC_RIGHT,    KC_PGDN,     KC_NO,
		//|-----------+-----------+-----------+-----------+-----------+-----------|                    |-----------+-----------+-----------+-----------+-----------+-----------|
			  KC_NO,     LT_DIAE,    LT_NOT,     LT_BULT,    LT_HASH,     KC_NO,                           KC_NO,     KC_NO,       KC_NO,      KC_NO,      KC_NO,      KC_NO,
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
			  KC_NO,      LANG,  LANG_TOGL_SP,LANG_TOGL_EN,LANG_TOGL_JP, HIRAGANA,                        LT_ASTR,     KC_7,       KC_8,       KC_9,      LT_PERC,     KC_NO,
		//|-----------+-----------+-----------+-----------+-----------+-----------|                    |-----------+-----------+-----------+-----------+-----------+-----------|
			  KC_NO,    KC_CAPS,     KC_NO,       KC_NO,      KC_NO,      KC_NO,                          LT_SLSH,     KC_4,       KC_5,       KC_6,      LT_EQL,      KC_NO,
		//|-----------+-----------+-----------+-----------+-----------+-----------|                    |-----------+-----------+-----------+-----------+-----------+-----------|
			  KC_NO,      UNDO,       CUT,        COPY,       PASTE,      KC_NO,                          LT_PLUS,     KC_1,       KC_2,       KC_3,      LT_HASH,     KC_NO,
		//|-----------+-----------+-----------+-----------+-----------+-----------|                    |-----------+-----------+-----------+-----------+-----------+-----------|
												  KC_NO,      KC_NO,      KC_NO,                          LT_MINS,     KC_0,       LT_DOT
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

