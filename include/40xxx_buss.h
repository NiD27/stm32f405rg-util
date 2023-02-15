#ifndef _NID_40xxx_buss_
#define _NID_40xxx_buss_

#include "customint.h"

typedef enum {
    GPIOAEN = 0, GPIOBEN = 1, GPIOCEN = 2, GPIODEN = 3, GPIOEEN = 4, GPIOFEN = 5, GPIOGEN = 6,\
    GPIOHEN = 7, GPIOIEN = 8, GPIOJEN = 9, GPIOKEN = 10, CRCEN = 12, BKPSRAMEN = 18, CCMDATARAMEN = 20,\
    DMA1EN = 21, DMA2EN = 22, DMA2DEN = 23, ETHMACEN = 25, ETHMACTXEN = 26, ETMMACRXEN = 27,\
    ETHMACPTPEN = 28, OTGHSEN = 29, OTGHSULPIEN = 30

}ahb1_peripheral_t;

void buss_ahb1_enable_peripheral(ahb1_peripheral_t ahb1_peripheral);
void buss_ahb1_disable_peripheral(ahb1_peripheral_t ahb1_peripheral);


#endif