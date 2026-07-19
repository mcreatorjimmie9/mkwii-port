/* Function at 0x8060C1D8, size=16 bytes */
/* Stack frame: 48 bytes */

void FUN_8060C1D8(void)
{
    /* Stack frame: -48(r1) */
    *(0x34 + r1) = r0; // stw @ 0x8060C1E0
    /* stfd f31, 0x20(r1) */ // 0x8060C1E4
}