/* Function at 0x80627DF0, size=16 bytes */
/* Stack frame: 192 bytes */

void FUN_80627DF0(void)
{
    /* Stack frame: -192(r1) */
    *(0xc4 + r1) = r0; // stw @ 0x80627DF8
    /* stfd f31, 0xb0(r1) */ // 0x80627DFC
}