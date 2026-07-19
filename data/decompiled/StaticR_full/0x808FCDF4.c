/* Function at 0x808FCDF4, size=16 bytes */
/* Stack frame: 192 bytes */

void FUN_808FCDF4(void)
{
    /* Stack frame: -192(r1) */
    *(0xc4 + r1) = r0; // stw @ 0x808FCDFC
    /* stfd f31, 0xb0(r1) */ // 0x808FCE00
}