/* Function at 0x8085BE84, size=16 bytes */
/* Stack frame: 144 bytes */

void FUN_8085BE84(void)
{
    /* Stack frame: -144(r1) */
    *(0x94 + r1) = r0; // stw @ 0x8085BE8C
    /* stfd f31, 0x80(r1) */ // 0x8085BE90
}