/* Function at 0x80600884, size=16 bytes */
/* Stack frame: 48 bytes */

void FUN_80600884(void)
{
    /* Stack frame: -48(r1) */
    *(0x34 + r1) = r0; // stw @ 0x8060088C
    /* stfd f31, 0x20(r1) */ // 0x80600890
}