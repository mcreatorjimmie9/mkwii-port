/* Function at 0x8060AA10, size=16 bytes */
/* Stack frame: 48 bytes */

void FUN_8060AA10(void)
{
    /* Stack frame: -48(r1) */
    *(0x34 + r1) = r0; // stw @ 0x8060AA18
    /* stfd f31, 0x20(r1) */ // 0x8060AA1C
}