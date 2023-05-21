#include "../../Orthogonomic.h"
#include "action_layer.h"

/*Macro: Use the next lowest non-transparent key*/
#define _______ KC_TRNS

/*Macro: Ignore this key - KC_NO*/
#define XXXXXXX KC_NO

//keylevels
typedef enum keyLayerLevels{
  _QWERTY,
  _NAL,
  _FAMCL,
  _PGRMRDREAM,
  _GML
} keyLayerLevels;

typedef enum keycodes{
  QWERTY = SAFE_RANGE,
  RAISE,
  LOWER,
  FAMCL,
  PGRMRDREAM,
  GML
} keycodes;

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  
/*---------------------------------------------------------------------------------------------------------------------------------------*/
/* Default Layer QWERTY
  * ,-----------------------------,             ,-----------------------------,
  * | ESC | Tab |Shift|Caps | idk |             |Left |Down | Up  |Right|Retur|
  * |-----+-----+-----+-----+-----|             |-----+-----+-----+-----+-----|
  * |  Q  |  W  |  E  |  R  |  T  |             |  Y  |  U  |  I  |  O  |  P  |
  * |-----+------+------+------+--|             |-----+-----+-----+-----+-----|
  * |  A  |  S  |  D  |  F  |  G  |             |  H  |  J  |  K  |  L  |Enter|
  * |-----+------+------+------+--|             |-----+-----+-----+-----+-----|
  * |  Z  |  X  |  C  |  V  |  B  |             |  N  |  M  |  ;  |  :  |  -  |
  * |-----+-----+-----+-----+-----|             |-----+-----+-----+-----+-----|
  *     | Ctrl |  Alt | Lower| Space |       | Space | Up | AltGr | Ctrl |
  *     ,----------------------------,       ,---------------------------,
*/

[_QWERTY] = LAYOUT( KC_ESC ,  KC_TAB   , KC_LSHIFT ,   KC_CAPS   ,  XXXXXXX ,         KC_LEFT  , KC_DOWN ,  KC_UP   , KC_RIGHT ,  KC_BSPC ,
                    KC_Q   ,    KC_W   ,    KC_E   ,     KC_R    ,   KC_T   ,           KC_Y   ,  KC_U   ,   KC_I   ,   KC_O   , KC_P     ,
                    KC_A   ,    KC_S   ,    KC_D   ,     KC_F    ,   KC_G   ,           KC_H   ,  KC_J   ,   KC_K   ,   KC_L   , KC_ENTER ,
                    KC_Z   ,    KC_X   ,    KC_C   ,     KC_V    ,   KC_B   ,           KC_N   ,  KC_M   , KC_COMMA ,   KC_DOT , KC_MINUS ,
                            KC_LCTRL  ,   KC_LALT ,    LOWER     , KC_SPACE ,         KC_SPACE ,  RAISE  , KC_RALT  , KC_RCTRL            
),S

/*---------------------------------------------------------------------------------------------------------------------------------------*/
/* Number and Arithmetic layer
 * ,-----------------------------,             ,-----------------------------,
 * | ESC | Tab |Shift|Caps |     |             |     |     |     |     |Retur|
 * |-----+-----+-----+-----+-----|             |-----+-----+-----+-----+-----|
 * |  1  |  2  |  3  |  4  |  5  |             |  6  |  7  |  8  |  9  |  0  |
 * |-----+------+------+------+--|             |-----+-----+-----+-----+-----|
 * |     |  %  |  /  |  *  |     |             |     |     |     | Up  |Enter|
 * |-----+------+------+------+--|             |-----+-----+-----+-----+-----|
 * |     |  (  |  )  |  +  |  -  |             |     |     |Left |Down |Right|
 * |-----+-----+-----+-----+-----|             |-----+-----+-----+-----+-----|
 *     | Ctrl |  Alt | Lower| Space |       | Space | Up | AltGr | Ctrl |
 *     ,----------------------------,       ,---------------------------,
*/

