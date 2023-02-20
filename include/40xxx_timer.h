#ifndef _NID_40xxx_timer_
#define _NID_40xxx_timer_

#include "customint.h"
#include "40xxx_util.h"

/**
*I know some of you will point out that I didn't need to rewrite every structure
*in the register map for every group of timers, as most of them share the same
*structure with some unused bits as reserved.
*I did what I did to protect idiots, like myself.
*Sometime in the future I would probably trust the IDE autocomplete and write,
*to reserved registers thinking they were usable.
*Then again, I have abstracted everything into a super structure and super union,
*so you don't have to worry about the structural catastrophe, use them!
*/

/*Though HW and Byte access are available,
*all structures are by default 32bits with 16bit offset where necessary*/

#define TIMx_SIZE 0x400

#define TIM1_ADDRESS 0x40010000
#define TIM2_ADDRESS 0x40000000
#define TIM3_ADDRESS 0x40000400
#define TIM4_ADDRESS 0x40000800
#define TIM5_ADDRESS 0x40000c00
#define TIM6_ADDRESS 0x40001000
#define TIM7_ADDRESS 0x40001400
#define TIM8_ADDRESS 0x40010400
#define TIM9_ADDRESS 0x40014000
#define TIM10_ADDRESS 0x40014400
#define TIM11_ADDRESS 0x40014800
#define TIM12_ADDRESS 0x40001800
#define TIM13_ADDRESS 0x40001c00
#define TIM14_ADDRESS 0x40002000



/*ADVANCED TIMER*/
#define ACT_TIMx_CR1_OFFSET 0x00
#define ACT_TIMx_CR1_RESET_VALUE 0x00000000
typedef struct{
    uint32_t CEN  :1;
    uint32_t UDIS :1;
    uint32_t URS :1;
    uint32_t OPM :1;
    uint32_t DIR :1;
    uint32_t CMS :2;
    uint32_t ARPE :1;
    uint32_t CKD :2;
    uint32_t RESERVED :6;
    uint32_t OFFSET_HW :16;
}ACT_TIMx_CR1_ST;

#define ACT_TIMx_CR2_OFFSET 0x04
#define ACT_TIMx_CR2_RESET_VALUE 0x00000000
typedef struct{
    uint32_t CCPC  :1;
    uint32_t RESERVED_1 :1;
    uint32_t CCUS :1;
    uint32_t CCDS :1;
    uint32_t MMS :3;
    uint32_t TI1S :1;
    uint32_t OIS1 :1;
    uint32_t OIS1N :1;
    uint32_t OIS2 :1;
    uint32_t OIS2N :1;
    uint32_t OIS3 :1;
    uint32_t OIS3N :1;
    uint32_t OIS4 :1;
    uint32_t RESERVED_2 :1;
    uint32_t OFFSET_HW :16;
}ACT_TIMx_CR2_ST;

#define ACT_TIMx_SMCR_OFFSET 0x08
#define ACT_TIMx_SMCR_RESET_VALUE 0x00000000
typedef struct{
    uint32_t SMS :3;
    uint32_t RESERVED :1;
    uint32_t TS :3;
    uint32_t MSM :1;
    uint32_t ETF :4;
    uint32_t ETPS :2;
    uint32_t ECE :1;
    uint32_t ETP :1;
    uint32_t OFFSET_HW :16;
}ACT_TIMx_SMCR_ST;

#define ACT_TIMx_DIER_OFFSET 0x0c
#define ACT_TIMx_DIER_RESET_VALUE 0x00000000
typedef struct{
    uint32_t UIE :1;
    uint32_t CC1IE :1;
    uint32_t CC2IE :1;
    uint32_t CC3IE :1;
    uint32_t CC4IE :1;
    uint32_t COMIE :1;
    uint32_t TIE :1;
    uint32_t BIE :1;
    uint32_t UDE :1;
    uint32_t CC1DE :1;
    uint32_t CC2DE :1;
    uint32_t CC3DE :1;
    uint32_t CC4DE :1;
    uint32_t COMDE :1;
    uint32_t TDE :1;
    uint32_t RESERVED :1;
    uint32_t OFFSET_HW :16;
}ACT_TIMx_DIER_ST;

#define ACT_TIMx_SR_OFFSET 0x10
#define ACT_TIMx_SR_RESET_VALUE 0x00000000
typedef struct{
    uint32_t UIF :1;
    uint32_t CC1IF :1;
    uint32_t CC2IF :1;
    uint32_t CC3IF :1;
    uint32_t CC4IF :1;
    uint32_t COMIF :1;
    uint32_t TIF :1;
    uint32_t BIF :1;
    uint32_t RESERVED_1 :1;
    uint32_t CC1OF :1;
    uint32_t CC2OF :1;
    uint32_t CC3OF :1;
    uint32_t CC4OF :1;
    uint32_t RESERVED_2 :3;
    uint32_t OFFSET_HW :16;
}ACT_TIMx_SR_ST;

#define ACT_TIMx_EGR_OFFSET 0x14
#define ACT_TIMx_EGR_RESET_VALUE 0x00000000
typedef struct{
    uint32_t UG:1;
    uint32_t CC1G:1;
    uint32_t CC2G:1;
    uint32_t CC3G:1;
    uint32_t CC4G:1;
    uint32_t COMG:1;
    uint32_t TG:1;
    uint32_t BG:1;
    uint32_t RESERVED :8;
    uint32_t OFFSET_HW :16;
}ACT_TIMx_EGR_ST;

#define ACT_TIMx_CCMR1_OFFSET 0x18
#define ACT_TIMx_CCMR1_RESET_VALUE 0x00000000
/*OUTPUT COMPARE STRUCT*/
typedef struct{
    uint32_t CC1S :2;
    uint32_t OC1FE :1;
    uint32_t OC1PE :1;
    uint32_t OC1M :3;
    uint32_t OC1CE :1;
    uint32_t CC2S :2;
    uint32_t OC2FE :1;
    uint32_t OC2PE :1;
    uint32_t OC2M :3;
    uint32_t OC2CE :1;
    uint32_t OFFSET_HW :16;
}ACT_TIMx_CCMR1_OC_ST;
/*INPUT COMPARE STRUCT*/
typedef struct{
    uint32_t CC1S: 2;
    uint32_t IC1PSC :2;
    uint32_t IC1F :4;
    uint32_t CC2S :2;
    uint32_t IC2PSC :2;
    uint32_t IC2F :4;
    uint32_t OFFSET_HW :16;
}ACT_TIMx_CCMR1_IC_ST;
/*FINAL REGISTER UNION
USE THIS DIRECTLY INSTEAD OF THOSE STRUCT*/
typedef union{
    ACT_TIMx_CCMR1_OC_ST OC_ST;
    ACT_TIMx_CCMR1_IC_ST IC_ST;
}ACT_TIMx_CCMR1_UT;

