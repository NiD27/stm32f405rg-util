/*
    Author : Nidhish 12/2/2023
    No warranty or guarantte, if this code releases the magic smoke, thats your own fault.
    Also cascading macros is a stupid idea, and is compiler defined, this is for gcc
    A wise man would use functions
*/

#ifndef _nid_stm32f405util_
#define _nid_stm32f405util_

#include "customint.h"

/**
* Word size and things
* - W - word ie 32bytes
* - HW - half word
* - B - byte
* I have a feeling this has a few edge cases related to type casting
*/
#define SIZE_W_BITS 32
#define SIZE_W 4
#define SIZE_HW_BITS 16
#define SIZE_HW 2
#define SIZE_B_BITS 8
#define SIZE_B 1

/**
* Bit-Banding
*/
#define bit_word_offset(byte_offset, bit_number) (byte_offset*32)+(bit_number*4)
#define bit_word_addr(bit_band_base, bit_word_offset) bit_band_base + bit_word_offset

/**
* GPIOx memory address mapper
*/
#define AHB1_START_ADDR 0x40020000
#define AHB1_END_ADDR   0x4007FFFF

#define GPIO_START_ADDR 0x40020000
#define GPIO_END_ADDR   0x400223ff
#define GPIO_ADDR_OFFSET 0x000003ff

typedef enum {A = 0, B = 1, C = 2, D = 3, E = 4, F = 5, G = 6, H = 7 , I = 8}GPIO_PORT_ENUM;

#define GPIOx_START_ADDRESS(gpio_port_enum) (GPIO_START_ADDR+(gpio_port_enum*(GPIO_ADDR_OFFSET+1)))
#define GPIOx_END_ADDRESS(gpio_port_enum) (GPIO_START_ADDR+GPIO_ADDR_OFFSET+(gpio_port_enum*(GPIO_ADDR_OFFSET+1)))

/**
* The offsets
* Documentation : Reference Manual Page 288
* REMEMBER REMEMBER 0x10 = 0x00000010 not 0x10000000
* also +x or -x means the number of bits +/- bytesize,
* because come idiot decided using 17bits(HW+1) of the LCKR register would be funny
* ALWAYS STARTING FROM LOW ADDRESS UNLESS SPECIFIED OTHERWISE ie HW = 0-7bits not 31-24
*/
#define MODER_OFFSET    0x00000000/*Size : W*/
#define OTYPER_OFFSET   0x00000004/*Size : HW*/
#define OSPEEDR_OFFSET  0x00000008/*Size : W*/
#define PUPDR_OFFSET    0x0000000c/*Size : W*/
#define IDR_OFFSET      0x00000010/*Size : HW*/
#define ODR_OFFSET      0x00000014/*Size : HW*/
#define BSRR_OFFSET     0x00000018/*Size : W*/
#define LCKR_OFFSET     0x0000001c/*Size : HW+1bit*/
#define AFRH_OFFSET     0x00000020/*Size : W*/
#define AFRL_OFFSET     0x00000024/*Size : W*/

/*Register Size*/

#define MODER_SIZE_BITS    SIZE_W_BITS/*Size : W*/
#define OTYPER_SIZE_BITS   SIZE_HW_BITS/*Size : HW*/
#define OSPEEDR_SIZE_BITS  SIZE_W_BITS/*Size : W*/
#define PUPDR_SIZE_BITS    SIZE_W_BITS/*Size : W*/
#define IDR_SIZE_BITS      SIZE_HW_BITS/*Size : HW*/
#define ODR_SIZE_BITS      SIZE_HW_BITS/*Size : HW*/
#define BSRR_SIZE_BITS     SIZE_W_BITS/*Size : W*/
#define LCKR_SIZE_BITS     SIZE_HW_BITS+1/*Size : HW+1bit*/
#define AFRH_SIZE_BITS     SIZE_W_BITS/*Size : W*/
#define AFRL_SIZE_BITS     SIZE_W_BITS/*Size : W*/

#define MODER_SIZE    SIZE_W/*Size : W*/
#define OTYPER_SIZE   SIZE_HW/*Size : HW*/
#define OSPEEDR_SIZE  SIZE_W/*Size : W*/
#define PUPDR_SIZE    SIZE_W/*Size : W*/
#define IDR_SIZE      SIZE_HW/*Size : HW*/
#define ODR_SIZE      SIZE_HW/*Size : HW*/
#define BSRR_SIZE     SIZE_W/*Size : W*/
/**
* ALERT : THERE IS A VERY GOOD REASON I HAVE SIZE BOTH IN BITS AND BYTE HERE WE MEAN 17bits but is that 2or3 bytes?
* I decided it should be 24 bits since last 16index bit of LCLK is LCLK
* THIS MIGHT CAUSE OVERWRITING OF RESERVED BITS USE CAREFULLY, this is a dumb way to release the magic smoke
*/
#define LCKR_SIZE     SIZE_HW+SIZE_B/*Size : HW+1bit*/
#define AFRH_SIZE     SIZE_W/*Size : W*/
#define AFRL_SIZE     SIZE_W/*Size : W*/

