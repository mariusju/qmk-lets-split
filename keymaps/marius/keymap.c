#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QWERTY 0
#define _NUMBERS 1
#define _SYMBOLS 2


#define NUM  MO(_NUMBERS)
#define SYM  MO(_SYMBOLS)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | GUI  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  "   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Shift |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl | Alt  | NUM  | SYM  | Bksp | Space| Enter| Tab  | Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 */
[_QWERTY] = LAYOUT_ortho_4x12(
   KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC, \
   KC_LGUI,  KC_A,    KC_S,    LT(NUM, KC_D),    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, \
   KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, \
   KC_LCTL, KC_LALT, NUM, SYM, GUI_T(KC_BSPC), LT(SYM, KC_SPC),  CTL_T(KC_ENT),  LALT_T(KC_TAB),  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT  \
),

/* Numbers
 * ,-----------------------------------------------------------------------------------.
 * | Tab  |   Q  |   W  |   F  |   P  |   G  |   J  |   L  |   U  |   Y  |   ;  | Bksp |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Esc  |   A  |   R  |   S  |   T  |   D  |   H  |   N  |   E  |   I  |   O  |  '   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   K  |   M  |   ,  |   .  |   /  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |Adjust| Ctrl | Alt  | GUI  |Lower |Space |Space |Raise | Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 */
[_NUMBERS] = LAYOUT_ortho_4x12( \
  KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_PGUP,   KC_7,    KC_8,    KC_9,    KC_NO,    KC_NO, \
  KC_LGUI,KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_PGDOWN, KC_4,    KC_5,    KC_6,    KC_NO,    KC_NO, \
  KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_1,    KC_2,    KC_3,    KC_NO,    KC_NO, \
  KC_LCTL, KC_LALT, NUM, SYM, GUI_T(KC_BSPC), LT(SYM, KC_SPC),  KC_0,  LALT_T(KC_TAB),  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT  \
),

/* Symbols
 * ,-----------------------------------------------------------------------------------.
 * | Tab  |   '  |   ,  |   .  |   P  |   Y  |   F  |   G  |   C  |   R  |   L  | Bksp |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Esc  |   A  |   O  |   E  |   U  |   I  |   D  |   H  |   T  |   N  |   S  |  /   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   ;  |   Q  |   J  |   K  |   X  |   B  |   M  |   W  |   V  |   Z  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |Adjust| Ctrl | Alt  | GUI  |Lower |Space |Space |Raise | Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 */
[_SYMBOLS] = LAYOUT_ortho_4x12( \
  KC_NO,  KC_EXLM,    KC_AT,    KC_LCBR,    KC_RCBR,    KC_AMPR,    KC_DLR,    KC_UNDS,    KC_MINS,    KC_PPLS,    KC_PAST,    KC_NO, \
  KC_LGUI,  KC_PERC,    KC_HASH,    KC_LPRN,    KC_RPRN,    KC_NO,     KC_PIPE,    KC_LABK,    KC_RABK,    KC_PEQL,   KC_NO,    KC_NO, \
  KC_NO,  KC_GRV,    KC_CIRC,    KC_LBRC,      KC_RBRC,      KC_TILD,    KC_BSLS,    KC_SLSH,    KC_NO,    KC_NO,    KC_NO,    KC_NO, \
  KC_LCTL, KC_LALT, NUM, SYM, GUI_T(KC_BSPC), LT(SYM, KC_SPC),  CTL_T(KC_ENT),  KC_SPC,  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT  \
)


};