#define ACT_TIMx_CCMR2_OFFSET 0x1c
#define ACT_TIMx_CCMR2_RESET_VALUE 0x00000000
/*OUTPUT COMPARE STRUCT*/
typedef struct{
    uint32_t CC3S :2;
    uint32_t OC3FE :1;
    uint32_t OC3PE :1;
    uint32_t OC3M :3;
    uint32_t OC3CE :1;
    uint32_t CC4S :2;
    uint32_t OC4FE :1;
    uint32_t OC4PE :1;
    uint32_t OC4M :3;
    uint32_t OC4CE :1;
    uint32_t OFFSET_HW :16;
}ACT_TIMx_CCMR2_OC_ST;
/*INPUT COMPARE STRUCT*/
typedef struct{
    uint32_t CC3S: 2;
    uint32_t IC3PSC :2;
    uint32_t IC3F :4;
    uint32_t CC4S :2;
    uint32_t IC4PSC :2;
    uint32_t IC4F :4;
    uint32_t OFFSET_HW :16;
}ACT_TIMx_CCMR2_IC_ST;
/*FINAL REGISTER UNION
USE THIS DIRECTLY INSTEAD OF THOSE STRUCT*/
typedef union{
    ACT_TIMx_CCMR2_OC_ST OC_ST;
    ACT_TIMx_CCMR2_IC_ST IC_ST;
}ACT_TIMx_CCMR2_UT;

#define ACT_TIMx_CCER_OFFSET 0x20
#define ACT_TIMx_CCER_RESET_VALUE 0x00000000
typedef struct{
    uint32_t CC1E :1;
    uint32_t CC1P :1;
    uint32_t CC1NE :1;
    uint32_t CC1NP :1;
    uint32_t CC2E :1;
    uint32_t CC2P :1;
    uint32_t CC2NE :1;
    uint32_t CC2NP :1;
    uint32_t CC3E :1;
    uint32_t CC3P :1;
    uint32_t CC3NE :1;
    uint32_t CC3NP :1;
    uint32_t CC4E :1;
    uint32_t CC4P :1;
    uint32_t RESERVED :1;
    uint32_t CC4NP :1;
    uint32_t OFFSET_HW :16;
}ACT_TIMx_CCER_ST;

#define ACT_TIMx_CNT_OFFSET 0x24
#define ACT_TIMx_CNT_RESET_VALUE 0x00000000
typedef struct{
    uint32_t CNT :16;
    uint32_t OFFSET_HW :16;
}ACT_TIMx_CNT_ST;

#define ACT_TIMx_PSC_OFFSET 0x28
#define ACT_TIMx_PSC_RESET_VALUE 0x00000000
typedef struct{
    uint32_t PSC :16;
    uint32_t OFFSET_HW :16;
}ACT_TIMx_PSC_ST;

#define ACT_TIMx_ARR_OFFSET 0x2c
#define ACT_TIMx_AFF_RESET_VALUE 0x0000ffff
typedef struct{
    uint32_t ARR :16;
    uint32_t OFFSET_HW :16;
}ACT_TIMx_ARR_ST;

#define ACT_TIMx_RCR_OFFSET 0x30
#define ACT_TIMx_RCR_RESET_VALUE 0x00000000
typedef struct{
    uint32_t REP :8;
    uint32_t RESERVED :8;
    uint32_t OFFSET_HW :16;
}ACT_TIMx_RCR_ST;

#define ACT_TIMx_CCR1_OFFSET 0x34
#define ACT_TIMx_CCR1_RESET_VALUE 0x00000000
typedef struct{
    uint32_t CCR1 :16;
    uint32_t OFFSET_HW :16;
}ACT_TIMx_CCR1_ST;

#define ACT_TIMx_CCR2_OFFSET 0x38
#define ACT_TIMx_CCR2_RESET_VALUE 0x00000000
typedef struct{
    uint32_t CCR2 :16;
    uint32_t OFFSET_HW :16;
}ACT_TIMx_CCR2_ST;

#define ACT_TIMx_CCR3_OFFSET 0x3c
#define ACT_TIMx_CCR3_RESET_VALUE 0x00000000
typedef struct{
    uint32_t CCR3 :16;
    uint32_t OFFSET_HW :16;
}ACT_TIMx_CCR3_ST;

#define ACT_TIMx_CCR4_OFFSET 0x40
#define ACT_TIMx_CCR4_RESET_VALUE 0x00000000
typedef struct{
    uint32_t CCR4 :16;
    uint32_t OFFSET_HW :16;
}ACT_TIMx_CCR4_ST;

#define ACT_TIMx_BDTR_OFFSET 0x44
#define ACT_TIMx_BDTR_RESET_VALUE 0x00000000
typedef struct{
    uint32_t DTG :8;
    uint32_t LOCK :2;
    uint32_t OSSI :1;
    uint32_t OSRR :1;
    uint32_t BKE :1;
    uint32_t BKP :1;
    uint32_t AOE :1;
    uint32_t MOE :1;
    uint32_t OFFSET_HW :16;
}ACT_TIMx_BDTR_ST;

#define ACT_TIMx_DCR_OFFSET 0x48
#define ACT_TIMx_DCR_RESET_VALUE 0x00000000
typedef struct{
    uint32_t DBA :5;
    uint32_t RESERVED_1 :3;
    uint32_t DBL :5;
    uint32_t RESERVED_2 :3;
    uint32_t OFFSET_HW :16;
}ACT_TIMx_DCR_ST;

#define ACT_TIMx_DMAR_OFFSET 0x4c
#define ACT_TIMx_DMAR_RESET_VALUE 0x00000000
typedef struct{
    uint32_t DMAB :32;
}ACT_TIMx_DMAR_ST;

