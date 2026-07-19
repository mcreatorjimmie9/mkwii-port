/* Function at 0x805FFFF8, size=16 bytes */
/* Stack frame: 176 bytes */

void FUN_805FFFF8(void)
{
    /* Stack frame: -176(r1) */
    *(0xb4 + r1) = r0; // stw @ 0x80600000
    /* stfd f31, 0xa0(r1) */ // 0x80600004
}