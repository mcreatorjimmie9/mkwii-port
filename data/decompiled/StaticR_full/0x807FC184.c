/* Function at 0x807FC184, size=196 bytes */
/* Stack frame: 128 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807FC184(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -128(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x807FC18C
    /* lis r4, 0 */ // 0x807FC190
    *(0x84 + r1) = r0; // stw @ 0x807FC194
    /* lis r6, 0 */ // 0x807FC198
    /* lfs f0, 0(r5) */ // 0x807FC19C
    /* lis r5, 0 */ // 0x807FC1A0
    *(0x7c + r1) = r31; // stw @ 0x807FC1A4
    r31 = r3;
    /* lis r3, 0 */ // 0x807FC1AC
    /* lfs f1, 0(r4) */ // 0x807FC1B0
    /* li r0, 0 */ // 0x807FC1B4
    /* lis r7, 0x20e8 */ // 0x807FC1B8
    r8 = *(0 + r6); // lwz @ 0x807FC1BC
    r6 = r7 + 0xfff; // 0x807FC1C0
    /* stfs f0, 0x14(r1) */ // 0x807FC1C4
    r4 = r31 + 0x30; // 0x807FC1C8
    r3 = *(0 + r3); // lwz @ 0x807FC1CC
    r5 = r5 + 0; // 0x807FC1D0
    /* stfs f0, 0x18(r1) */ // 0x807FC1D4
    /* li r9, 0 */ // 0x807FC1DC
    /* stfs f0, 0x1c(r1) */ // 0x807FC1E0
    /* stfs f0, 0x20(r1) */ // 0x807FC1E4
    /* stfs f0, 0x24(r1) */ // 0x807FC1E8
    /* stfs f0, 0x28(r1) */ // 0x807FC1EC
    *(0x6c + r1) = r0; // stw @ 0x807FC1F0
    FUN_8081A594(); // bl 0x8081A594
    if (==) goto 0x0x807fc234;
    r4 = r31 + 0x30; // 0x807FC204
    FUN_805A4464(r3, r4, r5); // bl 0x805A4464
    r0 = *(0x2c + r31); // lhz @ 0x807FC210
    /* lfs f0, 0x10(r1) */ // 0x807FC214
    /* lfs f1, 0xc(r1) */ // 0x807FC218
    r0 = r0 | 1; // 0x807FC21C
    /* lfs f2, 8(r1) */ // 0x807FC220
    /* stfs f2, 0x30(r31) */ // 0x807FC224
    *(0x2c + r31) = r0; // sth @ 0x807FC228
    /* stfs f1, 0x34(r31) */ // 0x807FC22C
    /* stfs f0, 0x38(r31) */ // 0x807FC230
    r0 = *(0x84 + r1); // lwz @ 0x807FC234
    r31 = *(0x7c + r1); // lwz @ 0x807FC238
    return;
}