/* Function at 0x8081FF1C, size=16 bytes */
/* Stack frame: 96 bytes */

void FUN_8081FF1C(void)
{
    /* Stack frame: -96(r1) */
    *(0x64 + r1) = r0; // stw @ 0x8081FF24
    /* stfd f31, 0x50(r1) */ // 0x8081FF28
}