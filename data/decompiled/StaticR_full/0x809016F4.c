/* Function at 0x809016F4, size=16 bytes */
/* Stack frame: 64 bytes */

void FUN_809016F4(void)
{
    /* Stack frame: -64(r1) */
    *(0x44 + r1) = r0; // stw @ 0x809016FC
    /* stfd f31, 0x30(r1) */ // 0x80901700
}