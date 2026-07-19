/* Function at 0x80600484, size=16 bytes */
/* Stack frame: 96 bytes */

void FUN_80600484(void)
{
    /* Stack frame: -96(r1) */
    *(0x64 + r1) = r0; // stw @ 0x8060048C
    /* stfd f31, 0x50(r1) */ // 0x80600490
}