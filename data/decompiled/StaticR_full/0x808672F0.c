/* Function at 0x808672F0, size=16 bytes */
/* Stack frame: 160 bytes */

void FUN_808672F0(void)
{
    /* Stack frame: -160(r1) */
    *(0xa4 + r1) = r0; // stw @ 0x808672F8
    /* stfd f31, 0x90(r1) */ // 0x808672FC
}