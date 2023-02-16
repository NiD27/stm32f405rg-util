#ifndef _NID_40xxx_buss_
#define _NID_40xxx_buss_

#include "customint.h"

typedef enum {
    GPIOAEN = 0, GPIOBEN = 1, GPIOCEN = 2, GPIODEN = 3, GPIOEEN = 4, GPIOFEN = 5, GPIOGEN = 6,\
    GPIOHEN = 7, GPIOIEN = 8, GPIOJEN = 9, GPIOKEN = 10, CRCEN = 12, BKPSRAMEN = 18, CCMDATARAMEN = 20,\
    DMA1EN = 21, DMA2EN = 22, DMA2DEN = 23, ETHMACEN = 25, ETHMACTXEN = 26, ETMMACRXEN = 27,\
    ETHMACPTPEN = 28, OTGHSEN = 29, OTGHSULPIEN = 30

}AHB1_PERIPHERALS_T;

typedef enum{
    TIM1EN = 0, TIM2EN = 1, USART1EN = 4, USART6EN = 5, ADC1EN = 8, ADC2EN = 9, ADC3EN = 10,\
    SPIOEN = 11, SPI1EN = 12, SPI4EN = 13, SYSCFGEN = 14, TIM9EN = 16, TIM10EN = 17, TIM11EN = 18,\
    SPI5EN = 20, SPI6EN = 21, SAI1EN = 22, LTDCEN = 26
}APB2_PERIPHERALS_T;

void buss_ahb1_enable_peripheral(AHB1_PERIPHERALS_T ahb1_peripheral);
void buss_ahb1_disable_peripheral(AHB1_PERIPHERALS_T ahb1_peripheral);

void buss_apb2_enable_peripheral(APB2_PERIPHERALS_T apb2_peripheral);
void buss_apb2_disable_peripheral(APB2_PERIPHERALS_T apb2_peripheral);

#endif
