#ifndef _NID_bitwise_
#define _NID_bitwise_

#include <stdint.h>

/*
W : 32bits
HW : 16bits
B : 8bits
*/

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



#endif /*_NID_bitwise_*/