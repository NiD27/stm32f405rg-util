#include "stm32f405util.h"


#define PIN_NUMBER 8
const GPIO_PORT_ENUM port = C;
const OTYPER_SETTINGS otyper = NOUPDOWN; 
const OSPEEDR_SETTINGS ospeedr = LOW; 
const PUPDR_SETTINGS pupdr = PULLDOWN;
int main(){

    pin_mode_output(port, PIN_NUMBER, otyper, ospeedr, pupdr);
    write_pin(port, PIN_NUMBER, 0xff);
    uint32_t t = 100000;
    while(t--);
    write_pin(port, PIN_NUMBER, 0x00);

    return 0;
}