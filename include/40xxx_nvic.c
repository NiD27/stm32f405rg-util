#include "40xxx_nvic.h"

static NVIC_ISER_REGISTERS_ST *const NVIC_ISER = (NVIC_ISER_REGISTERS_ST *const)NVIC_ISER_START_ADDRESS;
static NVIC_ICER_REGISTERS_ST *const NVIC_ICER = (NVIC_ICER_REGISTERS_ST *const)NVIC_ICER_START_ADDRESS;
static NVIC_ISPR_REGISTERS_ST *const NVIC_ISPR = (NVIC_ISPR_REGISTERS_ST *const)NVIC_ISPR_START_ADDRESS;
static NVIC_ICPR_REGISTERS_ST *const NVIC_ICPR = (NVIC_ICPR_REGISTERS_ST *const)NVIC_ICPR_START_ADDRESS;
static NVIC_IABR_REGISTERS_ST *const NVIC_IABR = (NVIC_IABR_REGISTERS_ST *const)NVIC_IABR_START_ADDRESS;
static NVIC_IPR_REGISTERS_ST *const NVIC_IPR = (NVIC_IPR_REGISTERS_ST *const)NVIC_IPR_START_ADDRESS;

/*Returns 0 on failure 1 on success*/
uint8_t nvic_iser_set_enable(uint8_t position){
    uint8_t index = 0, bit_position = 0;

    if(position < 0 || position > 239){
        return 0;
    }else{
        index = (uint8_t)NVIC_ISER_INDEX_CALCULATOR(position);
        bit_position = (uint8_t)NVIC_ISER_BIT_POSITION_CALCULATOR(position);
        NVIC_ISER->ISER[index].SETENA = (NVIC_ISER->ISER[index].SETENA | (0b1<<bit_position));
        return 1;
    }
}

uint8_t nvic_icer_set_enable(uint8_t position){
    uint8_t index = 0, bit_position = 0;

    if(position < 0 || position > 239){
        return 0;
    }else{
        index = (uint8_t)NVIC_ICER_INDEX_CALCULATOR(position);
        bit_position = (uint8_t)NVIC_ICER_BIT_POSITION_CALCULATOR(position);
        NVIC_ICER->ICER[index].CLRENA = (NVIC_ICER->ICER[index].CLRENA | (0b1<<bit_position));
        return 1;
    }
}

uint8_t nvic_ispr_set_enable(uint8_t position){
    uint8_t index = 0, bit_position = 0;

    if(position < 0 || position > 239){
        return 0;
    }else{
        index = (uint8_t)NVIC_ISPR_INDEX_CALCULATOR(position);
        bit_position = (uint8_t)NVIC_ISPR_BIT_POSITION_CALCULATOR(position);
        NVIC_ISPR->ISPR[index].SETPEND = (NVIC_ISPR->ISPR[index].SETPEND | (0b1<<bit_position));
        return 1;
    }
}

uint8_t nvic_icpr_set_enable(uint8_t position){
    uint8_t index = 0, bit_position = 0;

    if(position < 0 || position > 239){
        return 0;
    }else{
        index = (uint8_t)NVIC_ICPR_INDEX_CALCULATOR(position);
        bit_position = (uint8_t)NVIC_ICPR_BIT_POSITION_CALCULATOR(position);
        NVIC_ICPR->ICPR[index].CLRPEND = (NVIC_ICPR->ICPR[index].CLRPEND | (0b1<<bit_position));
        return 1;
    }
}

uint8_t nvic_iabr_set_enable(uint8_t position){
    uint8_t index = 0, bit_position = 0;

    if(position < 0 || position > 239){
        return 0;
    }else{
        index = (uint8_t)NVIC_IABR_INDEX_CALCULATOR(position);
        bit_position = (uint8_t)NVIC_IABR_BIT_POSITION_CALCULATOR(position);
        NVIC_IABR->IABR[index].ACTIVE = (NVIC_IABR->IABR[index].ACTIVE | (0b1<<bit_position));
        return 1;
    }
}

uint8_t nvic_ipr_set_priority(uint8_t position, uint8_t priority){
    uint8_t index = 0, byte_position = 0;
    if(position < 0 || position > 239){
        return 0;
    }else{
        index = (uint8_t)NVIC_IPR_INDEX_CALCULATOR(position);
        byte_position = (uint8_t)NVIC_IPR_BYTE_POSITION_CALCULATOR(position);
        NVIC_IPR->IPR[index].IP[byte_position] = priority;
        return 1;
    }
}