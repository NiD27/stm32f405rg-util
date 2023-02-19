#ifndef _NID_40xxx_adc
#define _NID_40xxx_adc

#define ADC_BASE_ADDRESS 0x40012000U
#define ADC_END_ADDRESS 0x400123ffU

#define ADC1_BASE_OFFSET 0x000U
#define ADC1_END_OFFSET 0x04cU

#define ADC2_BASE_OFFSET 0x100U
#define ADC2_END_OFFSET 0x14cU

#define ADC3_BASE_OFFSET 0x200U
#define ADC3_END_OFFSET 0x24cU

#define ADC_COMMON_REGISTERS_BASE_OFFSET 0x300U
#define ADC_COMMON_REGISTERS_END_OFFSET 0x308U


/*WORD LEVEL WRITE ONLY 32bits*/
/*W, HW and Byte level reads*/

#define ADC_SR_OFFSET 0x00
#define ADC1_SR_ADDRESS (ADC_BASE_ADDRESS+ADC1_BASE_OFFSET+ADC_SR_OFFSET)
#define ADC2_SR_ADDRESS (ADC_BASE_ADDRESS+ADC2_BASE_OFFSET+ADC_SR_OFFSET)
#define ADC3_SR_ADDRESS (ADC_BASE_ADDRESS+ADC3_BASE_OFFSET+ADC_SR_OFFSET)
#define ADC_SR_RESET_VALUE 0x00000000
typedef struct{
    uint32_t AWD :1;
    uint32_t EOC :1;
    uint32_t JEOC :1;
    uint32_t JSTRT :1;
    uint32_t STRT :1;
    uint32_t OVR :1;
    uint32_t RESERVED :26;
}ADC_SR_ST;

#define ADC_CR1_OFFSET 0x04
#define ADC1_CR1_ADDRESS (ADC_BASE_ADDRESS+ADC1_BASE_OFFSET+ADC_CR1_OFFSET)
#define ADC2_CR1_ADDRESS (ADC_BASE_ADDRESS+ADC2_BASE_OFFSET+ADC_CR1_OFFSET)
#define ADC3_CR1_ADDRESS (ADC_BASE_ADDRESS+ADC3_BASE_OFFSET+ADC_CR1_OFFSET)
#define ADC_CR1_RESET_VALUE 0x00000000
typedef struct{
    uint32_t AWDCH :5;
    uint32_t EOCIE :1;
    uint32_t AWDIE :1;
    uint32_t JEOCIE :1;
    uint32_t SCAN :1;
    uint32_t AWDSGL :1;
    uint32_t JAUTO :1;
    uint32_t DISCEN :1;
    uint32_t JDISCEN :1;
    uint32_t DISCNUM :3;
    uint32_t RESERVED_1 :6;
    uint32_t JAWDEN :1;
    uint32_t AWDEN :1;
    uint32_t RESERVED_2 :2;
    uint32_t OVRIE :1;
    uint32_t RESERVED_3 :5;
}ADC_CR1_ST;

#define ADC_CR2_OFFSET 0x08
#define ADC1_CR2_ADDRESS (ADC_BASE_ADDRESS+ADC1_BASE_OFFSET+ADC_CR2_OFFSET)
#define ADC2_CR2_ADDRESS (ADC_BASE_ADDRESS+ADC2_BASE_OFFSET+ADC_CR2_OFFSET)
#define ADC3_CR2_ADDRESS (ADC_BASE_ADDRESS+ADC3_BASE_OFFSET+ADC_CR2_OFFSET)
#define ADC_CR2_RESET_VALUE 0x00000000
typedef struct{
    uint32_t ADON :1;
    uint32_t CONT :1;
    uint32_t RESERVED_1 :6;
    uint32_t DMA :1;
    uint32_t DDS :1;
    uint32_t EOCS :1;
    uint32_t ALIGN :1;
    uint32_t RESERVED_2 :4;
    uint32_t JEXTSEL :4;
    uint32_t JEXTEN :2;
    uint32_t JSWSTART :1;
    uint32_t RESERVED_3 :1;
    uint32_t EXTSEL :4;
    uint32_t EXTEN :2;
    uint32_t SWSTART :1;
    uint32_t RESERVED_4 :1;
}ADC_CR2_ST;

