/* Function at 0x808F3C70, size=16 bytes */
/* Stack frame: 80 bytes */

void FUN_808F3C70(void)
{
    /* Stack frame: -80(r1) */
    *(0x54 + r1) = r0; // stw @ 0x808F3C78
    /* stfd f31, 0x40(r1) */ // 0x808F3C7C
}