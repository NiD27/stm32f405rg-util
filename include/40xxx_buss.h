#ifndef _NID_40xxx_buss_
#define _NID_40xxx_buss_

#include "customint.h"

typedef enum {
    GPIOA = 0, GPIOB = 1, GPIOC = 2, GPIOD = 3, GPIOE = 4, GPIOF = 5, GPIOG = 6,\
    GPIOH = 7, GPIOI = 8, GPIOJ = 9, GPIOK = 10, CRC = 12, BKPSRAM = 18, CCMDATARAM = 20,\
    DMA1 = 21, DMA2 = 22, DMA2D = 23, ETHMAC = 25, ETHMACTX = 26, ETMMACRX = 27,\
    ETHMACPTP = 28, OTGHS = 29, OTGHSULPI = 30

}ahb1_peripheral_t;

void buss_ahb1_enable_peripheral(ahb1_peripheral_t ahb1_peripheral);
void buss_ahb1_disable_peripheral(ahb1_peripheral_t ahb1_peripheral);


#endif