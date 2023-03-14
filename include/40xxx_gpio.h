#ifndef _NID_40xxx_gpio_
#define _NID_40xxx_gpio_

#include "customint.h"

typedef struct{
    uint32_t MODER0 :2;
    uint32_t MODER1 :2;
    uint32_t MODER2 :2;
    uint32_t MODER3 :2;
    uint32_t MODER4 :2;
    uint32_t MODER5 :2;
    uint32_t MODER6 :2;
    uint32_t MODER7 :2;
    uint32_t MODER8 :2;
    uint32_t MODER9 :2;
    uint32_t MODER10 :2;
    uint32_t MODER11 :2;
    uint32_t MODER12 :2;
    uint32_t MODER13 :2;
    uint32_t MODER14 :2;
    uint32_t MODER15 :2;
}GPIO_MODER_ST;

typedef struct{
    uint32_t OTYPER0 :1;
    uint32_t OTYPER1 :1;
    uint32_t OTYPER2 :1;
    uint32_t OTYPER3 :1;
    uint32_t OTYPER4 :1;
    uint32_t OTYPER5 :1;
    uint32_t OTYPER6 :1;
    uint32_t OTYPER7 :1;
    uint32_t OTYPER8 :1;
    uint32_t OTYPER9 :1;
    uint32_t OTYPER10 :1;
    uint32_t OTYPER11 :1;
    uint32_t OTYPER12 :1;
    uint32_t OTYPER13 :1;
    uint32_t OTYPER14 :1;
    uint32_t OTYPER15 :1;
    uint32_t RESERVED :16;
}GPIO_OTYPER_ST;

typedef struct{
    uint32_t OSPEEDR0 :2;
    uint32_t OSPEEDR1 :2;
    uint32_t OSPEEDR2 :2;
    uint32_t OSPEEDR3 :2;
    uint32_t OSPEEDR4 :2;
    uint32_t OSPEEDR5 :2;
    uint32_t OSPEEDR6 :2;
    uint32_t OSPEEDR7 :2;
    uint32_t OSPEEDR8 :2;
    uint32_t OSPEEDR9 :2;
    uint32_t OSPEEDR10 :2;
    uint32_t OSPEEDR11 :2;
    uint32_t OSPEEDR12 :2;
    uint32_t OSPEEDR13 :2;
    uint32_t OSPEEDR14 :2;
    uint32_t OSPEEDR15 :2;
}GPIO_OSPEEDR_ST;

typedef struct{
    uint32_t PUPDR0 :2;
    uint32_t PUPDR1 :2;
    uint32_t PUPDR2 :2;
    uint32_t PUPDR3 :2;
    uint32_t PUPDR4 :2;
    uint32_t PUPDR5 :2;
    uint32_t PUPDR6 :2;
    uint32_t PUPDR7 :2;
    uint32_t PUPDR8 :2;
    uint32_t PUPDR9 :2;
    uint32_t PUPDR10 :2;
    uint32_t PUPDR11 :2;
    uint32_t PUPDR12 :2;
    uint32_t PUPDR13 :2;
    uint32_t PUPDR14 :2;
    uint32_t PUPDR15 :2;
}GPIO_PUPDR_ST;

typedef struct{
    uint32_t IDR0 :1;
    uint32_t IDR1 :1;
    uint32_t IDR2 :1;
    uint32_t IDR3 :1;
    uint32_t IDR4 :1;
    uint32_t IDR5 :1;
    uint32_t IDR6 :1;
    uint32_t IDR7 :1;
    uint32_t IDR8 :1;
    uint32_t IDR9 :1;
    uint32_t IDR10 :1;
    uint32_t IDR11 :1;
    uint32_t IDR12 :1;
    uint32_t IDR13 :1;
    uint32_t IDR14 :1;
    uint32_t IDR15 :1;
    uint32_t RESERVED :16;
}GPIO_IDR_ST;

typedef struct{
    uint32_t ODR0 :1;
    uint32_t ODR1 :1;
    uint32_t ODR2 :1;
    uint32_t ODR3 :1;
    uint32_t ODR4 :1;
    uint32_t ODR5 :1;
    uint32_t ODR6 :1;
    uint32_t ODR7 :1;
    uint32_t ODR8 :1;
    uint32_t ODR9 :1;
    uint32_t ODR10 :1;
    uint32_t ODR11 :1;
    uint32_t ODR12 :1;
    uint32_t ODR13 :1;
    uint32_t ODR14 :1;
    uint32_t ODR15 :1;
    uint32_t RESERVED :16;
}GPIO_ODR_ST;

