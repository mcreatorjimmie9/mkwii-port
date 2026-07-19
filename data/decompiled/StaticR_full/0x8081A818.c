/* Function at 0x8081A818, size=16 bytes */
/* Stack frame: 80 bytes */

void FUN_8081A818(void)
{
    /* Stack frame: -80(r1) */
    *(0x54 + r1) = r0; // stw @ 0x8081A820
    /* stfd f31, 0x40(r1) */ // 0x8081A824
}