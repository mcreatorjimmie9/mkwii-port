/* Function at 0x808F6BF0, size=16 bytes */
/* Stack frame: 32 bytes */

void FUN_808F6BF0(void)
{
    /* Stack frame: -32(r1) */
    *(0x24 + r1) = r0; // stw @ 0x808F6BF8
    /* stfd f31, 0x10(r1) */ // 0x808F6BFC
}