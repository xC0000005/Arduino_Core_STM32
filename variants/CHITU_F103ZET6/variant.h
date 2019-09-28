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

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

/*----------------------------------------------------------------------------
 *        Pins
 *----------------------------------------------------------------------------*/

#define PE2 0
#define PE3 1
#define PE4 2
#define PE5 3
#define PE6 4
// NC - VBAT
#define PC13 5
#define PC14 6
#define PC15 7
#define PF0 8
#define PF1 9
#define PF2 10
#define PF3 11
#define PF4 12
#define PF5 13
// NC - VSS
// NC - VDD
#define PF6 14
#define PF7 15
#define PF8 16
#define PF9 17
#define PF10 18
// NC - OSC_IN
// NC - OSC_OUT
// NC - NRST
#define PC0 19
#define PC1 20
#define PC2 21
#define PC3 22
// NC - VSSA
// NC - VREF
// NC - VREF
// NC - VDAA
#define PA0 23
#define PA1 24
#define PA2 25

#define PA3 26
// NC - VSS
// NC - VDD
#define PA4 27
#define PA5 28
#define PA6 29
#define PA7 30
#define PC4 31
#define PC5 32
#define PB0 33
#define PB1 34
#define PB2 35
#define PF11 36
#define PF12 37
// NC - VSS
// NC - VDD
#define PF13 38
#define PF14 39
#define PF15 40
#define PG0 41
#define PG1 42
#define PE7 43
#define PE8 44
#define PE9 45
// NC - VSS
// NC - VDD
#define PE10 46
#define PE11 47
#define PE12 48
#define PE13 49
#define PE14 50
#define PE15 51
#define PB10 52
#define PB11 53
// NC - VSS
// NC - VDD

#define PB12 54
#define PB13 55
#define PB14 56
#define PB15 57
#define PD8 58
#define PD9 59
#define PD10 60
#define PD11 61
#define PD12 62
#define PD13 63
// NC - VSS
// NC - VDD
#define PD14 64
#define PD15 65
#define PG2 66
#define PG3 67
#define PG4 68
#define PG5 69
#define PG6 70
#define PG7 71
#define PG8 72
// NC - VSS
// NC - VDD
#define PC6 73
#define PC7 74
#define PC8 75
#define PC9 76
#define PA8 77
#define PA9 78
#define PA10 79
#define PA11 80
#define PA12 81
#define PA13 82
// NC
// NC - VSS
// NC - VDD
#define PA14 83
#define PA15 84
#define PC10 85
#define PC11 86
#define PC12 87
#define PD0 88
#define PD1 89
#define PD2 90
#define PD3 91
#define PD4 92
#define PD5 93
// NC - VSS
// NC - VDD
#define PD6 94
#define PD7 95
#define PG9 96
#define PG10 97
#define PG11 98
#define PG12 99
#define PG13 100
#define PG14 101
// NC - VSS
// NC - VDD
#define PG15 102
#define PB3 103
#define PB4 104
#define PB5 105
#define PB6 106
#define PB7 107
// NC - BOOT
#define PB8 108
#define PB9 109
#define PE0 110
#define PE1 111
// NC - VSS
// NC - VDD

// This must be a literal
#define NUM_DIGITAL_PINS        111
// This must be a literal with a value less than or equal to to MAX_ANALOG_INPUTS
#define NUM_ANALOG_INPUTS       16
#define NUM_ANALOG_FIRST        23

// On-board LED pin number
#define LED_BUILTIN             PB11
#define LED_GREEN               LED_BUILTIN

// Override default Arduino configuration
// SPI Definitions
#define PIN_SPI_SS              PA4
#define PIN_SPI_MOSI            PA7
#define PIN_SPI_MISO            PA6
#define PIN_SPI_SCK             PA5

// I2C Definitions
#define PIN_WIRE_SDA            PB7
#define PIN_WIRE_SCL            PB6

// Timer Definitions
#define TIMER_TONE              TIM3
#define TIMER_SERVO             TIM2

// UART Definitions
// Define here Serial instance number to map on Serial generic name
#define SERIAL_UART_INSTANCE    1

// Default pin used for 'Serial1' instance
#define PIN_SERIAL_RX           PA10
#define PIN_SERIAL_TX           PA9

#ifdef __cplusplus
} // extern "C"
#endif
/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

 #define HAL_SD_MODULE_ENABLED

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
#define SERIAL_PORT_MONITOR     Serial
#define SERIAL_PORT_HARDWARE    Serial1
#endif

#endif /* _VARIANT_ARDUINO_STM32_ */
