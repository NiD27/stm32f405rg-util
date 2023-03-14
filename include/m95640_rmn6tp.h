#ifndef _NID_m9560_rmn6tp
#define _NID_m9560_rmn6tp

#include <customint.h>
#include <40xxx_spi_i2s.h>

typedef enum M9560_INSTRUCTIONS{
    M9560_WRSR = 0x01,
    M9560_WRITE = 0x02,
    M9560_READ = 0x03,
    M9560_WRDI = 0x04,
    M9560_RDSR = 0x05,
    M9560_WREN = 0x06,
    M9560_WIP = 0x01,
    M9560_WEL = 0x02,
    M9560_BP0 = 0x04,
    M9560_BP1 = 0x08,
    M9560_SRWD = 0x80
}M9560_INSTRUCTIONS_ET;

uint8_t enable_whole_memory(SPI_I2S_REGISTERS_ST *SPI);

uint8_t byte_write(SPI_I2S_REGISTERS_ST *SPI, uint16_t address, uint8_t data);
uint8_t byte_read(SPI_I2S_REGISTERS_ST *SPI, uint16_t address);

#endif
