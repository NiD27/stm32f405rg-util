#include "40xxx_buss.h"

#include "bitwise.h"

#include "40xxx_memorymap.h"

void buss_ahb1_enable_peripheral(AHB1_PERIPHERALS_T ahb1_peripheral){
    uint32_t *const rcc_ahb1enr = (uint32_t *const)RCC_AHB1ENR;
    *rcc_ahb1enr = (uint32_t)SET_W(*rcc_ahb1enr, ahb1_peripheral);
}

void buss_ahb1_disable_peripheral(AHB1_PERIPHERALS_T ahb1_peripheral){
    uint32_t *const rcc_ahb1enr = (uint32_t *const)RCC_AHB1ENR;
    *rcc_ahb1enr = (uint32_t)RESET_W(*rcc_ahb1enr, ahb1_peripheral);
}
