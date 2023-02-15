#ifndef _NID_40xxx_timer_
#ifndef _NID_40xxx_timer_

/*Though HW and Byte access are available,
all structures are by default 32bits with 16bit offset where necessary*/

#define TIMx_CR1_OFFSET 0x00
#define TIMx_CR1_RESET 0x00000000
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
}TIMx_CR1_ST;

#define TIMx_CR2_OFFSET 0x04
#define TIMx_CR2_RESET 0x00000000
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
}TIMx_CR2_ST;

#define TIMx_SMCR_OFFSET 0x08
#define TIMx_SMCR_RESET 0x00000000
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
}TIMx_SMCR_ST;

#define TIMx_DIER_OFFSET 0x0c
#define TIMx_DIER_RESET 0x00000000
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
}TIMx_DIER_ST;

#define TIMx_SR_OFFSET 0x10
#define TIMx_SR_RESET 0x00000000
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
}TIMx_SR_ST;

#define TIMx_EGR_OFFSET 0x14
#define TIMx_EGR_RESET 0x00000000
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
}TIMx_EGR_ST;

#define TIMx_CCMR1_OFFSET 0x18
#define TIMx_CCMR1_RESET 0x00000000
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
}TIMx_CCMR1_OC_ST;
/*INPUT COMPARE STRUCT*/
typedef struct{
    uint32_t CC1S: 2;
    uint32_t IC1PSC :2;
    uint32_t IC1F :4;
    uint32_t CC2S :2;
    uint32_t IC2PSC :2;
    uint32_t IC2F :4;
    uint32_t OFFSET_HW :16;
}TIMx_CCMR1_IC_ST;
/*FINAL REGISTER UNION
USE THIS DIRECTLY INSTEAD OF THOSE STRUCT*/
typedef union{
    TIMx_CCMR1_OC_ST OC_ST;
    TIMx_CCMR1_IC_ST IC_ST;
}TIMx_CCMR1_UT;

#define TIMx_CCMR2_OFFSET 0x1c
#define TIMx_CCMR2_RESET 0x00000000
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
}TIMx_CCMR2_OC_ST;
/*INPUT COMPARE STRUCT*/
typedef struct{
    uint32_t CC3S: 2;
    uint32_t IC3PSC :2;
    uint32_t IC3F :4;
    uint32_t CC4S :2;
    uint32_t IC4PSC :2;
    uint32_t IC4F :4;
    uint32_t OFFSET_HW :16;
}TIMx_CCMR2_IC_ST;
/*FINAL REGISTER UNION
USE THIS DIRECTLY INSTEAD OF THOSE STRUCT*/
typedef union{
    TIMx_CCMR2_OC_ST OC_ST;
    TIMx_CCMR2_IC_ST IC_ST;
}TIMx_CCMR2_UT;

#define TIMx_CCER_OFFSET 0x20
#define TIMx_CCER_RESET 0x00000000
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
}TIMx_CCER;

#define TIMx_CNT_OFFSET 0x24
#define TIMx_CNT_RESET 0x00000000
typedef struct{
    uint32_t CNT :16;
    uint32_t OFFSET_HW :16;
}TIMx_CNT;

#define TIMx_PSC_OFFSET 0x28
#define TIMx_PSC_RESET 0x00000000
typedef struct{
    uint32_t PSC :16;
    uint32_t OFFSET_HW :16;
}TIMx_PSC;

#define TIMx_ARR_OFFSET 0x2c
#define TIMx_AFF_RESET 0x0000ffff
typedef struct{
    uint32_t ARR :16;
    uint32_t OFFSET_HW :16;
}TIMx_ARR;

#define TIMx_RCR_OFFSET 0x30
#define TIMx_RCR_RESET 0x00000000
typedef struct{
    uint32_t REP :8;
    uint32_t RESERVED :8;
    uint32_t OFFSET_HW :16;
}TIMx_RCR;

#define TIMx_CCR1_OFFSET 0x34
#define TIMx_CCR1_RESET 0x00000000
typedef struct{
    uint32_t CCR1 :16;
    uint32_t OFFSET_HW :16;
}TIMx_CCR1;

#define TIMx_CCR2_OFFSET 0x38
#define TIMx_CCR2_RESET 0x00000000
typedef struct{
    uint32_t CCR2 :16;
    uint32_t OFFSET_HW :16;
}TIMx_CCR2;

#define TIMx_CCR3_OFFSET 0x3c
#define TIMx_CCR3_RESET 0x00000000
typedef struct{
    uint32_t CCR3 :16;
    uint32_t OFFSET_HW :16;
}TIMx_CCR3;

#define TIMx_CCR4_OFFSET 0x40
#define TIMx_CCR4_RESET 0x00000000
typedef struct{
    uint32_t CCR4 :16;
    uint32_t OFFSET_HW :16;
}TIMx_CCR4;

#define TIMx_BDTR_OFFSET 0x44
#define TIMx_BDTR_RESET 0x00000000
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
}TIMx_BDTR;

#define TIMx_DCR_OFFSET 0x48
#define TIMx_DCR_RESET 0x00000000
typedef struct{
    uint32_t DBA :5;
    uint32_t RESERVED_1 :3;
    uint32_t DBL :5;
    uint32_t RESERVED_2 :3;
    uint32_t OFFSET_HW :16;
}TIMx_DCR;

#define TIMx_DMAR_OFFSET 0x4c
#define TIMx_DMAR_RESET 0x00000000
typedef struct{
    uint32_t DMAB :32;
}TIMx_DMAR;

#endif