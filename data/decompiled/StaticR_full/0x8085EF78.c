/* Function at 0x8085EF78, size=16 bytes */
/* Stack frame: 160 bytes */

void FUN_8085EF78(void)
{
    /* Stack frame: -160(r1) */
    *(0xa4 + r1) = r0; // stw @ 0x8085EF80
    /* stfd f31, 0x90(r1) */ // 0x8085EF84
}