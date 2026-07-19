/* Function at 0x80773900, size=16 bytes */
/* Stack frame: 160 bytes */

void FUN_80773900(void)
{
    /* Stack frame: -160(r1) */
    *(0xa4 + r1) = r0; // stw @ 0x80773908
    /* stfd f31, 0x90(r1) */ // 0x8077390C
}