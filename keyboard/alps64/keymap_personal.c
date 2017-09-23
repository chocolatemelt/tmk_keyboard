#include "keymap_common.h"

/*
 * Hasu
 */
const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Default Layer
     * ,-----------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|   \   |
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|Bspc |
     * |-----------------------------------------------------------|
     * |Ctrl  |  A|  S|  D|  F|  G|  H|  J|  K|  L|Fn3|  '|Enter   |
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift     |
     * |-----------------------------------------------------------|
     * |Ctrl |Gui |Alt  |       Space            |Alt   |Fn0 |Fn1  |
     * `-----------------------------------------------------------'
     */
    [0] = KEYMAP_AEK( \
        ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSLS, \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSPC, \
        LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN, QUOT,ENT, \
        LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH, RSFT, \
        LCTL,LGUI,LALT,          SPC,                          RALT,FN0, FN1),

    /* No bindings
     * ,-----------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =| Bkspc |
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|  \  |
     * |-----------------------------------------------------------|
     * |Ctrl  |  A|  S|  D|  F|  G|  H|  J|  K|  L|Fn3|  '|Enter   |
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift     |
     * |-----------------------------------------------------------|
     * |Ctrl |Gui |Alt  |       Space            |Alt   |Fn1 |Fn3  |
     * `-----------------------------------------------------------'
     */
    [1] = KEYMAP_AEK( \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, BSPC, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, BSLS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,ENT, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,          SPC,                          TRNS,FN0, FN1),

    /* fn0
     * ,-----------------------------------------------------------.
     * | ` | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|  Del  |
     * |-----------------------------------------------------------|
     * |Caps |   | Up|   |   |   |   |   |   |   |   |PgUp|  |     |
     * |-----------------------------------------------------------|
     * |Contro|Left|Down|Right|   |   |  |  | |   |Hom|End|Enter   |
     * |-----------------------------------------------------------|
     * |Shift   |   |   |   |   |   |   |   |   |  |PgDn|Shift     |
     * |-----------------------------------------------------------|
     * |Ctrl |Gui |Alt  |       Space            |Alt   |    |Fn2  |
     * `-----------------------------------------------------------'
     */
    [2] = KEYMAP_AEK( \
        GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, DEL, \
        CAPS,NO,  UP,  NO,  NO,  NO,  NO,  NO,  NO,NO,NO,PGUP,  NO,  TRNS, \
        LCTL,LEFT,DOWN,RGHT,NO,  NO,  NO,NO,NO,NO,HOME,END,TRNS, \
        LSFT,NO,  NO,  NO,  NO,  NO,  NO,NO,NO, NO,PGDN,TRNS, \
        LCTL,LGUI,LALT,          TRNS,                         RALT,TRNS,FN2),

    /* fn1/HHKB
     * ,-----------------------------------------------------------.
     * | ` | F1| F2| F3| F4|F5|F6|Mute|VolD|VolU|Play|Prev|Next|Ins|
     * |-----------------------------------------------------------|
     * |Caps |   |   |   |   |   |   |   |Psc|Slk|Pus|Up |   |     |
     * |-----------------------------------------------------------|
     * |Contro|VoD|VoU|Mut|   |   |  *|  /|Hom|PgU|Lef|Rig|Enter   |
     * |-----------------------------------------------------------|
     * |Shift   |   |   |   |   |   |  +|  -|End|PgD|Dow|Shift     |
     * |-----------------------------------------------------------|
     * |Ctrl |Gui |Alt  |       Space            |Alt   |Fn2 |     |
     * `-----------------------------------------------------------'
     */
    [3] = KEYMAP_AEK( \
        GRV, NO,  NO,  NO,  NO,  NO,  NO, MUTE, VOLD, VOLU, MPLY, MPRV, MNXT, INS, \
        CAPS,NO,  PGUP,  NO,  NO,  NO,  NO,  NO,  PSCR,SLCK,PAUS,UP,  NO,  TRNS, \
        LCTL,HOME,PGDN,END ,NO,  NO,  PAST,PSLS,HOME,PGUP,LEFT,RGHT,TRNS, \
        LSFT,NO,  NO,  NO,  NO,  NO,  PPLS,PMNS,END, PGDN,DOWN,RSFT, \
        LCTL,LGUI,LALT,          TRNS,                         RALT,FN2,TRNS),
};


/*
 * Fn action definition
 */
const action_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(2),                  // Alt layer
    [1] = ACTION_LAYER_MOMENTARY(3),                  // HHKB layer
    [2] = ACTION_LAYER_TOGGLE(1),                     // Standard layer
};
