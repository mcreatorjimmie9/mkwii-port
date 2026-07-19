/* Function at 0x80676C80, size=16 bytes */
/* Stack frame: 96 bytes */

void FUN_80676C80(void)
{
    /* Stack frame: -96(r1) */
    *(0x64 + r1) = r0; // stw @ 0x80676C88
    /* stfd f31, 0x50(r1) */ // 0x80676C8C
}