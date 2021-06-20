// generated from users/manna-harbour_miryoku/miryoku.org  -*- buffer-read-only: t -*-

#include "manna-harbour_miryoku.h"

#define m_layout_expand(...) LAYOUT_miryoku(__VA_ARGS__)
#define m_layout(x) [x] = m_layout_expand(MIRYOKU_TABLE_ ## x)

#define m_layouts_8(a,b,c,d,e,f,g,h) m_layout(a), m_layout(b), m_layout(c), m_layout(d), m_layout(e), m_layout(f), m_layout(g), m_layout(h)
#define m_layouts_7(a,b,c,d,e,f,g)   m_layout(a), m_layout(b), m_layout(c), m_layout(d), m_layout(e), m_layout(f), m_layout(g)
#define m_layouts_6(a,b,c,d,e,f)     m_layout(a), m_layout(b), m_layout(c), m_layout(d), m_layout(e), m_layout(f)
#define m_layouts_5(a,b,c,d,e)       m_layout(a), m_layout(b), m_layout(c), m_layout(d), m_layout(e)
#define m_layouts_4(a,b,c,d)         m_layout(a), m_layout(b), m_layout(c), m_layout(d)
#define m_layouts_3(a,b,c)           m_layout(a), m_layout(b), m_layout(c)
#define m_layouts_2(a,b)             m_layout(a), m_layout(b)
#define m_layouts_1(a)               m_layout(a)

#define GET_MACRO(_1,_2,_3,_4,_5,_6,_7,_8,NAME,...) m_layouts_ ## NAME

#define m_layouts_multi(...) GET_MACRO(__VA_ARGS__, 8, 7, 6, 5, 4, 3, 2, 1)(__VA_ARGS__)
#define m_layouts(z) m_layouts_multi(z)

// These mean that it's impossible to add the BASE layer as a duplicate extra layer
// But the advantage is that the base layer is always called 'BASE'
#if defined MIRYOKU_LAYERS_FLIP
  #if defined MIRYOKU_ALPHAS_COLEMAK
  #define MIRYOKU_TABLE_BASE MIRYOKU_TABLE_COLEMAK_FLIP
  #elif defined MIRYOKU_ALPHAS_COLEMAKDHK
  #define MIRYOKU_TABLE_BASE MIRYOKU_TABLE_COLEMAKDHK_FLIP
  #elif defined MIRYOKU_ALPHAS_DVORAK
  #define MIRYOKU_TABLE_BASE MIRYOKU_TABLE_DVORAK_FLIP
  #elif defined MIRYOKU_ALPHAS_HALMAK
  #define MIRYOKU_TABLE_BASE MIRYOKU_TABLE_HALMAK_FLIP
  #elif defined MIRYOKU_ALPHAS_WORKMAN
  #define MIRYOKU_TABLE_BASE MIRYOKU_TABLE_WORKMAN_FLIP
  #elif defined MIRYOKU_ALPHAS_QWERTY
  #define MIRYOKU_TABLE_BASE MIRYOKU_TABLE_QWERTY_FLIP
  #else
  #define MIRYOKU_TABLE_BASE MIRYOKU_TABLE_COLEMAKDH_FLIP
  #endif
#else
  #if defined MIRYOKU_ALPHAS_COLEMAK
  #define MIRYOKU_TABLE_BASE MIRYOKU_TABLE_COLEMAK
  #elif defined MIRYOKU_ALPHAS_COLEMAKDHK
  #define MIRYOKU_TABLE_BASE MIRYOKU_TABLE_COLEMAKDHK
  #elif defined MIRYOKU_ALPHAS_DVORAK
  #define MIRYOKU_TABLE_BASE MIRYOKU_TABLE_DVORAK
  #elif defined MIRYOKU_ALPHAS_HALMAK
  #define MIRYOKU_TABLE_BASE MIRYOKU_TABLE_HALMAK
  #elif defined MIRYOKU_ALPHAS_WORKMAN
  #define MIRYOKU_TABLE_BASE MIRYOKU_TABLE_WORKMAN
  #elif defined MIRYOKU_ALPHAS_QWERTY
  #define MIRYOKU_TABLE_BASE MIRYOKU_TABLE_QWERTY
  #else
  #define MIRYOKU_TABLE_BASE MIRYOKU_TABLE_COLEMAKDH
  #endif
