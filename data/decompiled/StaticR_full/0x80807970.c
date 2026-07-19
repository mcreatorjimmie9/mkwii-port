/* Function at 0x80807970, size=16 bytes */
/* Stack frame: 160 bytes */

void FUN_80807970(void)
{
    /* Stack frame: -160(r1) */
    *(0xa4 + r1) = r0; // stw @ 0x80807978
    /* stfd f31, 0x90(r1) */ // 0x8080797C
}