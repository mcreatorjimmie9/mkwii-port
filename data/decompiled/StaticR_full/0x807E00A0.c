/* Function at 0x807E00A0, size=16 bytes */
/* Stack frame: 160 bytes */

void FUN_807E00A0(void)
{
    /* Stack frame: -160(r1) */
    *(0xa4 + r1) = r0; // stw @ 0x807E00A8
    /* stfd f31, 0x90(r1) */ // 0x807E00AC
}