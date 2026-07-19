/* Function at 0x8069B21C, size=428 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 7 function(s) */

int FUN_8069B21C(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    *(0x2c + r1) = r31; // stw @ 0x8069B228
    r31 = r3;
    FUN_806A0780(); // bl 0x806A0780
    r3 = r31 + 0x98; // 0x8069B234
    /* li r4, 1 */ // 0x8069B238
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x8069B240
    if (==) goto 0x0x8069b288;
    r3 = r31 + 0x98; // 0x8069B24C
    /* li r4, 0 */ // 0x8069B250
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x8069B258
    r4 = *(0 + r3); // lwz @ 0x8069B25C
    /* slwi r0, r0, 4 */ // 0x8069B260
    /* lwzx r0, r4, r0 */ // 0x8069B264
    if (==) goto 0x0x8069b278;
    /* li r0, 1 */ // 0x8069B270
    *(0x35 + r3) = r0; // stb @ 0x8069B274
    /* lis r3, 0 */ // 0x8069B278
    /* lfs f0, 0(r3) */ // 0x8069B27C
    /* stfs f0, 0x7c(r31) */ // 0x8069B280
    /* b 0x8069b2b0 */ // 0x8069B284
    r3 = r31 + 0x98; // 0x8069B288
    /* li r4, 0 */ // 0x8069B28C
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x8069B294
    /* li r4, 0 */ // 0x8069B298
    /* lfs f1, 0(r5) */ // 0x8069B29C
    FUN_8069F7A0(r4, r5, r4); // bl 0x8069F7A0
    /* lis r3, 0 */ // 0x8069B2A4
    /* lfs f0, 0(r3) */ // 0x8069B2A8
    /* stfs f0, 0x7c(r31) */ // 0x8069B2AC
    r0 = *(0x238 + r31); // lwz @ 0x8069B2B0
    if (==) goto 0x0x8069b334;
    r3 = r31 + 0x174; // 0x8069B2BC
    FUN_806699A8(r3, r4, r5); // bl 0x806699A8
    r3 = *(0x238 + r31); // lwz @ 0x8069B2CC
    r12 = *(0 + r3); // lwz @ 0x8069B2D0
    r12 = *(0x68 + r12); // lwz @ 0x8069B2D4
    /* mtctr r12 */ // 0x8069B2D8
    /* bctrl  */ // 0x8069B2DC
    r0 = *(0x18 + r1); // lha @ 0x8069B2E0
    *(0x10 + r3) = r0; // sth @ 0x8069B2E4
    r0 = *(0x1a + r1); // lha @ 0x8069B2E8
    *(0x12 + r3) = r0; // sth @ 0x8069B2EC
    r0 = *(0x1c + r1); // lha @ 0x8069B2F0
    *(0x14 + r3) = r0; // sth @ 0x8069B2F4
    r0 = *(0x1e + r1); // lha @ 0x8069B2F8
    *(0x16 + r3) = r0; // sth @ 0x8069B2FC
    r3 = *(0x238 + r31); // lwz @ 0x8069B300
    r12 = *(0 + r3); // lwz @ 0x8069B304
    r12 = *(0x68 + r12); // lwz @ 0x8069B308
    /* mtctr r12 */ // 0x8069B30C
    /* bctrl  */ // 0x8069B310
    r0 = *(0x10 + r1); // lha @ 0x8069B314
    *(0x18 + r3) = r0; // sth @ 0x8069B318
    r0 = *(0x12 + r1); // lha @ 0x8069B31C
    *(0x1a + r3) = r0; // sth @ 0x8069B320
    r0 = *(0x14 + r1); // lha @ 0x8069B324
    *(0x1c + r3) = r0; // sth @ 0x8069B328
    r0 = *(0x16 + r1); // lha @ 0x8069B32C
    *(0x1e + r3) = r0; // sth @ 0x8069B330
    r0 = *(0x23c + r31); // lwz @ 0x8069B334
    if (==) goto 0x0x8069b3b4;
    r3 = r31 + 0x174; // 0x8069B340
    FUN_80669AA4(r3, r4); // bl 0x80669AA4
    r3 = *(0x23c + r31); // lwz @ 0x8069B34C
    r12 = *(0 + r3); // lwz @ 0x8069B350
    r12 = *(0x68 + r12); // lwz @ 0x8069B354
    /* mtctr r12 */ // 0x8069B358
    /* bctrl  */ // 0x8069B35C
    r0 = *(8 + r1); // lha @ 0x8069B360
    *(0x10 + r3) = r0; // sth @ 0x8069B364
    r0 = *(0xa + r1); // lha @ 0x8069B368
    *(0x12 + r3) = r0; // sth @ 0x8069B36C
    r0 = *(0xc + r1); // lha @ 0x8069B370
    *(0x14 + r3) = r0; // sth @ 0x8069B374
    r0 = *(0xe + r1); // lha @ 0x8069B378
    *(0x16 + r3) = r0; // sth @ 0x8069B37C
    r3 = *(0x23c + r31); // lwz @ 0x8069B380
    r12 = *(0 + r3); // lwz @ 0x8069B384
    r12 = *(0x68 + r12); // lwz @ 0x8069B388
    /* mtctr r12 */ // 0x8069B38C
    /* bctrl  */ // 0x8069B390
    r0 = *(8 + r1); // lha @ 0x8069B394
    *(0x18 + r3) = r0; // sth @ 0x8069B398
    r0 = *(0xa + r1); // lha @ 0x8069B39C
    *(0x1a + r3) = r0; // sth @ 0x8069B3A0
    r0 = *(0xc + r1); // lha @ 0x8069B3A4
    *(0x1c + r3) = r0; // sth @ 0x8069B3A8
    r0 = *(0xe + r1); // lha @ 0x8069B3AC
    *(0x1e + r3) = r0; // sth @ 0x8069B3B0
    r0 = *(0x34 + r1); // lwz @ 0x8069B3B4
    r31 = *(0x2c + r1); // lwz @ 0x8069B3B8
    return;
}