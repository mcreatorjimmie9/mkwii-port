/* Function at 0x80895234, size=16 bytes */
/* Stack frame: 64 bytes */

void FUN_80895234(void)
{
    /* Stack frame: -64(r1) */
    *(0x44 + r1) = r0; // stw @ 0x8089523C
    /* stfd f31, 0x30(r1) */ // 0x80895240
}