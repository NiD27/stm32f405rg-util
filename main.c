#include <stdint.h>

#define AHB1_ADDRESS 0x40020000

#define RCC_ADDRESS 0x40023800
#define RCC_AHB1ENR RCC_ADDRESS+0x30

#define GPIOC_ADDRESS 0x40020800
#define MODER_OFFSET    0x00000000
#define ODR_OFFSET      0x00000014
#define BSRR_OFFSET     0x00000018

#define GPIOC_MODER GPIOC_ADDRESS+MODER_OFFSET
#define GPIOC_ODR GPIOC_ADDRESS+ODR_OFFSET
#define GPIOC_BSRR GPIOC_ADDRESS+BSRR_OFFSET

#define PIN_NUMBER 6

int main(){

    uint32_t i;
    uint32_t *rcc_ahb1enr = RCC_AHB1ENR, * gpioc_moder = GPIOC_MODER, *gpioc_bsrr = GPIOC_BSRR;

    //Enable AHB1 GPIOC Clock
    *rcc_ahb1enr = (uint32_t)(*rcc_ahb1enr|(0b1<<2))
    //Set MODER to output
    *gpioc_moder = (uint32_t)(*gpioc_moder|(0b1<<12))

    for(;;){
        *(gpioc_bsrr) = (uint32_t)(*gpioc_bsrr|(0b1<<6));
        for(i = 0; i < 100000; i++);
        *(gpioc_bsrr) = (uint32_t)(*gpioc_bsrr|(0b1<<22));
        for(i = 0; i < 100000; i++);

    }

    return 0;
}