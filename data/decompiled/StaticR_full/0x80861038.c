/* Function at 0x80861038, size=16 bytes */
/* Stack frame: 128 bytes */

void FUN_80861038(void)
{
    /* Stack frame: -128(r1) */
    *(0x84 + r1) = r0; // stw @ 0x80861040
    /* stfd f31, 0x70(r1) */ // 0x80861044
}