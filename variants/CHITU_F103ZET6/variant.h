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
#define PA1 23
#define PA2 24

#define PA3 25
// NC - VSS
// NC - VDD
#define PA4 26
#define PA5 27
#define PA6 28
#define PA7 29
#define PC4 30
#define PC5 31
#define PB0 32
#define PB1 33
#define PB2 34
#define PF11 35
#define PF12 36
// NC - VSS
// NC - VDD
#define PF13 37
#define PF14 38
#define PF15 39
#define PG0 40
#define PG1 41
#define PE7 42
#define PE8 43
#define PE9 44
// NC - VSS
// NC - VDD
#define PE10 45
#define PE11 46
#define PE12 47
#define PE13 48
#define PE14 49
#define PE15 50
#define PB10 51
#define PB11 52
// NC - VSS
// NC - VDD

#define PB12 53
#define PB13 54
#define PB14 55
#define PB15 56
#define PD8 57
#define PD9 58
#define PD10 59
#define PD11 60
#define PD12 61
#define PD13 62
// NC - VSS
// NC - VDD
#define PD14 63
#define PD15 64
#define PG2 65
#define PG3 66
#define PG4 67
#define PG5 68
#define PG6 69
#define PG7 70
#define PG8 71
// NC - VSS
// NC - VDD
#define PC6 72
#define PC7 73
#define PC8 74
#define PC9 75
#define PA8 76
#define PA9 77
#define PA10 78
#define PA11 79
#define PA12 80
#define PA13 81
// NC
// NC - VSS
// NC - VDD
#define PA14 82
#define PA15 83
#define PC10 84
#define PC11 85
#define PC12 86
#define PD0 87
#define PD1 88
#define PD2 89
#define PD3 90
#define PD4 91
#define PD5 92
// NC - VSS
// NC - VDD
#define PD6 93
#define PD7 94
#define PG9 95
#define PG10 96
#define PG11 97
#define PG12 98
#define PG13 99
#define PG14 100
// NC - VSS
// NC - VDD
#define PG15 101
#define PB3 102
#define PB4 103
#define PB5 104
#define PB6 105
#define PB7 106
// NC - BOOT
#define PB8 107
#define PB9 108
#define PE0 109
#define PE1 110
// NC - VSS
// NC - VDD

// This must be a literal
#define NUM_DIGITAL_PINS        110
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
