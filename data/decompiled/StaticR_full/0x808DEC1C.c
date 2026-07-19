/* Function at 0x808DEC1C, size=16 bytes */
/* Stack frame: 64 bytes */

void FUN_808DEC1C(void)
{
    /* Stack frame: -64(r1) */
    *(0x44 + r1) = r0; // stw @ 0x808DEC24
    /* stfd f31, 0x30(r1) */ // 0x808DEC28
}