[_NAL] = LAYOUT(KC_ESC ,  KC_TAB   , KC_LSHIFT ,   KC_CAPS   ,  XXXXXXX ,         XXXXXXX  , XXXXXXX , XXXXXXX  , XXXXXXX  ,  KC_BSPC ,
                KC_1   ,    KC_2   ,    KC_3   ,     KC_4    ,   KC_5   ,           KC_6   ,  KC_7   ,   KC_8   ,   KC_9   ,  KC_P0   ,
                XXXXXXX,  KC_PERC  ,  KC_SLSH  ,   KC_ASTR   ,  XXXXXXX ,         XXXXXXX  , XXXXXXX , XXXXXXX  ,  KC_LEFT , KC_ENTER ,
                XXXXXXX,  KC_LPRN  ,  KC_RPRN  ,   KC_PLUS   , KC_MINUS ,         XXXXXXX  , XXXXXXX , KC_LEFT  ,  KC_DOWN , KC_RIGHT ,
                         KC_LCTRL ,  KC_LALT  ,    LOWER    , KC_SPACE ,         KC_SPACE ,  RAISE  , KC_RALT  , KC_RCTRL            
),

/*---------------------------------------------------------------------------------------------------------------------------------------*/
/* Function and media layer
 * ,-----------------------------,             ,-----------------------------,
 * | ESC | Tab |Shift|Caps |     |             |Left |Down | Up  |Right|Retur|
 * |-----+-----+-----+-----+-----|             |-----+-----+-----+-----+-----|
 * |     |     |     |     |     |             | F1  | F2  | F3  | F4  |     |
 * |-----+-----+-----+-----+-----|             |-----+-----+-----+-----+-----|
 * |     |     |     |     |     |             | F5  | F6  | F7  | F8  |Enter|
 * |-----+-----+-----+-----+-----|             |-----+-----+-----+-----+-----|
 * |     |     |     |     |     |             | F9  | F10 | F11 | F12 |     |
 * |-----+-----+-----+-----+-----|             |-----+-----+-----+-----+-----|
 *     | Ctrl |  Alt | Lower| Space |       | Space | Up | AltGr | Ctrl |
 *     ,----------------------------,       ,----------------------------,
*/

[_FAMCL] = LAYOUT(KC_ESC ,  KC_TAB   , KC_LSHIFT ,   KC_CAPS  , XXXXXXX  ,         KC_LEFT  , KC_DOWN ,  KC_UP   , KC_RIGHT ,  KC_BSPC ,
                  XXXXXXX,  XXXXXXX  ,  XXXXXXX  ,   XXXXXXX  , XXXXXXX  ,           KC_Y   ,  KC_U   ,   KC_I   ,   KC_O   , XXXXXXX  ,
                  XXXXXXX,  XXXXXXX  ,  XXXXXXX  ,   XXXXXXX  , XXXXXXX  ,           KC_H   ,  KC_J   ,   KC_K   ,   KC_L   , KC_ENTER ,
                  XXXXXXX,  XXXXXXX  ,  XXXXXXX  ,   XXXXXXX  , XXXXXXX  ,           KC_N   ,  KC_M   , KC_COMMA ,   KC_DOT , XXXXXXX  ,
                          KC_LCTRL  ,   KC_LALT ,   LOWER    , KC_SPACE ,         KC_SPACE ,  RAISE  , KC_RALT  , KC_RCTRL            
),

/*---------------------------------------------------------------------------------------------------------------------------------------*/
/* Programmers dream (Idea) REVAMP at some point for better layout
 * ,-----------------------------,             ,-----------------------------,
 * | ESC | Tab |Shift| Caps|     |             |     |     |     |     |Retur|
 * |-----+-----+-----+-----+-----|             |-----+-----+-----+-----+-----|
 * |  !  |  "  |  #  |  $  |  %  |             |  &  |  {  |  (  | )   |  }  |
 * |-----+------+------+------+--|             |-----+-----+-----+-----+-----|
 * |  >  |  %  |  /  |  *  |  ~  |             |     |     |     | Up  |Enter|
 * |-----+------+------+------+--|             |-----+-----+-----+-----+-----|
 * |  <  |  \  |  |  |  +  |  -  |             |  _  |     |Left |Down |Right|
 * |-----+-----+-----+-----+-----|             |-----+-----+-----+-----+-----|
 *     | Ctrl |  Alt | Lower| Space |       | Space |  Up | AltGr | Ctrl |
 *     ,-----------------------------,      ,----------------------------,
*/


