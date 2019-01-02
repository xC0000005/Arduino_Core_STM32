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

#include "variant.h"

#define __fatal_error(X)

#ifdef __cplusplus
extern "C" {
#endif

// Pin number
const PinName digitalPin[] = {
//P1 connector Right side
  PC_0,  //D0
  PC_2,  //D1
  PA_0,  //D2
  PA_2,  //D3
  PA_4,  //D4
  PA_6,  //D5
  PC_4,  //D6
  PB_0,  //D7
  PB_2,  //D8
  PE_8,  //D9
  PE_10, //D10
  PE_12, //D11
  PE_14, //D12
  PB_10, //D13
  PB_12, //D14
  PB_14, //D15
  PD_8,  //D16
  PD_10, //D17
  PD_12, //D18
  PD_14, //D19
//P2 connector Left side
  PH_0,  //D20
  PC_14, //D21
  PE_6,  //D22
  PE_4,  //D23
  PE_2,  //D24
  PE_0,  //D25
  PB_8,  //D26
  PB_6,  //D27
  PB_4,  //D28
  PD_7,  //D29
  PD_5,  //D30
  PD_3,  //D31
  PD_1,  //D32
  PC_12, //D33
  PC_10, //D34
  PA_10, //D35
  PA_8,  //D36
  PC_8,  //D37
  PC_6,  //D38
//P1 Connector Left Side
  PC_1,  //D39
  PC_3,  //D40
  PA_1,  //D41
  PA_3,  //D42
  PA_5,  //D43
  PA_7,  //D44
  PC_5,  //D45
  PB_1,  //D46
  PE_7,  //D47
  PE_9,  //D48
  PE_11, //D49
  PE_13, //D50
  PE_15, //D51
  PB_11, //D52
  PB_13, //D53
  PB_15, //D54
  PD_9,  //D55
  PD_11, //D56
  PD_13, //D57
  PD_15, //D58
//P2 connector Right side
  PH_1,  //D59
  PC_15, //D60
  PC_13, //D61
  PE_5,  //D62
  PE_3,  //D63
  PE_1,  //D64
  PB_9,  //D65
  PB_7,  //D66
  PB_5,  //D67
  PB_3,  //D68
  PD_6,  //D69
  PD_4,  //D70
  PD_2,  //D71
  PD_0,  //D72
  PC_11, //D73
  PA_15, //D74
  PA_13, //D75
  PA_9,  //D76
  PC_9,  //D77
  PC_7,  //D78
//Duplicated to have A0-A5 as F407 do not have Uno like connector
// and to be aligned with PinMap_ADC
  PC_2,  //D79/A0 = D1
  PC_4,  //D80/A1 = D6
  PB_0,  //D81/A2 = D7
  PC_1,  //D82/A3 = D39
  PC_3,  //D83/A4 = D40
  PA_1,  //D84/A5 = D41
  PC_5,  //D85/A6 = D45
  PB_1   //D86/A7 = D46
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
  *
  *         The system Clock is configured for F4/F7 as follows:
  *            System Clock source            = PLL (HSE)
  *            SYSCLK(Hz)                     = 168000000
  *            HCLK(Hz)                       = 168000000
  *            AHB Prescaler                  = 1
  *            APB1 Prescaler                 = 4
  *            APB2 Prescaler                 = 2
  *            HSE Frequency(Hz)              = HSE_VALUE
  *            PLL_M                          = HSE_VALUE/1000000
  *            PLL_N                          = 336
  *            PLL_P                          = 2
  *            PLL_Q                          = 7
  *            VDD(V)                         = 3.3
  *            Main regulator output voltage  = Scale1 mode
  *            Flash Latency(WS)              = 5
  *
  *         The system Clock is configured for L4 as follows:
  *            System Clock source            = PLL (MSI)
  *            SYSCLK(Hz)                     = 80000000
  *            HCLK(Hz)                       = 80000000
  *            AHB Prescaler                  = 1
  *            APB1 Prescaler                 = 1
  *            APB2 Prescaler                 = 1
  *            MSI Frequency(Hz)              = MSI_VALUE (4000000)
  *            LSE Frequency(Hz)              = 32768
  *            PLL_M                          = 1
  *            PLL_N                          = 40
  *            PLL_P                          = 7
  *            PLL_Q                          = 2
  *            PLL_R                          = 2 <= This is the source for SysClk, not as on F4/7 PLL_P
  *            Flash Latency(WS)              = 4
  * @param  None
  * @retval None
  *
  * PLL is configured as follows:
  *
  *     VCO_IN
  *         F4/F7 = HSE / M
  *         L4    = MSI / M
  *     VCO_OUT
  *         F4/F7 = HSE / M * N
  *         L4    = MSI / M * N
  *     PLLCLK
  *         F4/F7 = HSE / M * N / P
  *         L4    = MSI / M * N / R
  *     PLL48CK
  *         F4/F7 = HSE / M * N / Q
  *         L4    = MSI / M * N / Q  USB Clock is obtained over PLLSAI1
  *
  *     SYSCLK = PLLCLK
  *     HCLK   = SYSCLK / AHB_PRESC
  *     PCLKx  = HCLK / APBx_PRESC
  *
  * Constraints on parameters:
  *
  *     VCO_IN between 1MHz and 2MHz (2MHz recommended)
  *     VCO_OUT between 192MHz and 432MHz
  *     HSE = 8MHz
  *     M = 2 .. 63 (inclusive)
  *     N = 192 ... 432 (inclusive)
  *     P = 2, 4, 6, 8
  *     Q = 2 .. 15 (inclusive)
  *
  *     AHB_PRESC=1,2,4,8,16,64,128,256,512
  *     APBx_PRESC=1,2,4,8,16
  *
  * Output clocks:
  *
  * CPU             SYSCLK      max 168MHz
  * USB,RNG,SDIO    PLL48CK     must be 48MHz for USB
  * AHB             HCLK        max 168MHz
  * APB1            PCLK1       max 42MHz
  * APB2            PCLK2       max 84MHz
  *
  * Timers run from APBx if APBx_PRESC=1, else 2x APBx
  */
void SystemClock_Config(void)
{
    RCC_ClkInitTypeDef RCC_ClkInitStruct;
    RCC_OscInitTypeDef RCC_OscInitStruct;

    __PWR_CLK_ENABLE();

    /* The voltage scaling allows optimizing the power consumption when the device is
       clocked below the maximum system frequency, to update the voltage scaling value
       regarding system frequency refer to product datasheet.  */
    __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);

    /* Enable HSE Oscillator and activate PLL with HSE as source */
    RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
    RCC_OscInitStruct.HSEState = RCC_HSE_ON;
    RCC_OscInitStruct.HSIState = RCC_HSI_OFF;
    RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
    /* Select PLL as system clock source and configure the HCLK, PCLK1 and PCLK2
     clocks dividers */
    RCC_ClkInitStruct.ClockType = (RCC_CLOCKTYPE_SYSCLK | RCC_CLOCKTYPE_HCLK | RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2);
    RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;

    RCC_OscInitStruct.PLL.PLLM = 25;
    RCC_OscInitStruct.PLL.PLLN = 336;
    RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
    RCC_OscInitStruct.PLL.PLLQ = 7;

    RCC_ClkInitStruct.AHBCLKDivider  = RCC_SYSCLK_DIV1;
    RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;
    RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;

    if(HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK) {
      __fatal_error("HAL_RCC_OscConfig");
    }

    if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_5) != HAL_OK)
    {
      __fatal_error("HAL_RCC_ClockConfig");
    }

    /**Configure the Systick interrupt time */
    HAL_SYSTICK_Config(HAL_RCC_GetHCLKFreq() / 1000);

    /**Configure the Systick */
    HAL_SYSTICK_CLKSourceConfig(SYSTICK_CLKSOURCE_HCLK);

    /* SysTick_IRQn interrupt configuration */
    HAL_NVIC_SetPriority(SysTick_IRQn, 0, 0);
}

#ifdef __cplusplus
}
#endif
