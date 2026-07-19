/* Function at 0x806090A4, size=16 bytes */
/* Stack frame: 32 bytes */

void FUN_806090A4(void)
{
    /* Stack frame: -32(r1) */
    *(0x24 + r1) = r0; // stw @ 0x806090AC
    /* stfd f31, 0x10(r1) */ // 0x806090B0
}