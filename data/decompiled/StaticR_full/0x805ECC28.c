/* Function at 0x805ECC28, size=136 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_805ECC28(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x805ECC3C
    r29 = r3;
    r0 = *(4 + r3); // lwz @ 0x805ECC44
    /* rlwinm. r0, r0, 0, 7, 7 */ // 0x805ECC48
    if (==) goto 0x0x805ecc94;
    r31 = r29;
    /* li r30, 0 */ // 0x805ECC54
    r3 = *(0x1c + r31); // lwz @ 0x805ECC58
    r5 = *(0x14 + r31); // lwz @ 0x805ECC5C
    r12 = *(0 + r3); // lwz @ 0x805ECC60
    r4 = *(0xe4 + r3); // lwz @ 0x805ECC64
    r12 = *(0x34 + r12); // lwz @ 0x805ECC68
    r5 = *(0 + r5); // lwz @ 0x805ECC6C
    /* mtctr r12 */ // 0x805ECC70
    /* bctrl  */ // 0x805ECC74
    r30 = r30 + 1; // 0x805ECC78
    r31 = r31 + 4; // 0x805ECC7C
    if (<) goto 0x0x805ecc58;
    r0 = *(4 + r29); // lwz @ 0x805ECC88
    r0 = r0 rlwinm 0; // rlwinm
    *(4 + r29) = r0; // stw @ 0x805ECC90
    r0 = *(0x24 + r1); // lwz @ 0x805ECC94
    r31 = *(0x1c + r1); // lwz @ 0x805ECC98
    r30 = *(0x18 + r1); // lwz @ 0x805ECC9C
    r29 = *(0x14 + r1); // lwz @ 0x805ECCA0
    return;
}