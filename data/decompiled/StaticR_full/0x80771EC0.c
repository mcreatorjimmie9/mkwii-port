/* Function at 0x80771EC0, size=16 bytes */
/* Stack frame: 128 bytes */

void FUN_80771EC0(void)
{
    /* Stack frame: -128(r1) */
    *(0x84 + r1) = r0; // stw @ 0x80771EC8
    /* stfd f31, 0x70(r1) */ // 0x80771ECC
}