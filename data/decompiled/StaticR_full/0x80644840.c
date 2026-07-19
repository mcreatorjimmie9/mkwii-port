/* Function at 0x80644840, size=16 bytes */
/* Stack frame: 160 bytes */

void FUN_80644840(void)
{
    /* Stack frame: -160(r1) */
    *(0xa4 + r1) = r0; // stw @ 0x80644848
    /* stfd f31, 0x90(r1) */ // 0x8064484C
}