#endif


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
#if defined MIRYOKU_LAYERS_FLIP
  m_layout(BASE),
  #if defined MIRYOKU_EXTRA_LAYERS
  m_layouts(MIRYOKU_EXTRA_LAYERS),
  #endif
  #if defined MIRYOKU_NAV_INVERTEDT
  [NAV] = LAYOUT_miryoku(
    KC_PGUP, KC_HOME, KC_UP,   KC_END,  KC_INS,  U_NA,    U_NA,    U_NA,    U_NA,    RESET,
    KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_CAPS, U_NA,    KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
    U_UND,   U_CUT,   U_CPY,   U_PST,   U_RDO,   U_NA,    U_NA,    U_NA,    KC_ALGR, U_NA,
    U_NP,    U_NP,    KC_DEL,  KC_BSPC, KC_ENT,  U_NA,    U_NA,    U_NA,    U_NP,    U_NP
  ),
  [MOUSE] = LAYOUT_miryoku(
    KC_WH_U, KC_WH_L, KC_MS_U, KC_WH_R, U_NU,    U_NA,    U_NA,    U_NA,    U_NA,    RESET,
    KC_WH_D, KC_MS_L, KC_MS_D, KC_MS_R, U_NU,    U_NA,    KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
    U_UND,   U_CUT,   U_CPY,   U_PST,   U_RDO,   U_NA,    U_NA,    U_NA,    KC_ALGR, U_NA,
    U_NP,    U_NP,    KC_BTN2, KC_BTN3, KC_BTN1, U_NA,    U_NA,    U_NA,    U_NP,    U_NP
  ),
  [MEDIA] = LAYOUT_miryoku(
    U_NU,    U_NU,    KC_VOLU, U_NU,    U_NU,    U_NA,    U_NA,    U_NA,    U_NA,    RESET,
    U_NU,    KC_MPRV, KC_VOLD, KC_MNXT, U_NU,    U_NA,    KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
    RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, RGB_TOG, U_NA,    U_NA,    U_NA,    KC_ALGR, U_NA,
    U_NP,    U_NP,    KC_MUTE, KC_MPLY, KC_MSTP, U_NA,    U_NA,    U_NA,    U_NP,    U_NP
  ),
  #else
  [NAV] = LAYOUT_miryoku(
    KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_INS,  U_NA,    U_NA,    U_NA,    U_NA,    RESET,
    KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_CAPS, U_NA,    KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
    U_UND,   U_CUT,   U_CPY,   U_PST,   U_RDO,   U_NA,    U_NA,    U_NA,    KC_ALGR, U_NA,
    U_NP,    U_NP,    KC_DEL,  KC_BSPC, KC_ENT,  U_NA,    U_NA,    U_NA,    U_NP,    U_NP
  ),
  [MOUSE] = LAYOUT_miryoku(
    KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, U_NU,    U_NA,    U_NA,    U_NA,    U_NA,    RESET,
    KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, U_NU,    U_NA,    KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
    U_UND,   U_CUT,   U_CPY,   U_PST,   U_RDO,   U_NA,    U_NA,    U_NA,    KC_ALGR, U_NA,
    U_NP,    U_NP,    KC_BTN2, KC_BTN3, KC_BTN1, U_NA,    U_NA,    U_NA,    U_NP,    U_NP
  ),
  [MEDIA] = LAYOUT_miryoku(
    RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, RGB_TOG, U_NA,    U_NA,    U_NA,    U_NA,    RESET,
    KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, U_NU,    U_NA,    KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
    U_NU,    U_NU,    U_NU,    U_NU,    U_NU,    U_NA,    U_NA,    U_NA,    KC_ALGR, U_NA,
    U_NP,    U_NP,    KC_MUTE, KC_MPLY, KC_MSTP, U_NA,    U_NA,    U_NA,    U_NP,    U_NP
  ),
  #endif
  [MBO] = LAYOUT_miryoku(
    U_RDO,   U_PST,   U_CPY,   U_CUT,   U_UND,   U_RDO,   U_PST,   U_CPY,   U_CUT,   U_UND, \
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_TRNS, KC_TRNS, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, \
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
    U_NP,    U_NP,    KC_BTN2, KC_BTN3, KC_BTN1, KC_BTN1, KC_BTN3, KC_BTN2, U_NP,    U_NP
  ),
  [NUM] = LAYOUT_miryoku(
    RESET,   U_NA,    U_NA,    U_NA,    U_NA,    KC_LBRC, KC_7,    KC_8,    KC_9,    KC_RBRC,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA,    KC_EQL,  KC_4,    KC_5,    KC_6,    KC_SCLN,
    U_NA,    KC_ALGR, U_NA,    U_NA,    U_NA,    KC_BSLS, KC_1,    KC_2,    KC_3,    KC_GRV,
    U_NP,    U_NP,    U_NA,    U_NA,    U_NA,    KC_MINS, KC_0,    KC_DOT,  U_NP,    U_NP
  ),
  [SYM] = LAYOUT_miryoku(
    RESET,   U_NA,    U_NA,    U_NA,    U_NA,    KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA,    KC_PLUS, KC_DLR,  KC_PERC, KC_CIRC, KC_COLN,
    U_NA,    KC_ALGR, U_NA,    U_NA,    U_NA,    KC_PIPE, KC_EXLM, KC_AT,   KC_HASH, KC_TILD,
    U_NP,    U_NP,    U_NA,    U_NA,    U_NA,    KC_UNDS, KC_LPRN, KC_RPRN, U_NP,    U_NP
  ),
  [FUN] = LAYOUT_miryoku(
    RESET,   U_NA,    U_NA,    U_NA,    U_NA,    KC_PSCR, KC_F7,   KC_F8,   KC_F9,   KC_F12,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA,    KC_SLCK, KC_F4,   KC_F5,   KC_F6,   KC_F11,
    U_NA,    KC_ALGR, U_NA,    U_NA,    U_NA,    KC_PAUS, KC_F1,   KC_F2,   KC_F3,   KC_F10,
    U_NP,    U_NP,    U_NA,    U_NA,    U_NA,    KC_TAB,  KC_SPC,  KC_APP,  U_NP,    U_NP
  )
