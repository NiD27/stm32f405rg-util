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



/*RCC*/
#define RCC_SIZE    0x3FF
#define RCC_ADDRESS 0x40023800

#define RCC_CR          RCC_ADDRESS
#define RCC_PLL         (RCC_ADDRESS+0x04)
#define RCC_AHB1RSTR    (RCC_ADDRESS+0x10)

#define RCC_AHB1ENR     (RCC_ADDRESS+0x30)
#define RCC_APB1ENR     (RCC_ADDRESS+0x40)
#define RCC_APB2ENR     (RCC_ADRESS+0x44)

#define RCC_AHB1ENR_RESET 0x00100000
#define RCC_APB1ENR_RESET 0x00000000
#define RCC_APB2ENR_RESET 0x00000000

#define RCC_CR_RESET_VALUE  0x00000083 /*0x0000 XX83*/
/*END OF RCC*/
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

/*END OF AHB1 MAP*/
/*APB1 MAP*/

typedef struct{
    uint32_t TIM0EN :1;
    uint32_t TIM1EN :1;
    uint32_t TIM2EN :1;
    uint32_t TIM3EN :1;
    uint32_t TIM4EN :1;
    uint32_t TIM5EN :1;
    uint32_t TIM6EN :1;
    uint32_t TIM7EN :1;
    uint32_t TIM8EN :1;
    uint32_t RESERVED_1 :2;
    uint32_t WWDGEN : 1;
    uint32_t RESERVED_2 :2;
    uint32_t SPI2EN :1;
    uint32_t SPI3EN :1;
    uint32_t RESERVED_3 :1;
    uint32_t USART2EN :1;
    uint32_t USART3EN :1;
    uint32_t USART4EN :1;
    uint32_t USART5EN :1;
    uint32_t I2C1EN :1;
    uint32_t I2C2EN :1;
    uint32_t I2C3EN :1;
    uint32_t RESERVED_4 :1;
    uint32_t CAN1EN :1;
    uint32_t CAN2EN :1;
    uint32_t RESERVED_5 :1;
    uint32_t PWREN :1;
    uint32_t DACEN :1;
    uint32_t RESERVED_6 :2;
}APB1ENR_ST;

/*END OF APB1 MAP*/

/*APB2 MAP*/

#define TIM1_ADDRESS 0x40010000
#define TIM2_ADDRESS 0x40010400

typedef struct{
    uint32_t TIM1EN :1;
    uint32_t TIM8EN :1;
    uint32_t RESERVED_1 :2;
    uint32_t USART1EN :1;
    uint32_t USART6EN :1;
    uint32_t RESERVED_2 :2;
    uint32_t ADC1EN :1;
    uint32_t ADC2EN :1;
    uint32_t ADC3EN :1;
    uint32_t SDIOEN :1;
    uint32_t SPI1EN :1;
    uint32_t SPI4EN :1;
    uint32_t SYSCFGEN :1;
    uint32_t RESERVED_3 :1;
    uint32_t TIM9EN :1;
    uint32_t TIM10EN :1;
    uint32_t TIM11EN :1;
    uint32_t RESERVED_4 :1;
    uint32_t SPI5EN :1;
    uint32_t SPI6EN :1;
    uint32_t SAI1EN :1;
    uint32_t RESERVED_5 :3;
    uint32_t LTDCEN :1;
    uint32_t RESERVED_6 :5;
}RCC_APB2ENR_ST;

/*END OF APB2 MAP*/
#endif