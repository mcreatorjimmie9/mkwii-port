/* Function at 0x805D5F9C, size=32 bytes */
/* Stack frame: 0 bytes */

int FUN_805D5F9C(int r3, int r4, int r5, int r6)
{
    /* lis r6, 1 */ // 0x805D5F9C
    r0 = r6 + -0x7340; // 0x805D5FA0
    r0 = r5 * r0; // 0x805D5FA4
    r3 = r3 + r0; // 0x805D5FA8
    r0 = *(0x1c4 + r3); // lwz @ 0x805D5FAC
    r0 = r4 rlwimi 0; // rlwimi
    *(0x1c4 + r3) = r0; // stw @ 0x805D5FB4
    return;
}