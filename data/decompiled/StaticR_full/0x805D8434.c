/* Function at 0x805D8434, size=24 bytes */
/* Stack frame: 0 bytes */

void FUN_805D8434(void)
{
    /* li r0, 0 */ // 0x805D8434
    *(4 + r3) = r0; // stw @ 0x805D8438
    *(8 + r3) = r0; // stw @ 0x805D843C
    *(0xc + r3) = r0; // stw @ 0x805D8440
    *(0x10 + r3) = r0; // stw @ 0x805D8444
    return;
}