/* Function at 0x805B1660, size=152 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805B1660(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r6, 0 */ // 0x805B1668
    /* stfd f31, 0x18(r1) */ // 0x805B1670
    /* fmr f31, f1 */ // 0x805B1674
    *(0x14 + r1) = r31; // stw @ 0x805B1678
    r31 = r5;
    *(0x10 + r1) = r30; // stw @ 0x805B1680
    r30 = r4;
    *(0xc + r1) = r29; // stw @ 0x805B1688
    r29 = r3;
    r3 = *(0 + r6); // lwz @ 0x805B1690
    r3 = *(0x54 + r3); // lwz @ 0x805B1694
    r3 = *(0x24 + r3); // lwz @ 0x805B1698
    r12 = *(0 + r3); // lwz @ 0x805B169C
    r12 = *(0xc + r12); // lwz @ 0x805B16A0
    /* mtctr r12 */ // 0x805B16A4
    /* bctrl  */ // 0x805B16A8
    /* subfic r4, r3, 1 */ // 0x805B16AC
    r0 = r3 + -1; // 0x805B16B0
    r0 = r4 | r0; // 0x805B16B4
    /* rlwinm. r0, r0, 1, 0x1f, 0x1f */ // 0x805B16B8
    if (!=) goto 0x0x805b16d8;
    /* fmr f1, f31 */ // 0x805B16C0
    r4 = *(4 + r29); // lwz @ 0x805B16C4
    r3 = r29;
    r5 = r30;
    r6 = r31;
    FUN_805B16F8(r3, r5, r6); // bl 0x805B16F8
    r0 = *(0x24 + r1); // lwz @ 0x805B16D8
    /* lfd f31, 0x18(r1) */ // 0x805B16DC
    r31 = *(0x14 + r1); // lwz @ 0x805B16E0
    r30 = *(0x10 + r1); // lwz @ 0x805B16E4
    r29 = *(0xc + r1); // lwz @ 0x805B16E8
    return;
}