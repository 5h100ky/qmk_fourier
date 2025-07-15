#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _BASE 0
#define _FN1 1
#define _FN2 2

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
};

#define KC_FN1 MO(_FN1)
#define KC_FN2 MO(_FN2)
#define SPFN1 LT(_FN1, KC_SPACE)
#define BSFN2 LT(_FN2, KC_BSPC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_ortho_3x3(
    KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T
  ),

  [_FN1] = LAYOUT_ortho_3x3(
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5

  ),

  [_FN2] = LAYOUT_ortho_3x3(
    KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC
  )

};
