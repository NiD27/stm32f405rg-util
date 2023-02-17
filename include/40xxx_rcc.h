#ifndef _NID_40xxx_RCC_
#define _NID_40xxx_RCC_

/*RCC*/
#define RCC_SIZE    0x3FF
#define RCC_ADDRESS 0x40023800

#define RCC_CR_ADDRESS          RCC_ADDRESS

#define RCC_PLL_ADDRESS         (RCC_ADDRESS+0x04)

#define RCC_AHB1RSTR_OFFSET     0x10
#define RCC_AHB1RSTR_ADDRESS    (RCC_ADDRESS+RCC_AHB1RSTR_OFFSET)

#define RCC_CR_RESET_VALUE  0x00000083 /*0x0000 XX83*/

/*END OF RCC*/
#define RCC_CFGR_OFFSET     0x08
#define RCC_CFGR            (RCC_ADDRESS+RCC_CFGR_OFFSET)
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

/*BUSS CONFIG REGISTERS*/
#define RCC_AHB1ENR_OFFSET  0x30
#define RCC_AHB1ENR_ADDRESS (RCC_ADDRESS+RCC_AHB1ENR_OFFSET)
#define RCC_AHB1ENR_RESET   0x00100000
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
    uint32_t RESERVED_5 :1
}RCC_AHB1ENR_ST;

#define RCC_AHB2ENR_OFFSET 0x34
#define RCC_AHB2ENR_ADDRESS (RCC_ADDRESS+RCC_AHB2ENR_OFFSET)
#define RCC_AHB2ENR_RESET 0x00000000
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
#define RCC_AHB3ENR_RESET   0x00000000
typedef struct{
    uint32_t FSMCEN :1;
    uint32_t RESERVED_2 :31;
}RCC_AHB3ENR_ST;

#define RCC_APB1ENR_OFFSET      0x40
#define RCC_APB1ENR_ADDRESS     (RCC_ADDRESS+RCC_APB1ENR_OFFSET)
#define RCC_APB1ENR_RESET       0x00000000

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
#define RCC_APB2ENR_RESET   0x00000000
typedef struct{
    TIM1EN :1;
    TIM8EN :1;
    RESERVED_1 :2;
    USART1EN :1;
    USART6EN :1;
    RESERVED :2;
    ADC1EN :1;
    ADC2EN :1;
    ADC3EN :1;
    SDIOEN :1;
    SPI1EN :1;
    RESERVED_2 :1;
    SYSCFGEN :1;
    RESERVED_3 :1;
    TIM9EN :1;
    TIM10EN :1;
    TIM11EN :1;
    RESERVED_4 :13;
}RCC_APB2ENR_ST;
/*END OF BUSS CONFIG REGISTERS*/

#endif