/**
* now accessing the individual mem-mapped registers.
* also this is the stupid part, cascading macros
* a wise man would use functions but 1MB of flash means
* I can have all the macros I want
* Afterthought should probably unwind these macros...
*/

#define GPIOx_MODER_ADDRESS(gpio_port_enum) GPIOx_START_ADDRESS(gpio_port_enum)+MODER_OFFSET
#define GPIOx_OTYPER_ADDRESS(gpio_port_enum) GPIOx_START_ADDRESS(gpio_port_enum)+OTYPER_OFFSET
#define GPIOx_OSPEEDR_ADDRESS(gpio_port_enum) GPIOx_START_ADDRESS(gpio_port_enum)+OSPEEDR_OFFSET
#define GPIOx_PUPDR_ADDRESS(gpio_port_enum) GPIOx_START_ADDRESS(gpio_port_enum)+PUPDR_OFFSET
#define GPIOx_IDR_ADDRESS(gpio_port_enum) GPIOx_START_ADDRESS(gpio_port_enum)+IDR_OFFSET
#define GPIOx_ODR_ADDRESS(gpio_port_enum) GPIOx_START_ADDRESS(gpio_port_enum)+ODR_OFFSET
#define GPIOx_BSRR_ADDRESS(gpio_port_enum) GPIOx_START_ADDRESS(gpio_port_enum)+BSRR_OFFSET
#define GPIOx_LCKR_ADDRESS(gpio_port_enum) GPIOx_START_ADDRESS(gpio_port_enum)+LCKR_OFFSET
#define GPIOx_AFRH_ADDRESS(gpio_port_enum) GPIOx_START_ADDRESS(gpio_port_enum)+AFRH_OFFSET
#define GPIOx_AFRL_ADDRESS(gpio_port_enum) GPIOx_START_ADDRESS(gpio_port_enum)+AFRL_OFFSET

/*more stuff that you dont really need to know about*/
typedef enum {INPUT = 0b00, OUTPUT = 0b01, ALTERNATE_FUNCTION = 0b10, ANALOG = 0b11}MODER_SETTINGS;
typedef enum {PUSHPULL = 0b0, OPENDRAIN = 0b1}OTYPER_SETTINGS;
typedef enum {LOW = 0b00, MEDIUM = 0b01, HIGH = 0b10, VERYHIGH = 0b11}OSPEEDR_SETTINGS;
typedef enum {NOUPDOWN = 0b00, PULLUP = 0b01, PULLDOWN = 0b10, RESERVED = 0b11}PUPDR_SETTINGS;
/*
    THIS IS READ ONLY HW
typedef enum {INPUT = 0b00, OUTPUT = 0b01, ALTERNATE_FUNCTION = 0b10, ANALOG = 0b11}IDR_SETTINGS;
*/
/*
    Just read and write HW, for atomic use BSRR
typedef enum {INPUT = 0b00, OUTPUT = 0b01, ALTERNATE_FUNCTION = 0b10, ANALOG = 0b11} ODR_SETTINGS;
*/
/*
    This is the fun part
    1st HW is write only BS - BitSet
    2nd HW is read only BR - BitReset
    havent put too much thought into enum implementation therefore might get added in the future
    typedef enum {INPUT = 0b00, OUTPUT = 0b01, ALTERNATE_FUNCTION = 0b10, ANALOG = 0b11}BSRR_SETTINGS;
*/
/*
    The rest of it will probably be added sometime between now and heat death of the universe
typedef enum {INPUT = 0b00, OUTPUT = 0b01, ALTERNATE_FUNCTION = 0b10, ANALOG = 0b11}MODER_SETTINGS;
typedef enum {INPUT = 0b00, OUTPUT = 0b01, ALTERNATE_FUNCTION = 0b10, ANALOG = 0b11}MODER_SETTINGS;
typedef enum {INPUT = 0b00, OUTPUT = 0b01, ALTERNATE_FUNCTION = 0b10, ANALOG = 0b11}MODER_SETTINGS;
*/

/*-----------------------------------------------------------------------------------------------*/
/*---------------------------------------Functions-----------------------------------------------*/
/*-----------------------------------------------------------------------------------------------*/

/*
    Since the glorius standard of C doesnt support neither function overloading
    nor default values for function arguments
    we should either use macros or just accept reality
*/
/*Not gonna write variadic function thats gonna take too much time and effort*/
/*Pin settings*/
uint32_t* const pin_mode_input(GPIO_PORT_ENUM port, uint8_t pin_number, PUPDR_SETTINGS pupdr);
uint32_t* const pin_mode_output(GPIO_PORT_ENUM port, uint8_t pin_number, OTYPER_SETTINGS otyper, OSPEEDR_SETTINGS ospeedr, PUPDR_SETTINGS pupdr);

/*READ WRITE*/
uint8_t read_pin(GPIO_PORT_ENUM port, uint8_t pin_number);
uint8_t write_pin(GPIO_PORT_ENUM port, uint8_t pin_number, uint8_t value);

/*Safety functions*/
uint8_t is_port_pin_valid(GPIO_PORT_ENUM port, uint8_t pin_number);

#endif /*_nid_stm32f405util_*/