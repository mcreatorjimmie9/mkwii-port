/* Function at 0x8062B238, size=452 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 10 function(s) */

int FUN_8062B238(int r3, int r4, int r5)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r31, 0 */ // 0x8062B248
    r31 = r31 + 0; // 0x8062B24C
    *(0x48 + r1) = r30; // stw @ 0x8062B250
    *(0x44 + r1) = r29; // stw @ 0x8062B254
    r29 = r3;
    *(0x40 + r1) = r28; // stw @ 0x8062B25C
    r0 = *(0x342 + r3); // lbz @ 0x8062B260
    if (==) goto 0x0x8062b290;
    /* lis r5, 0 */ // 0x8062B26C
    r0 = *(0x9c + r3); // lbz @ 0x8062B270
    r5 = *(0 + r5); // lwz @ 0x8062B274
    /* extsb r0, r0 */ // 0x8062B278
    r5 = *(0x18 + r5); // lwz @ 0x8062B27C
    /* slwi r0, r0, 2 */ // 0x8062B280
    /* lwzx r5, r5, r0 */ // 0x8062B284
    r0 = *(0x334 + r5); // lhz @ 0x8062B288
    *(0x334 + r3) = r0; // sth @ 0x8062B28C
    if (!=) goto 0x0x8062bb50;
    r4 = *(0x9c + r29); // lbz @ 0x8062B298
    /* lis r3, 0 */ // 0x8062B29C
    r3 = *(0 + r3); // lwz @ 0x8062B2A0
    /* extsb r4, r4 */ // 0x8062B2A4
    FUN_8061D97C(r3); // bl 0x8061D97C
    r30 = r3;
    FUN_8061DC70(r3); // bl 0x8061DC70
    r0 = *(0x2c + r3); // lhz @ 0x8062B2B4
    /* rlwinm. r0, r0, 0, 0x1a, 0x1a */ // 0x8062B2B8
    if (==) goto 0x0x8062b32c;
    /* lis r3, 0 */ // 0x8062B2C0
    /* li r4, 2 */ // 0x8062B2C4
    r3 = *(0 + r3); // lwz @ 0x8062B2C8
    FUN_805C5788(r3, r4); // bl 0x805C5788
    if (==) goto 0x0x8062b32c;
    r3 = *(0 + r30); // lwz @ 0x8062B2D8
    r3 = *(4 + r3); // lwz @ 0x8062B2DC
    r0 = *(4 + r3); // lwz @ 0x8062B2E0
    /* rlwinm. r0, r0, 0, 0x1b, 0x1b */ // 0x8062B2E4
    if (!=) goto 0x0x8062b32c;
    r0 = *(0xc + r3); // lwz @ 0x8062B2EC
    /* rlwinm. r0, r0, 0, 0x11, 0x12 */ // 0x8062B2F0
    if (!=) goto 0x0x8062b32c;
    r0 = *(0x334 + r29); // lhz @ 0x8062B2F8
    /* lis r4, 0 */ // 0x8062B2FC
    r3 = r30;
    r0 = r0 | 0x20; // 0x8062B304
    *(0x334 + r29) = r0; // sth @ 0x8062B308
    r28 = *(0 + r4); // lwz @ 0x8062B30C
    FUN_8061E2D8(r4, r3); // bl 0x8061E2D8
    r0 = r3;
    r3 = r28;
    /* clrlwi r4, r0, 0x18 */ // 0x8062B31C
    /* li r5, 0 */ // 0x8062B320
    FUN_807AE41C(r3, r5); // bl 0x807AE41C
    /* b 0x8062b35c */ // 0x8062B328
    r0 = *(0x334 + r29); // lhz @ 0x8062B32C
    /* lis r4, 0 */ // 0x8062B330
    r3 = r30;
    r0 = r0 rlwinm 0; // rlwinm
    *(0x334 + r29) = r0; // sth @ 0x8062B33C
    r28 = *(0 + r4); // lwz @ 0x8062B340
    FUN_8061E2D8(r4, r3); // bl 0x8061E2D8
    r0 = r3;
    r3 = r28;
    /* clrlwi r4, r0, 0x18 */ // 0x8062B350
    /* li r5, 1 */ // 0x8062B354
    FUN_807AE41C(r3, r5); // bl 0x807AE41C
    /* lis r3, 0 */ // 0x8062B35C
    r3 = *(0 + r3); // lwz @ 0x8062B360
    r0 = *(0x28 + r3); // lbz @ 0x8062B364
    if (!=) goto 0x0x8062b384;
    /* lis r3, 0 */ // 0x8062B370
    r3 = *(0 + r3); // lwz @ 0x8062B374
    r0 = *(0xb70 + r3); // lwz @ 0x8062B378
    if (!=) goto 0x0x8062b398;
    /* lis r3, 0 */ // 0x8062B384
    /* li r4, 0 */ // 0x8062B388
    r3 = *(0 + r3); // lwz @ 0x8062B38C
    FUN_8061D97C(r3, r4); // bl 0x8061D97C
    r30 = r3;
    r4 = *(0x8c + r29); // lwz @ 0x8062B398
    r3 = r30;
    /* lfs f0, 0x104(r31) */ // 0x8062B3A0
    /* stfs f0, 0x18(r4) */ // 0x8062B3A4
    /* lfs f0, 0x108(r31) */ // 0x8062B3A8
    r4 = *(0x8c + r29); // lwz @ 0x8062B3AC
    /* stfs f0, 0x1c(r4) */ // 0x8062B3B0
    FUN_8061DFF8(); // bl 0x8061DFF8
    /* lfs f1, 0x22c(r3) */ // 0x8062B3B8
    r3 = r30;
    /* lfs f2, 0xfc(r29) */ // 0x8062B3C0
    /* lfs f0, 0x118(r31) */ // 0x8062B3C4
    /* fsubs f1, f1, f2 */ // 0x8062B3C8
    /* fmuls f0, f0, f1 */ // 0x8062B3CC
    /* fadds f0, f2, f0 */ // 0x8062B3D0
    /* stfs f0, 0xfc(r29) */ // 0x8062B3D4
    FUN_8061DA88(); // bl 0x8061DA88
    r4 = *(0 + r3); // lwz @ 0x8062B3DC
    r0 = *(4 + r3); // lwz @ 0x8062B3E0
    *(0x2c + r1) = r0; // stw @ 0x8062B3E4
    *(0x28 + r1) = r4; // stw @ 0x8062B3E8
    /* lfs f1, 0x2c(r1) */ // 0x8062B3EC
    r0 = *(8 + r3); // lwz @ 0x8062B3F0
    r3 = r30;
    *(0x30 + r1) = r0; // stw @ 0x8062B3F8
}