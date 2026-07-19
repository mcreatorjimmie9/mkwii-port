/* Function at 0x805BDDC8, size=16 bytes */
/* Stack frame: 80 bytes */

void FUN_805BDDC8(void)
{
    /* Stack frame: -80(r1) */
    *(0x54 + r1) = r0; // stw @ 0x805BDDD0
    /* stfd f31, 0x40(r1) */ // 0x805BDDD4
}