[_PGRMRDREAM] = LAYOUT(KC_ESC ,  KC_TAB   , KC_LSHIFT ,   KC_CAPS   ,          ,         KC_LEFT  , KC_DOWN , KC_UP    , KC_RIGHT , KC_BSPC  ,
                       KC_EXLM,  KC_DQT   ,  KC_HASH  ,   KC_DLR    , KC_PERC  ,         KC_AMPR  , KC_LCBR , KC_LPRN  , KC_RPRN  , KC_RCBR  ,
                       KC_GT  ,  KC_PERC  ,    KC_D   ,   KC_ASTR   , KC_TILD  ,         KC_CIRC  ,  KC_J   ,   KC_K   ,   KC_UP   , KC_ENTER ,
                       KC_LT  ,    KC_X   ,  KC_PIPE  ,   KC_PLUS   , KC_MINUS ,         KC_UNDS  ,  KC_M   , KC_LEFT  ,   KC_DOWN , KC_RIGHT ,
                                KC_LCTRL  ,  KC_LALT  ,    LOWER    , KC_SPACE ,         KC_SPACE ,  RAISE  , KC_RALT  , KC_RCTRL  ,          
),

/*---------------------------------------------------------------------------------------------------------------------------------------*/
/* Gaming Layer
 * ,-----------------------------,             ,-----------------------------,
 * | ESC |  1  |  2  |  3  |  4  |             |  5  |  6  |  7  |  9  |  0  |
 * |-----+-----+-----+-----+-----|             |-----+-----+-----+-----+-----|
 * | Tab |  Q  |  W  |  E  |  R  |             |  T  | np7 | np8 | np9 |Retur|
 * |-----+------+------+------+--|             |-----+-----+-----+-----+-----|
 * |Caps |  A  |  S  |  D  |  F  |             |  G  | np4 | np5 | np6 |Enter|
 * |-----+------+------+------+--|             |-----+-----+-----+-----+-----|
 * |Shift|     |  Z  |  X  |  C  |             |  V  | np1 | np2 | np3 |     |
 * |-----+-----+-----+-----+-----|             |-----+-----+-----+-----+-----|
 *     | Ctrl |  Alt | Lower| Space |      | Space |  Up | AltGr | Ctrl |
 *     ,-----------------------------,     ,-----------------------------,
*/


[_GML] = LAYOUT(KC_ESC ,    KC_1   ,    KC_2   ,     KC_3    ,   KC_4   ,        KC_5   ,  KC_6   ,   KC_7  ,   KC_8  , KC_0     ,
                KC_TAB ,    KC_Q   ,    KC_W   ,     KC_E    ,   KC_R   ,        KC_T   , KC_KP_7 , KC_KP_8 , KC_KP_9 , KC_BSPC  ,
                KC_CAPS,    KC_A   ,    KC_S   ,     KC_D    ,   KC_G   ,        KC_G   , KC_KP_4 , KC_KP_5 , KC_KP_6 , KC_ENTER ,
                KC_LSFT,  XXXXXXX  ,    KC_Z   ,     KC_X    ,   KC_C   ,        KC_V   , KC_KP_1 , KC_KP_2 , KC_KP_3 , XXXXXXX  ,
                        KC_LCTRL  ,   KC_LALT ,    LOWER    , KC_SPACE ,         KC_SPACE ,  RAISE  , KC_RALT , KC_RCTRL,           
);


}



bool process_record_user(uint16_t keycodes, keyrecord_t *record){
    switch (keycodes) {
      case QWERTY:
            if (record->event.pressed) {
              default_layer_set(_QWERTY);
            }
          return false;
        break;

      case NAL:
          if (record->event.pressed) {
            layer_on(_NAL);
          }else{
            layer_off(_NAL);
          }
          return false;
        break;

      case FAMCL:
            if (record->event.pressed) {
              layer_on(_FAMCL);
            }else{
              layer_off(_FAMCL);
            }
          return false;
        break;

      case PGRMRDREAM:
            if (record->event.pressed) {
              layer_on(_PGRMRDREAM);
            }else{
              layer_off(_PGRMRDREAM);
            }
          return false;
        break;

      case GML:
            if (record->event.pressed) {
              layer_on(_GML);
            }else{
              layer_off(_GML);
            }
          return false;
        break;
    }
    return true;
}








/*switch case that change keyLayerLevels when Lower and Raise*/
