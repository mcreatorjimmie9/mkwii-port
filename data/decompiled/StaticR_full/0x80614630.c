/* Function at 0x80614630, size=16 bytes */
/* Stack frame: 64 bytes */

void FUN_80614630(void)
{
    /* Stack frame: -64(r1) */
    *(0x44 + r1) = r0; // stw @ 0x80614638
    /* stfd f31, 0x30(r1) */ // 0x8061463C
}