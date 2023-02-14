#include <stdio.h>
#include "stm32f405util.h"
#include "customint.h"
//#include "bitwise.h"

int main(){
    GPIO_PORT_ENUM gpe;
    //int g = 0;
    // for(g = 0; g < 9; g++){
    //     //printf("%x\t%x\n", GPIOx_START_ADDRESS(g), GPIOx_END_ADDRESS(g));
    //     printf("%x\t%x\n", GPIOx_OTYPER_ADDRESS(g), GPIOx_END_ADDRESS(g));
    // }

    // int x = 20, y = 10;
    // int * const p1 = &x, * const p2 = &y;
    // printf("%x\t%d\n%x\t%d\n", p1, *p1, p2, *p2);
    // (*p1)++;
    // (*p2)++;
    // printf("%x\t%d\n%x\t%d\n", p1, *p1, p2, *p2);

    // uint32_t x = 0xffffffff;
    // for(int i = 0; i < 32; i++)
    //     printf("%u\n", TOGGLE_W(x, i));
    gpe=C;
    printf("%x\t%x\n", GPIOx_START_ADDRESS(gpe), GPIOx_END_ADDRESS(gpe));
    printf("MODER : %x\n", GPIOx_MODER_ADDRESS(gpe));
    printf("OTYPER : %x\n", GPIOx_OTYPER_ADDRESS(gpe));
    printf("OSPEEDR : %x\n", GPIOx_OSPEEDR_ADDRESS(gpe));
    printf("PUPDR : %x\n", GPIOx_PUPDR_ADDRESS(gpe));
    printf("IDR : %x\n", GPIOx_IDR_ADDRESS(gpe));
    printf("ODR : %x\n", GPIOx_ODR_ADDRESS(gpe));
    printf("BSRR : %x\n", GPIOx_BSRR_ADDRESS(gpe));
    printf("LCKR : %x\n", GPIOx_LCKR_ADDRESS(gpe));
    printf("AFRH : %x\n", GPIOx_AFRH_ADDRESS(gpe));
    printf("AFRL : %x\n", GPIOx_AFRL_ADDRESS(gpe));

    return 0;
}