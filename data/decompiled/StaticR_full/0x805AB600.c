/* Function at 0x805AB600, size=16 bytes */
/* Stack frame: 224 bytes */

void FUN_805AB600(void)
{
    /* Stack frame: -224(r1) */
    *(0xe4 + r1) = r0; // stw @ 0x805AB608
    /* stfd f31, 0xd0(r1) */ // 0x805AB60C
}