/* Function at 0x808A101C, size=16 bytes */
/* Stack frame: 128 bytes */

void FUN_808A101C(void)
{
    /* Stack frame: -128(r1) */
    *(0x84 + r1) = r0; // stw @ 0x808A1024
    /* stfd f31, 0x70(r1) */ // 0x808A1028
}