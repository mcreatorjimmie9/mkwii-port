/* Function at 0x80632770, size=16 bytes */
/* Stack frame: 80 bytes */

void FUN_80632770(void)
{
    /* Stack frame: -80(r1) */
    *(0x54 + r1) = r0; // stw @ 0x80632778
    /* stfd f31, 0x40(r1) */ // 0x8063277C
}