,
#else
  m_layout(BASE),
  #if defined MIRYOKU_EXTRA_LAYERS
  m_layouts(MIRYOKU_EXTRA_LAYERS),
  #endif
  #if defined MIRYOKU_NAV_VI
  [NAV] = LAYOUT_miryoku(
    RESET,   U_NA,    U_NA,    U_NA,    U_NA,    U_RDO,   U_PST,   U_CPY,   U_CUT,   U_UND,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA,    KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_CAPS,
    U_NA,    KC_ALGR, U_NA,    U_NA,    U_NA,    KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_INS,
    U_NP,    U_NP,    U_NA,    U_NA,    U_NA,    KC_ENT,  KC_BSPC, KC_DEL,  U_NP,    U_NP
  ),
  [MOUSE] = LAYOUT_miryoku(
    RESET,   U_NA,    U_NA,    U_NA,    U_NA,    U_RDO,   U_PST,   U_CPY,   U_CUT,   U_UND,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA,    KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, U_NU,
    U_NA,    KC_ALGR, U_NA,    U_NA,    U_NA,    KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, U_NU,
    U_NP,    U_NP,    U_NA,    U_NA,    U_NA,    KC_BTN1, KC_BTN3, KC_BTN2, U_NP,    U_NP
  ),
  [MEDIA] = LAYOUT_miryoku(
    RESET,   U_NA,    U_NA,    U_NA,    U_NA,    RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA,    KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, U_NU,
    U_NA,    KC_ALGR, U_NA,    U_NA,    U_NA,    U_NU,    U_NU,    U_NU,    U_NU,    U_NU,
    U_NP,    U_NP,    U_NA,    U_NA,    U_NA,    KC_MSTP, KC_MPLY, KC_MUTE, U_NP,    U_NP
  ),
  #else
  [NAV] = LAYOUT_miryoku(
    RESET,   U_NA,    U_NA,    U_NA,    U_NA,    U_RDO,   U_PST,   U_CPY,   U_CUT,   U_UND,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA,    KC_CAPS, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,
    U_NA,    KC_ALGR, U_NA,    U_NA,    U_NA,    KC_INS,  KC_HOME, KC_PGDN, KC_PGUP, KC_END,
    U_NP,    U_NP,    U_NA,    U_NA,    U_NA,    KC_ENT,  KC_BSPC, KC_DEL,  U_NP,    U_NP
  ),
  [MOUSE] = LAYOUT_miryoku(
    RESET,   U_NA,    U_NA,    U_NA,    U_NA,    U_RDO,   U_PST,   U_CPY,   U_CUT,   U_UND,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA,    U_NU,    KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R,
    U_NA,    KC_ALGR, U_NA,    U_NA,    U_NA,    U_NU,    KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R,
    U_NP,    U_NP,    U_NA,    U_NA,    U_NA,    KC_BTN1, KC_BTN3, KC_BTN2, U_NP,    U_NP
  ),
  [MEDIA] = LAYOUT_miryoku(
    RESET,   U_NA,    U_NA,    U_NA,    U_NA,    RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA,    U_NU,    KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT,
    U_NA,    KC_ALGR, U_NA,    U_NA,    U_NA,    U_NU,    U_NU,    U_NU,    U_NU,    U_NU,
    U_NP,    U_NP,    U_NA,    U_NA,    U_NA,    KC_MSTP, KC_MPLY, KC_MUTE, U_NP,    U_NP
  ),
  #endif
  [MBO] = LAYOUT_miryoku(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_TRNS, KC_TRNS, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, \
    U_RDO,   U_PST,   U_CPY,   U_CUT,   U_UND,   U_RDO,   U_PST,   U_CPY,   U_CUT,   U_UND, \
    U_NP,    U_NP,    KC_BTN2, KC_BTN3, KC_BTN1, KC_BTN1, KC_BTN3, KC_BTN2, U_NP,    U_NP
  ),
  [NUM] = LAYOUT_miryoku(
    KC_LBRC, KC_7,    KC_8,    KC_9,    KC_RBRC, U_NA,    U_NA,    U_NA,    U_NA,    RESET,
    KC_SCLN, KC_4,    KC_5,    KC_6,    KC_EQL,  U_NA,    KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_BSLS, U_NA,    U_NA,    U_NA,    KC_ALGR, U_NA,
    U_NP,    U_NP,    KC_DOT,  KC_0,    KC_MINS, U_NA,    U_NA,    U_NA,    U_NP,    U_NP
  ),
  [SYM] = LAYOUT_miryoku(
    KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR, U_NA,    U_NA,    U_NA,    U_NA,    RESET,
    KC_COLN, KC_DLR,  KC_PERC, KC_CIRC, KC_PLUS, U_NA,    KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
    KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_PIPE, U_NA,    U_NA,    U_NA,    KC_ALGR, U_NA,
    U_NP,    U_NP,    KC_LPRN, KC_RPRN, KC_UNDS, U_NA,    U_NA,    U_NA,    U_NP,    U_NP
  ),
  [FUN] = LAYOUT_miryoku(
    KC_F12,  KC_F7,   KC_F8,   KC_F9,   KC_PSCR, U_NA,    U_NA,    U_NA,    U_NA,    RESET,
    KC_F11,  KC_F4,   KC_F5,   KC_F6,   KC_SLCK, U_NA,    KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
    KC_F10,  KC_F1,   KC_F2,   KC_F3,   KC_PAUS, U_NA,    U_NA,    U_NA,    KC_ALGR, U_NA,
    U_NP,    U_NP,    KC_APP,  KC_SPC,  KC_TAB,  U_NA,    U_NA,    U_NA,    U_NP,    U_NP
  )
#endif
};
