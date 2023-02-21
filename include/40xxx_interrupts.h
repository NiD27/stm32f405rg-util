#ifndef _NID_40xxx_interrupts_
#define _NID_40xxx_interrupts_

/*EXTI*/
/*EXTI registers are in APB2 from 0x40013c00 to 0x40013fff*/
#define EXTI_START_ADDRESS 0x40013c00
#define EXTI_END_ADDRESS 0x40013fff
#define EXTI_SIZE 0x400

#define EXTI_IMR_OFFSET 0x00
#define EXTI_IMR_ADDRESS (EXTI_START_ADDRESS+EXTI_IMR_ADDRESS)
#define EXTI_IMR_RESET_VALUE 0x00000000
typedef struct{
    uint32_t MR0 :1;
    uint32_t MR1 :1;
    uint32_t MR2 :1;
    uint32_t MR3 :1;
    uint32_t MR4 :1;
    uint32_t MR5 :1;
    uint32_t MR6 :1;
    uint32_t MR7 :1;
    uint32_t MR8 :1;
    uint32_t MR9 :1;
    uint32_t MR10 :1;
    uint32_t MR11 :1;
    uint32_t MR12 :1;
    uint32_t MR13 :1;
    uint32_t MR14 :1;
    uint32_t MR15 :1;
    uint32_t MR16 :1;
    uint32_t MR17 :1;
    uint32_t MR18 :1;
    uint32_t MR19 :1;
    uint32_t MR20 :1;
    uint32_t MR21 :1;
    uint32_t MR22 :1;
    uint32_t RESERVED :9;
}EXTI_IMR_ST;

#define EXTI_EMR_OFFSET 0x04
#define EXTI_EMR_ADDRESS (EXTI_START_ADDRESS+EXTI_EMR_OFFSET)
#define EXTI_EMR_RESET_VALUE 0x00000000
typedef struct{
    uint32_t MR0 :1;
    uint32_t MR1 :1;
    uint32_t MR2 :1;
    uint32_t MR3 :1;
    uint32_t MR4 :1;
    uint32_t MR5 :1;
    uint32_t MR6 :1;
    uint32_t MR7 :1;
    uint32_t MR8 :1;
    uint32_t MR9 :1;
    uint32_t MR10 :1;
    uint32_t MR11 :1;
    uint32_t MR12 :1;
    uint32_t MR13 :1;
    uint32_t MR14 :1;
    uint32_t MR15 :1;
    uint32_t MR16 :1;
    uint32_t MR17 :1;
    uint32_t MR18 :1;
    uint32_t MR19 :1;
    uint32_t MR20 :1;
    uint32_t MR21 :1;
    uint32_t MR22 :1;
    uint32_t RESERVED :9;
}EXTI_EMR_ST;

#define EXTI_RTSR_OFFSET 0x08
#define EXTI_RTSR_ADDRESS (EXTI_START_ADDRESS+EXTI_RTSR_OFFSET)
#define EXTI_RTSR_RESET_VALUE 0x00000000
typedef struct{
    uint32_t TR0 :1;
    uint32_t TR1 :1;
    uint32_t TR2 :1;
    uint32_t TR3 :1;
    uint32_t TR4 :1;
    uint32_t TR5 :1;
    uint32_t TR6 :1;
    uint32_t TR7 :1;
    uint32_t TR8 :1;
    uint32_t TR9 :1;
    uint32_t TR10 :1;
    uint32_t TR11 :1;
    uint32_t TR12 :1;
    uint32_t TR13 :1;
    uint32_t TR14 :1;
    uint32_t TR15 :1;
    uint32_t TR16 :1;
    uint32_t TR17 :1;
    uint32_t TR18 :1;
    uint32_t TR19 :1;
    uint32_t TR20 :1;
    uint32_t TR21 :1;
    uint32_t TR22 :1;
    uint32_t RESERVED :9;
}EXTI_RTSR_ST;

