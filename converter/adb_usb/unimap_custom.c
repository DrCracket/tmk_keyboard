/*
Copyright 2016-19 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include "unimap_common.h"

enum macro_id {
    BRACE_L,
    BRACE_R,
    BRACKET_L,
    BRACKET_R,
    BACKSLASH,
    PIPE,
};

#define AC_FN0 ACTION_LAYER_TOGGLE(1)
#define AC_FN1 ACTION_LAYER_TOGGLE(2)
#define AC_FN10 ACTION_LAYER_MOMENTARY(5)
#define AC_FN11 ACTION_MACRO(PIPE)
#define AC_FN12 ACTION_MACRO(BRACKET_L)
#define AC_FN13 ACTION_MACRO(BRACKET_R)
#define AC_FN14 ACTION_MACRO(BACKSLASH)
#define AC_FN15 ACTION_MACRO(BRACE_L)
#define AC_FN16 ACTION_MACRO(BRACE_R)
#define AC_PKEY ACTION_MODS_TAP_KEY(MOD_NONE, KC_POWER)

#ifdef KEYMAP_SECTION_ENABLE
const action_t actionmaps[][UNIMAP_ROWS][UNIMAP_COLS] __attribute__ ((section (".keymap.keymaps"))) = {
#else
const action_t actionmaps[][UNIMAP_ROWS][UNIMAP_COLS] PROGMEM = {
#endif
    /* ADB Keyboard unified layout
     * ,---.   .---------------. ,---------------. ,---------------. ,-----------.             ,---.
     * |Esc|   |F1 |F2 |F3 |F4 | |F5 |F6 |F7 |F8 | |F9 |F10|F11|F12| |PrS|ScL|Pau|             |Pwr|
     * `---'   `---------------' `---------------' `---------------' `-----------'             `---'
     * ,-----------------------------------------------------------. ,-----------. ,---------------. ,---.
     * |  `|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backspa| |Ins|Hom|PgU| |NmL|  =|  /|  *| |VUp|
     * |-----------------------------------------------------------| |-----------| |---------------| |---|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|    \| |Del|End|PgD| |  7|  8|  9|  -| |VDn|
     * |-----------------------------------------------------------| `-----------' |---------------| |---|
     * |CapsLo|  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|#  |Retn|               |  4|  5|  6|  +| |Mut|
     * |-----------------------------------------------------------|     ,---.     |---------------| `---'
     * |Shif|\  |  Z|  X|  C|  V|  B|  N|  M|  ,|  ,|  /|Shift     |     |Up |     |  1|  2|  3|   |
     * |-----------------------------------------------------------| ,-----------. |-----------|Ent| ,---.
     * |Ctrl |Opt |Gui |         Space           |Gui* |Opt |Ctrl  | |Lef|Dow|Rig| |      0|  .|   | |Ply|
     * `-----------------------------------------------------------' `-----------' `---------------' `---'
     */

    /* Layer 0: Standard ISO layer */
    [0] = UNIMAP_ADB(
    ESC, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,           PSCR,SLCK,PAUS,              PKEY,
    GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC,     INS, HOME,PGUP,    NLCK,PEQL,PSLS,PAST,VOLU,
    TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS,     DEL, END, PGDN,    P7,  P8,  P9,  PMNS,VOLD,
    LCAP,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,NUHS,ENT,                         P4,  P5,  P6,  PPLS,MUTE,
    LSFT,NUBS,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,     RSFT,          UP,           P1,  P2,  P3,  PENT,
    LCTL,LALT,LGUI,          SPC,                               RALT,RCTL,     LEFT,DOWN,RGHT,    P0,       PDOT,     MPLY
    ),
    /* Layer 1: programming layer 1*/
    [1] = UNIMAP_ADB(
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,         TRNS,TRNS,TRNS,              TRNS,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,    TRNS,TRNS,TRNS,    TRNS,TRNS,TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,FN11,TRNS,TRNS,    TRNS,TRNS,TRNS,    TRNS,TRNS,TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,FN12,FN13,TRNS,TRNS,                       TRNS,TRNS,TRNS,TRNS,TRNS,
    FN10,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,         TRNS,         TRNS,TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,               TRNS,                         TRNS,TRNS,    TRNS,TRNS,TRNS,    TRNS,     TRNS,     TRNS
    ),
    /* Layer 2: Mouse layer */
    [2] = UNIMAP_ADB(
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,         TRNS,TRNS,TRNS,              TRNS,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,    TRNS,TRNS,TRNS,    WH_U,TRNS,WH_D,TRNS,TRNS,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,    TRNS,TRNS,TRNS,    BTN1,MS_U,BTN2,TRNS,TRNS,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,                       MS_L,BTN3,MS_R,TRNS,TRNS,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,         TRNS,         WH_L,MS_D,WH_R,TRNS,
    TRNS,TRNS,TRNS,               TRNS,                         TRNS,TRNS,    TRNS,TRNS,TRNS,    TRNS,     TRNS,     TRNS
    ),
    /* Layer 5: programming layer 2*/
    [5] = UNIMAP_ADB(
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,         TRNS,TRNS,TRNS,              TRNS,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,    TRNS,TRNS,TRNS,    TRNS,TRNS,TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,FN14,TRNS,TRNS,    TRNS,TRNS,TRNS,    TRNS,TRNS,TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,FN15,FN16,TRNS,TRNS,                       TRNS,TRNS,TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,         TRNS,         TRNS,TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,               TRNS,                         TRNS,TRNS,    TRNS,TRNS,TRNS,    TRNS,     TRNS,     TRNS
    ),
};


const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    keyevent_t event = record->event;

    switch (id) {
        case PIPE:
            return (event.pressed ?
                    MACRO( D(RALT), T(NUBS), U(RALT), END ) :
                    MACRO( END ) );
        case BRACKET_L:
            return (event.pressed ?
                    MACRO( D(RALT), T(8), U(RALT), END ) :
                    MACRO( END ) );
        case BRACKET_R:
            return (event.pressed ?
                    MACRO( D(RALT), T(9), U(RALT), END ) :
                    MACRO( END ) );
        case BACKSLASH:
            return (event.pressed ?
                    MACRO( D(RALT), T(MINS), U(RALT), END ):
                    MACRO( END ) );
        case BRACE_L:
            return (event.pressed ?
                    MACRO( D(RALT), T(7), U(RALT), END ) :
                    MACRO( END ) );
        case BRACE_R:
            return (event.pressed ?
                    MACRO( D(RALT), T(0), U(RALT), END ) :
                    MACRO( END ) );
    }
    return MACRO_NONE;
}
