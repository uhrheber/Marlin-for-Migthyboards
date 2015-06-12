/**
* ATMEGA1280-16 based 
*
* Applies to the following boards:
*
* Mighthyboard Rev E as used by Makerbot Replicator
* 
* Other pins_MYBOARD.h files may override these defaults
*/
#if !defined(__AVR_ATmega1280__) && !defined(__AVR_ATmega2560__)
#error Oops! Make sure you have 'Arduino Mega' selected from the 'Tools -> Boards' menu.
#endif
#define LARGE_FLASH false
#define X_STEP_PIN 96
#define X_DIR_PIN 97
#define X_ENABLE_PIN 95
#define X_MIN_PIN 35
#define X_MAX_PIN 36
#define X_POT_PIN 94       //SDA pin for the digipot that sets the current for the X-axis stepper driver 
#define Y_STEP_PIN 92
#define Y_DIR_PIN 93
#define Y_ENABLE_PIN 91
#define Y_MIN_PIN 37
#define Y_MAX_PIN 38
#define Y_POT_PIN 90      //SDA pin for the digipot that sets the current for the Y-axis stepper driver 
#define Z_STEP_PIN 88
#define Z_DIR_PIN 89
#define Z_ENABLE_PIN 87
#define Z_MIN_PIN 41
#define Z_MAX_PIN 42
#define Z_POT_PIN 86      //SDA pin for the digipot that sets the current for the Z-axis stepper driver 
#define Z_PROBE_PIN -1
#undef Y2_STEP_PIN 
#undef Y2_DIR_PIN 
#undef Y2_ENABLE_PIN 
#undef Z2_STEP_PIN
#undef Z2_DIR_PIN
#undef Z2_ENABLE_PIN
#undef Z2_STEP_PIN 
#undef Z2_DIR_PIN 
#undef Z2_ENABLE_PIN 
#define E0_STEP_PIN 75      //called A-AXIS in Migthyboard schematic
#define E0_DIR_PIN 76
#define E0_ENABLE_PIN 74
#define E0_POT_PIN 73       //SDA pin for the digipot that sets the current for the extruder 1 stepper driver 
#define E1_STEP_PIN 71      //called B-AXIS in Migthyboard schematic
#define E1_DIR_PIN 72
#define E1_ENABLE_PIN 70
#define E1_POT_PIN 69      //SDA pin for the digipot that sets the current for the extruder 2 stepper driver 
#define SDPOWER -1
#define SDSS -1
#define LED_PIN 13
//#if MB(RAMPS_13_EEB) && defined(FILAMENT_SENSOR) // FMM added for Filament Extruder
// define analog pin for the filament width sensor input
// Use the RAMPS 1.4 Analog input 5 on the AUX2 connector
//#define FILWIDTH_PIN 5
//#endif
//#ifdef Z_PROBE_ENDSTOP
// Define a pin to use as the signal pin on Arduino for the Z_PROBE endstop.
//#define Z_PROBE_PIN 32
//#endif
//#ifdef FILAMENT_RUNOUT_SENSOR
// define digital pin 4 for the filament runout sensor. Use the RAMPS 1.4 digital input 4 on the servos connector
//#define FILRUNOUT_PIN 4
//#endif
#if MB(RAMPS_13_EFB) || MB(RAMPS_13_EFF) || defined(IS_RAMPS_EFB)
#define FAN_PIN 9 // (Sprinter config)
#if MB(RAMPS_13_EFF)
#define CONTROLLERFAN_PIN -1 // Pin used for the fan to cool controller
#endif
#elif MB(RAMPS_13_EEF) || MB(RAMPS_13_SF)
#define FAN_PIN 8
#else
#define FAN_PIN 4 // IO pin. Buffer needed
#endif
#define PS_ON_PIN 12
#if defined(REPRAP_DISCOUNT_SMART_CONTROLLER) || defined(G3D_PANEL)
#define KILL_PIN 41
#else
#define KILL_PIN -1
#endif
#if MB(RAMPS_13_EFF)
#define HEATER_0_PIN 8
#else
#define HEATER_0_PIN 10 // EXTRUDER 1
#endif
#if MB(RAMPS_13_EFB) || MB(RAMPS_13_SF) || defined(IS_RAMPS_EFB)
#define HEATER_1_PIN -1
#else
#define HEATER_1_PIN 9 // EXTRUDER 2 (FAN On Sprinter)
#endif
#define HEATER_2_PIN -1
#define TEMP_0_PIN 13 // ANALOG NUMBERING
#define TEMP_1_PIN 15 // ANALOG NUMBERING
#define TEMP_2_PIN -1 // ANALOG NUMBERING
#if MB(RAMPS_13_EFF) || MB(RAMPS_13_EEF) || MB(RAMPS_13_SF)
#define HEATER_BED_PIN -1 // NO BED
#else
#define HEATER_BED_PIN 8 // BED
#endif
#define TEMP_BED_PIN 14 // ANALOG NUMBERING
#ifdef NUM_SERVOS
#define SERVO0_PIN 11
#if NUM_SERVOS > 1
#define SERVO1_PIN 6
#if NUM_SERVOS > 2
#define SERVO2_PIN 5
#if NUM_SERVOS > 3
#define SERVO3_PIN 4
#endif
#endif
#endif
#endif
#ifdef Z_PROBE_SLED
#define SLED_PIN -1
#endif
#ifdef ULTRA_LCD
#ifdef NEWPANEL
#ifdef PANEL_ONE
#define LCD_PINS_RS 40
#define LCD_PINS_ENABLE 42
#define LCD_PINS_D4 65
#define LCD_PINS_D5 66
#define LCD_PINS_D6 44
#define LCD_PINS_D7 64
#else
#define LCD_PINS_RS 16
#define LCD_PINS_ENABLE 17
#define LCD_PINS_D4 23
#define LCD_PINS_D5 25
#define LCD_PINS_D6 27
#define LCD_PINS_D7 29
#endif
#ifdef REPRAP_DISCOUNT_SMART_CONTROLLER
#define BEEPER 37
#define BTN_EN1 31
#define BTN_EN2 33
#define BTN_ENC 35
#define SDCARDDETECT 49
#elif defined(LCD_I2C_PANELOLU2)
#define BTN_EN1 47 // reverse if the encoder turns the wrong way.
#define BTN_EN2 43
#define BTN_ENC 32
#define LCD_SDSS 53
#define SDCARDDETECT -1
#define KILL_PIN 41
#elif defined(LCD_I2C_VIKI)
#define BTN_EN1 22 // reverse if the encoder turns the wrong way.
#define BTN_EN2 7
#define BTN_ENC -1
#define LCD_SDSS 53
#define SDCARDDETECT 49
#elif defined(ELB_FULL_GRAPHIC_CONTROLLER)
#define BTN_EN1 35 // reverse if the encoder turns the wrong way.
#define BTN_EN2 37
#define BTN_ENC 31
#define SDCARDDETECT 49
#define LCD_SDSS 53
#define KILL_PIN 41
#define BEEPER 23
#define DOGLCD_CS 29
#define DOGLCD_A0 27
#define LCD_PIN_BL 33
#else
// arduino pin which triggers an piezzo beeper
#define BEEPER 33 // Beeper on AUX-4
// buttons are directly attached using AUX-2
#ifdef REPRAPWORLD_KEYPAD
#define BTN_EN1 64 // encoder
#define BTN_EN2 59 // encoder
#define BTN_ENC 63 // enter button
#define SHIFT_OUT 40 // shift register
#define SHIFT_CLK 44 // shift register
#define SHIFT_LD 42 // shift register
#elif defined(PANEL_ONE)
#define BTN_EN1 59 // AUX2 PIN 3
#define BTN_EN2 63 // AUX2 PIN 4
#define BTN_ENC 49 // AUX3 PIN 7
#else
#define BTN_EN1 37
#define BTN_EN2 35
#define BTN_ENC 31 // the click
#endif
#ifdef G3D_PANEL
#define SDCARDDETECT 49
#else
#define SDCARDDETECT -1 // Ramps does not use this port
#endif
#endif
#else // Old-style panel with shift register
// Arduino pin witch triggers an piezzo beeper
#define BEEPER 33 // No Beeper added
// Buttons are attached to a shift register
// Not wired yet
// #define SHIFT_CLK 38
// #define SHIFT_LD 42
// #define SHIFT_OUT 40
// #define SHIFT_EN 17
#define LCD_PINS_RS 16
#define LCD_PINS_ENABLE 17
#define LCD_PINS_D4 23
#define LCD_PINS_D5 25
#define LCD_PINS_D6 27
#define LCD_PINS_D7 29
#endif
#endif // ULTRA_LCD
// SPI for Max6675 Thermocouple
#ifndef SDSUPPORT
#define MAX6675_SS 66 // Do not use pin 53 if there is even the remote possibility of using Display/SD card
#else
#define MAX6675_SS 66 // Do not use pin 49 as this is tied to the switch inside the SD card socket to detect if there is an SD card present
#endif
#ifndef SDSUPPORT
// these pins are defined in the SD library if building with SD support
#define SCK_PIN 20
#define MISO_PIN 22
#define MOSI_PIN 21
#endif
