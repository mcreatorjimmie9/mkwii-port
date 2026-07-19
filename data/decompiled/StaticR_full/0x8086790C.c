/* Function at 0x8086790C, size=16 bytes */
/* Stack frame: 192 bytes */

void FUN_8086790C(void)
{
    /* Stack frame: -192(r1) */
    *(0xc4 + r1) = r0; // stw @ 0x80867914
    /* stfd f31, 0xb0(r1) */ // 0x80867918
}