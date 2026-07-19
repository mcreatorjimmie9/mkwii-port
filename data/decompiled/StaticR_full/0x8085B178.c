/* Function at 0x8085B178, size=16 bytes */
/* Stack frame: 208 bytes */

void FUN_8085B178(void)
{
    /* Stack frame: -208(r1) */
    *(0xd4 + r1) = r0; // stw @ 0x8085B180
    /* stfd f31, 0xc0(r1) */ // 0x8085B184
}