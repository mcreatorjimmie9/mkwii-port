/* Function at 0x806CC18C, size=504 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_806CC18C(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806CC198
    r31 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r4, 0 */ // 0x806CC1A4
    r3 = r31 + 0x44; // 0x806CC1A8
    r4 = r4 + 0; // 0x806CC1AC
    *(0 + r31) = r4; // stw @ 0x806CC1B0
    FUN_80668134(r4, r3, r4); // bl 0x80668134
    /* lis r4, 0 */ // 0x806CC1B8
    /* lis r3, 0 */ // 0x806CC1BC
    /* lfs f1, 0(r4) */ // 0x806CC1C0
    r7 = r31 + 0xa0; // 0x806CC1C4
    r4 = r31 + 0x19e4; // 0x806CC1C8
    /* lfs f0, 0(r3) */ // 0x806CC1CC
    /* li r0, 0 */ // 0x806CC1D0
    *(0x84 + r31) = r0; // stb @ 0x806CC1D4
    /* stfs f1, 0x94(r31) */ // 0x806CC1DC
    /* stfs f1, 0x98(r31) */ // 0x806CC1E0
    /* stfs f0, 0x9c(r31) */ // 0x806CC1E4
    if (>=) goto 0x0x806cc364;
    r5 = r31 + 0xa0; // 0x806CC1EC
    /* lis r3, 0x2aab */ // 0x806CC1F0
    /* subf r8, r5, r4 */ // 0x806CC1F4
    r6 = r31 + 0x1984; // 0x806CC1F8
    r9 = r8 + 0xb; // 0x806CC1FC
    r0 = r3 + -0x5555; // 0x806CC200
    /* mulhw r0, r0, r9 */ // 0x806CC204
    r0 = r0 >> 1; // srawi
    /* srwi r3, r0, 0x1f */ // 0x806CC20C
    r10 = r0 + r3; // 0x806CC210
    if (<=) goto 0x0x806cc320;
    /* li r3, 0 */ // 0x806CC224
    /* li r4, 0 */ // 0x806CC228
    if (>) goto 0x0x806cc254;
    /* rlwinm. r0, r8, 0, 0, 0 */ // 0x806CC230
    /* li r5, 1 */ // 0x806CC234
    if (!=) goto 0x0x806cc248;
    /* rlwinm. r0, r9, 0, 0, 0 */ // 0x806CC23C
    if (==) goto 0x0x806cc248;
    /* li r5, 0 */ // 0x806CC244
    if (==) goto 0x0x806cc254;
    /* li r4, 1 */ // 0x806CC250
    if (==) goto 0x0x806cc284;
    /* rlwinm. r5, r10, 0, 0, 0 */ // 0x806CC25C
    /* li r4, 1 */ // 0x806CC260
    if (!=) goto 0x0x806cc278;
    r0 = r11 rlwinm 0; // rlwinm
    if (==) goto 0x0x806cc278;
    /* li r4, 0 */ // 0x806CC274
    if (==) goto 0x0x806cc284;
    /* li r3, 1 */ // 0x806CC280
    if (==) goto 0x0x806cc320;
    r3 = r6 + 0x5f; // 0x806CC28C
    /* lis r5, 0 */ // 0x806CC290
    /* subf r3, r7, r3 */ // 0x806CC294
    /* li r0, 0x60 */ // 0x806CC298
    r3 = r3 u/ r0; // 0x806CC29C
    /* lis r4, 0 */ // 0x806CC2A0
    /* lfs f1, 0(r5) */ // 0x806CC2A4
    /* lfs f0, 0(r4) */ // 0x806CC2A8
    /* mtctr r3 */ // 0x806CC2AC
    if (>=) goto 0x0x806cc320;
    /* stfs f1, 0(r7) */ // 0x806CC2B8
    /* stfs f1, 4(r7) */ // 0x806CC2BC
    /* stfs f0, 8(r7) */ // 0x806CC2C0
    /* stfs f1, 0xc(r7) */ // 0x806CC2C4
    /* stfs f1, 0x10(r7) */ // 0x806CC2C8
    /* stfs f0, 0x14(r7) */ // 0x806CC2CC
    /* stfs f1, 0x18(r7) */ // 0x806CC2D0
    /* stfs f1, 0x1c(r7) */ // 0x806CC2D4
    /* stfs f0, 0x20(r7) */ // 0x806CC2D8
    /* stfs f1, 0x24(r7) */ // 0x806CC2DC
    /* stfs f1, 0x28(r7) */ // 0x806CC2E0
    /* stfs f0, 0x2c(r7) */ // 0x806CC2E4
    /* stfs f1, 0x30(r7) */ // 0x806CC2E8
    /* stfs f1, 0x34(r7) */ // 0x806CC2EC
    /* stfs f0, 0x38(r7) */ // 0x806CC2F0
    /* stfs f1, 0x3c(r7) */ // 0x806CC2F4
    /* stfs f1, 0x40(r7) */ // 0x806CC2F8
    /* stfs f0, 0x44(r7) */ // 0x806CC2FC
    /* stfs f1, 0x48(r7) */ // 0x806CC300
    /* stfs f1, 0x4c(r7) */ // 0x806CC304
    /* stfs f0, 0x50(r7) */ // 0x806CC308
    /* stfs f1, 0x54(r7) */ // 0x806CC30C
    /* stfs f1, 0x58(r7) */ // 0x806CC310
    /* stfs f0, 0x5c(r7) */ // 0x806CC314
    r7 = r7 + 0x60; // 0x806CC318
    if (counter-- != 0) goto 0x0x806cc2b8;
    r4 = r31 + 0x19e4; // 0x806CC320
    /* lis r6, 0 */ // 0x806CC324
    r3 = r4 + 0xb; // 0x806CC328
    /* lis r5, 0 */ // 0x806CC32C
    /* subf r3, r7, r3 */ // 0x806CC330
    /* li r0, 0xc */ // 0x806CC334
    r3 = r3 u/ r0; // 0x806CC338
    /* lfs f1, 0(r6) */ // 0x806CC33C
    /* lfs f0, 0(r5) */ // 0x806CC340
    /* mtctr r3 */ // 0x806CC344
    if (>=) goto 0x0x806cc364;
    /* stfs f1, 0(r7) */ // 0x806CC350
    /* stfs f1, 4(r7) */ // 0x806CC354
    /* stfs f0, 8(r7) */ // 0x806CC358
    r7 = r7 + 0xc; // 0x806CC35C
    if (counter-- != 0) goto 0x0x806cc350;
    r3 = r31 + 0x94; // 0x806CC364
    FUN_806CD1B8(r7, r3); // bl 0x806CD1B8
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x806CC370
    r0 = *(0x14 + r1); // lwz @ 0x806CC374
    return;
}