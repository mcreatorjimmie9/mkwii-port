/* Function at 0x80627AF4, size=16 bytes */
/* Stack frame: 192 bytes */

void FUN_80627AF4(void)
{
    /* Stack frame: -192(r1) */
    *(0xc4 + r1) = r0; // stw @ 0x80627AFC
    /* stfd f31, 0xb0(r1) */ // 0x80627B00
}