/*ACT SUPER STRUCTURE*/
typedef struct {
    ACT_TIMx_CR1_ST CR1;
    ACT_TIMx_CR2_ST CR2;
    ACT_TIMx_SMCR_ST SMCR;
    ACT_TIMx_DIER_ST DIER;
    ACT_TIMx_SR_ST SR;
    ACT_TIMx_EGR_ST EGR;
    ACT_TIMx_CCMR1_UT CCMR1;
    ACT_TIMx_CCMR2_UT CCMR2;
    ACT_TIMx_CCER_ST CCER;
    ACT_TIMx_CNT_ST CNT;
    ACT_TIMx_PSC_ST PSC;
    ACT_TIMx_ARR_ST ARR;
    ACT_TIMx_RCR_ST RCR;
    ACT_TIMx_CCR1_ST CCR1;
    ACT_TIMx_CCR2_ST CCR2;
    ACT_TIMx_CCR3_ST CCR3;
    ACT_TIMx_CCR4_ST CCR4;
    ACT_TIMx_BDTR_ST BDTR;
    ACT_TIMx_DCR_ST DCR;
    ACT_TIMx_DMAR_ST DMAR;
}ACT_TIMx_ST;

/*ACT SUPER UNION*/
typedef union {
    ACT_TIMx_CR1_ST CR1;
    ACT_TIMx_CR2_ST CR2;
    ACT_TIMx_SMCR_ST SMCR;
    ACT_TIMx_DIER_ST DIER;
    ACT_TIMx_SR_ST SR;
    ACT_TIMx_EGR_ST EGR;
    ACT_TIMx_CCMR1_UT CCMR1;
    ACT_TIMx_CCMR2_UT CCMR2;
    ACT_TIMx_CCER_ST CCER;
    ACT_TIMx_CNT_ST CNT;
    ACT_TIMx_PSC_ST PSC;
    ACT_TIMx_ARR_ST ARR;
    ACT_TIMx_RCR_ST RCR;
    ACT_TIMx_CCR1_ST CCR1;
    ACT_TIMx_CCR2_ST CCR2;
    ACT_TIMx_CCR3_ST CCR3;
    ACT_TIMx_CCR4_ST CCR4;
    ACT_TIMx_BDTR_ST BDTR;
    ACT_TIMx_DCR_ST DCR;
    ACT_TIMx_DMAR_ST DMAR;
}ACT_TIMx_UT;

/*END OF ADVANCED TIMERS*/

/*GENERAL PURPOSE TIMERS*/
/*It seems GPT are divided into 3 groups TIM2-TIM5, TIM9-TIM14
* TIM9-TIM14 is again further divided into TIM9&TIM12 and TIM10/11/13/14
*/
/*TIM2-TIM5*/
#define GPT_TIMx_2TO5_CR1_OFFSET 0x00
#define GPT_TIMx_2TO5_CR1_RESET_VALUE 0x00000000
typedef struct{
    uint32_t CEN  :1;
    uint32_t UDIS :1;
    uint32_t URS :1;
    uint32_t OPM :1;
    uint32_t DIR :1;
    uint32_t CMS :2;
    uint32_t ARPE :1;
    uint32_t CKD :2;
    uint32_t RESERVED :6;
    uint32_t OFFSET_HW :16;
}GPT_TIMx_2TO5_CR1_ST;

#define GPT_TIMx_2TO5_CR2_OFFSET 0x04
#define GPT_TIMx_2TO5_CR2_RESET_VALUE 0x00000000
typedef struct{
    uint32_t RESERVED_1  :3;
    uint32_t CCDS :1;
    uint32_t MMS :3;
    uint32_t TI1S :1;
    uint32_t RESERVED_2 :8;
    uint32_t OFFSET_HW :16;
}GPT_TIMx_2TO5_CR2_ST;

#define GPT_TIMx_2TO5_SMCR_OFFSET 0x08
#define GPT_TIMx_2TO5_SMCR_RESET_VALUE 0x00000000
typedef struct{
    uint32_t SMS :3;
    uint32_t RESERVED :1;
    uint32_t TS :3;
    uint32_t MSM :1;
    uint32_t ETF :4;
    uint32_t ETPS :2;
    uint32_t ECE :1;
    uint32_t ETP :1;
    uint32_t OFFSET_HW :16;
}GPT_TIMx_2TO5_SMCR_ST;

#define GPT_TIMx_2TO5_DIER_OFFSET 0x0c
#define GPT_TIMx_2TO5_DIER_RESET_VALUE 0x00000000
typedef struct{
    uint32_t UIE :1;
    uint32_t CC1IE :1;
    uint32_t CC2IE :1;
    uint32_t CC3IE :1;
    uint32_t CC4IE :1;
    uint32_t RESERVED_1 :1;
    uint32_t TIE :1;
    uint32_t RESERVED_2 :1;
    uint32_t UDE :1;
    uint32_t CC1DE :1;
    uint32_t CC2DE :1;
    uint32_t CC3DE :1;
    uint32_t CC4DE :1;
    uint32_t RESERVED_3 :1;
    uint32_t TDE :1;
    uint32_t RESERVED :1;
    uint32_t OFFSET_HW :16;
}GPT_TIMx_2TO5_DIER_ST;

#define GPT_TIMx_2TO5_SR_OFFSET 0x10
#define GPT_TIMx_2TO5_SR_RESET_VALUE 0x00000000
typedef struct{
    uint32_t UIF :1;
    uint32_t CC1IF :1;
    uint32_t CC2IF :1;
    uint32_t CC3IF :1;
    uint32_t CC4IF :1;
    uint32_t RESERVED_1 :1;
    uint32_t TIF :1;
    uint32_t RESERVED_2 :2;
    uint32_t CC1OF :1;
    uint32_t CC2OF :1;
    uint32_t CC3OF :1;
    uint32_t CC4OF :1;
    uint32_t RESERVED_3 :3;
    uint32_t OFFSET_HW :16;
}GPT_TIMx_2TO5_SR_ST;

#define GPT_TIMx_2TO5_EGR_OFFSET 0x14
#define GPT_TIMx_2TO5_EGR_RESET_VALUE 0x00000000
typedef struct{
    uint32_t UG:1;
    uint32_t CC1G:1;
    uint32_t CC2G:1;
    uint32_t CC3G:1;
    uint32_t CC4G:1;
    uint32_t RESERVED_1:1;
    uint32_t TG:1;
    uint32_t RESERVED :9;
    uint32_t OFFSET_HW :16;
}GPT_TIMx_2TO5_EGR_ST;

