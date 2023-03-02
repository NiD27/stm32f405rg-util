#include <m95640_rmn6tp.h>

/**
 * THESE ARE BLOCKING FUNCTIONS
 * byte_write
 * > WREN
 * > WRITE
 * > 1st byte of address(7:0)
 * > 2nd byte of address(15:8)
 * > data[7:0]
 * > WRDI
*/

uint8_t byte_write(SPI_I2S_REGISTERS_ST *SPI, uint16_t address, uint8_t data){
    uint8_t i = 0;
    uint8_t data_stream[6] = {
    	M9560_WREN,
		M9560_WRITE,
        ((uint8_t)(address & 0x00ff)),
        ((uint8_t)((address & 0xff00)>>8)),
        data,
		M9560_WRDI
    };
    //SPI->CR1.SSI = 0b0;
    while(i<6){
        if(SPI->SR.TXE){
            SPI->DR.DR = (uint16_t)data_stream[i];
            i++;
        }else{/*DO NOTHING*/}
    }
    //SPI->CR1.SSI = 0b1;
}

uint8_t byte_read(SPI_I2S_REGISTERS_ST *SPI, uint16_t address){
    uint8_t i = 0, data= 0x00;
    uint8_t data_stream[4] = {
    	M9560_READ,
        ((uint8_t)(address & 0x00ff)),
        ((uint8_t)((address & 0xff00)>>8)),
        0xffU
    };
    //SPI->CR1.SSI = 0b0;
    while(i<4){
        if(SPI->SR.TXE){
            SPI->DR.DR = (uint16_t)data_stream[i];
            i++;
        }else{/*DO NOTHING*/}
    }
    //SPI->CR1.SSI = 0b1;
    if(SPI->SR.RXNE){
        data = (uint8_t)SPI->DR.DR;
    }else{/*DO NOTHING*/}
    return data;
}
