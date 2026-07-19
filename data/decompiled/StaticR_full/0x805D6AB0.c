/* Function at 0x805D6AB0, size=32 bytes */
/* Stack frame: 0 bytes */

int FUN_805D6AB0(int r3, int r4, int r5, int r6)
{
    /* lis r6, 1 */ // 0x805D6AB0
    r0 = r6 + -0x7340; // 0x805D6AB4
    r0 = r5 * r0; // 0x805D6AB8
    r3 = r3 + r0; // 0x805D6ABC
    r0 = *(0x5688 + r3); // lwz @ 0x805D6AC0
    r0 = r4 rlwimi 0; // rlwimi
    *(0x5688 + r3) = r0; // stw @ 0x805D6AC8
    return;
}