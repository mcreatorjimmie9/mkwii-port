/* Function at 0x805D60CC, size=24 bytes */
/* Stack frame: 0 bytes */

int FUN_805D60CC(int r3, int r5, int r6)
{
    /* lis r6, 1 */ // 0x805D60CC
    r0 = r6 + -0x7340; // 0x805D60D0
    r0 = r5 * r0; // 0x805D60D4
    r3 = r3 + r0; // 0x805D60D8
    *(0xa4 + r3) = r4; // stw @ 0x805D60DC
    return;
}