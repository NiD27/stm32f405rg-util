/***********************************
* March 1, 2023
* Author : Aravind
***********************************/
#ifndef _NID_40xxx_dma
#define _NID_40xxx_dma

#include <customint.h>

#define DMA1_ADDRESS 0x40026400U
#define DMA2_ADDRESS 0x40026000U

typedef struct{
    volatile uint32_t FEIFO :1;
    volatile uint32_t RESERVED_1 :1;  
    volatile uint32_t DMEIFO :1;
    volatile uint32_t TEIFO :1;
    volatile uint32_t HTIFO :1;
    volatile uint32_t TCIFO :1;
    volatile uint32_t FEIF1 :1;
    volatile uint32_t RESERVED_2 :1;
    volatile uint32_t DMEIF1 :1;
    volatile uint32_t TEIF1 :1;
    volatile uint32_t HTIF1 :1;
    volatile uint32_t TCIF1 :1;
    volatile uint32_t RESERVED_3 :4;
    volatile uint32_t FEIF2 :1;
    volatile uint32_t RESERVED_4 :1;  
    volatile uint32_t DMEIF2 :1;
    volatile uint32_t TEIF2 :1;
    volatile uint32_t HTIF2 :1;
    volatile uint32_t TCIF2 :1;
    volatile uint32_t FEIF3 :1;
    volatile uint32_t RESERVED_5 :1;
    volatile uint32_t DMEIF3 :1;
    volatile uint32_t TEIF3 :1;
    volatile uint32_t HTIF3 :1;
    volatile uint32_t TCIF3 :1;
    volatile uint32_t RESERVED_6 :4;
    }DMA_LISR_ST;

    typedef struct{

        volatile uint32_t FEIF4 :1;
        volatile uint32_t RESERVED_1 :1;
        volatile uint32_t DMEIF4 :1;
        volatile uint32_t TEIF4 :1;
        volatile uint32_t HTIF4 :1;
        volatile uint32_t TCIF4 :1; 
        volatile uint32_t FEIF5 :1;
        volatile uint32_t RESERVED_2 :1;
        volatile uint32_t DMEIF5 :1;
        volatile uint32_t TEIF5 :1;
        volatile uint32_t HTIF5 :1;
        volatile uint32_t TCIF5 :1;
        volatile uint32_t RESERVED_3 :4;
        volatile uint32_t FEIF6 :1;
        volatile uint32_t RESERVED_4 :1;
        volatile uint32_t DMEIF6 :1;
        volatile uint32_t TEIF6 :1;
        volatile uint32_t HTIF6 :1;
        volatile uint32_t TCIF6 :1; 
        volatile uint32_t FEIF7 :1;
        volatile uint32_t RESERVED_5 :1;
        volatile uint32_t DMEIF7 :1;
        volatile uint32_t TEIF7 :1;
        volatile uint32_t HTIF7 :1;
        volatile uint32_t TCIF7 :1;
        volatile uint32_t RESERVED_6 :4;
        
    }DMA_HISR_ST;

    typedef struct{
        volatile uint32_t CFEIF0 :1;
        volatile uint32_t RESERVED_1 :1;
        volatile uint32_t CDMEIF0 :1;
        volatile uint32_t CTEIF0 :1;
        volatile uint32_t CHTIF0 :1;
        volatile uint32_t CTCIF0 :1; 
        volatile uint32_t CFEIF1 :1;
        volatile uint32_t RESERVED_2 :1;
        volatile uint32_t CDMEIF1 :1;
        volatile uint32_t CTEIF1 :1;
        volatile uint32_t CHTIF1 :1;
        volatile uint32_t RESERVED_3 :4;
        volatile uint32_t CFEIF2 :1;
        volatile uint32_t RESERVED_4 :1;
        volatile uint32_t CDMEIF2 :1;
        volatile uint32_t CTEIF2 :1;
        volatile uint32_t CHTIF2 :1;
        volatile uint32_t CTCIF2 :1; 
        volatile uint32_t CFEIF3 :1;
        volatile uint32_t RESERVED_5 :1;
        volatile uint32_t CDMEIF3 :1;
        volatile uint32_t CTEIF3 :1;
        volatile uint32_t CHTIF3 :1;
        volatile uint32_t RESERVED_6 :4;
    }DMA_LIFCR_ST;

    typedef struct{
        
        volatile uint32_t CFEIF4 :1;
        volatile uint32_t RESERVED_1 :1;
        volatile uint32_t CDMEIF4 :1;
        volatile uint32_t CTEIF4 :1;
        volatile uint32_t CHTIF4 :1;
        volatile uint32_t CTCIF4 :1; 
        volatile uint32_t CFEIF5 :1;
        volatile uint32_t RESERVED_2 :1;
        volatile uint32_t CDMEIF5 :1;
        volatile uint32_t CTEIF5 :1;
        volatile uint32_t CHTIF5 :1;
        volatile uint32_t CTCIF5 :1;
        volatile uint32_t RESERVED_3 :4;
        volatile uint32_t CFEIF6 :1;
        volatile uint32_t RESERVED_4 :1;
        volatile uint32_t CDMEIF6 :1;
        volatile uint32_t CTEIF6 :1;
        volatile uint32_t CHTIF6 :1;
        volatile uint32_t CTCIF6 :1; 
        volatile uint32_t CFEIF7 :1;
        volatile uint32_t RESERVED_5 :1;
        volatile uint32_t CDMEIF7 :1;
        volatile uint32_t CTEIF7 :1;
        volatile uint32_t CHTIF7 :1;
        volatile uint32_t CTCIF7 :1;
        volatile uint32_t RESERVED_6 :4;
    }DMA_HIFCR_ST;

    typedef struct{
        volatile uint32_t EN :1;
        volatile uint32_t DMEIE :1;
        volatile uint32_t TEIE :1;
        volatile uint32_t HTIE :1;
        volatile uint32_t TCIE :1;
        volatile uint32_t PFCTRL :1;
        volatile uint32_t DIR_1 :2;
        volatile uint32_t CIRC :1;
        volatile uint32_t PINC :1;
        volatile uint32_t MINC :1;
        volatile uint32_t PSIZE_1 :2;
        volatile uint32_t MSIZE_1 :2;
        volatile uint32_t PINCOS :1;
        volatile uint32_t PL_1 :2;
        volatile uint32_t DBM :1;
        volatile uint32_t CT :1;
        volatile uint32_t RESERVED_1 :1;
        volatile uint32_t PBURST_1 :2;
        volatile uint32_t MBURST_1 :2;
        volatile uint32_t CHSEL_1 :2;
        volatile uint32_t RESERVED_2 :4;

    }DMA_SxCR_ST;

    typedef struct{
        volatile uint32_t NDT :16;
        volatile uint32_t RESERVED :16;
    }DMA_SxNDTR_ST;

    typedef struct{
        volatile uint32_t PAR_1 :16;
        volatile uint32_t PAR_2 :16;
    }DMA_SxPAR_ST;

    typedef struct{
        volatile uint32_t M0A_1 :16;
        volatile uint32_t M0A_2 :16;
    }DMA_SxM0AR_ST;

    typedef struct{
    volatile uint32_t M1A_1 :16;
    volatile uint32_t M1A_2 :16;
    }DMA_SxM1AR_ST;

    typedef struct{
        volatile uint32_t FTH :2;
        volatile uint32_t DMDIS :1;
        volatile uint32_t FS :3;
        volatile uint32_t RESERVED_1 :1;
        volatile uint32_t FEIE :1;
        volatile uint32_t RESERVED_2 :24; 
    }DMA_SxFCR_ST;

