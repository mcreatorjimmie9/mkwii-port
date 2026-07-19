/* Function at 0x805B05C4, size=180 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_805B05C4(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x805B05D0
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x805B05D8
    r12 = *(0x38 + r12); // lwz @ 0x805B05DC
    /* mtctr r12 */ // 0x805B05E0
    /* bctrl  */ // 0x805B05E4
    r4 = *(0x18 + r31); // lbz @ 0x805B05E8
    /* lis r3, 0 */ // 0x805B05EC
    /* lfs f0, 0(r3) */ // 0x805B05F0
    /* li r6, 0 */ // 0x805B05F4
    /* li r5, 7 */ // 0x805B05F8
    r4 = r4 rlwinm 0; // rlwinm
    *(8 + r31) = r6; // sth @ 0x805B0600
    /* li r3, -1 */ // 0x805B0604
    r7 = *(0x94 + r31); // lwz @ 0x805B0608
    /* li r0, 1 */ // 0x805B060C
    *(0xa + r31) = r6; // sth @ 0x805B0610
    /* stfs f0, 0x10(r31) */ // 0x805B0614
    /* stfs f0, 0xc(r31) */ // 0x805B0618
    *(0x14 + r31) = r5; // stb @ 0x805B061C
    *(0x15 + r31) = r5; // stb @ 0x805B0620
    *(0x16 + r31) = r6; // stb @ 0x805B0624
    *(0x17 + r31) = r6; // stb @ 0x805B0628
    *(0x18 + r31) = r4; // stb @ 0x805B062C
    *(8 + r7) = r3; // stw @ 0x805B0630
    *(0x10 + r7) = r6; // sth @ 0x805B0634
    *(0x14 + r7) = r0; // stw @ 0x805B0638
    r4 = *(0x98 + r31); // lwz @ 0x805B063C
    *(8 + r4) = r3; // stw @ 0x805B0640
    *(0x10 + r4) = r6; // sth @ 0x805B0644
    *(0x14 + r4) = r0; // stw @ 0x805B0648
    r4 = *(0x9c + r31); // lwz @ 0x805B064C
    *(8 + r4) = r3; // stw @ 0x805B0650
    *(0x10 + r4) = r6; // sth @ 0x805B0654
    *(0x14 + r4) = r0; // stw @ 0x805B0658
    *(0xa6 + r31) = r6; // stb @ 0x805B065C
    *(0x50 + r31) = r0; // stb @ 0x805B0660
    r31 = *(0xc + r1); // lwz @ 0x805B0664
    r0 = *(0x14 + r1); // lwz @ 0x805B0668
    return;
}