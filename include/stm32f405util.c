#include "stm32f405util.h"
#include "bitwise.h"
/*

*/
uint8_t is_port_pin_valid(GPIO_PORT_ENUM port, uint8_t pin_number){
    if(port > 8 || pin_number > 31){
        return 0;
    }else{/*DO NOTHING*/}
    return 1;
}

uint32_t* const pin_mode_input(GPIO_PORT_ENUM port, uint8_t pin_number, PUPDR_SETTINGS pupdr){
    
    if(!is_port_pin_valid(port, pin_mode_input)){
        /*CRASH AND BURN*/
        return 0;
    }else{/*DO NOTHING*/}

    /*
    The readability just keeps on getting better
    This basically means the address the pointer is holding is const but the value at the address is not
    */
    uint32_t* const port_moder = GPIOx_MODER_ADDRESS(port), * const port_pupdr = GPIOx_PUPDR_ADDRESS(port),\
            * const port_idr = GPIOx_IDR_ADDRESS(port);

    /*Setting MODER to input mode*/
    *port_moder = RESET_W(*port_moder, pin_number*2);
    *port_moder = RESET_W(*port_moder, (pin_number*2)+1);

    /*Setting PUPDR*/
    if(ospeedr == NOUPDOWN){
        *port_pupdr = RESET_H(*port_pupdr, pin_number*2);
        *port_pupdr = RESET_H(*port_pupdr, (pin_number*2)+1);
    }else{
        if(ospeedr == PULLUP){
            *port_pupdr = SET_H(*port_pupdr, pin_number*2);
            *port_pupdr = RESET_H(*port_pupdr, (pin_number*2)+1);
        }else{
            if(ospeedr == PULLDOWN){
                *port_pupdr = RESET_H(*port_pupdr, (pin_number*2)+1);
                *port_pupdr = SET_H(*port_pupdr, pin_number*2);
            }else{
                *port_pupdr = SET_H(*port_pupdr, pin_number*2);
                *port_pupdr = SET_H(*port_pupdr, (pin_number*2)+1);
            }
        }
    }

    return port_idr;
}

uint32_t* const pin_mode_output(GPIO_PORT_ENUM port, uint8_t pin_number, OTYPER_SETTINGS otyper, OSPEEDR_SETTINGS ospeedr, PUPDR_SETTINGS pupdr){
    if(!is_port_pin_valid(port, pin_mode_input)){
        /*CRASH AND BURN*/
        return 0;
    }else{/*DO NOTHING*/}

    /*
    The readability just keeps on getting better
    This basically means the address the pointer is holding is const but the value at the address is not
    */
    uint32_t* const port_moder = GPIOx_MODER_ADDRESS(port), * const port_pupdr = GPIOx_PUPDR_ADDRESS(port),\
            * const port_otyper = GPIOx_OTYPER_ADDRESS(port), * const port_ospeedr = GPIOx_OSPEEDR_ADDRESS(port),\
            * const port_odr = GPIOx_ODR_ADDRESS(port);

    /*
        NEED TO FIGURE OUT A BETTER WAY FIX THE DEBACLE BELOW
    */

    /*Setting MODER to output mode*/
    *port_moder = SET_W(*port_moder, pin_number*2);
    *port_moder = RESET_W(*port_moder, (pin_number*2)+1);

    /*Setting OTYPER*/
    if(otyper == PUSHPULL){
        *port_otyper = SET_H(*port_otyper, pin_number);
    }else{
        *port_otyper = RESET_H(*port_otyper, pin_number);
    }

    /*Setting OSPEEDR*/
    if(ospeedr == LOW){
        *port_ospeedr = RESET_H(*port_ospeedr, pin_number*2);
        *port_ospeedr = RESET_H(*port_ospeedr, (pin_number*2)+1);
    }else{
        if(ospeedr == MEDIUM){
            *port_ospeedr = SET_H(*port_ospeedr, pin_number*2);
            *port_ospeedr = RESET_H(*port_ospeedr, (pin_number*2)+1);
        }else{
            if(ospeedr == HIGH){
                *port_ospeedr = RESET_H(*port_ospeedr, (pin_number*2)+1);
                *port_ospeedr = SET_H(*port_ospeedr, pin_number*2);
            }else{
                *port_ospeedr = SET_H(*port_ospeedr, pin_number*2);
                *port_ospeedr = SET_H(*port_ospeedr, (pin_number*2)+1);
            }
        }
    }

    /*Setting PUPDR*/
    if(ospeedr == NOUPDOWN){
        *port_pupdr = RESET_H(*port_pupdr, pin_number*2);
        *port_pupdr = RESET_H(*port_pupdr, (pin_number*2)+1);
    }else{
        if(ospeedr == PULLUP){
            *port_pupdr = SET_H(*port_pupdr, pin_number*2);
            *port_pupdr = RESET_H(*port_pupdr, (pin_number*2)+1);
        }else{
            if(ospeedr == PULLDOWN){
                *port_pupdr = RESET_H(*port_pupdr, (pin_number*2)+1);
                *port_pupdr = SET_H(*port_pupdr, pin_number*2);
            }else{
                *port_pupdr = SET_H(*port_pupdr, pin_number*2);
                *port_pupdr = SET_H(*port_pupdr, (pin_number*2)+1);
            }
        }
    }

    return port_odr;
}

uint8_t read_pin(GPIO_PORT_ENUM port, uint8_t pin_number){
    uint32_t * const port_idr = GPIOx_IDR_ADDRESS(port);
    return (uint8_t) GET_BIT_VALUE_HW(*port_idr, pin_number);
}

uint8_t write_pin(GPIO_PORT_ENUM port, uint8_t pin_number, uint8_t value){
    uint32_t * const port_odr = GPIOx_ODR_ADDRESS(port);
    *port_odr =  SET_H(*port_odr, pin_number);
    return 1;
}