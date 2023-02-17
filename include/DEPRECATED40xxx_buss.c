#include "40xxx_buss.h"

#include "bitwise.h"
#include "40xxx_rcc.h"

void buss_ahb1_enable_peripheral(AHB1_PERIPHERALS_T ahb1_peripheral){
    uint32_t *const rcc_ahb1enr = (uint32_t *const)RCC_AHB1ENR;
    *rcc_ahb1enr = (uint32_t)SET_W(*rcc_ahb1enr, ahb1_peripheral);
}

void buss_ahb1_disable_peripheral(AHB1_PERIPHERALS_T ahb1_peripheral){
    uint32_t *const rcc_ahb1enr = (uint32_t *const)RCC_AHB1ENR;
    *rcc_ahb1enr = (uint32_t)RESET_W(*rcc_ahb1enr, ahb1_peripheral);
}

void buss_apb2_enable_peripheral(APB2_PERIPHERALS_T apb2_peripheral){
    uint32_t *const rcc_apb2enr = (uint32_t *const)RCC_APB2ENR;
    *rcc_apb2enr = (uint32_t)SET_W(*rcc_apb2enr, apb2_peripheral);
}
void buss_apb2_disable_peripheral(APB2_PERIPHERALS_T apb2_peripheral){
    uint32_t *const rcc_apb2enr = (uint32_t *const)RCC_APB2ENR;
    *rcc_apb2enr = (uint32_t)RESET_W(*rcc_apb2enr, apb2_peripheral);
}
