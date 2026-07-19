/* Function at 0x8090C15C, size=456 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 6 function(s) */

int FUN_8090C15C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0 */ // 0x8090C164
    r5 = r5 + 0; // 0x8090C16C
    *(0x3c + r1) = r31; // stw @ 0x8090C170
    r31 = r3;
    *(0x38 + r1) = r30; // stw @ 0x8090C178
    r30 = r4;
    FUN_8089BC74(r5); // bl 0x8089BC74
    /* lis r4, 0 */ // 0x8090C184
    /* lis r3, 0 */ // 0x8090C188
    r4 = r4 + 0; // 0x8090C18C
    *(0 + r31) = r4; // stw @ 0x8090C190
    r0 = *(0 + r3); // lwz @ 0x8090C194
    *(0x104 + r31) = r0; // stw @ 0x8090C198
    r3 = *(0 + r30); // lwz @ 0x8090C19C
    r6 = *(0x2a + r3); // lha @ 0x8090C1A0
    *(0x108 + r31) = r6; // stw @ 0x8090C1A4
    r3 = *(0 + r30); // lwz @ 0x8090C1A8
    r5 = *(0x2c + r3); // lha @ 0x8090C1AC
    *(0x10c + r31) = r5; // stw @ 0x8090C1B0
    r4 = *(0 + r30); // lwz @ 0x8090C1B4
    r3 = *(0x2e + r4); // lha @ 0x8090C1B8
    r30 = *(0x30 + r4); // lha @ 0x8090C1BC
    r0 = *(0x32 + r4); // lha @ 0x8090C1C0
    *(0x114 + r31) = r0; // stw @ 0x8090C1C8
    if (!=) goto 0x0x8090c1ec;
    /* li r0, -1 */ // 0x8090C1D0
    *(0x110 + r31) = r0; // stw @ 0x8090C1D4
    *(0x118 + r31) = r0; // stw @ 0x8090C1D8
    *(0x11c + r31) = r0; // stw @ 0x8090C1DC
    *(0x120 + r31) = r0; // stw @ 0x8090C1E0
    *(0x124 + r31) = r0; // stw @ 0x8090C1E4
    /* b 0x8090c210 */ // 0x8090C1E8
    r4 = r30 u/ r3; // 0x8090C1EC
    *(0x118 + r31) = r6; // stw @ 0x8090C1F0
    *(0x110 + r31) = r4; // stw @ 0x8090C1F4
    r0 = r6 + r4; // 0x8090C1F8
    r3 = r0 + r5; // 0x8090C1FC
    *(0x11c + r31) = r0; // stw @ 0x8090C200
    r0 = r3 + r4; // 0x8090C204
    *(0x120 + r31) = r3; // stw @ 0x8090C208
    *(0x124 + r31) = r0; // stw @ 0x8090C20C
    /* lfs f2, 0x30(r31) */ // 0x8090C210
    r3 = r31;
    /* lfs f1, 0x34(r31) */ // 0x8090C218
    /* lfs f0, 0x38(r31) */ // 0x8090C21C
    /* stfs f2, 0x128(r31) */ // 0x8090C220
    /* stfs f1, 0x12c(r31) */ // 0x8090C224
    /* stfs f0, 0x130(r31) */ // 0x8090C228
    FUN_808A1BCC(); // bl 0x808A1BCC
    r4 = r31 + 0x58; // 0x8090C234
    /* li r5, 2 */ // 0x8090C238
    FUN_805C70D8(r3, r4, r5); // bl 0x805C70D8
    /* lis r0, 0x4330 */ // 0x8090C240
    *(0x34 + r1) = r30; // stw @ 0x8090C244
    /* lis r5, 0 */ // 0x8090C248
    *(0x30 + r1) = r0; // stw @ 0x8090C250
    /* lfd f1, 0(r5) */ // 0x8090C258
    /* lfd f0, 0x30(r1) */ // 0x8090C25C
    /* fsubs f1, f0, f1 */ // 0x8090C260
    FUN_805A443C(r4); // bl 0x805A443C
    r4 = r31 + 0x128; // 0x8090C26C
    FUN_805A4498(r3, r4, r5); // bl 0x805A4498
    /* lfs f0, 8(r1) */ // 0x8090C278
    r3 = r31;
    /* stfs f0, 0x134(r31) */ // 0x8090C280
    /* lfs f0, 0xc(r1) */ // 0x8090C284
    /* stfs f0, 0x138(r31) */ // 0x8090C288
    /* lfs f0, 0x10(r1) */ // 0x8090C28C
    /* stfs f0, 0x13c(r31) */ // 0x8090C290
    FUN_808A1BCC(); // bl 0x808A1BCC
    /* lfs f0, 0x58(r31) */ // 0x8090C298
    /* lis r5, 0 */ // 0x8090C29C
    /* stfs f0, 0x140(r31) */ // 0x8090C2A0
    r3 = r31;
    /* lfs f0, 0x5c(r31) */ // 0x8090C2A8
    /* stfs f0, 0x144(r31) */ // 0x8090C2AC
    /* lfs f0, 0x60(r31) */ // 0x8090C2B0
    /* stfs f0, 0x148(r31) */ // 0x8090C2B4
    /* lfs f0, 0x64(r31) */ // 0x8090C2B8
    /* stfs f0, 0x14c(r31) */ // 0x8090C2BC
    /* lfs f0, 0x68(r31) */ // 0x8090C2C0
    /* stfs f0, 0x150(r31) */ // 0x8090C2C4
    /* lfs f0, 0x6c(r31) */ // 0x8090C2C8
    /* stfs f0, 0x154(r31) */ // 0x8090C2CC
    /* lfs f0, 0x70(r31) */ // 0x8090C2D0
    /* stfs f0, 0x158(r31) */ // 0x8090C2D4
    /* lfs f0, 0x74(r31) */ // 0x8090C2D8
    /* stfs f0, 0x15c(r31) */ // 0x8090C2DC
    /* lfs f0, 0x78(r31) */ // 0x8090C2E0
    /* stfs f0, 0x160(r31) */ // 0x8090C2E4
    /* lfs f0, 0x7c(r31) */ // 0x8090C2E8
    /* stfs f0, 0x164(r31) */ // 0x8090C2EC
    /* lfs f0, 0x80(r31) */ // 0x8090C2F0
    /* stfs f0, 0x168(r31) */ // 0x8090C2F4
    /* lfs f0, 0x84(r31) */ // 0x8090C2F8
    /* stfs f0, 0x16c(r31) */ // 0x8090C2FC
    r4 = *(0 + r5); // lwz @ 0x8090C300
    r0 = r4 + 1; // 0x8090C304
    *(0 + r5) = r0; // stw @ 0x8090C308
    r31 = *(0x3c + r1); // lwz @ 0x8090C30C
    r30 = *(0x38 + r1); // lwz @ 0x8090C310
    r0 = *(0x44 + r1); // lwz @ 0x8090C314
    return;
}