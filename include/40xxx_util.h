#ifndef _NID_40xxx_util_
#define _NID_40xxx_util_

/**
* RESERVED STRUCTURES
* STRUCTURES USED FOR RESERVED REGISTERS
* (Yes I know its confusing, but, trust me I'm an engineer)
* Afterthought - Depending on how structures are allocated HW and B
* may not be needed but just in case.
*/

typedef struct{
    uint32_t RESERVED :32;
}RESERVED_W_ST;

typedef struct{
    uint32_t RESERVED :16;
}RESERVED_HW_ST;

typedef struct{
    uint32_t RESERVED :8;
}RESERVED_B_ST;
/*END OF RESERVED STRUCTURES*/
#endif