#define GPT_TIMx_2TO5_CCMR1_OFFSET 0x18
#define GPT_TIMx_2TO5_CCMR1_RESET_VALUE 0x00000000
/*OUTPUT COMPARE STRUCT*/
typedef struct{
    uint32_t CC1S :2;
    uint32_t OC1FE :1;
    uint32_t OC1PE :1;
    uint32_t OC1M :3;
    uint32_t OC1CE :1;
    uint32_t CC2S :2;
    uint32_t OC2FE :1;
    uint32_t OC2PE :1;
    uint32_t OC2M :3;
    uint32_t OC2CE :1;
    uint32_t OFFSET_HW :16;
}GPT_TIMx_2TO5_CCMR1_OC_ST;
/*INPUT COMPARE STRUCT*/
typedef struct{
    uint32_t CC1S: 2;
    uint32_t IC1PSC :2;
    uint32_t IC1F :4;
    uint32_t CC2S :2;
    uint32_t IC2PSC :2;
    uint32_t IC2F :4;
    uint32_t OFFSET_HW :16;
}GPT_TIMx_2TO5_CCMR1_IC_ST;
/*FINAL REGISTER UNION
USE THIS DIRECTLY INSTEAD OF THOSE STRUCT*/
typedef union{
    GPT_TIMx_2TO5_CCMR1_OC_ST OC_ST;
    GPT_TIMx_2TO5_CCMR1_IC_ST IC_ST;
}GPT_TIMx_2TO5_CCMR1_UT;

#define GPT_TIMx_2TO5_CCMR2_OFFSET 0x1c
#define GPT_TIMx_2TO5_CCMR2_RESET_VALUE 0x00000000
/*OUTPUT COMPARE STRUCT*/
typedef struct{
    uint32_t CC3S :2;
    uint32_t OC3FE :1;
    uint32_t OC3PE :1;
    uint32_t OC3M :3;
    uint32_t OC3CE :1;
    uint32_t CC4S :2;
    uint32_t OC4FE :1;
    uint32_t OC4PE :1;
    uint32_t OC4M :3;
    uint32_t OC4CE :1;
    uint32_t OFFSET_HW :16;
}GPT_TIMx_2TO5_CCMR2_OC_ST;
/*INPUT COMPARE STRUCT*/
typedef struct{
    uint32_t CC3S: 2;
    uint32_t IC3PSC :2;
    uint32_t IC3F :4;
    uint32_t CC4S :2;
    uint32_t IC4PSC :2;
    uint32_t IC4F :4;
    uint32_t OFFSET_HW :16;
}GPT_TIMx_2TO5_CCMR2_IC_ST;
/*FINAL REGISTER UNION
USE THIS DIRECTLY INSTEAD OF THOSE STRUCT*/
typedef union{
    GPT_TIMx_2TO5_CCMR2_OC_ST OC_ST;
    GPT_TIMx_2TO5_CCMR2_IC_ST IC_ST;
}GPT_TIMx_2TO5_CCMR2_UT;

#define GPT_TIMx_2TO5_CCER_OFFSET 0x20
#define GPT_TIMx_2TO5_CCER_RESET_VALUE 0x00000000
typedef struct{
    uint32_t CC1E :1;
    uint32_t CC1P :1;
    uint32_t RESERVED_1 :1;
    uint32_t CC1NP :1;
    uint32_t CC2E :1;
    uint32_t CC2P :1;
    uint32_t RESERVED_2 :1;
    uint32_t CC2NP :1;
    uint32_t CC3E :1;
    uint32_t CC3P :1;
    uint32_t RESERVED_3 :1;
    uint32_t CC3NP :1;
    uint32_t CC4E :1;
    uint32_t CC4P :1;
    uint32_t RESERVED :1;
    uint32_t CC4NP :1;
    uint32_t OFFSET_HW :16;
}GPT_TIMx_2TO5_CCER_ST;

#define GPT_TIMx_2TO5_CNT_OFFSET 0x24
#define GPT_TIMx_2TO5_CNT_RESET_VALUE 0x00000000
typedef struct{
    uint32_t CNT :16;
    uint32_t CNT_HIGH :16; /*TIM2 and TIM5 use this as High Counter Value*/
}GPT_TIMx_2TO5_CNT_ST;

#define GPT_TIMx_2TO5_PSC_OFFSET 0x28
#define GPT_TIMx_2TO5_PSC_RESET_VALUE 0x00000000
typedef struct{
    uint32_t PSC :16;
    uint32_t OFFSET_HW :16;
}GPT_TIMx_2TO5_PSC_ST;

#define GPT_TIMx_2TO5_ARR_OFFSET 0x2c
#define GPT_TIMx_2TO5_AFF_RESET_VALUE 0xffffffff
typedef struct{
    uint32_t ARR :16;
    uint32_t ARR_HIGH :16;/*TIM2 and TIM5 use this as High ARR Value*/
}GPT_TIMx_2TO5_ARR_ST;

#define GPT_TIMx_2TO5_CCR1_OFFSET 0x34
#define GPT_TIMx_2TO5_CCR1_RESET_VALUE 0x00000000
typedef struct{
    uint32_t CCR1 :16;
    uint32_t CCR1_HIGH :16;/*TIM2 and TIM5 use this as High CCR1 Value*/
}GPT_TIMx_2TO5_CCR1_ST;

#define GPT_TIMx_2TO5_CCR2_OFFSET 0x38
#define GPT_TIMx_2TO5_CCR2_RESET_VALUE 0x00000000
typedef struct{
    uint32_t CCR2 :16;
    uint32_t CCR2_HIGH :16;/*TIM2 and TIM5 use this as High CCR2 Value*/
}GPT_TIMx_2TO5_CCR2_ST;

#define GPT_TIMx_2TO5_CCR3_OFFSET 0x3c
#define GPT_TIMx_2TO5_CCR3_RESET_VALUE 0x00000000
typedef struct{
    uint32_t CCR3 :16;
    uint32_t CCR3_HIGH :16;/*TIM2 and TIM5 use this as High CCR3 Value*/
}GPT_TIMx_2TO5_CCR3_ST;

#define GPT_TIMx_2TO5_CCR4_OFFSET 0x40
#define GPT_TIMx_2TO5_CCR4_RESET_VALUE 0x00000000
typedef struct{
    uint32_t CCR4 :16;
    uint32_t CCR4_HIGH :16;/*TIM2 and TIM5 use this as High CCR4 Value*/
}GPT_TIMx_2TO5_CCR4_ST;

