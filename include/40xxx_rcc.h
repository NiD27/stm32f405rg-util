#ifndef _NID_40xxx_RCC_
#define _NID_40xxx_RCC_

/*RCC*/
#define RCC_SIZE    0x400
#define RCC_ADDRESS 0x40023800

#define RCC_AHB1RSTR_OFFSET     0x10
#define RCC_AHB1RSTR_ADDRESS    (RCC_ADDRESS+RCC_AHB1RSTR_OFFSET)



#define RCC_CR_OFFSET 0x00
#define RCC_CR_ADDRESS  (RCC_ADDRESS+RCC_CR_OFFSET)
#define RCC_CR_RESET_VALUE  0x00000083 /*0x0000 XX83*/
typedef struct{
    uint32_t HSION :1;
    uint32_t HSIRDY :1;
    uint32_t RESERVED_1 :1;
    uint32_t HSITRIM :5;
    uint32_t HSICAL :8;
    uint32_t HSEON :1;
    uint32_t HSERDY :1;
    uint32_t HSEBYP :1;
    uint32_t CSSON :1;
    uint32_t RESERVED_2 :4;
    uint32_t PLLON :1;
    uint32_t PLLRDY :1;
    uint32_t PLLI2SON :1;
    uint32_t PLLI2SRDY :1;
    uint32_t RESERVED_3 :4;
}RCC_CR_ST;

#define RCC_PLL_OFFSET  0x04
#define RCC_PLL_ADDRESS (RCC_ADDRESS+RCC_PLL_OFFSET)
#define RCC_PLLCFGR_RESET_VALUE 0x24003010
typedef struct{
    uint32_t PLLM0 :1;
    uint32_t PLLM1 :1;
    uint32_t PLLM2 :1;
    uint32_t PLLM3 :1;
    uint32_t PLLM4 :1;
    uint32_t PLLM5 :1;
    uint32_t PLLN :9;
    uint32_t RESERVED_1 :1;
    uint32_t PLLP0 :1;
    uint32_t PLLP1 :1;
    uint32_t RESERVED_2 :4;
    uint32_t PLLSRC :1;
    uint32_t RESERVED_3 :1;
    uint32_t PLLQ0 :1;
    uint32_t PLLQ1 :1;
    uint32_t PLLQ2 :1;
    uint32_t PLLQ3 :1;
    uint32_t RESERVED_4 :4;
}RCC_PLLCFGR;

#define RCC_CFGR_OFFSET     0x08
#define RCC_CFGR_ADDRESS    (RCC_ADDRESS+RCC_CFGR_OFFSET)
#define RCC_CFGR_RESET      0x00000000
typedef struct{
    uint32_t SW0 :1;
    uint32_t SW1 :1;
    uint32_t SWS0 :1;
    uint32_t SWS1 :1;
    uint32_t HPRE :4;
    uint32_t RESERVED_1 :2;
    uint32_t PPRE1 :3;
    uint32_t PPRE2 :3;
    uint32_t RTCPRE :5;
    uint32_t MCO1 :2;
    uint32_t I2SSCR :1;
    uint32_t MCO1PRE :3;
    uint32_t MCO2PRE :3;
    uint32_t MCO2 :2;
}RCC_CFGR_ST;

#define RCC_CIR_OFFSET 0x0c
#define RCC_CIR_ADDRESS (RCC_ADDRESS+RCC_CIR_OFFSET)
#define RCC_CIR_RESET 0x00000000
typedef struct{
    uint32_t LSIRDYF :1;
    uint32_t LSERDYF :1;
    uint32_t HSIRDYF :1;
    uint32_t HSERDYF :1;
    uint32_t PLLRDYF :1;
    uint32_t PLLI2SRDYF :1;
    uint32_t RESERVED_1 :1;
    uint32_t CSSF :1;
    uint32_t LSIRDYIE :1;
    uint32_t LSERDYIE :1;
    uint32_t HSIRDYIE :1;
    uint32_t HSERDYIE :1;
    uint32_t PLLRDYIE :1;
    uint32_t PLLI2SRDYIE :1;
    uint32_t RESERVED_2 :2;
    uint32_t LSIRDYC :1;
    uint32_t LSERDYC :1;
    uint32_t HSIRDYC :1;
    uint32_t HSERDYC :1;
    uint32_t PLLRDYC :1;
    uint32_t PLLI2SRDYC :1;
    uint32_t RESERVED_3 :1;
    uint32_t CSSC :1;
    uint32_t RESERVED_4 :8;
}RCC_CIR_ST;

/*
INCOMPLETE
AHB1RSTR - APB2RSTR BELONG HERE(5 registers)
pg 233 rm
*/

