/* Function at 0x8083F2B0, size=16 bytes */
/* Stack frame: 80 bytes */

void FUN_8083F2B0(void)
{
    /* Stack frame: -80(r1) */
    *(0x54 + r1) = r0; // stw @ 0x8083F2B8
    /* stfd f31, 0x40(r1) */ // 0x8083F2BC
}