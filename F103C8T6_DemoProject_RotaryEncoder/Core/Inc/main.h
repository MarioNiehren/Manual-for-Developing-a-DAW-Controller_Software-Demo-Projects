/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define ENC1_A_Pin GPIO_PIN_0
#define ENC1_A_GPIO_Port GPIOA
#define ENC1_A_EXTI_IRQn EXTI0_IRQn
#define ENC1_B_Pin GPIO_PIN_1
#define ENC1_B_GPIO_Port GPIOA
#define ENC1_B_EXTI_IRQn EXTI1_IRQn
#define ENC2_A_Pin GPIO_PIN_2
#define ENC2_A_GPIO_Port GPIOA
#define ENC2_A_EXTI_IRQn EXTI2_IRQn
#define ENC2_B_Pin GPIO_PIN_3
#define ENC2_B_GPIO_Port GPIOA
#define ENC2_B_EXTI_IRQn EXTI3_IRQn
#define ENC3_A_Pin GPIO_PIN_4
#define ENC3_A_GPIO_Port GPIOA
#define ENC3_A_EXTI_IRQn EXTI4_IRQn
#define ENC3_B_Pin GPIO_PIN_5
#define ENC3_B_GPIO_Port GPIOA
#define ENC3_B_EXTI_IRQn EXTI9_5_IRQn
#define ENC4_A_Pin GPIO_PIN_6
#define ENC4_A_GPIO_Port GPIOA
#define ENC4_A_EXTI_IRQn EXTI9_5_IRQn
#define ENC4_B_Pin GPIO_PIN_7
#define ENC4_B_GPIO_Port GPIOA
#define ENC4_B_EXTI_IRQn EXTI9_5_IRQn
#define ENC8_A_Pin GPIO_PIN_13
#define ENC8_A_GPIO_Port GPIOB
#define ENC8_A_EXTI_IRQn EXTI15_10_IRQn
#define ENC8_B_Pin GPIO_PIN_14
#define ENC8_B_GPIO_Port GPIOB
#define ENC8_B_EXTI_IRQn EXTI15_10_IRQn
#define ENC5_A_Pin GPIO_PIN_8
#define ENC5_A_GPIO_Port GPIOA
#define ENC5_A_EXTI_IRQn EXTI9_5_IRQn
#define ENC5_B_Pin GPIO_PIN_9
#define ENC5_B_GPIO_Port GPIOA
#define ENC5_B_EXTI_IRQn EXTI9_5_IRQn
#define ENC6_A_Pin GPIO_PIN_10
#define ENC6_A_GPIO_Port GPIOA
#define ENC6_A_EXTI_IRQn EXTI15_10_IRQn
#define ENC6_B_Pin GPIO_PIN_11
#define ENC6_B_GPIO_Port GPIOA
#define ENC6_B_EXTI_IRQn EXTI15_10_IRQn
#define ENC7_A_Pin GPIO_PIN_12
#define ENC7_A_GPIO_Port GPIOA
#define ENC7_A_EXTI_IRQn EXTI15_10_IRQn
#define ENC7_B_Pin GPIO_PIN_15
#define ENC7_B_GPIO_Port GPIOA
#define ENC7_B_EXTI_IRQn EXTI15_10_IRQn

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
