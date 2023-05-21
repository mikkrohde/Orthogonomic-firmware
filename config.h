#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xC1ED
#define PRODUCT_ID      0x23B0
#define DEVICE_VER      0x0001
#define MANUFACTURER    Orthogonomic
#define PRODUCT         Orthogonomic
#define DESCRIPTION     "QMK firmware made for the Orthogonomic keyboard"
/*keyboard matrix size*/
#define MATRIX_ROWS 10
#define MATRIX_COLS 15

/*Row and column pins on atmega32u4. Also unused pins*/
#define MATRIX_ROW_PINS { D3, D2, D4, D5, D6 }
#define MATRIX_COL_PINS { B4, B5, B6, B2, B3 }
#define UNUSED_PINS { E6, B1, F7, F6, F5, F4 }

/*Matrix setup*/
#define DIODE_DIRECTION COL2ROW

/*maximum powerconsumption for entire keyboard - 500mA*/
#define USB_MAX_POWER_CONSUMPTION 500

/*Enable I2C protcol for communication between master and slave*/
#define USE_I2C

/*Defines storing of master in eeprom*/
#define EE_HAND