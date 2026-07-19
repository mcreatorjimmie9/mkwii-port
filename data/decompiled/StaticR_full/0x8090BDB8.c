/* Function at 0x8090BDB8, size=16 bytes */
/* Stack frame: 80 bytes */

void FUN_8090BDB8(void)
{
    /* Stack frame: -80(r1) */
    *(0x54 + r1) = r0; // stw @ 0x8090BDC0
    /* stfd f31, 0x40(r1) */ // 0x8090BDC4
}