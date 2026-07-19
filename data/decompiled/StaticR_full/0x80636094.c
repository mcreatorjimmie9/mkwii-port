/* Function at 0x80636094, size=16 bytes */
/* Stack frame: 160 bytes */

void FUN_80636094(void)
{
    /* Stack frame: -160(r1) */
    *(0xa4 + r1) = r0; // stw @ 0x8063609C
    /* stfd f31, 0x90(r1) */ // 0x806360A0
}