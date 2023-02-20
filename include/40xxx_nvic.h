#ifndef _NID_40xxx_nvic_
#define _NID_40xxx_nvic_

#define NVIC_ISER_START_ADDRESS 0xe000e100U
#define NVIC_ISER_END_ADDRESS 0xe000e11fU
#define NVIC_ISER_SIZE 0x20U
/**
* x = (0-7)
* Added some fool proofing, might backfire someday.
*/
#define NVIC_ISER_OFFSET_CALCULATOR(x) (0x04*(x<0?0:x>7?7:x))
typedef struct{
    uint32_t SETENA :32;
}NVIC_ISER_ST;

#define NVIC_ICER_START_ADDRESS 0xe000e180U
#define NVIC_ICER_END_ADDRESS 0xe000e19fU
#define NVIC_ICER_SIZE 0x20U
/**
* x = (0-7)
* Added some fool proofing, might backfire someday.
*/
#define NVIC_ICER_OFFSET_CALCULATOR(x) (0x04*(x<0?0:x>7?7:x))
typedef struct{
    uint32_t CLRENA :32;
}NVIC_ICER_ST;

#define NVIC_ISPR_START_ADDRESS 0xe000e200U
#define NVIC_ISPR_END_ADDRESS 0xe000e21fU
#define NVIC_ISPR_SIZE 0x20U
/**
* x = (0-7)
* Added some fool proofing, might backfire someday.
*/
#define NVIC_ISPR_OFFSET_CALCULATOR(x) (0x04*(x<0?0:x>7?7:x))
typedef struct{
    uint32_t SETPEND :32;
}NVIC_ISPR_ST;

#define NVIC_ICPR_START_ADDRESS 0xe000e280U
#define NVIC_ICPR_END_ADDRESS 0xe000e29fU
#define NVIC_ICPR_SIZE 0x20U
/**
* x = (0-7)
* Added some fool proofing, might backfire someday.
*/
#define NVIC_ICPR_OFFSET_CALCULATOR(x) (0x04*(x<0?0:x>7?7:x))
typedef struct{
    uint32_t CLRPEND :32;
}NVIC_ICPR_ST;

#define NVIC_IABR_START_ADDRESS 0xe000e300U
#define NVIC_IABR_END_ADDRESS 0xe000e31fU
#define NVIC_IABR_SIZE 0x20U
/**
* x = (0-7)
* Added some fool proofing, might backfire someday.
*/
#define NVIC_IABR_OFFSET_CALCULATOR(x) (0x04*(x<0?0:x>7?7:x))
typedef struct{
    uint32_t ACTIVE :32;
}NVIC_IABR_ST;

#define NVIC_IPR_START_ADDRESS 0xe000e400U
#define NVIC_IPR_END_ADDRESS 0xe000e29fU
#define NVIC_IPR_SIZE 0xf0U
/**
* x = (0-7)
* Added some fool proofing, might backfire someday.
* INDEX_CALCULATOR returns min 0 to max 59
* BYTE_POSITION_CALCULATOR returns -1 if invalid x
*/
#define NVIC_IPR_INDEX_CALCULATOR(x) (x<1?0:x>59?59:x/4)
#define NVIC_IPR_BYTE_POSITION_CALCULATOR(x) (x<1?-1:x>59?-1:x%4)
/**I KNOW I KNOW, I have consistently used bitfields until now
* Since uint8_t array is a natural fit for this application
* I'm choosing to be inconsistent now, for ease of use
*/
typedef struct{
    uint8_t IP[4];
}NVIC_IPR_ST;

#define NVIC_STIR_START_ADDRESS 0xe000ef00U
#define NVIC_STIR_SIZE 0x04U
typedef struct{
    uint32_t INTID :9;
    uint32_t RESERVED :23;
}NVIC_STIR_ST;

#endif