#define ADC_SMPR1_OFFSET 0x0c
#define ADC1_SMPR1_ADDRESS (ADC_BASE_ADDRESS+ADC1_BASE_OFFSET+ADC_SMPR1_OFFSET)
#define ADC2_SMPR1_ADDRESS (ADC_BASE_ADDRESS+ADC2_BASE_OFFSET+ADC_SMPR1_OFFSET)
#define ADC3_SMPR1_ADDRESS (ADC_BASE_ADDRESS+ADC3_BASE_OFFSET+ADC_SMPR1_OFFSET)
#define ADC_SMPR1_RESET_VALUE 0x00000000
typedef struct{
    uint32_t SMP10 :3;
    uint32_t SMP11 :3;
    uint32_t SMP12 :3;
    uint32_t SMP13 :3;
    uint32_t SMP14 :3;
    uint32_t SMP15 :3;
    uint32_t SMP16 :3;
    uint32_t SMP17 :3;
    uint32_t SMP18 :3;
    uint32_t RESERVED :5;
}ADC_SMPR1_ST;

#define ADC_SMPR2_OFFSET 0x10
#define ADC1_SMPR2_ADDRESS (ADC_BASE_ADDRESS+ADC1_BASE_OFFSET+ADC_SMPR2_OFFSET)
#define ADC2_SMPR2_ADDRESS (ADC_BASE_ADDRESS+ADC2_BASE_OFFSET+ADC_SMPR2_OFFSET)
#define ADC3_SMPR2_ADDRESS (ADC_BASE_ADDRESS+ADC3_BASE_OFFSET+ADC_SMPR2_OFFSET)
#define ADC_SMPR2_RESET_VALUE 0x00000000
typedef struct{
    uint32_t SMP0 :3;
    uint32_t SMP1 :3;
    uint32_t SMP2 :3;
    uint32_t SMP3 :3;
    uint32_t SMP4 :3;
    uint32_t SMP5 :3;
    uint32_t SMP6 :3;
    uint32_t SMP7 :3;
    uint32_t SMP8 :3;
    uint32_t SMP9 :3;
    uint32_t RESERVED :2;
}ADC_SMPR2_ST;

#define ADC_JOFR1_OFFSET 0x14
#define ADC_JOFR2_OFFSET 0x18
#define ADC_JOFR3_OFFSET 0x1c
#define ADC_JOFR4_OFFSET 0x20
#define ADC1_JOFR1_ADDRESS (ADC_BASE_ADDRESS+ADC1_BASE_OFFSET+ADC_JOFR1_OFFSET)
#define ADC2_JOFR1_ADDRESS (ADC_BASE_ADDRESS+ADC2_BASE_OFFSET+ADC_JOFR1_OFFSET)
#define ADC3_JOFR1_ADDRESS (ADC_BASE_ADDRESS+ADC3_BASE_OFFSET+ADC_JOFR1_OFFSET)
#define ADC1_JOFR2_ADDRESS (ADC_BASE_ADDRESS+ADC1_BASE_OFFSET+ADC_JOFR2_OFFSET)
#define ADC2_JOFR2_ADDRESS (ADC_BASE_ADDRESS+ADC2_BASE_OFFSET+ADC_JOFR2_OFFSET)
#define ADC3_JOFR2_ADDRESS (ADC_BASE_ADDRESS+ADC3_BASE_OFFSET+ADC_JOFR2_OFFSET)
#define ADC1_JOFR3_ADDRESS (ADC_BASE_ADDRESS+ADC1_BASE_OFFSET+ADC_JOFR3_OFFSET)
#define ADC2_JOFR3_ADDRESS (ADC_BASE_ADDRESS+ADC2_BASE_OFFSET+ADC_JOFR3_OFFSET)
#define ADC3_JOFR3_ADDRESS (ADC_BASE_ADDRESS+ADC3_BASE_OFFSET+ADC_JOFR3_OFFSET)
#define ADC1_JOFR4_ADDRESS (ADC_BASE_ADDRESS+ADC1_BASE_OFFSET+ADC_JOFR4_OFFSET)
#define ADC2_JOFR4_ADDRESS (ADC_BASE_ADDRESS+ADC2_BASE_OFFSET+ADC_JOFR4_OFFSET)
#define ADC3_JOFR4_ADDRESS (ADC_BASE_ADDRESS+ADC3_BASE_OFFSET+ADC_JOFR4_OFFSET)
#define ADC_JOFR_RESET_VALUE 0x00000000
typedef struct{
    uint32_t JOFFSET :12;
    uint32_t RESERVED :20;
}ADC_JOFR_ST;

