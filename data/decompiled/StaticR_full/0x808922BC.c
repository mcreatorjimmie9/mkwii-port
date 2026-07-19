/* Function at 0x808922BC, size=16 bytes */
/* Stack frame: 160 bytes */

void FUN_808922BC(void)
{
    /* Stack frame: -160(r1) */
    *(0xa4 + r1) = r0; // stw @ 0x808922C4
    /* stfd f31, 0x90(r1) */ // 0x808922C8
}