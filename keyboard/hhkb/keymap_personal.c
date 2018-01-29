/*
 * HHKB Layout
 */
#include "keymap_common.h"


const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Layer 0: Default Layer
     * ,-----------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  \|  `|
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|Backs|
     * |-----------------------------------------------------------|
     * |Contro|  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Enter   |
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift |Fn0|
     * `-----------------------------------------------------------'
     *       |Gui|Alt  |         Space         |Alt  |Fn1|
     *       `-------------------------------------------'
     */
    KEYMAP(ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSLS,GRV,   \
           TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSPC,       \
           LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,ENT,             \
           LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,RSFT,FN0,             \
                LGUI,LALT,          SPC,                RALT,FN1),

    /* Layer 1: OS X Mode
     * ,-----------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  \|  `|
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|Backs|
     * |-----------------------------------------------------------|
     * |Gui   |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Enter   |
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift |Fn0|
     * `-----------------------------------------------------------'
     *       |Ctl|Alt  |         Space         |Alt  |Fn1|
     *       `-------------------------------------------'
     */
    KEYMAP(ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSLS,GRV,   \
           TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSPC,       \
           LGUI,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,ENT,             \
           LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,RSFT,FN0,             \
                LCTL,LALT,          SPC,                RALT,FN1),

    /* Layer 2: HHKB mode (HHKB Fn)
     * ,-----------------------------------------------------------.
     * |  `|Stp|   |   |   |   |   |   |   |Mut|VDn|VUp|Pau|Prv|Nxt|
     * |-----------------------------------------------------------|
     * |Caps |   |PgU|   |   |   |   |   |Psc|Slk|Pus|Up |   |Backs|
     * |-----------------------------------------------------------|
     * |      |Hom|PgD|End|   |   |  *|  /|Hom|PgU|Lef|Rig|Enter   |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |  +|  -|End|PgD|Dow|      |   |
     * `-----------------------------------------------------------'
     *       |   |     |                       |     |   |
     *       `-------------------------------------------'
     */
    KEYMAP(GRV,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,MUTE,VOLD,VOLU,MPLY,MPRV,MNXT,  \
           CAPS,TRNS,PGUP,TRNS,TRNS,TRNS,TRNS,TRNS,PSCR,SLCK,PAUS, UP, TRNS, BSPC,      \
           TRNS,HOME,PGDN,END,TRNS,TRNS,PAST,PSLS,HOME,PGUP,LEFT,RGHT,PENT,             \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PPLS,PMNS,END, PGDN,DOWN,TRNS,TRNS,            \
                TRNS,TRNS,          TRNS,               TRNS,TRNS),

    /* Layer 3: Personal mode (Fn 2)
     * ,-----------------------------------------------------------.
     * |  `| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Caps |   |Up |   |   |   |   |   |   |   |   |PgU|   |Backs|
     * |-----------------------------------------------------------|
     * |      |Lef|Dow|Rig|   |   |   |   |   |   |Hom|End|Enter   |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |   |   |   |   |PgD|      |   |
     * `-----------------------------------------------------------'
     *       |   |     |        OSX Mode       |     |   |
     *       `-------------------------------------------'
     */
    KEYMAP(GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL,   \
           CAPS,TRNS,  UP,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PGUP,TRNS, BSPC,      \
           TRNS,LEFT,DOWN,RGHT,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,HOME,END ,PENT,            \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PGDN,TRNS,TRNS,            \
                TRNS,TRNS,          FN2,               TRNS,TRNS)
};

/*
 * Fn action definition
 */
const action_t fn_actions[] PROGMEM = {
    [0] = ACTION_LAYER_MOMENTARY(2),
    [1] = ACTION_LAYER_MOMENTARY(3),
    [2] = ACTION_LAYER_TOGGLE(1)
};
