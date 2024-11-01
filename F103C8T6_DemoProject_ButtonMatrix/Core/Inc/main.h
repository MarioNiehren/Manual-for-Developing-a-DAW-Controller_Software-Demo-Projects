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
#include "buttonMatrix.h"
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
#define USER_LED_Pin GPIO_PIN_13
#define USER_LED_GPIO_Port GPIOC
#define DRIVE_PIN_0_Pin GPIO_PIN_0
#define DRIVE_PIN_0_GPIO_Port GPIOA
#define DRIVE_PIN_1_Pin GPIO_PIN_1
#define DRIVE_PIN_1_GPIO_Port GPIOA
#define DRIVE_PIN_2_Pin GPIO_PIN_2
#define DRIVE_PIN_2_GPIO_Port GPIOA
#define DRIVE_PIN_3_Pin GPIO_PIN_3
#define DRIVE_PIN_3_GPIO_Port GPIOA
#define DRIVE_PIN_4_Pin GPIO_PIN_4
#define DRIVE_PIN_4_GPIO_Port GPIOA
#define DRIVE_PIN_5_Pin GPIO_PIN_5
#define DRIVE_PIN_5_GPIO_Port GPIOA
#define DRIVE_PIN_6_Pin GPIO_PIN_6
#define DRIVE_PIN_6_GPIO_Port GPIOA
#define DRIVE_PIN_7_Pin GPIO_PIN_7
#define DRIVE_PIN_7_GPIO_Port GPIOA
#define INT_PIN_0_Pin GPIO_PIN_13
#define INT_PIN_0_GPIO_Port GPIOB
#define INT_PIN_0_EXTI_IRQn EXTI15_10_IRQn
#define INT_PIN_1_Pin GPIO_PIN_14
#define INT_PIN_1_GPIO_Port GPIOB
#define INT_PIN_1_EXTI_IRQn EXTI15_10_IRQn
#define INT_PIN_2_Pin GPIO_PIN_15
#define INT_PIN_2_GPIO_Port GPIOB
#define INT_PIN_2_EXTI_IRQn EXTI15_10_IRQn
#define INT_PIN_3_Pin GPIO_PIN_8
#define INT_PIN_3_GPIO_Port GPIOA
#define INT_PIN_3_EXTI_IRQn EXTI9_5_IRQn
#define INT_PIN_4_Pin GPIO_PIN_9
#define INT_PIN_4_GPIO_Port GPIOA
#define INT_PIN_4_EXTI_IRQn EXTI9_5_IRQn

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
