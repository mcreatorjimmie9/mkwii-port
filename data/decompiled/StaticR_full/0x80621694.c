/* Function at 0x80621694, size=284 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80621694(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(0x28 + r1) = r30; // stw @ 0x806216A8
    r5 = *(0x18 + r3); // lha @ 0x806216AC
    r0 = *(0x1a + r3); // lha @ 0x806216B0
    if (==) goto 0x0x80621808;
    r4 = *(0x14 + r3); // lwz @ 0x806216BC
    /* clrlwi r5, r5, 0x10 */ // 0x806216C0
    r4 = *(0 + r4); // lwz @ 0x806216C4
    r0 = *(0 + r4); // lhz @ 0x806216C8
    if (>=) goto 0x0x806216fc;
    r0 = r5 rlwinm 4; // rlwinm
    r4 = r4 + r0; // 0x806216D8
    /* lfs f0, 0xc(r4) */ // 0x806216DC
    /* lfs f1, 8(r4) */ // 0x806216E0
    /* lfs f2, 4(r4) */ // 0x806216E4
    /* stfs f2, 0x14(r1) */ // 0x806216E8
    r5 = *(0x10 + r4); // lhz @ 0x806216EC
    /* stfs f1, 0x18(r1) */ // 0x806216F0
    r30 = *(0x12 + r4); // lhz @ 0x806216F4
    /* stfs f0, 0x1c(r1) */ // 0x806216F8
    /* lis r0, 0x4330 */ // 0x806216FC
    *(0x24 + r1) = r5; // stw @ 0x80621700
    /* lis r5, 0 */ // 0x80621704
    r4 = *(0x18 + r3); // lha @ 0x80621708
    *(0x20 + r1) = r0; // stw @ 0x8062170C
    /* lfd f1, 0(r5) */ // 0x80621710
    r0 = r4 + 1; // 0x80621714
    /* lfd f0, 0x20(r1) */ // 0x80621718
    /* clrlwi r5, r0, 0x10 */ // 0x8062171C
    r4 = *(0x14 + r3); // lwz @ 0x80621720
    /* fsubs f0, f0, f1 */ // 0x80621724
    /* stfs f0, 0x28(r3) */ // 0x80621728
    r4 = *(0 + r4); // lwz @ 0x8062172C
    r0 = *(0 + r4); // lhz @ 0x80621730
    if (>=) goto 0x0x80621760;
    r0 = r5 rlwinm 4; // rlwinm
    r4 = r4 + r0; // 0x80621740
    /* lfs f0, 0xc(r4) */ // 0x80621744
    /* lfs f1, 8(r4) */ // 0x80621748
    /* lfs f2, 4(r4) */ // 0x8062174C
    /* stfs f2, 8(r1) */ // 0x80621750
    r30 = *(0x12 + r4); // lhz @ 0x80621754
    /* stfs f1, 0xc(r1) */ // 0x80621758
    /* stfs f0, 0x10(r1) */ // 0x8062175C
    /* lfs f1, 8(r1) */ // 0x80621760
    /* lfs f0, 0x14(r1) */ // 0x80621764
    /* lfs f3, 0xc(r1) */ // 0x80621768
    /* fsubs f4, f1, f0 */ // 0x8062176C
    /* lfs f2, 0x18(r1) */ // 0x80621770
    /* lfs f1, 0x10(r1) */ // 0x80621774
    /* lfs f0, 0x1c(r1) */ // 0x80621778
    /* fsubs f2, f3, f2 */ // 0x8062177C
    /* stfs f4, 0x1c(r3) */ // 0x80621780
    /* fsubs f0, f1, f0 */ // 0x80621784
    /* stfs f2, 0x20(r3) */ // 0x80621788
    /* stfs f0, 0x24(r3) */ // 0x8062178C
    r3 = r3 + 0x1c; // 0x80621790
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x806217e4;
    r3 = r31 + 0x1c; // 0x806217A0
    /* lis r5, 0 */ // 0x806217A4
    r4 = r3;
    r5 = r5 + 0; // 0x806217AC
}