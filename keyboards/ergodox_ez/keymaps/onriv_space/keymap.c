#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_korean.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"
#include "keymap_contributions.h"
#include "keymap_czech.h"
#include "keymap_romanian.h"
#include "keymap_russian.h"
#include "keymap_uk.h"
#include "keymap_estonian.h"
#include "keymap_belgian.h"
#include "keymap_us_international.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)

enum custom_keycodes {
  RGB_SLD = EZ_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
  ST_MACRO_7,
  ST_MACRO_8,
  ST_MACRO_9,
  ST_MACRO_10,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty(
    KC_GRAVE,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_MINUS,                                       KC_EQUAL,       KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_BSPACE,
    LGUI_T(KC_TAB), KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_LBRACKET,                                    KC_RBRACKET,    KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLASH,
    LCTL_T(KC_ESCAPE),KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCOLON,      MT(MOD_MEH, KC_ENTER),
    KC_LSHIFT,      KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           OSM(MOD_LCTL|MOD_LALT|MOD_LGUI),                                  KC_QUOTE,       KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_TRANSPARENT,
    OSM(MOD_LSFT),  OSM(MOD_LALT),  KC_LGUI,        LALT_T(KC_TAB), OSL(2),                                                                                                         MO(17),         TT(16),         KC_TRANSPARENT, KC_TRANSPARENT, TG(21),
                                                                                                    OSM(MOD_LGUI),  LALT(KC_LGUI),  KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    LGUI(KC_LCTRL), KC_TRANSPARENT,
                                                                                    OSL(3),         LALT(LGUI(KC_LCTRL)),LALT(KC_LCTRL), KC_TRANSPARENT, KC_BSPACE,      LT(1,KC_SPACE)
  ),
  [1] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F11,                                         KC_F12,         KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_DELETE,
    KC_TRANSPARENT, KC_MS_BTN3,     KC_MS_WH_UP,    KC_MS_UP,       KC_MS_WH_DOWN,  KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_HOME,        KC_PGDOWN,      KC_PGUP,        KC_END,         KC_INSERT,      KC_MS_ACCEL2,
    KC_CAPSLOCK,    KC_MS_BTN1,     KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_MS_BTN2,                                                                     KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_MS_ACCEL0,   KC_MS_ACCEL1,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_PSCREEN,     KC_APPLICATION, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TG(18),
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, OSM(MOD_LALT),  OSM(MOD_LSFT),  OSM(MOD_LGUI),  OSM(MOD_LCTL),  KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    LGUI(KC_TAB),   OSL(5),         OSL(7),         OSL(9),         OSL(11),        OSL(14),        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    TO(0),          OSL(4),         OSL(6),         OSL(8),         OSL(10),        OSL(13),                                                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    OSL(15),        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, OSL(12),        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    ST_MACRO_0,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_ergodox_pretty(
    LALT(LCTL(LGUI(KC_GRAVE))),LALT(LCTL(LGUI(KC_1))),LALT(LCTL(LGUI(KC_2))),LALT(LCTL(LGUI(KC_3))),LALT(LCTL(LGUI(KC_4))),LALT(LCTL(LGUI(KC_5))),LALT(LCTL(LGUI(KC_MINUS))),                                LALT(LCTL(LGUI(KC_EQUAL))),LALT(LCTL(LGUI(KC_6))),LALT(LCTL(LGUI(KC_7))),LALT(LCTL(LGUI(KC_8))),LALT(LCTL(LGUI(KC_9))),LALT(LCTL(LGUI(KC_0))),LALT(LCTL(LGUI(KC_BSPACE))),
    KC_TRANSPARENT, LALT(LCTL(LGUI(KC_Q))),LALT(LCTL(LGUI(KC_W))),LALT(LCTL(LGUI(KC_E))),LALT(LCTL(LGUI(KC_R))),LALT(LCTL(LGUI(KC_T))),LALT(LCTL(LGUI(KC_LBRACKET))),                                LALT(LCTL(LGUI(KC_RBRACKET))),LALT(LCTL(LGUI(KC_Y))),LALT(LCTL(LGUI(KC_U))),LALT(LCTL(LGUI(KC_I))),LALT(LCTL(LGUI(KC_O))),LALT(LCTL(LGUI(KC_P))),LALT(LCTL(LGUI(KC_BSLASH))),
    TO(0),          LALT(LCTL(LGUI(KC_A))),LALT(LCTL(LGUI(KC_S))),LALT(LCTL(LGUI(KC_D))),LALT(LCTL(LGUI(KC_F))),LALT(LCTL(LGUI(KC_G))),                                                                LALT(LCTL(LGUI(KC_H))),LALT(LCTL(LGUI(KC_J))),LALT(LCTL(LGUI(KC_K))),LALT(LCTL(LGUI(KC_L))),LALT(LCTL(LGUI(KC_SCOLON))),LALT(LCTL(LGUI(KC_ENTER))),
    KC_TRANSPARENT, LALT(LCTL(LGUI(KC_Z))),LALT(LCTL(LGUI(KC_X))),LALT(LCTL(LGUI(KC_C))),LALT(LCTL(LGUI(KC_V))),LALT(LCTL(LGUI(KC_B))),KC_TRANSPARENT,                                 LALT(LCTL(LGUI(KC_QUOTE))),LALT(LCTL(LGUI(KC_N))),LALT(LCTL(LGUI(KC_M))),LALT(LCTL(LGUI(KC_COMMA))),LALT(LCTL(LGUI(KC_DOT))),LALT(LCTL(LGUI(KC_SLASH))),LALT(LCTL(LGUI(KC_INSERT))),
    LALT(LCTL(LGUI(KC_F12))),LALT(LCTL(LGUI(KC_HOME))),LALT(LCTL(LGUI(KC_END))),LALT(LCTL(LGUI(KC_LEFT))),LALT(LCTL(LGUI(KC_RIGHT))),                                                                                                LALT(LCTL(LGUI(KC_DOWN))),LALT(LCTL(LGUI(KC_UP))),LALT(LCTL(LGUI(KC_PGDOWN))),LALT(LCTL(LGUI(KC_PGUP))),LALT(LCTL(LGUI(KC_DELETE))),
                                                                                                    LALT(LCTL(LGUI(KC_F6))),LALT(LCTL(LGUI(KC_F5))),LALT(LCTL(LGUI(KC_F10))),LALT(LCTL(LGUI(KC_F11))),
                                                                                                                    LALT(LCTL(LGUI(KC_F4))),LALT(LCTL(LGUI(KC_F9))),
                                                                                    LALT(LCTL(LGUI(KC_F1))),LALT(LCTL(LGUI(KC_F2))),LALT(LCTL(LGUI(KC_F3))),LALT(LCTL(LGUI(KC_F8))),LALT(LCTL(LGUI(KC_F7))),LALT(LCTL(LGUI(KC_SPACE)))
  ),
  [5] = LAYOUT_ergodox_pretty(
    LALT(LCTL(LGUI(LSFT(KC_GRAVE)))),LALT(LCTL(LGUI(LSFT(KC_1)))),LALT(LCTL(LGUI(LSFT(KC_2)))),LALT(LCTL(LGUI(LSFT(KC_3)))),LALT(LCTL(LGUI(LSFT(KC_4)))),LALT(LCTL(LGUI(LSFT(KC_5)))),LALT(LCTL(LGUI(LSFT(KC_MINUS)))),                                LALT(LCTL(LGUI(LSFT(KC_EQUAL)))),LALT(LCTL(LGUI(LSFT(KC_6)))),LALT(LCTL(LGUI(LSFT(KC_7)))),LALT(LCTL(LGUI(LSFT(KC_8)))),LALT(LCTL(LGUI(LSFT(KC_9)))),LALT(LCTL(LGUI(LSFT(KC_0)))),LALT(LCTL(LGUI(LSFT(KC_BSPACE)))),
    KC_TRANSPARENT, LALT(LCTL(LGUI(LSFT(KC_Q)))),LALT(LCTL(LGUI(LSFT(KC_W)))),LALT(LCTL(LGUI(LSFT(KC_E)))),LALT(LCTL(LGUI(LSFT(KC_R)))),LALT(LCTL(LGUI(LSFT(KC_T)))),LALT(LCTL(LGUI(LSFT(KC_LBRACKET)))),                                LALT(LCTL(LGUI(LSFT(KC_RBRACKET)))),LALT(LCTL(LGUI(LSFT(KC_Y)))),LALT(LCTL(LGUI(LSFT(KC_U)))),LALT(LCTL(LGUI(LSFT(KC_I)))),LALT(LCTL(LGUI(LSFT(KC_O)))),LALT(LCTL(LGUI(LSFT(KC_P)))),LALT(LCTL(LGUI(LSFT(KC_BSLASH)))),
    TO(0),          LALT(LCTL(LGUI(LSFT(KC_A)))),LALT(LCTL(LGUI(LSFT(KC_S)))),LALT(LCTL(LGUI(LSFT(KC_D)))),LALT(LCTL(LGUI(LSFT(KC_F)))),LALT(LCTL(LGUI(LSFT(KC_G)))),                                                                LALT(LCTL(LGUI(LSFT(KC_H)))),LALT(LCTL(LGUI(LSFT(KC_J)))),LALT(LCTL(LGUI(LSFT(KC_K)))),LALT(LCTL(LGUI(LSFT(KC_L)))),LALT(LCTL(LGUI(LSFT(KC_SCOLON)))),LALT(LCTL(LGUI(LSFT(KC_ENTER)))),
    KC_TRANSPARENT, LALT(LCTL(LGUI(LSFT(KC_Z)))),LALT(LCTL(LGUI(LSFT(KC_X)))),LALT(LCTL(LGUI(LSFT(KC_C)))),LALT(LCTL(LGUI(LSFT(KC_V)))),LALT(LCTL(LGUI(LSFT(KC_B)))),KC_TRANSPARENT,                                 LALT(LCTL(LGUI(LSFT(KC_QUOTE)))),LALT(LCTL(LGUI(LSFT(KC_N)))),LALT(LCTL(LGUI(LSFT(KC_M)))),LALT(LCTL(LGUI(LSFT(KC_COMMA)))),LALT(LCTL(LGUI(LSFT(KC_DOT)))),LALT(LCTL(LGUI(LSFT(KC_SLASH)))),LALT(LCTL(LGUI(LSFT(KC_INSERT)))),
    LALT(LGUI(LSFT(KC_F12))),LALT(LCTL(LGUI(LSFT(KC_HOME)))),LALT(LCTL(LGUI(LSFT(KC_END)))),LALT(LCTL(LGUI(LSFT(KC_LEFT)))),LALT(LCTL(LGUI(LSFT(KC_RIGHT)))),                                                                                                LALT(LCTL(LGUI(LSFT(KC_DOWN)))),LALT(LCTL(LGUI(LSFT(KC_UP)))),LALT(LCTL(LGUI(LSFT(KC_PGDOWN)))),LALT(LCTL(LGUI(LSFT(KC_PGUP)))),LALT(LCTL(LGUI(LSFT(KC_DELETE)))),
                                                                                                    LALT(LCTL(LGUI(LSFT(KC_F6)))),LALT(LCTL(LGUI(LSFT(KC_F5)))),LALT(LCTL(LGUI(LSFT(KC_F10)))),LALT(LCTL(LGUI(LSFT(KC_F11)))),
                                                                                                                    LALT(LCTL(LGUI(LSFT(KC_F4)))),LALT(LCTL(LGUI(LSFT(KC_F9)))),
                                                                                    LALT(LCTL(LGUI(LSFT(KC_F1)))),LALT(LCTL(LGUI(LSFT(KC_F2)))),LALT(LCTL(LGUI(LSFT(KC_F3)))),LALT(LCTL(LGUI(LSFT(KC_F8)))),LALT(LCTL(LGUI(LSFT(KC_F7)))),LALT(LCTL(LGUI(LSFT(KC_SPACE))))
  ),
  [6] = LAYOUT_ergodox_pretty(
    LCTL(LGUI(KC_GRAVE)),LCTL(LGUI(KC_1)),LCTL(LGUI(KC_2)),LCTL(LGUI(KC_3)),LCTL(LGUI(KC_4)),LCTL(LGUI(KC_5)),LCTL(LGUI(KC_MINUS)),                                LCTL(LGUI(KC_EQUAL)),LCTL(LGUI(KC_6)),LCTL(LGUI(KC_7)),LCTL(LGUI(KC_8)),LCTL(LGUI(KC_9)),LCTL(LGUI(KC_0)),LCTL(LGUI(KC_BSPACE)),
    KC_TRANSPARENT, LCTL(LGUI(KC_Q)),LCTL(LGUI(KC_W)),LCTL(LGUI(KC_E)),LCTL(LGUI(KC_R)),LCTL(LGUI(KC_T)),LCTL(LGUI(KC_LBRACKET)),                                LCTL(LGUI(KC_RBRACKET)),LCTL(LGUI(KC_Y)),LCTL(LGUI(KC_U)),LCTL(LGUI(KC_I)),LCTL(LGUI(KC_O)),LCTL(LGUI(KC_P)),LCTL(LGUI(KC_BSLASH)),
    TO(0),          LCTL(LGUI(KC_A)),LCTL(LGUI(KC_S)),LCTL(LGUI(KC_D)),LCTL(LGUI(KC_F)),LCTL(LGUI(KC_G)),                                                                LCTL(LGUI(KC_H)),LCTL(LGUI(KC_J)),LCTL(LGUI(KC_K)),LCTL(LGUI(KC_L)),LCTL(LGUI(KC_SCOLON)),LCTL(LGUI(KC_ENTER)),
    KC_TRANSPARENT, LCTL(LGUI(KC_Z)),LCTL(LGUI(KC_X)),LCTL(LGUI(KC_C)),LCTL(LGUI(KC_V)),LCTL(LGUI(KC_B)),KC_TRANSPARENT,                                 LCTL(LGUI(KC_QUOTE)),LCTL(LGUI(KC_N)),LCTL(LGUI(KC_M)),LCTL(LGUI(KC_COMMA)),LCTL(LGUI(KC_DOT)),LCTL(LGUI(KC_SLASH)),LCTL(LGUI(KC_INSERT)),
    LCTL(LGUI(KC_F12)),LCTL(LGUI(KC_HOME)),LCTL(LGUI(KC_END)),LCTL(LGUI(KC_LEFT)),LCTL(LGUI(KC_RIGHT)),                                                                                                LCTL(LGUI(KC_DOWN)),LCTL(LGUI(KC_UP)),LCTL(LGUI(KC_PGDOWN)),LCTL(LGUI(KC_PGUP)),LCTL(LGUI(KC_DELETE)),
                                                                                                    LCTL(LGUI(KC_F6)),LCTL(LGUI(KC_F5)),LCTL(LGUI(KC_F10)),LCTL(LGUI(KC_F11)),
                                                                                                                    LCTL(LGUI(KC_F4)),LCTL(LGUI(KC_F9)),
                                                                                    LCTL(LGUI(KC_F1)),LCTL(LGUI(KC_F2)),LCTL(LGUI(KC_F3)),LCTL(LGUI(KC_F8)),LCTL(LGUI(KC_F7)),LCTL(LGUI(KC_SPACE))
  ),
  [7] = LAYOUT_ergodox_pretty(
    LCTL(LGUI(LSFT(KC_GRAVE))),LCTL(LGUI(LSFT(KC_1))),LCTL(LGUI(LSFT(KC_2))),LCTL(LGUI(LSFT(KC_3))),LCTL(LGUI(LSFT(KC_4))),LCTL(LGUI(LSFT(KC_5))),LCTL(LGUI(LSFT(KC_MINUS))),                                LCTL(LGUI(LSFT(KC_EQUAL))),LCTL(LGUI(LSFT(KC_6))),LCTL(LGUI(LSFT(KC_7))),LCTL(LGUI(LSFT(KC_8))),LCTL(LGUI(LSFT(KC_9))),LCTL(LGUI(LSFT(KC_0))),LCTL(LGUI(LSFT(KC_BSPACE))),
    KC_TRANSPARENT, LCTL(LGUI(LSFT(KC_Q))),LCTL(LGUI(LSFT(KC_W))),LCTL(LGUI(LSFT(KC_E))),LCTL(LGUI(LSFT(KC_R))),LCTL(LGUI(LSFT(KC_T))),LCTL(LGUI(LSFT(KC_LBRACKET))),                                LCTL(LGUI(LSFT(KC_RBRACKET))),LCTL(LGUI(LSFT(KC_Y))),LCTL(LGUI(LSFT(KC_U))),LCTL(LGUI(LSFT(KC_I))),LCTL(LGUI(LSFT(KC_O))),LCTL(LGUI(LSFT(KC_P))),LCTL(LGUI(LSFT(KC_BSLASH))),
    TO(0),          LCTL(LGUI(LSFT(KC_A))),LCTL(LGUI(LSFT(KC_S))),LCTL(LGUI(LSFT(KC_D))),LCTL(LGUI(LSFT(KC_F))),LCTL(LGUI(LSFT(KC_G))),                                                                LCTL(LGUI(LSFT(KC_H))),LCTL(LGUI(LSFT(KC_J))),LCTL(LGUI(LSFT(KC_K))),LCTL(LGUI(LSFT(KC_L))),LCTL(LGUI(LSFT(KC_SCOLON))),LCTL(LGUI(LSFT(KC_ENTER))),
    KC_TRANSPARENT, LCTL(LGUI(LSFT(KC_Z))),LCTL(LGUI(LSFT(KC_X))),LCTL(LGUI(LSFT(KC_C))),LCTL(LGUI(LSFT(KC_V))),LCTL(LGUI(LSFT(KC_B))),KC_TRANSPARENT,                                 LCTL(LGUI(LSFT(KC_QUOTE))),LCTL(LGUI(LSFT(KC_N))),LCTL(LGUI(LSFT(KC_M))),LALT(LGUI(LSFT(KC_COMMA))),LCTL(LGUI(LSFT(KC_DOT))),LCTL(LGUI(LSFT(KC_SLASH))),LCTL(LGUI(LSFT(KC_INSERT))),
    LCTL(LGUI(LSFT(KC_F12))),LCTL(LGUI(LSFT(KC_HOME))),LCTL(LGUI(LSFT(KC_END))),LCTL(LGUI(LSFT(KC_LEFT))),LCTL(LGUI(LSFT(KC_RIGHT))),                                                                                                LCTL(LGUI(LSFT(KC_DOWN))),LCTL(LGUI(LSFT(KC_UP))),LCTL(LGUI(LSFT(KC_PGDOWN))),LCTL(LGUI(LSFT(KC_PGUP))),LCTL(LGUI(LSFT(KC_DELETE))),
                                                                                                    LCTL(LGUI(LSFT(KC_F6))),LCTL(LGUI(LSFT(KC_F5))),LCTL(LGUI(LSFT(KC_F10))),LCTL(LGUI(LSFT(KC_F11))),
                                                                                                                    LCTL(LGUI(LSFT(KC_F4))),LCTL(LGUI(LSFT(KC_F9))),
                                                                                    LCTL(LGUI(LSFT(KC_F1))),LCTL(LGUI(LSFT(KC_F2))),LCTL(LGUI(LSFT(KC_F3))),LCTL(LGUI(LSFT(KC_F8))),LCTL(LGUI(LSFT(KC_F7))),LCTL(LGUI(LSFT(KC_SPACE)))
  ),
  [8] = LAYOUT_ergodox_pretty(
    LALT(LGUI(KC_GRAVE)),LALT(LGUI(KC_1)),LALT(LGUI(KC_2)),LALT(LGUI(KC_3)),LALT(LGUI(KC_4)),LALT(LGUI(KC_5)),LALT(LGUI(KC_MINUS)),                                LALT(LGUI(KC_EQUAL)),LALT(LGUI(KC_6)),LALT(LGUI(KC_7)),LALT(LGUI(KC_8)),LALT(LGUI(KC_9)),LALT(LGUI(KC_0)),LALT(LGUI(KC_BSPACE)),
    KC_TRANSPARENT, LALT(LGUI(KC_Q)),LALT(LGUI(KC_W)),LALT(LGUI(KC_E)),LALT(LGUI(KC_R)),LALT(LGUI(KC_T)),LALT(LGUI(KC_LBRACKET)),                                LALT(LGUI(KC_RBRACKET)),LALT(LGUI(KC_Y)),LALT(LGUI(KC_U)),LALT(LGUI(KC_I)),LALT(LGUI(KC_O)),LALT(LGUI(KC_P)),LALT(LGUI(KC_BSLASH)),
    TO(0),          LALT(LGUI(KC_A)),LALT(LGUI(KC_S)),LALT(LGUI(KC_D)),LALT(LGUI(KC_F)),LALT(LGUI(KC_G)),                                                                LALT(LGUI(KC_H)),LALT(LGUI(KC_J)),LALT(LGUI(KC_K)),LALT(LGUI(KC_L)),LALT(LGUI(KC_SCOLON)),LALT(LGUI(KC_ENTER)),
    KC_TRANSPARENT, LALT(LGUI(KC_Z)),LALT(LGUI(KC_X)),LALT(LGUI(KC_C)),LALT(LGUI(KC_V)),LALT(LGUI(KC_B)),KC_TRANSPARENT,                                 LALT(LGUI(KC_QUOTE)),LALT(LGUI(KC_N)),LALT(LGUI(KC_M)),LALT(LGUI(KC_COMMA)),LALT(LGUI(KC_DOT)),LALT(LGUI(KC_SLASH)),LALT(LGUI(KC_INSERT)),
    LALT(LGUI(KC_F12)),LALT(LGUI(KC_HOME)),LALT(LGUI(KC_END)),LALT(LGUI(KC_LEFT)),LALT(LGUI(KC_RIGHT)),                                                                                                LALT(LGUI(KC_DOWN)),LALT(LGUI(KC_UP)),LALT(LGUI(KC_PGDOWN)),LALT(LGUI(KC_PGUP)),LALT(LGUI(KC_DELETE)),
                                                                                                    LALT(LGUI(KC_F6)),LALT(LGUI(KC_F5)),LALT(LGUI(KC_F10)),LALT(LGUI(KC_F11)),
                                                                                                                    LALT(LGUI(KC_F4)),LALT(LGUI(KC_F9)),
                                                                                    LALT(LGUI(KC_F1)),LALT(LGUI(KC_F2)),LALT(LGUI(KC_F3)),LALT(LGUI(KC_F8)),LALT(LGUI(KC_F7)),LALT(LGUI(KC_SPACE))
  ),
  [9] = LAYOUT_ergodox_pretty(
    LALT(LGUI(LSFT(KC_GRAVE))),LALT(LGUI(LSFT(KC_1))),LALT(LGUI(LSFT(KC_2))),LALT(LGUI(LSFT(KC_3))),LALT(LGUI(LSFT(KC_4))),LALT(LGUI(LSFT(KC_5))),LALT(LGUI(LSFT(KC_MINUS))),                                LALT(LGUI(LSFT(KC_EQUAL))),LALT(LGUI(LSFT(KC_6))),LALT(LGUI(LSFT(KC_7))),LALT(LGUI(LSFT(KC_8))),LALT(LGUI(LSFT(KC_9))),LALT(LGUI(LSFT(KC_0))),LALT(LGUI(LSFT(KC_BSPACE))),
    KC_TRANSPARENT, LALT(LGUI(LSFT(KC_Q))),LALT(LGUI(LSFT(KC_W))),LALT(LGUI(LSFT(KC_E))),LALT(LGUI(LSFT(KC_R))),LALT(LGUI(LSFT(KC_T))),LALT(LGUI(LSFT(KC_LBRACKET))),                                LALT(LGUI(LSFT(KC_RBRACKET))),LSFT(KC_Y),     LALT(LGUI(LSFT(KC_U))),LALT(LGUI(LSFT(KC_I))),LALT(LGUI(LSFT(KC_O))),LALT(LGUI(LSFT(KC_P))),LALT(LGUI(LSFT(KC_BSLASH))),
    TO(0),          LALT(LGUI(LSFT(KC_A))),LALT(LGUI(LSFT(KC_S))),LALT(LGUI(LSFT(KC_D))),LALT(LGUI(LSFT(KC_F))),LALT(LGUI(LSFT(KC_G))),                                                                LALT(LGUI(LSFT(KC_H))),LALT(LGUI(LSFT(KC_J))),LALT(LGUI(LSFT(KC_K))),LALT(LGUI(LSFT(KC_L))),LALT(LGUI(LSFT(KC_SCOLON))),LALT(LGUI(LSFT(KC_ENTER))),
    KC_TRANSPARENT, LALT(LGUI(LSFT(KC_Z))),LALT(LGUI(LSFT(KC_X))),LALT(LGUI(LSFT(KC_C))),LALT(LGUI(LSFT(KC_V))),LALT(LGUI(LSFT(KC_B))),KC_TRANSPARENT,                                 LALT(LGUI(LSFT(KC_QUOTE))),LALT(LGUI(LSFT(KC_N))),LALT(LGUI(LSFT(KC_M))),LALT(LGUI(LSFT(KC_COMMA))),LALT(LGUI(LSFT(KC_DOT))),LALT(LGUI(LSFT(KC_SLASH))),LALT(LGUI(LSFT(KC_INSERT))),
    LALT(LGUI(LSFT(KC_F12))),LALT(LGUI(LSFT(KC_HOME))),LALT(LGUI(LSFT(KC_END))),LALT(LGUI(LSFT(KC_LEFT))),LALT(LGUI(LSFT(KC_RIGHT))),                                                                                                LALT(LGUI(LSFT(KC_DOWN))),LALT(LGUI(LSFT(KC_UP))),LALT(LGUI(LSFT(KC_PGDOWN))),LALT(LGUI(LSFT(KC_PGUP))),LALT(LGUI(LSFT(KC_DELETE))),
                                                                                                    LALT(LGUI(LSFT(KC_F6))),LALT(LGUI(LSFT(KC_F5))),LALT(LGUI(LSFT(KC_F10))),LALT(LGUI(LSFT(KC_F11))),
                                                                                                                    LALT(LGUI(LSFT(KC_F4))),LALT(LGUI(LSFT(KC_F9))),
                                                                                    LALT(LGUI(LSFT(KC_F1))),LALT(LGUI(LSFT(KC_F2))),LALT(LGUI(LSFT(KC_F3))),LALT(LGUI(LSFT(KC_F8))),LALT(LGUI(LSFT(KC_F7))),LALT(LGUI(LSFT(KC_SPACE)))
  ),
  [10] = LAYOUT_ergodox_pretty(
    LALT(LCTL(KC_GRAVE)),LALT(LCTL(KC_1)),LALT(LCTL(KC_2)),LALT(LCTL(KC_3)),LALT(LCTL(KC_4)),LALT(LCTL(KC_5)),LALT(LCTL(KC_MINUS)),                                LALT(LCTL(KC_EQUAL)),LALT(LCTL(KC_6)),LALT(LCTL(KC_7)),LALT(LCTL(KC_8)),LALT(LCTL(KC_9)),LALT(LCTL(KC_0)),LALT(LCTL(KC_BSPACE)),
    KC_TRANSPARENT, LALT(LCTL(KC_Q)),LALT(LCTL(KC_W)),LALT(LCTL(KC_E)),LALT(LCTL(KC_R)),LALT(LCTL(KC_T)),LALT(LCTL(KC_LBRACKET)),                                LALT(LCTL(KC_RBRACKET)),LALT(LCTL(KC_Y)),LALT(LCTL(KC_U)),LALT(LCTL(KC_I)),LALT(LCTL(KC_O)),LALT(LCTL(KC_P)),LALT(LCTL(KC_BSLASH)),
    TO(0),          LALT(LCTL(KC_A)),LALT(LCTL(KC_S)),LALT(LCTL(KC_D)),LALT(LCTL(KC_F)),LALT(LCTL(KC_G)),                                                                LALT(LCTL(KC_H)),LALT(LCTL(KC_J)),LALT(LCTL(KC_K)),LALT(LCTL(KC_L)),LALT(LCTL(KC_SCOLON)),LALT(LCTL(KC_ENTER)),
    KC_TRANSPARENT, LALT(LCTL(KC_Z)),LALT(LCTL(KC_X)),LALT(LCTL(KC_C)),LALT(LCTL(KC_V)),LALT(LCTL(KC_B)),KC_TRANSPARENT,                                 LALT(LCTL(KC_QUOTE)),LALT(LCTL(KC_N)),LALT(LCTL(KC_M)),LALT(LCTL(KC_COMMA)),LALT(LCTL(KC_DOT)),LALT(LCTL(KC_SLASH)),LALT(LCTL(KC_INSERT)),
    LALT(LCTL(KC_F12)),LALT(LCTL(KC_HOME)),LALT(LCTL(KC_END)),LALT(LCTL(KC_LEFT)),LALT(LCTL(KC_RIGHT)),                                                                                                LALT(LCTL(KC_DOWN)),LALT(LCTL(KC_UP)),LALT(LCTL(KC_PGDOWN)),LALT(LCTL(KC_PGUP)),LALT(LCTL(KC_DELETE)),
                                                                                                    LALT(LCTL(KC_F6)),LALT(LCTL(KC_F5)),LALT(LCTL(KC_F10)),LALT(LCTL(KC_F11)),
                                                                                                                    LALT(LCTL(KC_F4)),LALT(LCTL(KC_F9)),
                                                                                    LALT(LCTL(KC_F1)),LALT(LCTL(KC_F2)),LALT(LCTL(KC_F3)),LALT(LCTL(KC_F8)),LALT(LCTL(KC_F7)),LALT(LCTL(KC_SPACE))
  ),
  [11] = LAYOUT_ergodox_pretty(
    LALT(LCTL(LSFT(KC_GRAVE))),LALT(LCTL(LSFT(KC_1))),LALT(LCTL(LSFT(KC_2))),LALT(LCTL(LSFT(KC_3))),LALT(LCTL(LSFT(KC_4))),LALT(LCTL(LSFT(KC_5))),LALT(LCTL(LSFT(KC_MINUS))),                                LALT(LCTL(LSFT(KC_EQUAL))),LALT(LCTL(LSFT(KC_6))),LALT(LCTL(LSFT(KC_7))),LALT(LCTL(LSFT(KC_8))),LALT(LCTL(LSFT(KC_9))),LALT(LCTL(LSFT(KC_0))),LALT(LCTL(LSFT(KC_BSPACE))),
    KC_TRANSPARENT, LALT(LCTL(LSFT(KC_Q))),LALT(LCTL(LSFT(KC_W))),LALT(LCTL(LSFT(KC_E))),LALT(LCTL(LSFT(KC_R))),LALT(LCTL(LSFT(KC_T))),LALT(LCTL(LSFT(KC_LBRACKET))),                                LALT(LCTL(LSFT(KC_RBRACKET))),LALT(LCTL(LSFT(KC_Y))),LALT(LCTL(LSFT(KC_U))),LALT(LCTL(LSFT(KC_I))),LALT(LCTL(LSFT(KC_O))),LALT(LCTL(LSFT(KC_P))),LALT(LCTL(LSFT(KC_BSLASH))),
    TO(0),          LALT(LCTL(LSFT(KC_A))),LALT(LCTL(LSFT(KC_S))),LALT(LCTL(LSFT(KC_D))),LALT(LCTL(LSFT(KC_F))),LALT(LCTL(LSFT(KC_G))),                                                                LALT(LCTL(LSFT(KC_H))),LALT(LCTL(LSFT(KC_J))),LALT(LCTL(LSFT(KC_K))),LALT(LCTL(LSFT(KC_L))),LALT(LCTL(LSFT(KC_SCOLON))),LALT(LCTL(LSFT(KC_ENTER))),
    KC_TRANSPARENT, LALT(LCTL(LSFT(KC_Z))),LALT(LCTL(LSFT(KC_X))),LALT(LCTL(LSFT(KC_C))),LALT(LCTL(LSFT(KC_V))),LALT(LCTL(LSFT(KC_B))),KC_TRANSPARENT,                                 LALT(LCTL(LSFT(KC_QUOTE))),LALT(LCTL(LSFT(KC_N))),LALT(LCTL(LSFT(KC_M))),LALT(LCTL(LSFT(KC_COMMA))),LALT(LCTL(LSFT(KC_DOT))),LALT(LCTL(LSFT(KC_SLASH))),LALT(LCTL(LSFT(KC_INSERT))),
    LALT(LCTL(LSFT(KC_F12))),LALT(LCTL(LSFT(KC_HOME))),LALT(LCTL(LSFT(KC_END))),LALT(LCTL(LSFT(KC_LEFT))),LALT(LCTL(LSFT(KC_RIGHT))),                                                                                                LALT(LCTL(LSFT(KC_DOWN))),LALT(LCTL(LSFT(KC_UP))),LALT(LCTL(LSFT(KC_PGDOWN))),LALT(LCTL(LSFT(KC_PGUP))),LALT(LCTL(LSFT(KC_DELETE))),
                                                                                                    LALT(LCTL(LSFT(KC_F6))),LALT(LCTL(LSFT(KC_F5))),LALT(LCTL(LSFT(KC_F10))),LALT(LCTL(LSFT(KC_F11))),
                                                                                                                    LALT(LCTL(LSFT(KC_F4))),LALT(LCTL(LSFT(KC_F9))),
                                                                                    LALT(LCTL(LSFT(KC_F1))),LALT(LCTL(LSFT(KC_F2))),LALT(LCTL(LSFT(KC_F3))),LALT(LCTL(LSFT(KC_F8))),LALT(LCTL(LSFT(KC_F7))),LALT(LCTL(LSFT(KC_SPACE)))
  ),
  [12] = LAYOUT_ergodox_pretty(
    LGUI(LSFT(KC_GRAVE)),LGUI(LSFT(KC_1)),LGUI(LSFT(KC_2)),LGUI(LSFT(KC_3)),LGUI(LSFT(KC_4)),LGUI(LSFT(KC_5)),LGUI(LSFT(KC_MINUS)),                                LGUI(LSFT(KC_EQUAL)),LGUI(LSFT(KC_6)),LGUI(LSFT(KC_7)),LGUI(LSFT(KC_8)),LGUI(LSFT(KC_9)),LGUI(LSFT(KC_0)),LGUI(LSFT(KC_BSPACE)),
    KC_TRANSPARENT, LGUI(LSFT(KC_Q)),LGUI(LSFT(KC_W)),LGUI(LSFT(KC_E)),LGUI(LSFT(KC_R)),LGUI(LSFT(KC_T)),LGUI(LSFT(KC_LBRACKET)),                                LGUI(LSFT(KC_RBRACKET)),LGUI(LSFT(KC_Y)),LGUI(LSFT(KC_U)),LGUI(LSFT(KC_I)),LGUI(LSFT(KC_O)),LGUI(LSFT(KC_P)),LGUI(LSFT(KC_BSLASH)),
    TO(0),          LGUI(LSFT(KC_A)),LGUI(LSFT(KC_S)),LGUI(LSFT(KC_D)),LGUI(LSFT(KC_F)),LGUI(LSFT(KC_G)),                                                                LGUI(LSFT(KC_H)),LGUI(LSFT(KC_J)),LGUI(LSFT(KC_K)),LGUI(LSFT(KC_L)),LGUI(LSFT(KC_SCOLON)),LGUI(LSFT(KC_ENTER)),
    KC_TRANSPARENT, LGUI(LSFT(KC_Z)),LGUI(LSFT(KC_X)),LGUI(LSFT(KC_C)),LGUI(LSFT(KC_V)),LGUI(LSFT(KC_B)),KC_TRANSPARENT,                                 LGUI(LSFT(KC_QUOTE)),LGUI(LSFT(KC_N)),LGUI(LSFT(KC_M)),LGUI(LSFT(KC_COMMA)),LGUI(LSFT(KC_DOT)),LGUI(LSFT(KC_SLASH)),LGUI(LSFT(KC_INSERT)),
    LGUI(LSFT(KC_F12)),LGUI(LSFT(KC_HOME)),LGUI(LSFT(KC_END)),LGUI(LSFT(KC_LEFT)),LGUI(LSFT(KC_RIGHT)),                                                                                                LGUI(LSFT(KC_DOWN)),LGUI(LSFT(KC_UP)),LGUI(LSFT(KC_PGDOWN)),LGUI(LSFT(KC_PGUP)),LGUI(LSFT(KC_DELETE)),
                                                                                                    LGUI(LSFT(KC_F6)),LGUI(LSFT(KC_F5)),LGUI(LSFT(KC_F10)),LGUI(LSFT(KC_F11)),
                                                                                                                    LGUI(LSFT(KC_F4)),LGUI(LSFT(KC_F9)),
                                                                                    LGUI(LSFT(KC_F1)),LGUI(LSFT(KC_F2)),LGUI(LSFT(KC_F3)),KC_F8,          LGUI(LSFT(KC_F7)),LGUI(LSFT(KC_SPACE))
  ),
  [13] = LAYOUT_ergodox_pretty(
    LCTL(LSFT(KC_GRAVE)),LCTL(LSFT(KC_1)),LCTL(LSFT(KC_2)),LCTL(LSFT(KC_3)),LCTL(LSFT(KC_4)),LCTL(LSFT(KC_5)),LCTL(LSFT(KC_MINUS)),                                LCTL(LSFT(KC_EQUAL)),LCTL(LSFT(KC_6)),LCTL(LSFT(KC_7)),LCTL(LSFT(KC_8)),LCTL(LSFT(KC_9)),LCTL(LSFT(KC_0)),LCTL(LSFT(KC_BSPACE)),
    KC_TRANSPARENT, LCTL(LSFT(KC_Q)),LCTL(LSFT(KC_W)),LCTL(LSFT(KC_E)),LCTL(LSFT(KC_R)),LCTL(LSFT(KC_T)),LCTL(LSFT(KC_LBRACKET)),                                LCTL(LSFT(KC_RBRACKET)),LCTL(LSFT(KC_Y)),LCTL(LSFT(KC_U)),LCTL(LSFT(KC_I)),LCTL(LSFT(KC_O)),LCTL(LSFT(KC_P)),LCTL(LSFT(KC_BSLASH)),
    TO(0),          LCTL(LSFT(KC_A)),LCTL(LSFT(KC_S)),LCTL(LSFT(KC_D)),LCTL(LSFT(KC_F)),LCTL(LSFT(KC_G)),                                                                LCTL(LSFT(KC_H)),LCTL(LSFT(KC_J)),LCTL(LSFT(KC_K)),LCTL(LSFT(KC_L)),LCTL(LSFT(KC_SCOLON)),LCTL(LSFT(KC_ENTER)),
    KC_TRANSPARENT, LCTL(LSFT(KC_Z)),LCTL(LSFT(KC_X)),LCTL(LSFT(KC_C)),LCTL(LSFT(KC_V)),LCTL(LSFT(KC_B)),KC_TRANSPARENT,                                 LCTL(LSFT(KC_QUOTE)),LCTL(LSFT(KC_N)),LCTL(LSFT(KC_M)),LCTL(LSFT(KC_COMMA)),LCTL(LSFT(KC_DOT)),LCTL(LSFT(KC_SLASH)),LCTL(LSFT(KC_INSERT)),
    LCTL(LSFT(KC_F12)),LCTL(LSFT(KC_HOME)),LCTL(LSFT(KC_END)),LCTL(LSFT(KC_LEFT)),LCTL(LSFT(KC_RIGHT)),                                                                                                LCTL(LSFT(KC_DOWN)),LCTL(LSFT(KC_UP)),LCTL(LSFT(KC_PGDOWN)),LCTL(LSFT(KC_PGUP)),LCTL(LSFT(KC_DELETE)),
                                                                                                    LCTL(LSFT(KC_F6)),LCTL(LSFT(KC_F5)),LCTL(LSFT(KC_F10)),LCTL(LSFT(KC_F11)),
                                                                                                                    LCTL(LSFT(KC_F4)),LCTL(LSFT(KC_F9)),
                                                                                    LCTL(LSFT(KC_F1)),LCTL(LSFT(KC_F2)),LCTL(LSFT(KC_F3)),LCTL(LSFT(KC_F8)),LCTL(LSFT(KC_F7)),LCTL(LSFT(KC_SPACE))
  ),
  [14] = LAYOUT_ergodox_pretty(
    LALT(LSFT(KC_GRAVE)),LALT(LSFT(KC_1)),LALT(LSFT(KC_2)),LALT(LSFT(KC_3)),LALT(LSFT(KC_4)),LALT(LSFT(KC_5)),LALT(LSFT(KC_MINUS)),                                LALT(LSFT(KC_EQUAL)),LALT(LSFT(KC_6)),LALT(LSFT(KC_7)),LALT(LSFT(KC_8)),LALT(LSFT(KC_9)),LALT(LSFT(KC_0)),LALT(LSFT(KC_BSPACE)),
    KC_TRANSPARENT, LALT(LSFT(KC_Q)),LALT(LSFT(KC_W)),LALT(LSFT(KC_E)),LALT(LSFT(KC_R)),LALT(LSFT(KC_T)),LALT(LSFT(KC_LBRACKET)),                                LALT(LSFT(KC_RBRACKET)),LALT(LSFT(KC_Y)),LALT(LSFT(KC_U)),LALT(LSFT(KC_I)),LALT(LSFT(KC_O)),LALT(LSFT(KC_P)),LALT(LSFT(KC_BSLASH)),
    TO(0),          LALT(LSFT(KC_A)),LALT(LSFT(KC_S)),LALT(LSFT(KC_D)),LALT(LSFT(KC_F)),LALT(LSFT(KC_G)),                                                                LALT(LSFT(KC_H)),LALT(LSFT(KC_J)),LALT(LSFT(KC_K)),LALT(LSFT(KC_L)),LALT(LSFT(KC_SCOLON)),LALT(LSFT(KC_ENTER)),
    KC_TRANSPARENT, LALT(LSFT(KC_Z)),LALT(LSFT(KC_X)),LALT(LSFT(KC_C)),LALT(LSFT(KC_V)),LALT(LSFT(KC_B)),KC_TRANSPARENT,                                 LALT(LSFT(KC_QUOTE)),LALT(LSFT(KC_N)),LALT(LSFT(KC_M)),LALT(LSFT(KC_COMMA)),LALT(LSFT(KC_DOT)),LALT(LSFT(KC_SLASH)),LALT(LSFT(KC_INSERT)),
    LALT(LSFT(KC_F12)),LALT(LSFT(KC_HOME)),LALT(LSFT(KC_END)),LALT(LSFT(KC_LEFT)),LALT(LSFT(KC_RIGHT)),                                                                                                LALT(LSFT(KC_DOWN)),LALT(LSFT(KC_UP)),LALT(LSFT(KC_PGDOWN)),LALT(LSFT(KC_PGUP)),LALT(LSFT(KC_DELETE)),
                                                                                                    LALT(LSFT(KC_F6)),LALT(LSFT(KC_F5)),LALT(LSFT(KC_F10)),LALT(LSFT(KC_F12)),
                                                                                                                    LALT(LSFT(KC_F4)),LALT(LSFT(KC_F9)),
                                                                                    LALT(LSFT(KC_F1)),LALT(LSFT(KC_F2)),LALT(LSFT(KC_F3)),LALT(LSFT(KC_F8)),LALT(LSFT(KC_F7)),LALT(LSFT(KC_SPACE))
  ),
  [15] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_MEDIA_STOP,  KC_MEDIA_PLAY_PAUSE,KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [16] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, LSFT(KC_Q),     LSFT(KC_W),     LSFT(KC_E),     LSFT(KC_R),     LSFT(KC_T),     KC_TRANSPARENT,                                 KC_TRANSPARENT, LSFT(KC_Y),     LSFT(KC_U),     LSFT(KC_I),     LSFT(KC_O),     LSFT(KC_P),     KC_TRANSPARENT,
    KC_TRANSPARENT, LSFT(KC_A),     LSFT(KC_S),     LSFT(KC_D),     LSFT(KC_F),     LSFT(KC_G),                                                                     LSFT(KC_H),     LSFT(KC_J),     LSFT(KC_K),     LSFT(KC_L),     KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, LSFT(KC_Z),     LSFT(KC_X),     LSFT(KC_C),     LSFT(KC_V),     LSFT(KC_B),     KC_TRANSPARENT,                                 KC_TRANSPARENT, LSFT(KC_N),     LSFT(KC_M),     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [17] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_LABK,        KC_RABK,        KC_QUOTE,       KC_DQUO,        KC_QUES,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_CIRC,        KC_AMPR,        KC_ASTR,        KC_LPRN,        KC_RPRN,                                                                        KC_LBRACKET,    KC_RBRACKET,    KC_UNDS,        KC_COLN,        KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_GRAVE,       KC_EQUAL,       KC_TILD,        KC_MINUS,       KC_PLUS,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_LCBR,        KC_RCBR,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    MO(19),         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [18] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_NUMLOCK,     KC_KP_SLASH,    KC_KP_ASTERISK, KC_KP_MINUS,    KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_KP_PLUS,     KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_KP_ENTER,    KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_KP_0,        KC_KP_DOT,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [19] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    ST_MACRO_1,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, ST_MACRO_5,     ST_MACRO_6,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_2,     ST_MACRO_3,                                                                     ST_MACRO_7,     ST_MACRO_8,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_4,     KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, ST_MACRO_9,     ST_MACRO_10,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [20] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [21] = LAYOUT_ergodox_pretty(
    KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TAB,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,                                          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_CAPSLOCK,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_ENTER,
    KC_LSHIFT,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,                                          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_RSHIFT,
    KC_NO,          KC_NO,          KC_LGUI,        KC_LALT,        KC_NO,                                                                                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,
                                                                                                    KC_NO,          KC_NO,          KC_NO,          KC_NO,
                                                                                                                    KC_NO,          KC_NO,
                                                                                    KC_SPACE,       KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_SPACE
  ),
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_LCTL(SS_LGUI(SS_TAP(X_J)))));

    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_SPACE) SS_DELAY(100) SS_TAP(X_SPACE) SS_DELAY(100) SS_TAP(X_SPACE) SS_DELAY(100) SS_TAP(X_SPACE));

    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_9)) SS_DELAY(100) SS_LSFT(SS_TAP(X_0)) SS_DELAY(100) SS_TAP(X_LEFT));

    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_9)) SS_DELAY(100) SS_LSFT(SS_TAP(X_0)));

    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_MINUS) SS_DELAY(100) SS_LSFT(SS_TAP(X_DOT)));

    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_COMMA)) SS_DELAY(100) SS_LSFT(SS_TAP(X_DOT)) SS_DELAY(100) SS_TAP(X_LEFT));

    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_COMMA)) SS_DELAY(100) SS_LSFT(SS_TAP(X_DOT)));

    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_LBRACKET) SS_DELAY(100) SS_TAP(X_RBRACKET) SS_DELAY(100) SS_TAP(X_LEFT));

    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_LBRACKET) SS_DELAY(100) SS_TAP(X_RBRACKET));

    }
    break;
    case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_LBRACKET)) SS_DELAY(100) SS_LSFT(SS_TAP(X_RBRACKET)) SS_DELAY(100) SS_TAP(X_LEFT));

    }
    break;
    case ST_MACRO_10:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_LBRACKET)) SS_DELAY(100) SS_LSFT(SS_TAP(X_RBRACKET)));

    }
    break;
  }
  return true;
}

uint32_t layer_state_set_user(uint32_t state) {
  uint8_t layer = biton32(state);
  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();
  switch (layer) {
    case 1:
      ergodox_right_led_1_on();
      break;
    case 2:
      ergodox_right_led_2_on();
      break;
    case 3:
      ergodox_right_led_3_on();
      break;
    case 4:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      break;
    case 5:
      ergodox_right_led_1_on();
      ergodox_right_led_3_on();
      break;
    case 6:
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    case 7:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    default:
      break;
  }
  return state;
};