#define GPT_TIMx_2TO5_DCR_OFFSET 0x48
#define GPT_TIMx_2TO5_DCR_RESET_VALUE 0x00000000
typedef struct{
    uint32_t DBA :5;
    uint32_t RESERVED_1 :3;
    uint32_t DBL :5;
    uint32_t RESERVED_2 :3;
    uint32_t OFFSET_HW :16;
}GPT_TIMx_2TO5_DCR_ST;

#define GPT_TIMx_2TO5_DMAR_OFFSET 0x4c
#define GPT_TIMx_2TO5_DMAR_RESET_VALUE 0x00000000
typedef struct{
    uint32_t DMAB :16;
    uint32_t OFFSET_HW :16;
}GPT_TIMx_2TO5_DMAR_ST;

/** I would put both the option registers into a single struct
*   But for the sake of not increasing complexity I'll just union them
*/

#define GPT_TIM2_OR_OFFSET 0x50
#define GPT_TIM2_OR_RESET_VALUE 0x00000000
typedef struct{
    uint32_t RESERVED_1 :10;
    uint32_t ITR1_RMP :2;
    uint32_t RESERVED_2 :4;
    uint32_t OFFSET_HW :16;
}GPT_TIM2_OR_ST;

#define GPT_TIM5_OR_OFFSET 0x50
#define GPT_TIM5_OR_RESET_VALUE 0x00000000
typedef struct{
    uint32_t RESERVED_1 :6;
    uint32_t ITR1_RMP :2;
    uint32_t RESERVED_2 :8;
    uint32_t OFFSET_HW :16;
}GPT_TIM5_OR_ST;

typedef union{
    GPT_TIM2_OR_ST TIM2_OR;
    GPT_TIM5_OR_ST TIM5_OR;
}GPT_2_5_OR_UT;

/*GPT 2 to 5 SUPER STRUCTURE*/
typedef struct {
    GPT_TIMx_2TO5_CR1_ST CR1;
    GPT_TIMx_2TO5_CR2_ST CR2;
    GPT_TIMx_2TO5_SMCR_ST SMCR;
    GPT_TIMx_2TO5_DIER_ST DIER;
    GPT_TIMx_2TO5_SR_ST SR;
    GPT_TIMx_2TO5_EGR_ST EGR;
    GPT_TIMx_2TO5_CCMR1_UT CCMR1;
    GPT_TIMx_2TO5_CCMR2_UT CCMR2;
    GPT_TIMx_2TO5_CCER_ST CCER;
    GPT_TIMx_2TO5_CNT_ST CNT;
    GPT_TIMx_2TO5_PSC_ST PSC;
    GPT_TIMx_2TO5_ARR_ST ARR;
    RESERVED_W_ST RESERVED_1;
    GPT_TIMx_2TO5_CCR1_ST CCR1;
    GPT_TIMx_2TO5_CCR2_ST CCR2;
    GPT_TIMx_2TO5_CCR3_ST CCR3;
    GPT_TIMx_2TO5_CCR4_ST CCR4;
    RESERVED_W_ST RESERVED_2;
    GPT_TIMx_2TO5_DCR_ST DCR;
    GPT_TIMx_2TO5_DMAR_ST DMAR;
    GPT_2_5_OR_UT OR;
}GPT_TIMx_2TO5_ST;

/*GPT 2 to 5 SUPER UNION*/
typedef union {
    GPT_TIMx_2TO5_CR1_ST CR1;
    GPT_TIMx_2TO5_CR2_ST CR2;
    GPT_TIMx_2TO5_SMCR_ST SMCR;
    GPT_TIMx_2TO5_DIER_ST DIER;
    GPT_TIMx_2TO5_SR_ST SR;
    GPT_TIMx_2TO5_EGR_ST EGR;
    GPT_TIMx_2TO5_CCMR1_UT CCMR1;
    GPT_TIMx_2TO5_CCMR2_UT CCMR2;
    GPT_TIMx_2TO5_CCER_ST CCER;
    GPT_TIMx_2TO5_CNT_ST CNT;
    GPT_TIMx_2TO5_PSC_ST PSC;
    GPT_TIMx_2TO5_ARR_ST ARR;
    RESERVED_W_ST RESERVED_1;
    GPT_TIMx_2TO5_CCR1_ST CCR1;
    GPT_TIMx_2TO5_CCR2_ST CCR2;
    GPT_TIMx_2TO5_CCR3_ST CCR3;
    GPT_TIMx_2TO5_CCR4_ST CCR4;
    RESERVED_W_ST RESERVED_2;
    GPT_TIMx_2TO5_DCR_ST DCR;
    GPT_TIMx_2TO5_DMAR_ST DMAR;
    GPT_2_5_OR_UT OR;
}GPT_TIMx_2TO5_UT;

/*END OF TIM2_TIM5*/

/*TIM9&TIM12*/
#define GPT_TIMx_9AND12_CR1_OFFSET 0x00
#define GPT_TIMx_9AND12_CR1_RESET_VALUE 0x00000000
typedef struct{
    uint32_t CEN  :1;
    uint32_t UDIS :1;
    uint32_t URS :1;
    uint32_t OPM :1;
    uint32_t RESERVED_1 :3;
    uint32_t ARPE :1;
    uint32_t CKD :2;
    uint32_t RESERVED :6;
    uint32_t OFFSET_HW :16;
}GPT_TIMx_9AND12_CR1_ST;

#define GPT_TIMx_9AND12_SMCR_OFFSET 0x08
#define GPT_TIMx_9AND12_SMCR_RESET_VALUE 0x00000000
typedef struct{
    uint32_t SMS :3;
    uint32_t RESERVED_1 :1;
    uint32_t TS :3;
    uint32_t MSM :1;
    uint32_t RESERVED_2 :8;
    uint32_t OFFSET_HW :16;
}GPT_TIMx_9AND12_SMCR_ST;

#define GPT_TIMx_9AND12_DIER_OFFSET 0x0c
#define GPT_TIMx_9AND12_DIER_RESET_VALUE 0x00000000
typedef struct{
    uint32_t UIE :1;
    uint32_t CC1IE :1;
    uint32_t CC2IE :1;
    uint32_t RESERVED_1 :3;
    uint32_t TIE :1;
    uint32_t RESERVED_2 :9;
    uint32_t OFFSET_HW :16;
}GPT_TIMx_9AND12_DIER_ST;

