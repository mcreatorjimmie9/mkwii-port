/* Function at 0x807400D4, size=16 bytes */
/* Stack frame: 64 bytes */

void FUN_807400D4(void)
{
    /* Stack frame: -64(r1) */
    *(0x44 + r1) = r0; // stw @ 0x807400DC
    /* stfd f31, 0x30(r1) */ // 0x807400E0
}