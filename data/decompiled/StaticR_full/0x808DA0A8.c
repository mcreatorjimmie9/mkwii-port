/* Function at 0x808DA0A8, size=16 bytes */
/* Stack frame: 240 bytes */

void FUN_808DA0A8(void)
{
    /* Stack frame: -240(r1) */
    *(0xf4 + r1) = r0; // stw @ 0x808DA0B0
    /* stfd f31, 0xe0(r1) */ // 0x808DA0B4
}