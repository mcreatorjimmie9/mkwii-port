/* Function at 0x808777A0, size=236 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_808777A0(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x808777B0
    r31 = r31 + 0; // 0x808777B4
    *(0x28 + r1) = r30; // stw @ 0x808777B8
    r30 = r3;
    FUN_8069FE14(); // bl 0x8069FE14
    /* lis r3, 0 */ // 0x808777C4
    r0 = *(0 + r3); // lwz @ 0x808777C8
    if (==) goto 0x0x80877874;
    /* lis r3, 0 */ // 0x808777D4
    r3 = *(0 + r3); // lwz @ 0x808777D8
    r0 = *(0x25 + r3); // lbz @ 0x808777DC
    if (>) goto 0x0x80877808;
    r3 = r31 + 0xc; // 0x808777E8
    /* lfs f2, 0xc(r31) */ // 0x808777EC
    /* lfs f1, 4(r3) */ // 0x808777F0
    /* lfs f0, 8(r3) */ // 0x808777F4
    /* stfs f2, 0x14(r1) */ // 0x808777F8
    /* stfs f1, 0x18(r1) */ // 0x808777FC
    /* stfs f0, 0x1c(r1) */ // 0x80877800
    /* b 0x8087784c */ // 0x80877804
    if (!=) goto 0x0x80877830;
    r3 = r31 + 0x24; // 0x80877810
    /* lfs f2, 0x24(r31) */ // 0x80877814
    /* lfs f1, 4(r3) */ // 0x80877818
    /* lfs f0, 8(r3) */ // 0x8087781C
    /* stfs f2, 0x14(r1) */ // 0x80877820
    /* stfs f1, 0x18(r1) */ // 0x80877824
    /* stfs f0, 0x1c(r1) */ // 0x80877828
    /* b 0x8087784c */ // 0x8087782C
    r3 = r31 + 0x3c; // 0x80877830
    /* lfs f2, 0x3c(r31) */ // 0x80877834
    /* lfs f1, 4(r3) */ // 0x80877838
    /* lfs f0, 8(r3) */ // 0x8087783C
    /* stfs f2, 0x14(r1) */ // 0x80877840
    /* stfs f1, 0x18(r1) */ // 0x80877844
    /* stfs f0, 0x1c(r1) */ // 0x80877848
    r4 = r30 + 0x4c; // 0x80877850
    FUN_805A4464(r3, r4, r5); // bl 0x805A4464
    r0 = *(0x190 + r30); // lbz @ 0x8087785C
    /* lis r3, 0 */ // 0x80877860
    r3 = *(0 + r3); // lwz @ 0x80877864
    /* extsb r4, r0 */ // 0x8087786C
    FUN_80877750(r3, r5); // bl 0x80877750
    r0 = *(0x34 + r1); // lwz @ 0x80877874
    r31 = *(0x2c + r1); // lwz @ 0x80877878
    r30 = *(0x28 + r1); // lwz @ 0x8087787C
    return;
}