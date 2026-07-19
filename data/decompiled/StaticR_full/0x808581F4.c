/* Function at 0x808581F4, size=16 bytes */
/* Stack frame: 80 bytes */

void FUN_808581F4(void)
{
    /* Stack frame: -80(r1) */
    *(0x54 + r1) = r0; // stw @ 0x808581FC
    /* stfd f31, 0x40(r1) */ // 0x80858200
}