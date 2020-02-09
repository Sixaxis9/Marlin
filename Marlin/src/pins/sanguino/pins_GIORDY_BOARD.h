/**
 * GiordyBoard board pin assignments
 */

/**
 * Rev 1.0    13 FEB 2019
 */

#if !defined(__AVR_ATmega1284P__)
  #error "Oops!  Make sure you have 'Sanguinololu' selected from the 'Tools -> Boards' menu and the Sanguinololu pinout selected."
#endif

#ifndef BOARD_NAME
  #define BOARD_NAME "Giordy_Board"
#endif

//
// Limit Switches
//
#define X_STOP_PIN        24 //-31
#define Y_STOP_PIN        25 //-30
#define Z_STOP_PIN        26 //-29

//
// Steppers
//
#define X_STEP_PIN         3//15
#define X_DIR_PIN          4//21

#define Y_STEP_PIN         1//22
#define Y_DIR_PIN          2//23

#define Z_STEP_PIN          22//3
#define Z_DIR_PIN           23//2

#define E0_STEP_PIN         20//1
#define E0_DIR_PIN          21//0

//
// Temperature Sensors
//
#define TEMP_0_PIN          3//7   // Analog Input (pin 33 extruder)
#define TEMP_BED_PIN        2//6   // Analog Input (pin 34 bed)

//
// Heaters / Fans
//
#define HEATER_0_PIN       12//13   // (extruder)
#define HEATER_BED_PIN   13//12   // (bed)

  #define X_ENABLE_PIN     0
  #define Y_ENABLE_PIN     0
  #define Z_ENABLE_PIN     15
  #define E0_ENABLE_PIN    0

  #define FAN_PIN         14//4

 //#define CONTROLLER_FAN_PIN

#if ENABLED(GIORDY_LCD)
    #define BTN_ENC             30 //sarebbe PA1 - 25
    #define BTN_EN1             10
    #define BTN_EN2             11
#endif