typedef struct{
    DMA_LISR_ST LISR;
    DMA_HISR_ST HISR;
    DMA_LIFCR_ST LIFCR;
    DMA_HIFCR_ST HIFCR;
    DMA_SxCR_ST S0CR;
    DMA_SxNDTR_ST S0NDTR;
    DMA_SxPAR_ST S0PAR;
    DMA_SxM0AR_ST S0M0AR;
    DMA_SxM1AR_ST S0M1AR;
    DMA_SxFCR_ST SxFCR;
    DMA_SxCR_ST S1CR;
    DMA_SxNDTR_ST S1NDTR;
}DMA_REGISTERS_ST;

typedef union{
    DMA_LISR_ST LISR;
    DMA_HISR_ST HISR;
    DMA_LIFCR_ST LIFCR;
    DMA_HIFCR_ST HIFCR;
    DMA_SxCR_ST S0CR;
    DMA_SxNDTR_ST S0NDTR;
    DMA_SxPAR_ST S0PAR;
    DMA_SxM0AR_ST S0M0AR;
    DMA_SxM1AR_ST S0M1AR;
    DMA_SxFCR_ST SxFCR;
    DMA_SxCR_ST S1CR;
    DMA_SxNDTR_ST S1NDTR;
}DMA_REGISTERS_UT;
#endif