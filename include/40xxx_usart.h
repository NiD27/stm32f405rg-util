#ifndef _NID_40xxx_usart
#define _NID_40xxx_usart

#include <customint.h>

#define UART4_START_ADDRESS 0x40004c00
#define UART4_END_ADDRESS 0x4004fff

typedef struct{
    volatile uint32_t PE :1;
    volatile uint32_t FE :1;
    volatile uint32_t NF :1;
    volatile uint32_t ORE :1;
    volatile uint32_t IDLE :1;
    volatile uint32_t RXNE :1;
    volatile uint32_t TC :1;
    volatile uint32_t TXE :1;
    volatile uint32_t LBD :1;
    volatile uint32_t CTS :1;
    volatile uint32_t RESERVED :22;
}USART_SR_ST;

typedef struct{
    volatile uint32_t DATA :9;
    volatile uint32_t RESERVED :23;
}USART_DR_ST;

typedef struct{
    volatile uint32_t DIV_FRACTION :4;
    volatile uint32_t DIV_MANTISSA :12;
    volatile uint32_t RESERVED :16;
}USART_BRR_ST;

typedef struct{
    volatile uint32_t SBK :1;
    volatile uint32_t RWU :1;
    volatile uint32_t RE :1;
    volatile uint32_t TE :1;
    volatile uint32_t IDLEIE :1;
    volatile uint32_t RXNEIE :1;
    volatile uint32_t TCIE :1;
    volatile uint32_t TXEIE :1;
    volatile uint32_t PEIE :1;
    volatile uint32_t PS :1;
    volatile uint32_t PCE :1;
    volatile uint32_t WAKE :1;
    volatile uint32_t M :1;
    volatile uint32_t UE :1;
    volatile uint32_t RESERVED_1 :1;
    volatile uint32_t OVER8 :1;
    volatile uint32_t RESERVED :16;
}USART_CR1_ST;

typedef struct{
    volatile uint32_t ADD :4;
    volatile uint32_t RESERVED_1 :1;
    volatile uint32_t LBDL :1;
    volatile uint32_t LBDIE :1;
    volatile uint32_t RESERVED_2 :1;
    volatile uint32_t LBCL :1;
    volatile uint32_t CPHA :1;
    volatile uint32_t CPOL :1;
    volatile uint32_t CLKEN :1;
    volatile uint32_t STOP :2;
    volatile uint32_t LINEN :1;
    volatile uint32_t RESERVED :17;
}USART_CR2_ST;

typedef struct{
    volatile uint32_t EIE :1;
    volatile uint32_t IREN :1;
    volatile uint32_t IRLP :1;
    volatile uint32_t HDSEL :1;
    volatile uint32_t NACK :1;
    volatile uint32_t SCEN :1;
    volatile uint32_t DMAR :1;
    volatile uint32_t DMAT :1;
    volatile uint32_t RTSE :1;
    volatile uint32_t CTSE :1;
    volatile uint32_t CTSIE :1;
    volatile uint32_t ONEBIT :1;
    volatile uint32_t RESERVED :20;
}USART_CR3_ST;

typedef struct{
    volatile uint32_t PSE :8;
    volatile uint32_t GT :8;
    volatile uint32_t RESERVED :16;
}USART_GTPR_ST;



#endif