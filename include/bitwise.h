#ifndef _NID_bitwise_
#define _NID_bitwise_

#include "customint.h"

/*
W : 32bits
HW : 16bits
B : 8bits
*/

#define HIGH 0b1
#define LOW 0b0

#define SET_W(initial_value, bit_number) initial_value|((uint32_t)1<<bit_number) 
#define RESET_W(initial_value, bit_number) initial_value&(~((uint32_t)1<<bit_number))
#define TOGGLE_W(initial_value, bit_number) initial_value^((uint32_t)1<<bit_number)
#define GET_BIT_VALUE_W(initial_value, bit_number) (initial_value&((uint32_t)1<<bit_number))

#define SET_HW(initial_value, bit_number) initial_value|((uint16_t)1<<bit_number) 
#define RESET_HW(initial_value, bit_number) initial_value&(~((uint16_t)1<<bit_number))
#define TOGGLE_HW(initial_value, bit_number) initial_value^((uint16_t)1<<bit_number)
#define GET_BIT_VALUE_HW(initial_value, bit_number) (initial_value&((uint16_t)1<<bit_number))

#define SET_B(initial_value, bit_number) initial_value|((uint8_t)1<<bit_number) 
#define RESET_B(initial_value, bit_number) initial_value&(~((uint8_t)1<<bit_number))
#define TOGGLE_B(initial_value, bit_number) initial_value^((uint8_t)1<<bit_number)
#define GET_BIT_VALUE_B(initial_value, bit_number) (initial_value&((uint8_t)1<<bit_number))

typedef enum{STATE_HIGH = HIGH, STATE_LOW = LOW}LOGIC_STATE;

#endif /*_NID_bitwise_*/