/* =<<|  T36 CUSTOM BUILD SYSTEM  |>>=
*  
*       Linker Script for MK66FX1M0VMD18
*
*
*
*
*/

ENTRY(Reset_Handler)

MEMORY{
    FLASH(RX) : ORIGIN=0x00000000, LENGTH=1024K
    SRAM1(RWX) : ORIGIN=0x1FFF0000, LENGTH=256K
}

__max_heap_size = 0x400; //symbol declaration . not a var
__max_stack_size = 0x200; 

SECTIONS{
    .text :
    {
        *(.isr_vector)
        *(.text)
        *(.rodata)
        . = ALIGN(4);
        _etext = .; //store the updated location counter value in symbol

    }> FLASH AT> FLASH

    .data :
    {
        _sdata = .;
        *(.data)
        . = ALIGN(4);
        _edata = .;
    }> SRAM AT> FLASH

    .bss :
    {
        s_bss = .;
        *(.bss)
        *(COMMON)
        . = ALIGN(4);
        e_bss = .;
    }> SRAM
}
