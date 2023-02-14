@ARM TURN ON LED
@https://cpulator.01xz.net/?sys=arm
.global _start
.section .text

_start:
	@put gpioc_pin_8 into output mode
	
	@moder
	LDR r12, =[gpioc_moder]
	LDR r12, [r12]
    LDR r0, [r12]
	@set 17th bit to 1
	@MOV r0, #0x00000000 @dont mess with r0 leave it as it is!
	MOV r1, #0x10000
	ORR r0, r0, r1
	@set 16th bit to 0
	MOV r1, #0x8000
	MVN r1, r1
	AND r0, r0, r1
	@store back to memory
	STR r0, [r12]
	
	@otyper
	@set to opendrain ie no pushpull
	LDR r12, =[gpioc_otyper]
	LDR r12, [r12]
    LDR r0, [r12]
	MOV r1, #0x800000
	MVN r1, r1
	AND r0, r0, r1
	STR r0, [r12]
	
	@ospeedr
	@low speed mode
	@reset bit pin_number*2 and (pin_number*2)+1
	LDR r12, =[gpioc_ospeedr]
	LDR r12, [r12]
    LDR r0, [r12]
	MOV r1, #0xC000
	MVN r1, r1
	AND r0, r0, r1
	STR r0, [r12]
	
	@pupdr
	@No up no down
	@reset bit pin_number*2 and (pin_number*2)+1
	LDR r12, =[gpioc_pupdr]
	LDR r12, [r12]
    LDR r0, [r12]
	MOV r1, #0xC000
	MVN r1, r1
	AND r0, r0, r1
	STR r0, [r12]
	
	
    
.section .data
gpioc_start_address:
	.word 0x40020800
gpioc_end_address:
	.word 0x40020bff
gpioc_pin_8:
	.word 0x8
gpioc_pin_8x2:
	.word 0x10
gpio_pin_8x2_plus1:
	.word 0x11
gpioc_moder:
	.word 0x40020800
gpioc_otyper:
	.word 0x40020804
gpioc_ospeedr:
	.word 0x40020808
gpioc_pupdr:
	.word 0x4002080c
gpioc_idr:
	.word 0x40020810
gpioc_odr:
	.word 0x40020814
gpioc_bsrr:
	.word 0x40020818
gpioc_lckr:
	.word 0x4002081c
gpioc_afrh:
	.word 0x40020820
gpioc_afrl:
	.word 0x40020824