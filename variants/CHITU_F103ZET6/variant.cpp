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

#include "pins_arduino.h"

#ifdef __cplusplus
extern "C" {
#endif

const PinName digitalPin[] = {
  PE_2,
  PE_3,
  PE_4,
  PE_5,
  PE_6,
  // NC - VBAT
  PC_13,
  PC_14,
  PC_15,
  PF_0,
  PF_1,
  PF_2,
  PF_3,
  PF_4,
  PF_5,
  // NC - VSS
  // NC - VDD
  PF_6,
  PF_7,
  PF_8,
  PF_9,
  PF_10,
  // NC - OSC_IN
  // NC - OSC_OUT
  // NC - NRST
  PC_0,
  PC_1,
  PC_2,
  PC_3,
  // NC - VSSA
  // NC - VREF
  // NC - VREF
  // NC - VDAA
  PA_1,
  PA_2,
  PA_3,
  // NC - VSS
  // NC - VDD
  PA_4,
  PA_5,
  PA_6,
  PA_7,
  PC_4,
  PC_5,
  PB_0,
  PB_1,
  PB_2,
  PF_11,
  PF_12,
  // NC - VSS
  // NC - VDD
  PF_13,
  PF_14,
  PF_15,
  PG_0,
  PG_1,
  PE_7,
  PE_8,
  PE_9,
  // NC - VSS
  // NC - VDD
  PE_10,
  PE_11,
  PE_12,
  PE_13,
  PE_14,
  PE_15,
  PB_10,
  PB_11,
  // NC - VSS
  // NC - VDD

  PB_12,
  PB_13,
  PB_14,
  PB_15,
  PD_8,
  PD_9,
  PD_10,
  PD_11,
  PD_12,
  PD_13,
  // NC - VSS
  // NC - VDD
  PD_14,
  PD_15,
  PG_2,
  PG_3,
  PG_4,
  PG_5,
  PG_6,
  PG_7,
  PG_8,
  // NC - VSS
  // NC - VDD
  PC_6,
  PC_7,
  PC_8,
  PC_9,
  PA_8,
  PA_9,
  PA_10,
  PA_11,
  PA_12,
  PA_13,
  // NC
  // NC - VSS
  // NC - VDD
  PA_14,
  PA_15,
  PC_10,
  PC_11,
  PC_12,
  PD_0,
  PD_1,
  PD_2,
  PD_3,
  PD_4,
  PD_5,
  // NC - VSS
  // NC - VDD
  PD_6,
  PD_7,
  PG_9,
  PG_10,
  PG_11,
  PG_12,
  PG_13,
  PG_14,
  // NC - VSS
  // NC - VDD
  PG_15,
  PB_3,
  PB_4,
  PB_5,
  PB_6,
  PB_7,
  // NC - BOOT
  PB_8,
  PB_9,
  PE_0,
  PE_1,
};

#ifdef __cplusplus
}
#endif

// ----------------------------------------------------------------------------

#ifdef __cplusplus
extern "C" {
#endif

/**
  * @brief  System Clock Configuration
  * @param  None
  * @retval None
  */
WEAK void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {};
  RCC_PeriphCLKInitTypeDef PeriphClkInit = {};

  /* Initializes the CPU, AHB and APB busses clocks */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
  RCC_OscInitStruct.HSEState = RCC_HSE_ON;
  RCC_OscInitStruct.HSEPredivValue = RCC_HSE_PREDIV_DIV1;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
  RCC_OscInitStruct.PLL.PLLMUL = RCC_PLL_MUL9;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK) {
    Error_Handler();
  }
  /* Initializes the CPU, AHB and APB busses clocks */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK | RCC_CLOCKTYPE_SYSCLK
                                | RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV2;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_2) != HAL_OK) {
    Error_Handler();
  }
  PeriphClkInit.PeriphClockSelection = RCC_PERIPHCLK_USB;
  PeriphClkInit.UsbClockSelection = RCC_USBCLKSOURCE_PLL_DIV1_5;
  if (HAL_RCCEx_PeriphCLKConfig(&PeriphClkInit) != HAL_OK) {
    Error_Handler();
  }
}

#ifdef __cplusplus
}
#endif
