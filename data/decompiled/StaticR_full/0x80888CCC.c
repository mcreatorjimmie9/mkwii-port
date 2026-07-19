/* Function at 0x80888CCC, size=16 bytes */
/* Stack frame: 80 bytes */

void FUN_80888CCC(void)
{
    /* Stack frame: -80(r1) */
    *(0x54 + r1) = r0; // stw @ 0x80888CD4
    /* stfd f31, 0x40(r1) */ // 0x80888CD8
}