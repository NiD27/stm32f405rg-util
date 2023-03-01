#ifndef _NID_40xxx_spi
#define _NID_40xxx_spi

#define SPI1_ADDRESS    0x40013000U
#define SPI2_ADDRESS    0x40003800U
#define SPI3_ADDRESS    0x40003c00U
#define I2S2    0x40003800U/*SAME AS SPI2*/
#define I2S3    0x40003c00U/*SAME AS SPI3*/

typedef struct{
    volatile uint32_t CPHA :1;
    volatile uint32_t CPOL :1;
    volatile uint32_t MSTR :1;
    volatile uint32_t BR :3;
    volatile uint32_t SPE :1;
    volatile uint32_t LSBFIRST :1;
    volatile uint32_t SSI :1;
    volatile uint32_t SSM :1;
    volatile uint32_t RXONLY :1;
    volatile uint32_t DFF :1;
    volatile uint32_t CRCNEXT :1;
    volatile uint32_t CRCEN :1;
    volatile uint32_t BIDIOE :1;
    volatile uint32_t BIDIMODE :1;    
    uint32_t RESERVED :16;
}SPI_CR1_ST;

typedef struct{
    volatile uint32_t RXDMAEN :1;
    volatile uint32_t TXDMAEN :1;
    volatile uint32_t SSOE :1;
    uint32_t RESERVED_1 :1;
    volatile uint32_t FRF :1;
    volatile uint32_t ERRIE :1;
    volatile uint32_t RXNEIE :1;
    volatile uint32_t TXEIE :1;
    uint32_t RESEVED_2 :8;
    uint32_t RESERVED :16;
}SPI_CR2_ST;

typedef struct{
    volatile uint32_t RXNE :1;
    volatile uint32_t TXE :1;
    volatile uint32_t CHSIDE :1;
    volatile uint32_t UDR :1;
    volatile uint32_t CRCERR :1;
    volatile uint32_t MODF :1;
    volatile uint32_t OVR :1;
    volatile uint32_t BSY :1;
    volatile uint32_t FRE :1;
    uint32_t RESERVED :23;
}SPI_SR_ST;

typedef struct{
    volatile uint32_t DR :16;
    uint32_t RESERVED :16;
}SPI_DR_ST;

typedef struct{
    volatile uint32_t CRCPOLY :16;
    uint32_t RESERVED :16;
}SPI_CRCPR_ST;

typedef struct{
    volatile uint32_t RXCRC :16;
    uint32_t RESERVED :16;
}SPI_RXCRCR_ST;

typedef struct{
    volatile uint32_t TXCRC :16;
    uint32_t RESERVED :16;
}SPI_TXCRCR_ST;

typedef struct{
    volatile uint32_t CHLEN :1;
    volatile uint32_t DATLEN :2;
    volatile uint32_t CKPOL :1;
    volatile uint32_t I2SSTD :2;
    uint32_t RESERVED_1 :1;
    volatile uint32_t PCMSYNC :1;
    volatile uint32_t I2SCFG :2;
    volatile uint32_t I2SE :1;
    volatile uint32_t I2SMOD :1;
    uint32_t RESERVED_1 :4;
    uint32_t RESERVED :16;
}SPI_I2SCFGR_ST;

typedef struct{
    volatile uint32_t I2SDIV :8;
    volatile uint32_t OD :1;
    volatile uint32_t MCKOE :1;
    uint32_t RESERVED_1 :6;
    uint32_t RESERVED :16;
}SPI_I2SPR_ST;

typedef struct{
    SPI_CR1_ST CR1;
    SPI_CR2_ST CR2;
    SPI_SR_ST SR;
    SPI_DR_ST DR;
    SPI_CRCPR_ST CRPCR;
    SPI_RXCRCR_ST RXCRCR;
    SPI_TXCRCR_ST TXCRCR;
    SPI_I2SCFGR_ST I2SCFGR;
    SPI_I2SPR_ST I2SPR;
}SPI_I2C_REGISTERS_ST;

typedef union{
    SPI_CR1_ST CR1;
    SPI_CR2_ST CR2;
    SPI_SR_ST SR;
    SPI_DR_ST DR;
    SPI_CRCPR_ST CRPCR;
    SPI_RXCRCR_ST RXCRCR;
    SPI_TXCRCR_ST TXCRCR;
    SPI_I2SCFGR_ST I2SCFGR;
    SPI_I2SPR_ST I2SPR;
}SPI_I2C_REGISTERS_UT;

#endif