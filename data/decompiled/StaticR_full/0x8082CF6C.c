/* Function at 0x8082CF6C, size=16 bytes */
/* Stack frame: 208 bytes */

void FUN_8082CF6C(void)
{
    /* Stack frame: -208(r1) */
    *(0xd4 + r1) = r0; // stw @ 0x8082CF74
    /* stfd f31, 0xc0(r1) */ // 0x8082CF78
}