#define GPT_TIMx_9AND12_SR_OFFSET 0x10
#define GPT_TIMx_9AND12_SR_RESET_VALUE 0x00000000
typedef struct{
    uint32_t UIF :1;
    uint32_t CC1IF :1;
    uint32_t CC2IF :1;
    uint32_t RESERVED_1 :3;
    uint32_t TIF :1;
    uint32_t RESERVED_2 :2;
    uint32_t CC1OF :1;
    uint32_t CC2OF :1;
    uint32_t RESERVED_3 :5;
    uint32_t OFFSET_HW :16;
}GPT_TIMx_9AND12_SR_ST;

#define GPT_TIMx_9AND12_EGR_OFFSET 0x14
#define GPT_TIMx_9AND12_EGR_RESET_VALUE 0x00000000
typedef struct{
    uint32_t UG:1;
    uint32_t CC1G:1;
    uint32_t CC2G:1;
    uint32_t RESERVED_1:3;
    uint32_t TG:1;
    uint32_t RESERVED :9;
    uint32_t OFFSET_HW :16;
}GPT_TIMx_9AND12_EGR_ST;

#define GPT_TIMx_9AND12_CCMR1_OFFSET 0x18
#define GPT_TIMx_9AND12_CCMR1_RESET_VALUE 0x00000000
/*OUTPUT COMPARE STRUCT*/
typedef struct{
    uint32_t CC1S :2;
    uint32_t OC1FE :1;
    uint32_t OC1PE :1;
    uint32_t OC1M :3;
    uint32_t RESERVED_1 :1;
    uint32_t CC2S :2;
    uint32_t OC2FE :1;
    uint32_t OC2PE :1;
    uint32_t OC2M :3;
    uint32_t RESERVED_2 :1;
    uint32_t OFFSET_HW :16;
}GPT_TIMx_9AND12_CCMR1_OC_ST;
/*INPUT COMPARE STRUCT*/
typedef struct{
    uint32_t CC1S: 2;
    uint32_t IC1PSC :2;
    uint32_t IC1F :4;
    uint32_t CC2S :2;
    uint32_t IC2PSC :2;
    uint32_t IC2F :4;
    uint32_t OFFSET_HW :16;
}GPT_TIMx_9AND12_CCMR1_IC_ST;
/*FINAL REGISTER UNION
USE THIS DIRECTLY INSTEAD OF THOSE STRUCT*/
typedef union{
    GPT_TIMx_9AND12_CCMR1_OC_ST OC_ST;
    GPT_TIMx_9AND12_CCMR1_IC_ST IC_ST;
}GPT_TIMx_9AND12_CCMR1_UT;

#define GPT_TIMx_9AND12_CCER_OFFSET 0x20
#define GPT_TIMx_9AND12_CCER_RESET_VALUE 0x00000000
typedef struct{
    uint32_t CC1E :1;
    uint32_t CC1P :1;
    uint32_t RESERVED_1 :1;
    uint32_t CC1NP :1;
    uint32_t CC2E :1;
    uint32_t CC2P :1;
    uint32_t RESERVED_2 :1;
    uint32_t CC2NP :1;
    uint32_t RESERVED :8;
    uint32_t OFFSET_HW :16;
}GPT_TIMx_9AND12_CCER_ST;

#define GPT_TIMx_9AND12_CNT_OFFSET 0x24
#define GPT_TIMx_9AND12_CNT_RESET_VALUE 0x00000000
typedef struct{
    uint32_t CNT :16;
    uint32_t OFFSET_HW :16;
}GPT_TIMx_9AND12_CNT_ST;

#define GPT_TIMx_9AND12_PSC_OFFSET 0x28
#define GPT_TIMx_9AND12_PSC_RESET_VALUE 0x00000000
typedef struct{
    uint32_t PSC :16;
    uint32_t OFFSET_HW :16;
}GPT_TIMx_9AND12_PSC_ST;

#define GPT_TIMx_9AND12_ARR_OFFSET 0x2c
#define GPT_TIMx_9AND12_AFF_RESET_VALUE 0xffffffff
typedef struct{
    uint32_t ARR :16;
    uint32_t OFFSET_HW :16;
}GPT_TIMx_9AND12_ARR_ST;

#define GPT_TIMx_9AND12_CCR1_OFFSET 0x34
#define GPT_TIMx_9AND12_CCR1_RESET_VALUE 0x00000000
typedef struct{
    uint32_t CCR1 :16;
    uint32_t OFFSET_HW :16;
}GPT_TIMx_9AND12_CCR1_ST;

#define GPT_TIMx_9AND12_CCR2_OFFSET 0x38
#define GPT_TIMx_9AND12_CCR2_RESET_VALUE 0x00000000
typedef struct{
    uint32_t CCR2 :16;
    uint32_t OFFSET_HW :16;
}GPT_TIMx_9AND12_CCR2_ST;

/*GPT 9 and 12 SUPER STRUCTURE*/
typedef struct {
    GPT_TIMx_9AND12_CR1_ST CR1;
    RESERVED_W_ST RESERVED_1;
    GPT_TIMx_9AND12_SMCR_ST SMCR;
    GPT_TIMx_9AND12_DIER_ST DIER;
    GPT_TIMx_9AND12_SR_ST SR;
    GPT_TIMx_9AND12_EGR_ST EGR;
    GPT_TIMx_9AND12_CCMR1_UT CCMR1;
    RESERVED_W_ST RESERVED_2;
    GPT_TIMx_9AND12_CCER_ST CCER;
    GPT_TIMx_9AND12_CNT_ST CNT;
    GPT_TIMx_9AND12_PSC_ST PSC;
    GPT_TIMx_9AND12_ARR_ST ARR;
    RESERVED_W_ST RESERVED_3;
    GPT_TIMx_9AND12_CCR1_ST CCR1;
    GPT_TIMx_9AND12_CCR2_ST CCR2;
    RESERVED_W_ST RESERVED_4;
    RESERVED_W_ST RESERVED_5;
    RESERVED_W_ST RESERVED_6;
    RESERVED_W_ST RESERVED_7;
    RESERVED_W_ST RESERVED_8;
}GPT_TIMx_9AND12_ST;

