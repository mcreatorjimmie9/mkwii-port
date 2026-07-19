/* Function at 0x8085E80C, size=16 bytes */
/* Stack frame: 80 bytes */

void FUN_8085E80C(void)
{
    /* Stack frame: -80(r1) */
    *(0x54 + r1) = r0; // stw @ 0x8085E814
    /* stfd f31, 0x40(r1) */ // 0x8085E818
}