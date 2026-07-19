/* Function at 0x8060BE74, size=16 bytes */
/* Stack frame: 32 bytes */

void FUN_8060BE74(void)
{
    /* Stack frame: -32(r1) */
    *(0x24 + r1) = r0; // stw @ 0x8060BE7C
    /* stfd f31, 0x10(r1) */ // 0x8060BE80
}