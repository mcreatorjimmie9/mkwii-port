/* Function at 0x80893800, size=16 bytes */
/* Stack frame: 208 bytes */

void FUN_80893800(void)
{
    /* Stack frame: -208(r1) */
    *(0xd4 + r1) = r0; // stw @ 0x80893808
    /* stfd f31, 0xc0(r1) */ // 0x8089380C
}