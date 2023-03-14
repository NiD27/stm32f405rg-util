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
    gpiox->MODER &= (GPIO_MODER_ST) (~(((uint32_t)moder)<<(pin_number*2)));
    gpiox->MODER |= (GPIO_MODER_ST) (((uint32_t)moder)<<(pin_number*2));

    gpiox->OTYPER &= (GPIO_OTYPER_ST) (~(((uint32_t)otyper)<<(pin_number*2)));
    gpiox->OTYPER |= (GPIO_OTYPER_ST) (((uint32_t)otyper)<<(pin_number*2));

    gpiox->OSPEEDR &= (GPIO_OSPEEDR_ST) (~(((uint32_t)ospeedr)<<(pin_number*2)));
    gpiox->OSPEEDR |= (GPIO_OSPEEDR_ST) (((uint32_t)ospeedr)<<(pin_number*2));

    gpiox->PUPDR &= (GPIO_PUPDR_ST) (~(((uint32_t)pupdr)<<(pin_number*2)));
    gpiox->PUPDR |= (GPIO_PUPDR_ST) (((uint32_t)pupdr)<<(pin_number*2));

    gpiox->BSRR |= (GPIO_BSRR_ST) (~((uint32_t)odr)<<(pin_number*(2*(1-odr))));
}

void gpio_write_pin(GPIO_REGISTERS_ST gpiox, uint8_t pin_number, LOGIC_STATE state){
    gpiox->BSRR |= (GPIO_BSRR_ST) (~((uint32_t)odr)<<(pin_number*(2*(1-odr))));
}

uint32_t gpio_read_pin(GPIO_REGISTERS_ST gpiox, uint8_t pin_number){
    return (gpiox->IDR & (~(1<<pin_number)));
}