/*GPT 9 and 12 SUPER UNION*/
typedef union {
    GPT_TIMx_9AND12_CR1_ST CR1;
    RESERVED_W_ST RESERVED_1;
    GPT_TIMx_9AND12_SMCR_ST SMCR;
    GPT_TIMx_9AND12_DIER_ST DIER;
    GPT_TIMx_9AND12_SR_ST SR;
    GPT_TIMx_9AND12_EGR_ST EGR;
    GPT_TIMx_9AND12_CCMR1_UT CCMR1;
    RESERVED_W_ST RESERVED_2;
    GPT_TIMx_9AND12_CCER_ST CCER;
    GPT_TIMx_9AND12_CNT_ST CNT;
    GPT_TIMx_9AND12_PSC_ST PSC;
    GPT_TIMx_9AND12_ARR_ST ARR;
    RESERVED_W_ST RESERVED_3;
    GPT_TIMx_9AND12_CCR1_ST CCR1;
    GPT_TIMx_9AND12_CCR2_ST CCR2;
    RESERVED_W_ST RESERVED_4;
    RESERVED_W_ST RESERVED_5;
    RESERVED_W_ST RESERVED_6;
    RESERVED_W_ST RESERVED_7;
    RESERVED_W_ST RESERVED_8;
}GPT_TIMx_9AND12_UT;

/*END OF TIM9&TIM12*/

/*TIM10/11/13/14*/
#define GPT_TIMx_10_11_13_14_CR1_OFFSET 0x00
#define GPT_TIMx_10_11_13_14_CR1_RESET_VALUE 0x00000000
typedef struct{
    uint32_t CEN  :1;
    uint32_t UDIS :1;
    uint32_t URS :1;
    uint32_t OPM :1;
    uint32_t RESERVED_1 :3;
    uint32_t ARPE :1;
    uint32_t CKD :2;
    uint32_t RESERVED :6;
    uint32_t OFFSET_HW :16;
}GPT_TIMx_10_11_13_14_CR1_ST;

#define GPT_TIMx_10_11_13_14_DIER_OFFSET 0x0c
#define GPT_TIMx_10_11_13_14_DIER_RESET_VALUE 0x00000000
typedef struct{
    uint32_t UIE :1;
    uint32_t CC1IE :1;
    uint32_t RESERVED_1 :14;
    uint32_t OFFSET_HW :16;
}GPT_TIMx_10_11_13_14_DIER_ST;

#define GPT_TIMx_10_11_13_14_SR_OFFSET 0x10
#define GPT_TIMx_10_11_13_14_SR_RESET_VALUE 0x00000000
typedef struct{
    uint32_t UIF :1;
    uint32_t CC1IF :1;
    uint32_t RESERVED_1 :7;
    uint32_t CC1OF :1;
    uint32_t RESERVED_2 :6;
    uint32_t OFFSET_HW :16;
}GPT_TIMx_10_11_13_14_SR_ST;

#define GPT_TIMx_10_11_13_14_EGR_OFFSET 0x14
#define GPT_TIMx_10_11_13_14_EGR_RESET_VALUE 0x00000000
typedef struct{
    uint32_t UG:1;
    uint32_t CC1G:1;
    uint32_t RESERVED :14;
    uint32_t OFFSET_HW :16;
}GPT_TIMx_10_11_13_14_EGR_ST;

#define GPT_TIMx_10_11_13_14_CCMR1_OFFSET 0x18
#define GPT_TIMx_10_11_13_14_CCMR1_RESET_VALUE 0x00000000
/*OUTPUT COMPARE STRUCT*/
typedef struct{
    uint32_t CC1S :2;
    uint32_t OC1FE :1;
    uint32_t OC1PE :1;
    uint32_t OC1M :3;
    uint32_t RESERVED_1 :9;
    uint32_t OFFSET_HW :16;
}GPT_TIMx_10_11_13_14_CCMR1_OC_ST;
/*INPUT COMPARE STRUCT*/
typedef struct{
    uint32_t CC1S: 2;
    uint32_t IC1PSC :2;
    uint32_t IC1F :4;
    uint32_t RESERVED_1 :8;
    uint32_t OFFSET_HW :16;
}GPT_TIMx_10_11_13_14_CCMR1_IC_ST;
/*FINAL REGISTER UNION
USE THIS DIRECTLY INSTEAD OF THOSE STRUCT*/
typedef union{
    GPT_TIMx_10_11_13_14_CCMR1_OC_ST OC_ST;
    GPT_TIMx_10_11_13_14_CCMR1_IC_ST IC_ST;
}GPT_TIMx_10_11_13_14_CCMR1_UT;

#define GPT_TIMx_10_11_13_14_CCER_OFFSET 0x20
#define GPT_TIMx_10_11_13_14_CCER_RESET_VALUE 0x00000000
typedef struct{
    uint32_t CC1E :1;
    uint32_t CC1P :1;
    uint32_t RESERVED_1 :1;
    uint32_t CC1NP :1;
    uint32_t RESERVED :12;
    uint32_t OFFSET_HW :16;
}GPT_TIMx_10_11_13_14_CCER_ST;

#define GPT_TIMx_10_11_13_14_CNT_OFFSET 0x24
#define GPT_TIMx_10_11_13_14_CNT_RESET_VALUE 0x00000000
typedef struct{
    uint32_t CNT :16;
    uint32_t OFFSET_HW :16;
}GPT_TIMx_10_11_13_14_CNT_ST;

#define GPT_TIMx_10_11_13_14_PSC_OFFSET 0x28
#define GPT_TIMx_10_11_13_14_PSC_RESET_VALUE 0x00000000
typedef struct{
    uint32_t PSC :16;
    uint32_t OFFSET_HW :16;
}GPT_TIMx_10_11_13_14_PSC_ST;

#define GPT_TIMx_10_11_13_14_ARR_OFFSET 0x2c
#define GPT_TIMx_10_11_13_14_AFF_RESET_VALUE 0xffffffff
typedef struct{
    uint32_t ARR :16;
    uint32_t OFFSET_HW :16;
}GPT_TIMx_10_11_13_14_ARR_ST;

#define GPT_TIMx_10_11_13_14_CCR1_OFFSET 0x34
#define GPT_TIMx_10_11_13_14_CCR1_RESET_VALUE 0x00000000
typedef struct{
    uint32_t CCR1 :16;
    uint32_t OFFSET_HW :16;
}GPT_TIMx_10_11_13_14_CCR1_ST;

#define GPT_TIM11_OR_OFFSET 0x50
#define GPT_TIM11_OR_RESET_VALUE 0x00000000
typedef struct{
    uint32_t TI1_RMP :2;
    uint32_t RESERVED_1 :14;
    uint32_t OFFSET_HW :16;
}GPT_TIM11_OR_ST;