#define ADC_HTR_OFFSET 0x24
#define ADC1_HTR_ADDRESS (ADC_BASE_ADDRESS+ADC1_BASE_OFFSET+ADC_HTR_OFFSET)
#define ADC2_HTR_ADDRESS (ADC_BASE_ADDRESS+ADC2_BASE_OFFSET+ADC_HTR_OFFSET)
#define ADC3_HTR_ADDRESS (ADC_BASE_ADDRESS+ADC3_BASE_OFFSET+ADC_HTR_OFFSET)
#define ADC_HTR_RESET_VALUE 0x00000fff
typedef struct{
    uint32_t HT :12;
    uint32_t RESERVED :20;
}ADC_HTR_ST;

#define ADC_LTR_OFFSET 0x28
#define ADC1_LTR_ADDRESS (ADC_BASE_ADDRESS+ADC1_BASE_OFFSET+ADC_LTR_OFFSET)
#define ADC2_LTR_ADDRESS (ADC_BASE_ADDRESS+ADC2_BASE_OFFSET+ADC_LTR_OFFSET)
#define ADC3_LTR_ADDRESS (ADC_BASE_ADDRESS+ADC3_BASE_OFFSET+ADC_LTR_OFFSET)
#define ADC_LTR_RESET_VALUE 0x00000000
typedef struct{
    uint32_t LT :12;
    uint32_t RESERVED :20;
}ADC_LTR_ST;

#define ADC_SQR1_OFFSET 0x2c
#define ADC1_SQR1_ADDRESS (ADC_BASE_ADDRESS+ADC1_BASE_OFFSET+ADC_SQR1_OFFSET)
#define ADC2_SQR1_ADDRESS (ADC_BASE_ADDRESS+ADC2_BASE_OFFSET+ADC_SQR1_OFFSET)
#define ADC3_SQR1_ADDRESS (ADC_BASE_ADDRESS+ADC3_BASE_OFFSET+ADC_SQR1_OFFSET)
#define ADC_SQR1_RESET_VALUE 0x00000000
typedef struct{
    uint32_t SQ13 :5;
    uint32_t SQ14 :5;
    uint32_t SQ15 :5;
    uint32_t SQ16 :5;
    uint32_t L :4;
    uint32_t RESERVED :8;
}ADC_SQR1_ST;

#define ADC_SQR2_OFFSET 0x30
#define ADC1_SQR2_ADDRESS (ADC_BASE_ADDRESS+ADC1_BASE_OFFSET+ADC_SQR2_OFFSET)
#define ADC2_SQR2_ADDRESS (ADC_BASE_ADDRESS+ADC2_BASE_OFFSET+ADC_SQR2_OFFSET)
#define ADC3_SQR2_ADDRESS (ADC_BASE_ADDRESS+ADC3_BASE_OFFSET+ADC_SQR2_OFFSET)
#define ADC_SQR2_RESET_VALUE 0x00000000
typedef struct{
    uint32_t SQ7 :5;
    uint32_t SQ8 :5;
    uint32_t SQ9 :5;
    uint32_t SQ10 :5;
    uint32_t SQ11 :5;
    uint32_t SQ12 :5;
    uint32_t RESERVED :2;
}ADC_SQR2_ST;

