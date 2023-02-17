#ifndef _NID_40xxx_RCC_
#define _NID_40xxx_RCC_

typedef struct{
    uint32_t SW0 :1;
    uint32_t SW1 :1;
    uint32_t SWS0 :1;
    uint32_t SWS1 :1;
    uint32_t HPRE :4;
    uint32_t RESERVED_1 :2;
    uint32_t PPRE1 :3;
    uint32_t PPRE2 :3;
    uint32_t RTCPRE :5;
    uint32_t MCO1 :2;
    uint32_t I2SSCR :1;
    uint32_t MCO1PRE :3;
    uint32_t MCO2PRE :3;
    uint32_t MCO2 :2;
}RCC_CFGR_ST;

#endif