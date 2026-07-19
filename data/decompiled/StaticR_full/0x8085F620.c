/* Function at 0x8085F620, size=16 bytes */
/* Stack frame: 112 bytes */

void FUN_8085F620(void)
{
    /* Stack frame: -112(r1) */
    *(0x74 + r1) = r0; // stw @ 0x8085F628
    /* stfd f31, 0x60(r1) */ // 0x8085F62C
}