/* Function at 0x807AD904, size=16 bytes */
/* Stack frame: 160 bytes */

void FUN_807AD904(void)
{
    /* Stack frame: -160(r1) */
    *(0xa4 + r1) = r0; // stw @ 0x807AD90C
    /* stfd f31, 0x90(r1) */ // 0x807AD910
}