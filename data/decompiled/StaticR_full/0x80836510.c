/* Function at 0x80836510, size=16 bytes */
/* Stack frame: 96 bytes */

void FUN_80836510(void)
{
    /* Stack frame: -96(r1) */
    *(0x64 + r1) = r0; // stw @ 0x80836518
    /* stfd f31, 0x50(r1) */ // 0x8083651C
}