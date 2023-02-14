/**
* *port : GPIOC : 0x40020400 - 0x40020bff
* *pin : PC8 : GPIOC_MODER 16-17 set to gp output
* *             GPIOC_OTYPER 8index-bit set to 1 opendrain
* *             GPIOC_OSPEEDR at 16-17 write 00
* *             GPIOC_PUPDR NA
* *             GPIOC_IDR NA
* *             GPIOC_ODR Write to 8index-bit
* *             GPIOC_BSRR write to 8+16index 1 to reset write to 8index 1 to set (both 0 = noaction)
* *             GPIOC_LCKR ???
* *             GPIOC_AFRL NA
* *             GPIOC_AFRH NA
*/