/* Function at 0x8063776C, size=284 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_8063776C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r0 = r4 rlwinm 2; // rlwinm
    *(0x18 + r1) = r30; // stw @ 0x80637780
    *(0x14 + r1) = r29; // stw @ 0x80637784
    r29 = r4;
    r5 = *(8 + r3); // lwz @ 0x8063778C
    r3 = *(4 + r3); // lwz @ 0x80637790
    /* lwzx r30, r5, r0 */ // 0x80637794
    r3 = *(0xc + r3); // lwz @ 0x80637798
    r0 = *(0x14 + r30); // lhz @ 0x8063779C
    r31 = *(0 + r3); // lwz @ 0x806377A0
    if (==) goto 0x0x80637858;
    /* li r5, 0 */ // 0x806377B0
    if (<) goto 0x0x806377d0;
    /* lis r3, 0 */ // 0x806377B8
    r3 = r3 + 0; // 0x806377BC
    r0 = *(4 + r3); // lwz @ 0x806377C0
    if (>=) goto 0x0x806377d0;
    /* li r5, 1 */ // 0x806377CC
    if (!=) goto 0x0x806377ec;
    /* lis r3, 0 */ // 0x806377D8
    r12 = *(0 + r3); // lwzu @ 0x806377DC
    r12 = *(0x18 + r12); // lwz @ 0x806377E0
    /* mtctr r12 */ // 0x806377E4
    /* bctrl  */ // 0x806377E8
    /* lis r4, 0 */ // 0x806377EC
    /* slwi r3, r29, 2 */ // 0x806377F0
    r4 = r4 + 0; // 0x806377F4
    r0 = *(4 + r30); // lwz @ 0x806377F8
    r4 = *(8 + r4); // lwz @ 0x806377FC
    /* lwzx r3, r4, r3 */ // 0x80637800
    *(0x18 + r31) = r0; // stw @ 0x80637804
    /* lfs f0, 8(r30) */ // 0x80637808
    /* stfs f0, 8(r31) */ // 0x8063780C
    /* lfs f0, 0xc(r30) */ // 0x80637810
    /* stfs f0, 0xc(r31) */ // 0x80637814
    r0 = *(0x10 + r30); // lbz @ 0x80637818
    *(4 + r31) = r0; // stb @ 0x8063781C
    r0 = *(0x11 + r30); // lbz @ 0x80637820
    *(5 + r31) = r0; // stb @ 0x80637824
    r0 = *(0x12 + r30); // lbz @ 0x80637828
    *(6 + r31) = r0; // stb @ 0x8063782C
    r0 = *(0x13 + r30); // lbz @ 0x80637830
    *(7 + r31) = r0; // stb @ 0x80637834
    /* lfs f0, 0x18(r3) */ // 0x80637838
    /* stfs f0, 0x10(r31) */ // 0x8063783C
    /* lfs f0, 0x1c(r3) */ // 0x80637840
    /* stfs f0, 0x14(r31) */ // 0x80637844
    r0 = *(0x1c + r31); // lbz @ 0x80637848
    r0 = r0 | 1; // 0x8063784C
    *(0x1c + r31) = r0; // stb @ 0x80637850
    /* b 0x8063786c */ // 0x80637854
    /* li r0, 0 */ // 0x80637858
    *(0x18 + r31) = r0; // stw @ 0x8063785C
    r0 = *(0x1c + r31); // lbz @ 0x80637860
    r0 = r0 rlwinm 0; // rlwinm
    *(0x1c + r31) = r0; // stb @ 0x80637868
    r0 = *(0x24 + r1); // lwz @ 0x8063786C
    r31 = *(0x1c + r1); // lwz @ 0x80637870
    r30 = *(0x18 + r1); // lwz @ 0x80637874
    r29 = *(0x14 + r1); // lwz @ 0x80637878
    return;
}