/* Function at 0x80756FE4, size=16 bytes */
/* Stack frame: 208 bytes */

void FUN_80756FE4(void)
{
    /* Stack frame: -208(r1) */
    *(0xd4 + r1) = r0; // stw @ 0x80756FEC
    /* stfd f31, 0xc0(r1) */ // 0x80756FF0
}