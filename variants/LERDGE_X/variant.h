/*
  Copyright (c) 2011 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef _VARIANT_ARDUINO_STM32_
#define _VARIANT_ARDUINO_STM32_

/*----------------------------------------------------------------------------
 *        Headers
 *----------------------------------------------------------------------------*/
#include "PeripheralPins.h"

#ifdef __cplusplus
extern "C"{
#endif // __cplusplus

/*----------------------------------------------------------------------------
 *        Pins
 *----------------------------------------------------------------------------*/
extern const PinName digitalPin[];
/*
#define PE2   0 //	LCD Con - Encoder button
#define PE3	  1 // LCD Con - Encoder A
#define PE4	  2 // LCD Con - Encoder B
#define PE5	  3 // EXP Con
#define PE6	  4 // EXP Con
#define PC13  5 //	EXP Con
#define PC14  6 //	Auto Power Signal
#define PC15  7 //	Hotend Fan Enable
#define PH0	  8 //
#define PH1	  9 //
#define PE0  10 // LCD Con - touch something - int?
#define PE1  11 // Material Sensor
#define PC2  12 //	EXP Con
#define PC3  13 //	EXP Con
#define PA0  14 //	Cooling Fan Enable
#define PA1  15 //	Hotend Heater Enable
#define PA2  16 //	Hotbed Extend - SQ Pin
#define PA3  17 //	E Step
#define PA4  18 //	E Dir
#define PA5  19 //	E Enable
#define PA6  20 //	Z Dir
#define PA7  21 //	Z Step
#define PC4  22 //	Z Enable
#define PC5  23 //	Y Dir
#define PB0  24 //	Y Step
#define PB1  25 //	Y Enable
#define PB2  26 //	X Dir
#define PE7  27 //	LCD Con
#define PE8  28 //	LCD Con
#define PE9  29 //	LCD Con
#define PE10 30 //	LCD Con
#define PE11 31 //	LCD Con
#define PE12 32 //	LCD Con
#define PE13 33 //	LCD Con
#define PE14 34 //	LCD Con
#define PE15 35 //	LCD Con
#define PB10 36 //	X Step
#define PB11 37 //	X Enable
#define PB12 38 //	X Endstop In
#define PB13 39 // Y Endstop In
#define PB14 40 // Z Endstop In
#define PB15 41 // Probe In
#define PD8  42 // LCD Con
#define PD9  43 // LCD Con
#define PD10 44 // LCD Con
#define PD11 45 // LCD Con
#define PD12 46 // LCD Con - Buzzer Enable
#define PD13 47 // Servo signal
#define PD14 48 // LCD Con
#define PD15 49 // LCD Con
#define PC6  50 // LED Light Enable
#define PC7	 51 // Status LED Enable
#define PC8	 52 // SD Card
#define PC9  53 // SD Card
#define PA8  54 // SD Card
#define PA9  55 // JTAG Header
#define PA10 56 // JTAG Header
#define PA11 57 // USB
#define PA12 58 // USB
#define PA13 59 // SWDIO
#define PA14 60 // SWCLK
#define PA15 61 // EXP Con
#define PC10 62 // SD Card
#define PC11 63 // SD Card
#define PC12 64 // SD Card
#define PD0  65 // LCD Con
#define PD1  66 // LCD Con
#define PD2  67 // SD Card
#define PD3  68 // LCD Con - backlight maybe
#define PD4  69 // LCD Con
#define PD5  70 // LCD Con
#define PD6  71 // LCD Con - LCD something
#define PD7  72 // LCD Con
#define PB3  73 // SPI1-SCK W25Q128JV/Touch
#define PB4  74 // SPI1-MISO W25Q128JV/Touch
#define PB5  75 // SPI1-MOSI W25Q128JV/Touch
#define PB6  76 // LCD Con - Touch EN?
#define PB7  77 // CS W25Q128JV
#define PB8  78 // I2C-SCL - FM24CL64B F-RAM
#define PB9  79 // I2C-SDA - FM24CL64B F-RAM
#define PC0  80 //	Hotend Sensor
#define PC1  81 //	Hotbed Extend - Sensor (last pin)

// This must be a literal
#define NUM_DIGITAL_PINS        79

// This must be a literal with a value less than or equal to to MAX_ANALOG_INPUTS
#define NUM_ANALOG_INPUTS       2
#define NUM_ANALOG_FIRST        80
*/

//P1 connector Right side
#define NPC0  0
#define PC2  1  // A0
#define PA0  2
#define PA2  3
#define PA4  4
#define PA6  5
#define PC4  6  // A1
#define PB0  7  // A2
#define PB2  8
#define PE8  9
#define PE10 10
#define PE12 11
#define PE14 12
#define PB10 13
#define PB12 14
#define PB14 15
#define PD8  16
#define PD10 17
#define PD12 18
#define PD14 19
//P2 connector Left side
#define PH0  20
#define PC14 21
#define PE6  22
#define PE4  23
#define PE2  24
#define PE0  25
#define PB8  26
#define PB6  27
#define PB4  28
#define PD7  29
#define PD5  30
#define PD3  31
#define PD1  32
#define PC12 33
#define PC10 34
#define PA10 35
#define PA8  36
#define PC8  37
#define PC6  38
//P1 Connector Left Side
#define NPC1  39 // A3
#define PC3  40 // A4
#define PA1  41 // A5
#define PA3  42
#define PA5  43
#define PA7  44
#define PC5  45 // A6
#define PB1  46 // A7
#define PE7  47
#define PE9  48
#define PE11 49
#define PE13 50
#define PE15 51
#define PB11 52
#define PB13 53
#define PB15 54
#define PD9  55
#define PD11 56
#define PD13 57
#define PD15 58
//P2 connector Right side
#define PH1  59
#define PC15 60
#define PC13 61
#define PE5  62
#define PE3  63
#define PE1  64
#define PB9  65
#define PB7  66
#define PB5  67
#define PB3  68
#define PD6  69
#define PD4  70
#define PD2  71
#define PD0  72
#define PC11 73
#define PA15 74
#define PA13 75
#define PA9  76
#define PC9  77
#define PC7  78
#define PC0  79
#define PC1  80

// This must be a literal
#define NUM_DIGITAL_PINS        81

// This must be a literal with a value less than or equal to to MAX_ANALOG_INPUTS
#define NUM_ANALOG_INPUTS       2
#define NUM_ANALOG_FIRST        79

// On-board LED pin number
#define LED_BUILTIN             PD12
#define LED_GREEN               LED_BUILTIN
#define LED_BLUE                PD15
#define LED_RED                 PD14
#define LED_ORANGE              PD13

// On-board user button
#define USER_BTN                2

// SPI Definitions
#define PIN_SPI_SS2             14
#define PIN_SPI_MOSI            PA7
#define PIN_SPI_MISO            5
#define PIN_SPI_SCK             PA5

// I2C Definitions
#define PIN_WIRE_SDA            PB7
#define PIN_WIRE_SCL            PB8

// Timer Definitions
// Do not use timer used by PWM pin. See PinMap_PWM.
#define TIMER_TONE              TIM6
#define TIMER_SERVO             TIM7

// UART Definitions
#define SERIAL_UART_INSTANCE    1 //ex: 2 for Serial2 (USART2)
// DEBUG_UART could be redefined to print on another instance than 'Serial'
//#define DEBUG_UART              ((USART_TypeDef *) U(S)ARTX) // ex: USART3
// DEBUG_UART baudrate, default: 9600 if not defined
//#define DEBUG_UART_BAUDRATE     x
// DEBUG_UART Tx pin name, default: the first one found in PinMap_UART_TX for DEBUG_UART
//#define DEBUG_PINNAME_TX        PX_n // PinName used for TX

// Default pin used for 'Serial' instance (ex: ST-Link)
// Mandatory for Firmata
#define PIN_SERIAL_RX           PA10
#define PIN_SERIAL_TX           PA9

#ifdef __cplusplus
} // extern "C"
#endif
/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#ifdef __cplusplus
// These serial port names are intended to allow libraries and architecture-neutral
// sketches to automatically default to the correct port name for a particular type
// of use.  For example, a GPS module would normally connect to SERIAL_PORT_HARDWARE_OPEN,
// the first hardware serial port whose RX/TX pins are not dedicated to another use.
//
// SERIAL_PORT_MONITOR        Port which normally prints to the Arduino Serial Monitor
//
// SERIAL_PORT_USBVIRTUAL     Port which is USB virtual serial
//
// SERIAL_PORT_LINUXBRIDGE    Port which connects to a Linux system via Bridge library
//
// SERIAL_PORT_HARDWARE       Hardware serial port, physical RX & TX pins.
//
// SERIAL_PORT_HARDWARE_OPEN  Hardware serial ports which are open for use.  Their RX & TX
//                            pins are NOT connected to anything by default.
#define SERIAL_PORT_MONITOR     Serial // Require connections for ST-LINK VCP on U2 pin 12 and 13.
                                   // See UM �6.1.3 ST-LINK/V2-A VCP configuration)
#define SERIAL_PORT_HARDWARE_OPEN  Serial
#endif

#endif /* _VARIANT_ARDUINO_STM32_ */
