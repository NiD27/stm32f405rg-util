#ifndef _NID_40xxx_syscfg_
#define _NID_40xxx_syscfg_

#include <customint.h>
#include <40xxx_util.h>

#define SYSCFG_START_ADDRESS 0x40013800
#define SYSCFG_END_ADDRESS 0x40013Bff
#define SYSCFG_SIZE 0x300

#define SYSCFG_MEMRMP_OFFSET 0x00
#define SYSCFG_MEMRMP_ADDRESS (SYSCFG_START_ADDRESS+SYSCFG_MEMRMP_OFFSET)
//#define SYSCFG_MEMRMP_RESET_VALUE 0x0000000X
typedef struct{
    uint32_t MEM_MODE :2;
    uint32_t RESERVED :30;
}SYSCFG_MEMRMP_ST;

#define SYSCFG_PMC_OFFSET 0x04
#define SYSCFG_PMC_ADDRESS (SYSCFG_START_ADDRESS+SYSCFG_PMC_OFFSET)
#define SYSCFG_PMC_RESET_VALUE 0x00000000
typedef struct{
    uint32_t RESERVED_1 :23;
    uint32_t MEM_MODE :1;
    uint32_t RESERVED :8;
}SYSCFG_PMC_ST;

#define SYSCFG_EXTICR1_OFFSET 0x08
#define SYSCFG_EXTICR1_ADDRESS (SYSCFG_START_ADDRESS+SYSCFG_MEMEXTICR1_OFFSET)
#define SYSCFG_EXTICR1_RESET_VALUE 0x00000000
typedef struct{
    uint32_t EXTI0 :4;
    uint32_t EXTI1 :4;
    uint32_t EXTI2 :4;
    uint32_t EXTI4 :4;
    uint32_t RESERVED :16;
}SYSCFG_EXTICR1_ST;

#define SYSCFG_EXTICR2_OFFSET 0x0c
#define SYSCFG_EXTICR2_ADDRESS (SYSCFG_START_ADDRESS+SYSCFG_EXTICR2_OFFSET)
#define SYSCFG_EXTICR2_RESET_VALUE 0x00000000
typedef struct{
    uint32_t EXTI4 :4;
    uint32_t EXTI5 :4;
    uint32_t EXTI6 :4;
    uint32_t EXTI7 :4;
    uint32_t RESERVED :16;
}SYSCFG_EXTICR2_ST;

#define SYSCFG_EXTICR3_OFFSET 0x10
#define SYSCFG_EXTICR3_ADDRESS (SYSCFG_START_ADDRESS+SYSCFG_EXTICR3_OFFSET)
#define SYSCFG_EXTICR3_RESET_VALUE 0x00000000
typedef struct{
    uint32_t EXTI8 :4;
    uint32_t EXTI9 :4;
    uint32_t EXTI10 :4;
    uint32_t EXTI11 :4;
    uint32_t RESERVED :16;
}SYSCFG_EXTICR3_ST;

#define SYSCFG_EXTICR4_OFFSET 0x14
#define SYSCFG_EXTICR4_ADDRESS (SYSCFG_START_ADDRESS+SYSCFG_EXTICR4_OFFSET)
#define SYSCFG_EXTICR4_RESET_VALUE 0x00000000
typedef struct{
    uint32_t EXTI12 :4;
    uint32_t EXTI13 :4;
    uint32_t EXTI14 :4;
    uint32_t EXTI15 :4;
    uint32_t RESERVED :16;
}SYSCFG_EXTICR4_ST;

#define SYSCFG_CMPCR_OFFSET 0x0c
#define SYSCFG_CMPCR_ADDRESS (SYSCFG_START_ADDRESS+SYSCFG_CMPCR_OFFSET)
#define SYSCFG_CMPCR_RESET_VALUE 0x00000000
typedef struct{
    uint32_t CMP_PD :1;
    uint32_t RESERVED_1 :7;
    uint32_t READY :1;
    uint32_t RESERVED_2 :7;
    uint32_t RESERVED :16;
}SYSCFG_CMPCR_ST;

/*SUPER STRUCTURE*/
typedef struct{
    SYSCFG_MEMRMP_ST MEMRMP;
    SYSCFG_PMC_ST PMC;
    SYSCFG_EXTICR1_ST EXTICR1;
    SYSCFG_EXTICR2_ST EXTICR2;
    SYSCFG_EXTICR3_ST EXTICR3;
    SYSCFG_EXTICR4_ST EXTICR4;
    RESERVED_W_ST RESERVED;
    SYSCFG_CMPCR_ST CMPCR;
}SYSCFG_REGISTERS_ST;

/*SUPER UNION*/
typedef union{
    SYSCFG_MEMRMP_ST MEMRMP;
    SYSCFG_PMC_ST PMC;
    SYSCFG_EXTICR1_ST EXTICR1;
    SYSCFG_EXTICR2_ST EXTICR2;
    SYSCFG_EXTICR3_ST EXTICR3;
    SYSCFG_EXTICR4_ST EXTICR4;
    RESERVED_W_ST RESERVED;
    SYSCFG_CMPCR_ST CMPCR;
}SYSCFG_REGISTERS_UT;

#endif