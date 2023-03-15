#include "40xxx_gpio.h"

/**
 * FIXED (possibly) - still need to add reset values to headers
 * There is a huge issue with this function
 * If you are trying to set Port A or Port B to 0 it wont work
 * FIX - Add reset values and pass them instead of null
 * 
 * More issues - Need to reset before OR else all roads lead to HIGH
*/
void gpio_pin_config(GPIO_REGISTERS_ST *const gpiox, uint8_t pin_number, MODER_SETTINGS moder, OTYPER_SETTINGS otyper,\
                    OSPEEDR_SETTINGS ospeedr, PUPDR_SETTINGS pupdr,LOGIC_STATE odr, AF_SETTINGS af)
{

    if(pin_number < 0 || pin_number > 15 || gpiox == NULL){
        return;
    }else{
        /*DO NOTHING*/
    }

    gpiox->MODER.MODER &= ~(((uint32_t)moder)<<(pin_number*2));
    gpiox->MODER.MODER |= (((uint32_t)moder)<<(pin_number*2));
    if(moder == INPUT){
        return;
    }else{/*DO NOTHING*/}
    gpiox->OTYPER.OTYPER &= (~(((uint32_t)otyper)<<(pin_number*2)));
    gpiox->OTYPER.OTYPER |= (((uint32_t)otyper)<<(pin_number*2));

    gpiox->OSPEEDR.OSPEEDR &= (~(((uint32_t)ospeedr)<<(pin_number*2)));
    gpiox->OSPEEDR.OSPEEDR |= (((uint32_t)ospeedr)<<(pin_number*2));

    gpiox->PUPDR.PUPDR &= (~(((uint32_t)pupdr)<<(pin_number*2)));
    gpiox->PUPDR.PUPDR |= (((uint32_t)pupdr)<<(pin_number*2));

    if(pin_number < 8){
        gpiox->AFRL.AFRL &= (~(((uint32_t)af)<<(pin_number*4)));
        gpiox->AFRL.AFRL |= (((uint32_t)af)<<(pin_number*4));
    }else{
        gpiox->AFRH.AFRH &= (~(((uint32_t)af)<<(pin_number*4)));
        gpiox->AFRH.AFRH |= (((uint32_t)af)<<(pin_number*4));
    }

    gpiox->BSRR.BSR |= (~((uint32_t)odr)<<(pin_number*(2*(1-odr))));
}

void gpio_pin_write(GPIO_REGISTERS_ST *const gpiox, uint8_t pin_number, LOGIC_STATE state){
    gpiox->BSRR.BSR |= (~((uint32_t)state)<<(pin_number*(2*(1-state))));
}

uint32_t gpio_pin_read(GPIO_REGISTERS_ST *const gpiox, uint8_t pin_number){
    return (uint32_t)(gpiox->IDR.IDR & (~(1<<pin_number)));
}
