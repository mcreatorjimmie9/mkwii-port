/* Function at 0x8085FDF8, size=16 bytes */
/* Stack frame: 112 bytes */

void FUN_8085FDF8(void)
{
    /* Stack frame: -112(r1) */
    *(0x74 + r1) = r0; // stw @ 0x8085FE00
    /* stfd f31, 0x60(r1) */ // 0x8085FE04
}