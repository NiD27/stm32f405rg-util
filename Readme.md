# Headers for stm32f40xxx series

"Tested" on stm32f405rgt6.

---

###### Why should you use this code?

###### You shouldn't.

---

### CONVECTION

###### Structure, Union and Typedef

- _S : S = struct.

- _U : U = union.

- _T : T = typedef.

- _ST : S = struct, T = typedef.

- _UT : U = Union, T = typedef.

###### Macros

- _ADDRESS : address of the specific register.

- _BASE_ADDRESS or _START_ADDRESS : starting address of a contigious block of registers.

- _END_ADDRESS : last address of contigious block of registers.

- _SIZE : The size of the contigious block (_END_ADDRESS - _START_ADDRESS).

- _OFFSET : Offset from the start address.

- _RESET_VALUE : Reset value as defined in reference manual, some reset values are undefined in the reference manual and they are assumed to be 0 or 1 so be carefull.

---

###### Register Structures and Union

Most headers contain a super structure named NAME_REGISTERS_ST which contain all other register structures,  you can point this to the base address and all structures will be mapped automatically. Alternatively, you can use a super union consisting of all structures to point to individual registers and use them. Be carefull as there are some registers who serve multiple purposes.

Example : Output Compare and Input Capture registers in the timer, though it serves 2 different purposes it occupies the same 4 bytes of memory, since the functionality is mutually exclusive it is possible to do so. Therefore 2 different structures are created and a union of the 2 structures is pointed to the memory address. Thus, you can safely use both functions without any manual memory mapping. But the values remain the same when changing functionality therefore it is your responsibility to reset/change the values as needed. 

---



###### TODO :

The original list was too long so I decided to do less things.

- [X] Refactor (Remove DEPRECATED dependency)

- [ ] PWM Functionality

- [ ] ADC Functionality

- [ ] RCC Registers (Incomplete)

- [x] Timer Registers (Incomplete)

- [ ] Functions for all currently implemented registers
