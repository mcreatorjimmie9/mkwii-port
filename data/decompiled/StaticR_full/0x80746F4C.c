/* Function at 0x80746F4C, size=16 bytes */
/* Stack frame: 80 bytes */

void FUN_80746F4C(void)
{
    /* Stack frame: -80(r1) */
    *(0x54 + r1) = r0; // stw @ 0x80746F54
    /* stfd f31, 0x40(r1) */ // 0x80746F58
}