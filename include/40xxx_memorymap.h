#ifndef _NID_40xxx_memorymap_
#define _NID_40xxx_memorymap_

#include "customint.h"

/*BUSS ADDRESS*/
#define APB1_ADDRESS 0x40000000
#define APB2_ADDRESS 0x40010000
#define AHB1_ADDRESS 0x40020000
#define AHB2_ADDRESS 0x50000000
#define AHB3_ADDRESS 0x60000000
/*END OF BUSS ADDRESS*/

/*AHB1 MAP*/
/*
GPIO
AHB1->GPIOx
GPIO offset 3FF ie 1024 bytes
*/

#define GPIO_START_ADDRESS  0x40020000
#define GPIO_END_ADDRESS    0x400223FF
#define GPIO_ADDRESS_OFFSET 0x400

#define GPIOX_ADDRESS(gpiox) (GPIO_START_ADDRESS+(gpiox*GPIO_ADDRESS_OFFSET))

#define GPIOA_ADDRESS 0x40020000
#define GPIOB_ADDRESS 0x40020400
#define GPIOC_ADDRESS 0x40020800
#define GPIOD_ADDRESS 0x40020C00
#define GPIOE_ADDRESS 0x40021000
#define GPIOF_ADDRESS 0x40021400
#define GPIOG_ADDRESS 0x40021800
#define GPIOH_ADDRESS 0x40021C00
#define GPIOI_ADDRESS 0x40022000

#define MODER_OFFSET    0x00000000
#define OTYPER_OFFSET   0x00000004
#define OSPEEDR_OFFSET  0x00000008
#define PUPDR_OFFSET    0x0000000c
#define IDR_OFFSET      0x00000010
#define ODR_OFFSET      0x00000014
#define BSRR_OFFSET     0x00000018
#define LCKR_OFFSET     0x0000001c
#define AFRH_OFFSET     0x00000020
#define AFRL_OFFSET     0x00000024

#define GPIOx_MODER_ADDRESS(gpiox_address) (gpiox_address+MODER_OFFSET)
#define GPIOx_OTYPER_ADDRESS(gpiox_address) (gpiox_address+OTYPER_OFFSET)
#define GPIOx_OSPEEDR_ADDRESS(gpiox_address) (gpiox_address+OSPEEDR_OFFSET)
#define GPIOx_PUPDR_ADDRESS(gpiox_address) (gpiox_address+PUPDR_OFFSET)
#define GPIOx_IDR_ADDRESS(gpiox_address) (gpiox_address+IDR_OFFSET)
#define GPIOx_ODR_ADDRESS(gpiox_address) (gpiox_address+ODR_OFFSET)
#define GPIOx_BSRR_ADDRESS(gpiox_address) (gpiox_address+BSRR_OFFSET)
#define GPIOx_LCKR_ADDRESS(gpiox_address) (gpiox_address+LCKR_OFFSET)
#define GPIOx_AFRH_ADDRESS(gpiox_address) (gpiox_address+AFRH_OFFSET)
#define GPIOx_AFRL_ADDRESS(gpiox_address) (gpiox_address+AFRL_OFFSET)

/*All macros take arguments for consistency*/
#define GPIOx_MODER_RESET_VALUE(gpiox_address) gpiox_address==GPIOA_ADDRESS?0xA8000000:gpiox_address==GPIOB_ADDRESS?0x00000280:0x00000000
#define GPIOx_OTYPER_RESET_VALUE(gpiox_address) 0x00000000
#define GPIOx_OSPEEDR_RESET_VALUE(gpiox_address) gpiox_address==GPIOA_ADDRESS?0x0C000000:gpiox_address==GPIOB_ADDRESS?0x000000C0:0x00000000
#define GPIOx_PUPDR_RESET_VALUE(gpiox_address) gpiox_address==GPIOA_ADDRESS?0x64000000:gpiox_address==GPIOB_ADDRESS?0x00000100:0x00000000
#define GPIOx_IDR_RESET_VALUE(gpiox_address) 0x00000000 /*0x0000 XXXX but undefined is considered as 0*/
#define GPIOx_ODR_RESET_VALUE(gpiox_address) 0x00000000
#define GPIOx_BSRR_RESET_VALUE(gpiox_address) 0x00000000
#define GPIOx_LCKR_RESET_VALUE(gpiox_address) 0x00000000
#define GPIOx_AFRL_RESET_VALUE(gpiox_address) 0x00000000
#define GPIOx_AFRH_RESET_VALUE(gpiox_address) 0x00000000

/*END OF GPIO*/


#define TIM1_ADDRESS 0x40010000
#define TIM8_ADDRESS 0x40010400


#endif