#define ADC_SQR3_OFFSET 0x34
#define ADC1_SQR3_ADDRESS (ADC_BASE_ADDRESS+ADC1_BASE_OFFSET+ADC_SQR3_OFFSET)
#define ADC2_SQR3_ADDRESS (ADC_BASE_ADDRESS+ADC2_BASE_OFFSET+ADC_SQR3_OFFSET)
#define ADC3_SQR3_ADDRESS (ADC_BASE_ADDRESS+ADC3_BASE_OFFSET+ADC_SQR3_OFFSET)
#define ADC_SQR3_RESET_VALUE 0x00000000
typedef struct{
    uint32_t SQ1 :5;
    uint32_t SQ2 :5;
    uint32_t SQ3 :5;
    uint32_t SQ4 :5;
    uint32_t SQ5 :5;
    uint32_t SQ6 :5;
    uint32_t RESERVED :2;
}ADC_SQR3_ST;

#define ADC_JSQR_OFFSET 0x34
#define ADC1_JSQR_ADDRESS (ADC_BASE_ADDRESS+ADC1_BASE_OFFSET+ADC_JSQR_OFFSET)
#define ADC2_JSQR_ADDRESS (ADC_BASE_ADDRESS+ADC2_BASE_OFFSET+ADC_JSQR_OFFSET)
#define ADC3_JSQR_ADDRESS (ADC_BASE_ADDRESS+ADC3_BASE_OFFSET+ADC_JSQR_OFFSET)
#define ADC_JSQR_RESET_VALUE 0x00000000
typedef struct{
    uint32_t JSQ1 :5;
    uint32_t JSQ2 :5;
    uint32_t JSQ3 :5;
    uint32_t JSQ4 :5;
    uint32_t JL :2;
    uint32_t RESERVED :10;
}ADC_JSQR_ST;

#define ADC_JDR1_OFFSET 0x3c
#define ADC_JDR2_OFFSET 0x40
#define ADC_JDR3_OFFSET 0x44
#define ADC_JDR4_OFFSET 0x4c
#define ADC1_JDR1_ADDRESS (ADC_BASE_ADDRESS+ADC1_BASE_OFFSET+ADC_JDR1_OFFSET)
#define ADC2_JDR1_ADDRESS (ADC_BASE_ADDRESS+ADC2_BASE_OFFSET+ADC_JDR1_OFFSET)
#define ADC3_JDR1_ADDRESS (ADC_BASE_ADDRESS+ADC3_BASE_OFFSET+ADC_JDR1_OFFSET)
#define ADC1_JDR2_ADDRESS (ADC_BASE_ADDRESS+ADC1_BASE_OFFSET+ADC_JDR2_OFFSET)
#define ADC2_JDR2_ADDRESS (ADC_BASE_ADDRESS+ADC2_BASE_OFFSET+ADC_JDR2_OFFSET)
#define ADC3_JDR2_ADDRESS (ADC_BASE_ADDRESS+ADC3_BASE_OFFSET+ADC_JDR2_OFFSET)
#define ADC1_JDR3_ADDRESS (ADC_BASE_ADDRESS+ADC1_BASE_OFFSET+ADC_JDR3_OFFSET)
#define ADC2_JDR3_ADDRESS (ADC_BASE_ADDRESS+ADC2_BASE_OFFSET+ADC_JDR3_OFFSET)
#define ADC3_JDR3_ADDRESS (ADC_BASE_ADDRESS+ADC3_BASE_OFFSET+ADC_JDR3_OFFSET)
#define ADC1_JDR4_ADDRESS (ADC_BASE_ADDRESS+ADC1_BASE_OFFSET+ADC_JDR4_OFFSET)
#define ADC2_JDR4_ADDRESS (ADC_BASE_ADDRESS+ADC2_BASE_OFFSET+ADC_JDR4_OFFSET)
#define ADC3_JDR4_ADDRESS (ADC_BASE_ADDRESS+ADC3_BASE_OFFSET+ADC_JDR4_OFFSET)
#define ADC_JDR_RESET_VALUE 0x00000000
typedef struct{
    uint32_t JDATA :16;
    uint32_t RESERVED :16;
}ADC_JDR_ST;

