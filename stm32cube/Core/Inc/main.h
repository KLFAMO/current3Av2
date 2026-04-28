/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
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
#include "stm32h7xx_hal.h"

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
#define SET_BUSY_Pin GPIO_PIN_4
#define SET_BUSY_GPIO_Port GPIOE
#define MOS_CS_Pin GPIO_PIN_6
#define MOS_CS_GPIO_Port GPIOF
#define MOS_CLK_Pin GPIO_PIN_7
#define MOS_CLK_GPIO_Port GPIOF
#define MOS_DATA_Pin GPIO_PIN_9
#define MOS_DATA_GPIO_Port GPIOF
#define L2_RIGHT_Pin GPIO_PIN_0
#define L2_RIGHT_GPIO_Port GPIOC
#define SET_ADC_Pin GPIO_PIN_2
#define SET_ADC_GPIO_Port GPIOC
#define LD1_Pin GPIO_PIN_0
#define LD1_GPIO_Port GPIOB
#define LEM_RDL_Pin GPIO_PIN_11
#define LEM_RDL_GPIO_Port GPIOE
#define LEM_SCK_Pin GPIO_PIN_12
#define LEM_SCK_GPIO_Port GPIOE
#define LEM_ADC_Pin GPIO_PIN_13
#define LEM_ADC_GPIO_Port GPIOE
#define SET_RDL_Pin GPIO_PIN_12
#define SET_RDL_GPIO_Port GPIOB
#define LD3_Pin GPIO_PIN_14
#define LD3_GPIO_Port GPIOB
#define STLINK_RX_Pin GPIO_PIN_8
#define STLINK_RX_GPIO_Port GPIOD
#define STLINK_TX_Pin GPIO_PIN_9
#define STLINK_TX_GPIO_Port GPIOD
#define LEM_OK_Pin GPIO_PIN_13
#define LEM_OK_GPIO_Port GPIOD
#define MOS_LDAC_Pin GPIO_PIN_2
#define MOS_LDAC_GPIO_Port GPIOG
#define SET_SCK_Pin GPIO_PIN_3
#define SET_SCK_GPIO_Port GPIOD
#define ADC_CNV_Pin GPIO_PIN_4
#define ADC_CNV_GPIO_Port GPIOD
#define L2_LEFT_Pin GPIO_PIN_6
#define L2_LEFT_GPIO_Port GPIOD
#define LEM_BUSY_Pin GPIO_PIN_7
#define LEM_BUSY_GPIO_Port GPIOD
#define LD2_Pin GPIO_PIN_1
#define LD2_GPIO_Port GPIOE
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
