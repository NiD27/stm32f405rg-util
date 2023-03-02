/***********************************
* March 2, 2023
* Author : Aravind
***********************************/
#ifndef _NID_40xxx_i2c
#define _NID_40xxx_i2c

#include <customint.h>

#define I2C1_ADDRESS 0x40005400
#define I2C2_ADDRESS 0x40005800
#define I2C3_ADDRESS 0x40005c00

typedef struct{
volatile uint32_t PE :1;
volatile uint32_t SMBUS :1;
volatile uint32_t RESERVED_1 :1;
volatile uint32_t SMBTYPE :1;
volatile uint32_t ENARP :1;
volatile uint32_t ENPEC :1;
volatile uint32_t ENGC :1;
volatile uint32_t NOSTRECTCH :1;
volatile uint32_t START :1;
volatile uint32_t STOP :1;
volatile uint32_t ACK :1;
volatile uint32_t POS :1;
volatile uint32_t PEC :1;
volatile uint32_t ALERT :1;
volatile uint32_t RESERVED_2 :1;
volatile uint32_t SWRST :1;
volatile uint32_t RESERVED_3 :16;
}I2C_CR1_ST;

typedef struct{
volatile uint32_t FREQ :6;
volatile uint32_t RESERVED_1 :2;
volatile uint32_t ITERREN :1;
volatile uint32_t ITEVTEN :1;
volatile uint32_t ITBUFEN :1;
volatile uint32_t DMAEN :1;
volatile uint32_t LAST :1;
volatile uint32_t RESERVED_2 :19;
}I2C_CR2_ST;

typedef struct{
    volatile uint32_t ADD0 :1;
    volatile uint32_t ADD_1 :7;
    volatile uint32_t ADD_2 :2;
    volatile uint32_t RESERVED_1 :5;
    volatile uint32_t ADDMODE :1;
    volatile uint32_t RESERVED_2 :16;
}I2C_OAR1_ST;

typedef struct{
volatile uint32_t ENDUAL :1;
volatile uint32_t ADD2 :7;
volatile uint32_t RESERVED :24;
}I2C_OAR2_ST;

typedef struct{
volatile uint32_t DR :8;
volatile uint32_t RESERVED :24;
}I2C_DR_ST;

typedef struct{
volatile uint32_t SB :1;
volatile uint32_t ADDR :1;
volatile uint32_t BTF :1;
volatile uint32_t ADD10 :1;
volatile uint32_t STOPF :1;
volatile uint32_t RESERVED_1 :1;
volatile uint32_t RxNE :1;
volatile uint32_t TxE :1;
volatile uint32_t BERR :1;
volatile uint32_t ARLO :1;
volatile uint32_t AF :1;
volatile uint32_t OVR :1;
volatile uint32_t PECERR :1;
volatile uint32_t RESERVED_2 :1;
volatile uint32_t TIMEOUT :1;
volatile uint32_t SMBALERT :1;
volatile uint32_t RESERVED_2 :16;
}I2C_SR1_ST;

typedef struct{
volatile uint32_t MSL :1;
volatile uint32_t BUSY :1;
volatile uint32_t TRA :1;
volatile uint32_t RESERVED_1 :1;
volatile uint32_t GENCALL :1;
volatile uint32_t SMBDEFAULT :1;
volatile uint32_t SMBHOST :1;
volatile uint32_t DUALF :1;
volatile uint32_t PEC :8;
volatile uint32_t RESERVED_2 :16;
}I2C_SR2_ST;

typedef struct{
volatile uint32_t CCR :12;
volatile uint32_t RESERVED :2;
volatile uint32_t DUTY :1;
volatile uint32_t FS :1;
volatile uint32_t RESERVED_2 :16;
}I2C_CCR_ST;

typedef struct{
volatile uint32_t TRISE :6;
volatile uint32_t RESERVED :26;
}I2C_TRISE_ST;

typedef struct{
volatile uint32_t DNF :4;
volatile uint32_t ANOFF :1;
volatile uint32_t RESERVED :27;
}I2C_FLTR_ST;

typedef struct{
I2C_CR1_ST CR1;
I2C_CR2_ST CR2;
I2C_OAR1_ST OAR1;
I2C_OAR2_ST OAR2;
I2C_DR_ST DR;
I2C_SR1_ST SR1;
I2C_SR2_ST SR2;
I2C_CCR_ST CCR;
I2C_TRISE_ST TRISE;
I2C_FLTR_ST FLTR;
}I2C_REGISTERS_ST;

typedef union{
I2C_CR1_ST CR1;
I2C_CR2_ST CR2;
I2C_OAR1_ST OAR1;
I2C_OAR2_ST OAR2;
I2C_DR_ST DR;
I2C_SR1_ST SR1;
I2C_SR2_ST SR2;
I2C_CCR_ST CCR;
I2C_TRISE_ST TRISE;
I2C_FLTR_ST FLTR;
}I2C_REGISTERS_UT;


#endif