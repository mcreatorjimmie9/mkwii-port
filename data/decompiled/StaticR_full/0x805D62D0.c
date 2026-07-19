/* Function at 0x805D62D0, size=24 bytes */
/* Stack frame: 0 bytes */

int FUN_805D62D0(int r3, int r5, int r6)
{
    /* lis r6, 1 */ // 0x805D62D0
    r0 = r6 + -0x7340; // 0x805D62D4
    r0 = r5 * r0; // 0x805D62D8
    r3 = r3 + r0; // 0x805D62DC
    *(0xd4 + r3) = r4; // stw @ 0x805D62E0
    return;
}