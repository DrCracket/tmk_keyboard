#include "unimap_trans.h"
#include "action_layer.h"

#define AC_FN0 ACTION_MACRO(0)
#define AC_FN1 ACTION_MODS_TAP_KEY(MOD_LGUI, KC_CAPS)

#ifdef KEYMAP_SECTION_ENABLE
const action_t actionmaps[][UNIMAP_ROWS][UNIMAP_COLS] __attribute__ ((section (".keymap.keymaps"))) = {
#else
const action_t actionmaps[][UNIMAP_ROWS][UNIMAP_COLS] PROGMEM = {
#endif
    UNIMAP_AT_CUSTOM(
    F1,  F2,     ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSLS,GRV,    FN0, PSCR,SLCK,PAUS, \
    F3,  F4,     TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,     BSPC,   P7,  P8,  P9,  F11,  \
    F5,  F6,     LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,          ENT,    P4,  P5,  P6,  NO,   \
    F7,  F8,     LSFT,NUBS,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT ,SLSH,          RSFT,   P1,  P2,  P3,  F12,  \
    F9,  F10,    FN1, LALT,               SPC,                                    RALT,RCTL,        P0,  PDOT       \
    ),
    UNIMAP_AT_CUSTOM(
    TRNS,TRNS,   TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,   TRNS,PSLS,PAST,PMNS, \
    TRNS,TRNS,   TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,   TRNS,TRNS,TRNS,PPLS, \
    TRNS,TRNS,   TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,          TRNS,   TRNS,TRNS,TRNS,TRNS, \
    TRNS,TRNS,   TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,          TRNS,   TRNS,TRNS,TRNS,PENT, \
    TRNS,TRNS,   TRNS,TRNS,               TRNS,                                   TRNS,TRNS,        TRNS,TRNS       \
    ),
};


const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
    if (record->event.pressed) {
        layer_invert(1);
        return MACRO( T(NLCK), END );
    }

    return MACRO( END );
}
