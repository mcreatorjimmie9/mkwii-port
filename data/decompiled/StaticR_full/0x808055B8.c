/* Function at 0x808055B8, size=16 bytes */
/* Stack frame: 208 bytes */

void FUN_808055B8(void)
{
    /* Stack frame: -208(r1) */
    *(0xd4 + r1) = r0; // stw @ 0x808055C0
    /* stfd f31, 0xc0(r1) */ // 0x808055C4
}