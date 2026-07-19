/* Function at 0x8083B8F8, size=16 bytes */
/* Stack frame: 96 bytes */

void FUN_8083B8F8(void)
{
    /* Stack frame: -96(r1) */
    *(0x64 + r1) = r0; // stw @ 0x8083B900
    /* stfd f31, 0x50(r1) */ // 0x8083B904
}