#define EXTI_FTSR_OFFSET 0x0c
#define EXTI_FTSR_ADDRESS (EXTI_START_ADDRESS+EXTI_FTSR_OFFSET)
#define EXTI_FTSR_RESET_VALUE 0x00000000
typedef struct{
    uint32_t TR0 :1;
    uint32_t TR1 :1;
    uint32_t TR2 :1;
    uint32_t TR3 :1;
    uint32_t TR4 :1;
    uint32_t TR5 :1;
    uint32_t TR6 :1;
    uint32_t TR7 :1;
    uint32_t TR8 :1;
    uint32_t TR9 :1;
    uint32_t TR10 :1;
    uint32_t TR11 :1;
    uint32_t TR12 :1;
    uint32_t TR13 :1;
    uint32_t TR14 :1;
    uint32_t TR15 :1;
    uint32_t TR16 :1;
    uint32_t TR17 :1;
    uint32_t TR18 :1;
    uint32_t TR19 :1;
    uint32_t TR20 :1;
    uint32_t TR21 :1;
    uint32_t TR22 :1;
    uint32_t RESERVED :9;
}EXTI_FTSR_ST;


#define EXTI_SWIER_OFFSET 0x10
#define EXTI_SWIER_ADDRESS (EXTI_START_ADDRESS+EXTI_SWIER_OFFSET)
#define EXTI_SWIER_RESET_VALUE 0x00000000
typedef struct{
    uint32_t SWIER0 :1;
    uint32_t SWIER1 :1;
    uint32_t SWIER2 :1;
    uint32_t SWIER3 :1;
    uint32_t SWIER4 :1;
    uint32_t SWIER5 :1;
    uint32_t SWIER6 :1;
    uint32_t SWIER7 :1;
    uint32_t SWIER8 :1;
    uint32_t SWIER9 :1;
    uint32_t SWIER10 :1;
    uint32_t SWIER11 :1;
    uint32_t SWIER12 :1;
    uint32_t SWIER13 :1;
    uint32_t SWIER14 :1;
    uint32_t SWIER15 :1;
    uint32_t SWIER16 :1;
    uint32_t SWIER17 :1;
    uint32_t SWIER18 :1;
    uint32_t SWIER19 :1;
    uint32_t SWIER20 :1;
    uint32_t SWIER21 :1;
    uint32_t SWIER22 :1;
    uint32_t RESERVED :9;
}EXTI_SWIER_ST;

#define EXTI_PR_OFFSET 0x14
#define EXTI_PR_ADDRESS (EXTI_START_ADDRESS+EXTI_PR_OFFSET)
/*RESET VALUE IS UNDEFINED
#define EXTI_RTSR_RESET_VALUE 0x00000000
*/
typedef struct{
    uint32_t PR0 :1;
    uint32_t PR1 :1;
    uint32_t PR2 :1;
    uint32_t PR3 :1;
    uint32_t PR4 :1;
    uint32_t PR5 :1;
    uint32_t PR6 :1;
    uint32_t PR7 :1;
    uint32_t PR8 :1;
    uint32_t PR9 :1;
    uint32_t PR10 :1;
    uint32_t PR11 :1;
    uint32_t PR12 :1;
    uint32_t PR13 :1;
    uint32_t PR14 :1;
    uint32_t PR15 :1;
    uint32_t PR16 :1;
    uint32_t PR17 :1;
    uint32_t PR18 :1;
    uint32_t PR19 :1;
    uint32_t PR20 :1;
    uint32_t PR21 :1;
    uint32_t PR22 :1;
    uint32_t RESERVED :9;
}EXTI_PR_ST;

/*SUPER STRUCTURE*/
typedef struct{
    EXTI_IMR_ST IMR;
    EXTI_EMR_ST EMR;
    EXTI_RTSR_ST RTSR;
    EXTI_FTSR_ST FTSR;
    EXTI_SWIER_ST SWIER;
    EXTI_PR_ST PR;
}EXTI_REGISTERS_ST;

/*SUPER UNION*/
typedef union{
    EXTI_IMR_ST IMR;
    EXTI_EMR_ST EMR;
    EXTI_RTSR_ST RTSR;
    EXTI_FTSR_ST FTSR;
    EXTI_SWIER_ST SWIER;
    EXTI_PR_ST PR;
}EXTI_REGISTERS_UT;

/*END OF EXTI*/

#endif