#define ADC_DR_OFFSET 0x4c
#define ADC1_DR_ADDRESS (ADC_BASE_ADDRESS+ADC1_BASE_OFFSET+ADC_DR_OFFSET)
#define ADC2_DR_ADDRESS (ADC_BASE_ADDRESS+ADC2_BASE_OFFSET+ADC_DR_OFFSET)
#define ADC3_DR_ADDRESS (ADC_BASE_ADDRESS+ADC3_BASE_OFFSET+ADC_DR_OFFSET)
#define ADC_DR_RESET_VALUE 0x00000000
typedef struct{
    uint32_t DATA :12;
    uint32_t RESERVED :12;
}ADC_DR_ST;

#define ADC_CSR_OFFSET 0x300
#define ADC1_CSR_ADCSRESS (ADC_BASE_ADCSRESS+ADC1_BASE_OFFSET+ADC_CSR_OFFSET)
#define ADC2_CSR_ADCSRESS (ADC_BASE_ADCSRESS+ADC2_BASE_OFFSET+ADC_CSR_OFFSET)
#define ADC3_CSR_ADCSRESS (ADC_BASE_ADCSRESS+ADC3_BASE_OFFSET+ADC_CSR_OFFSET)
#define ADC_CSR_RESET_VALUE 0x00000000
typedef struct{
    uint32_t ADC1_AWD1 :1;
    uint16_t ADC1_EOC1 :1;
    uint32_t ADC1_JEOC1 :1;
    uint32_t ADC1_JSTRT1 :1;
    uint32_t ADC1_STRT1 :1;
    uint32_t ADC1_OVR1 :1;
    uint32_t RESERVED_1 :2;

    uint32_t ADC2_AWD2 :1;
    uint16_t ADC2_EOC2 :1;
    uint32_t ADC2_JEOC2 :1;
    uint32_t ADC2_JSTRT2 :1;
    uint32_t ADC2_STRT2 :1;
    uint32_t ADC2_OVR2 :1;
    uint32_t RESERVED_2 :2;

    uint32_t ADC3_AWD3 :1;
    uint16_t ADC3_EOC3 :1;
    uint32_t ADC3_JEOC3 :1;
    uint32_t ADC3_JSTRT3 :1;
    uint32_t ADC3_STRT3 :1;
    uint32_t ADC3_OVR3 :1;

    uint32_t RESERVED :10;
}ADC_CSR_ST;

#define ADC_CCR_OFFSET 0x304
#define ADC1_CCR_ADCCRESS (ADC_BASE_ADCCRESS+ADC1_BASE_OFFSET+ADC_CCR_OFFSET)
#define ADC2_CCR_ADCCRESS (ADC_BASE_ADCCRESS+ADC2_BASE_OFFSET+ADC_CCR_OFFSET)
#define ADC3_CCR_ADCCRESS (ADC_BASE_ADCCRESS+ADC3_BASE_OFFSET+ADC_CCR_OFFSET)
#define ADC_CCR_RESET_VALUE 0x00000000
typedef struct{
    uint32_t MULTI :5;
    uint16_t RESERVED_1 :3;
    uint32_t DELAY :4;
    uint32_t RESERVED_2 :1;
    uint32_t DDS :1;
    uint32_t DMA :2;
    uint32_t ADCPRE :2;
    uint32_t RESERVED_3 :4;
    uint16_t VBATE :1;
    uint32_t TSVREFE :1;
    uint32_t RESERVED :8;
}ADC_CCR_ST;

#define ADC_CDR_OFFSET 0x308
#define ADC1_CDR_ADCDRESS (ADC_BASE_ADCDRESS+ADC1_BASE_OFFSET+ADC_CDR_OFFSET)
#define ADC2_CDR_ADCDRESS (ADC_BASE_ADCDRESS+ADC2_BASE_OFFSET+ADC_CDR_OFFSET)
#define ADC3_CDR_ADCDRESS (ADC_BASE_ADCDRESS+ADC3_BASE_OFFSET+ADC_CDR_OFFSET)
#define ADC_CDR_RESET_VALUE 0x00000000
typedef struct{
    uint32_t DATA1 :16;
    uint16_t DATA2 :16;
}ADC_CDR_ST;

#endif