typedef struct{
    uint32_t BS0 :1;
    uint32_t BS1 :1;
    uint32_t BS2 :1;
    uint32_t BS3 :1;
    uint32_t BS4 :1;
    uint32_t BS5 :1;
    uint32_t BS6 :1;
    uint32_t BS7 :1;
    uint32_t BS8 :1;
    uint32_t BS9 :1;
    uint32_t BS10 :1;
    uint32_t BS11 :1;
    uint32_t BS12 :1;
    uint32_t BS13 :1;
    uint32_t BS14 :1;
    uint32_t BS15 :1;
    uint32_t BR0 :1;
    uint32_t BR1 :1;
    uint32_t BR2 :1;
    uint32_t BR3 :1;
    uint32_t BR4 :1;
    uint32_t BR5 :1;
    uint32_t BR6 :1;
    uint32_t BR7 :1;
    uint32_t BR8 :1;
    uint32_t BR9 :1;
    uint32_t BR10 :1;
    uint32_t BR11 :1;
    uint32_t BR12 :1;
    uint32_t BR13 :1;
    uint32_t BR14 :1;
    uint32_t BR15 :1;
}GPIO_BSRR_ST;

typedef struct{
    uint32_t ODR0 :1;
    uint32_t ODR1 :1;
    uint32_t ODR2 :1;
    uint32_t ODR3 :1;
    uint32_t ODR4 :1;
    uint32_t ODR5 :1;
    uint32_t ODR6 :1;
    uint32_t ODR7 :1;
    uint32_t ODR8 :1;
    uint32_t ODR9 :1;
    uint32_t ODR10 :1;
    uint32_t ODR11 :1;
    uint32_t ODR12 :1;
    uint32_t ODR13 :1;
    uint32_t ODR14 :1;
    uint32_t ODR15 :1;
    uint32_t RESERVED :16;
}GPIO_LCKR_ST;

typedef struct{
    uint32_t AFRL0 :4;
    uint32_t AFRL1 :4;
    uint32_t AFRL2 :4;
    uint32_t AFRL3 :4;
    uint32_t AFRL4 :4;
    uint32_t AFRL5 :4;
    uint32_t AFRL6 :4;
    uint32_t AFRL7 :4;
}GPIO_AFRL_ST;

typedef struct{
    uint32_t AFRH8 :4;
    uint32_t AFRH9 :4;
    uint32_t AFRH10 :4;
    uint32_t AFRH11 :4;
    uint32_t AFRH12 :4;
    uint32_t AFRH13 :4;
    uint32_t AFRH14 :4;
    uint32_t AFRH15 :4;
}GPIO_AFRH_ST;

typedef struct{
    GPIO_MODER_ST MODER;
    GPIO_OTYPER_ST OTYPER;
    GPIO_OSPEEDR_ST OSPEEDR;
    GPIO_PUPDR_ST PUPDR;
    GPIO_IDR_ST IDR;
    GPIO_ODR_ST ODR;
    GPIO_BSRR_ST BSRR;
    GPIO_LCKR_ST LCKR;
    GPIO_AFRL_ST AFRL;
    GPIO_AFRH_ST AFRH;
}GPIO_REGISTERS_ST;

typedef union{
    GPIO_MODER_ST MODER;
    GPIO_OTYPER_ST OTYPER;
    GPIO_OSPEEDR_ST OSPEEDR;
    GPIO_PUPDR_ST PUPDR;
    GPIO_IDR_ST IDR;
    GPIO_ODR_ST ODR;
    GPIO_BSRR_ST BSRR;
    GPIO_LCKR_ST LCKR;
    GPIO_AFRL_ST AFRL;
    GPIO_AFRH_ST AFRH;
}GPIO_REGISTERS_UT;
/*
typedef enum{GPIOA = 0, GPIOB = 1, GPIOC = 2, GPIOD = 3, GPIOE = 4, GPIOF = 5, GPIOG = 6,\
            GPIOH = 7, GPIOI = 8}GPIOX;*/
typedef enum {INPUT = 0b00, OUTPUT = 0b01, ALTERNATE_FUNCTION = 0b10, ANALOG = 0b11}MODER_SETTINGS;
typedef enum {PUSHPULL = 0b0, OPENDRAIN = 0b1}OTYPER_SETTINGS;
typedef enum {LOW = 0b00, MEDIUM = 0b01, HIGH = 0b10, VERYHIGH = 0b11}OSPEEDR_SETTINGS;
typedef enum {NOUPDOWN = 0b00, PULLUP = 0b01, PULLDOWN = 0b10, RESERVED = 0b11}PUPDR_SETTINGS;
typedef enum{AF0 = 0x0, AF1 = 0x1, AF2 = 0x2, AF3 = 0x3, AF4 = 0x4, AF5 = 0x5, AF6 = 0x6, AF7 = 0x7,\
            AF8 = 0x8, AF9 = 0x9, AF10 = 0xa, AF11 = 0xb, AF12 = 0xc, AF13 = 0xd, AF14 = 0xe, AF15 = 0xf}AF_SETTINGS;
// void gpio_moder_set(GPIOX gpio_port, uint16_t pin_number, MODER_SETTINGS moder_setting);
// void gpio_otyper_set(uint16_t pin_number, OTYPER_SETTINGS otyper_setting);
// void gpio_ospeedr_set(uint16_t pin_number, OSPEEDR_SETTINGS ospeedr_setting);
// void gpio_pupdr_set(uint16_t pin_numder, PUPDR_SETTINGS pupdr_setting);
// void gpio_pin_digital_bsrr_set(uint16_t pin_number);

#endif