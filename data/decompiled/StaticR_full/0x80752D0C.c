/* Function at 0x80752D0C, size=16 bytes */
/* Stack frame: 192 bytes */

void FUN_80752D0C(void)
{
    /* Stack frame: -192(r1) */
    *(0xc4 + r1) = r0; // stw @ 0x80752D14
    /* stfd f31, 0xb0(r1) */ // 0x80752D18
}