#define RCC_AHB1ENR_OFFSET  0x30
#define RCC_AHB1ENR_ADDRESS (RCC_ADDRESS+RCC_AHB1ENR_OFFSET)
#define RCC_AHB1ENR_RESET_VALUE   0x00100000
typedef struct {
    uint32_t GPIOAEN :1;
    uint32_t GPIOBEN :1;
    uint32_t GPIOCEN :1;
    uint32_t GPIODEN :1;
    uint32_t GPIOEEN :1;
    uint32_t GPIOFEN :1;
    uint32_t GPIOGEN :1;
    uint32_t GPIOHEN :1;
    uint32_t GPIOIEN :1;
    uint32_t RESERVED_1 :3;
    uint32_t CRCEN :1;
    uint32_t RESERVED_2 :5;
    uint32_t BKPSRAMEN :1;
    uint32_t RESERVED_3 :1;
    uint32_t CCMDATARAMEN :1;
    uint32_t DMA1EN :1;
    uint32_t DMA2EN :1;
    uint32_t RESERVED_4 :2;
    uint32_t ETHMACEN :1;
    uint32_t ETHMACTXEN :1;
    uint32_t ETMMACRXEN :1;
    uint32_t ETHMACPTPEN :1;
    uint32_t OTGHSEN :1;
    uint32_t OTGHSULPIEN :1;
    uint32_t RESERVED_5 :1;
}RCC_AHB1ENR_ST;

#define RCC_AHB2ENR_OFFSET 0x34
#define RCC_AHB2ENR_ADDRESS (RCC_ADDRESS+RCC_AHB2ENR_OFFSET)
#define RCC_AHB2ENR_RESET_VALUE 0x00000000
typedef struct{
    uint32_t DCMIEN :1;
    uint32_t RESERVED_1 :3;
    uint32_t CRYPEN :1;
    uint32_t HASHEN :1;
    uint32_t RNGEN :1;
    uint32_t OTGFSEN :1;
    uint32_t RESERVED_2 :24;
}RCC_AHB2ENR_ST;

#define RCC_AHB3ENR_OFFSET  0x38
#define RCC_AHB3ENR_ADDRESS (RCC_ADDRESS+RCC_AHB3ENR_OFFSET)
#define RCC_AHB3ENR_RESET_VALUE   0x00000000
typedef struct{
    uint32_t FSMCEN :1;
    uint32_t RESERVED_2 :31;
}RCC_AHB3ENR_ST;

#define RCC_APB1ENR_OFFSET      0x40
#define RCC_APB1ENR_ADDRESS     (RCC_ADDRESS+RCC_APB1ENR_OFFSET)
#define RCC_APB1ENR_RESET_VALUE       0x00000000
typedef struct {
    uint32_t TIM2EN :1;
    uint32_t TIM3EN :1;
    uint32_t TIM4EN :1;
    uint32_t TIM5EN :1;
    uint32_t TIM6EN :1;
    uint32_t TIM7EN :1;
    uint32_t TIM12EN :1;
    uint32_t TIM13EN :1;
    uint32_t TIM14EN :1;
    uint32_t RESERVED_1 :2;
    uint32_t WWDGEN :1;
    uint32_t RESERVED_2 :2;
    uint32_t SPI2EN :1;
    uint32_t SPI3EN :1;
    uint32_t RESERVED_3 :1;
    uint32_t USART2EN :1;
    uint32_t USART3EN :1;
    uint32_t UART4EN :1;
    uint32_t UART5EN :1;
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
}RCC_APB1ENR_ST;

#define RCC_APB2ENR_OFFSET 0x44
#define RCC_APB2ENR_ADDRESS     (RCC_ADDRESS+RCC_APB2ENR_OFFSET)
#define RCC_APB2ENR_RESET_VALUE   0x00000000
typedef struct{
    uint32_t TIM1EN :1;
    uint32_t TIM8EN :1;
    uint32_t RESERVED_1 :2;
    uint32_t USART1EN :1;
    uint32_t USART6EN :1;
    uint32_t RESERVED :2;
    uint32_t ADC1EN :1;
    uint32_t ADC2EN :1;
    uint32_t ADC3EN :1;
    uint32_t SDIOEN :1;
    uint32_t SPI1EN :1;
    uint32_t RESERVED_2 :1;
    uint32_t SYSCFGEN :1;
    uint32_t RESERVED_3 :1;
    uint32_t TIM9EN :1;
    uint32_t TIM10EN :1;
    uint32_t TIM11EN :1;
    uint32_t RESERVED_4 :13;
}RCC_APB2ENR_ST;

/*Around 9 register belong here from pg 250 rm*/

#endif