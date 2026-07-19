/* Function at 0x8087AA10, size=16 bytes */
/* Stack frame: 48 bytes */

void FUN_8087AA10(void)
{
    /* Stack frame: -48(r1) */
    *(0x34 + r1) = r0; // stw @ 0x8087AA18
    /* stfd f31, 0x20(r1) */ // 0x8087AA1C
}