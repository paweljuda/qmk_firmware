#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _LOWER 1
#define _AWSD 2

#define LOWER MO(_LOWER)
/* #define ENTRA LT(RAISE,KC_ENT) */
/* LT(RAISE,KC_ENT) */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT_5x6(
     KC_GRAVE  , KC_1 , KC_2 , KC_3 , KC_4 , KC_5 ,                          KC_6 , KC_7 , KC_8    , KC_9   , KC_0    , KC_LBRC   ,
     KC_TAB    , KC_Q , KC_W , KC_E , KC_R , KC_T ,                          KC_Y , KC_U , KC_I    , KC_O   , KC_P    , KC_BSLASH ,
     LOWER     , KC_A , KC_S , KC_D , KC_F , KC_G ,                          KC_H , KC_J , KC_K    , KC_L   , KC_SCLN , KC_QUOT   ,
     TG(_AWSD) , KC_Z , KC_X , KC_C , KC_V , KC_B ,                          KC_N , KC_M , KC_COMM , KC_DOT , KC_SLSH , KC_RBRC   ,
                       KC_LEFT  , KC_RIGHT , KC_LSHIFT ,                           SFT_T(KC_ENT) , KC_DOWN  , KC_UP ,
                       KC_LCTRL , KC_LGUI  , KC_ESC, KC_DEL ,                      KC_BSPC       , KC_SPACE , KC_MINS , KC_EQUAL
  ),
  [_LOWER] = LAYOUT_5x6(
     KC_F12  , KC_F1   , KC_F2   , KC_F3   , KC_F4   , KC_F5   ,             KC_F6   , KC_F7 , KC_F8 , KC_F9 , KC_F10  , KC_F11  ,
     _______ , _______ , _______ , _______ , _______ , _______ ,             _______ , KC_7  , KC_8  , KC_9  , _______ , KC_MUTE ,
     _______ , KC_HOME , KC_PGUP , KC_PGDN , KC_END  , _______ ,             _______ , KC_4  , KC_5  , KC_6  , _______ , KC_VOLU ,
     _______ , _______ , _______ , _______ , _______ , _______ ,             _______ , KC_1  , KC_2  , KC_3  , _______ , KC_VOLD ,
                                             _______ , _______ ,             _______ , KC_0 ,
                                             _______ , _______ ,             _______ , _______ ,
                                             _______ , _______ ,             _______ , _______ ,
                                             _______ , _______
  ),
  /* for gaming, it modifies left side only for match awsd movements */
  [_AWSD] = LAYOUT_5x6(
     KC_ESC    , KC_1 ,      KC_2 , KC_3 , KC_4 , KC_5 ,                     KC_6 , KC_7 , KC_8    , KC_9   , KC_0    , KC_LBRC,
     KC_TAB    , KC_T ,      KC_Q , KC_W , KC_E , KC_R ,                     KC_Y , KC_U , KC_I    , KC_O   , KC_P    , KC_BSLASH ,
     LOWER     , KC_LSHIFT , KC_A , KC_S , KC_D , KC_F ,                     KC_H , KC_J , KC_K    , KC_L   , KC_SCLN , KC_QUOT   ,
     TG(_AWSD) , KC_B ,      KC_Z , KC_X , KC_C , KC_V ,                     KC_N , KC_M , KC_COMM , KC_DOT , KC_SLSH , KC_RBRC ,
                       KC_LEFT, KC_RIGHT , KC_I ,                                   SFT_T(KC_ENT) , KC_DOWN , KC_UP ,
                       KC_LCTRL, KC_I, KC_SPACE , KC_P ,                            KC_BSPC       , KC_SPACE , KC_MINS , KC_PLUS
  ),
};