/*GPT 9 and 12 SUPER STRUCTURE*/
typedef struct {
    GPT_TIMx_10_11_13_14_CR1_ST CR1;
    RESERVED_W_ST RESERVED_1;
    RESERVED_W_ST RESERVED_2;
    GPT_TIMx_10_11_13_14_DIER_ST DIER;
    GPT_TIMx_10_11_13_14_SR_ST SR;
    GPT_TIMx_10_11_13_14_EGR_ST EGR;
    GPT_TIMx_10_11_13_14_CCMR1_UT CCMR1;
    RESERVED_W_ST RESERVED_3;
    GPT_TIMx_10_11_13_14_CCER_ST CCER;
    GPT_TIMx_10_11_13_14_CNT_ST CNT;
    GPT_TIMx_10_11_13_14_PSC_ST PSC;
    GPT_TIMx_10_11_13_14_ARR_ST ARR;
    RESERVED_W_ST RESERVED_4;
    GPT_TIMx_10_11_13_14_CCR1_ST CCR1;
    RESERVED_W_ST RESERVED_5;
    RESERVED_W_ST RESERVED_6;
    RESERVED_W_ST RESERVED_7;
    RESERVED_W_ST RESERVED_8;
    RESERVED_W_ST RESERVED_9;
    RESERVED_W_ST RESERVED_10;
    GPT_TIM11_OR_ST OR_ST;
}GPT_TIMx_10_11_13_14_ST;

/*GPT 9 and 12 SUPER UNION*/
typedef union {
    GPT_TIMx_10_11_13_14_CR1_ST CR1;
    RESERVED_W_ST RESERVED_1;
    RESERVED_W_ST RESERVED_2;
    GPT_TIMx_10_11_13_14_DIER_ST DIER;
    GPT_TIMx_10_11_13_14_SR_ST SR;
    GPT_TIMx_10_11_13_14_EGR_ST EGR;
    GPT_TIMx_10_11_13_14_CCMR1_UT CCMR1;
    RESERVED_W_ST RESERVED_3;
    GPT_TIMx_10_11_13_14_CCER_ST CCER;
    GPT_TIMx_10_11_13_14_CNT_ST CNT;
    GPT_TIMx_10_11_13_14_PSC_ST PSC;
    GPT_TIMx_10_11_13_14_ARR_ST ARR;
    RESERVED_W_ST RESERVED_4;
    GPT_TIMx_10_11_13_14_CCR1_ST CCR1;
    RESERVED_W_ST RESERVED_5;
    RESERVED_W_ST RESERVED_6;
    RESERVED_W_ST RESERVED_7;
    RESERVED_W_ST RESERVED_8;
    RESERVED_W_ST RESERVED_9;
    RESERVED_W_ST RESERVED_10;
    GPT_TIM11_OR_ST OR_ST;
}GPT_TIMx_10_11_13_14_UT;

/*END OF TIM10/11/13/14*/

/*END OF GENERAL PURPOSE TIMERS*/

/*BASIC TIMERS*/
#define BT_TIMx_CR1_OFFSET 0x00
#define BT_TIMx_CR1_RESET_VALUE 0x00000000
typedef struct {
    uint32_t CEN :1;
    uint32_t UDIS :1;
    uint32_t URS :1;
    uint32_t OPM :1;
    uint32_t RESERVED_1 :3;
    uint32_t ARPE :1;
    uint32_t RESERVED_2 :8;
    uint32_t OFFSET_HW :16;
}BT_TIMx_CR1_ST;

#define BT_TIMx_CR2_OFFSET 0x04
#define BT_TIMx_CR2_RESET_VALUE 0x00000000
typedef struct {
    uint32_t RESERVED_1 :4;
    uint32_t MMS :3;
    uint32_t RESERVED_2 :9;
    uint32_t OFFSET_HW :16;
}BT_TIMx_CR2_ST;

#define BT_TIMx_DIER_OFFSET 0x0c
#define BT_TIMx_DIER_RESET_VALUE 0x00000000
typedef struct {
    uint32_t UIE :1;
    uint32_t RESERVED_1 :7;
    uint32_t UDE :1;
    uint32_t RESERVED_2 :7;
    uint32_t OFFSET_HW :16;
}BT_TIMx_DIER_ST;

#define BT_TIMx_SR_OFFSET 0x10
#define BT_TIMx_SR_RESET_VALUE 0x00000000
typedef struct {
    uint32_t UIF :1;
    uint32_t RESERVED :15;
    uint32_t OFFSET_HW :16;
}BT_TIMx_SR_ST;

#define BT_TIMx_EGR_OFFSET 0x14
#define BT_TIMx_EGR_RESET_VALUE 0x00000000
typedef struct {
    uint32_t UG :1;
    uint32_t RESERVED :15;
    uint32_t OFFSET_HW :16;
}BT_TIMx_EGR_ST;

#define BT_TIMx_CNT_OFFSET 0x24
#define BT_TIMx_CNT_RESET_VALUE 0x00000000
typedef struct {
    uint32_t CNT :16;
    uint32_t OFFSET_HW :16;
}BT_TIMx_CNT_ST;

#define BT_TIMx_PSC_OFFSET 0x28
#define BT_TIMx_PSC_RESET_VALUE 0x00000000
typedef struct {
    uint32_t PSC :16;
    uint32_t OFFSET_HW :16;
}BT_TIMx_PSC_ST;

#define BT_TIMx_ARR_OFFSET 0x2c
#define BT_TIMx_ARR_RESET_VALUE 0xffffffff
typedef struct {
    uint32_t ARR :16;
    uint32_t OFFSET_HW :16;
}BT_TIMx_ARR_ST;

/*BT SUPER STRUCTURE*/
typedef struct{
    BT_TIMx_CR1_ST CR1;
    BT_TIMx_CR2_ST CR2;
    BT_TIMx_DIER_ST DIER;
    BT_TIMx_SR_ST SR;
    BT_TIMx_EGR_ST EGR;
    BT_TIMx_CNT_ST CNT;
    BT_TIMx_PSC_ST PSC;
    BT_TIMx_ARR_ST ARR;
}BT_TIMx_ST;
/*BT SUPER UNION*/
typedef union{
    BT_TIMx_CR1_ST CR1;
    BT_TIMx_CR2_ST CR2;
    BT_TIMx_DIER_ST DIER;
    BT_TIMx_SR_ST SR;
    BT_TIMx_EGR_ST EGR;
    BT_TIMx_CNT_ST CNT;
    BT_TIMx_PSC_ST PSC;
    BT_TIMx_ARR_ST ARR;
}BT_TIMx_UT;

/*END OF BASIC TIMERS*/

#endif