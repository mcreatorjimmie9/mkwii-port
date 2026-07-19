/* Function at 0x80645324, size=16 bytes */
/* Stack frame: 80 bytes */

void FUN_80645324(void)
{
    /* Stack frame: -80(r1) */
    *(0x54 + r1) = r0; // stw @ 0x8064532C
    /* stfd f31, 0x40(r1) */ // 0x80645330
}