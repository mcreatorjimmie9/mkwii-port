/* Function at 0x80901480, size=16 bytes */
/* Stack frame: 80 bytes */

void FUN_80901480(void)
{
    /* Stack frame: -80(r1) */
    *(0x54 + r1) = r0; // stw @ 0x80901488
    /* stfd f31, 0x40(r1) */ // 0x8090148C
}