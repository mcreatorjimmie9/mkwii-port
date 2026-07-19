/* Function at 0x8064A194, size=428 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 7 function(s) */

int FUN_8064A194(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    *(0x2c + r1) = r31; // stw @ 0x8064A1A0
    r31 = r3;
    FUN_806A0780(); // bl 0x806A0780
    r3 = r31 + 0x98; // 0x8064A1AC
    /* li r4, 1 */ // 0x8064A1B0
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x8064A1B8
    if (==) goto 0x0x8064a200;
    r3 = r31 + 0x98; // 0x8064A1C4
    /* li r4, 0 */ // 0x8064A1C8
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x8064A1D0
    r4 = *(0 + r3); // lwz @ 0x8064A1D4
    /* slwi r0, r0, 4 */ // 0x8064A1D8
    /* lwzx r0, r4, r0 */ // 0x8064A1DC
    if (==) goto 0x0x8064a1f0;
    /* li r0, 1 */ // 0x8064A1E8
    *(0x35 + r3) = r0; // stb @ 0x8064A1EC
    /* lis r3, 0 */ // 0x8064A1F0
    /* lfs f0, 0(r3) */ // 0x8064A1F4
    /* stfs f0, 0x7c(r31) */ // 0x8064A1F8
    /* b 0x8064a228 */ // 0x8064A1FC
    r3 = r31 + 0x98; // 0x8064A200
    /* li r4, 0 */ // 0x8064A204
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x8064A20C
    /* li r4, 0 */ // 0x8064A210
    /* lfs f1, 0(r5) */ // 0x8064A214
    FUN_8069F7A0(r4, r5, r4); // bl 0x8069F7A0
    /* lis r3, 0 */ // 0x8064A21C
    /* lfs f0, 0(r3) */ // 0x8064A220
    /* stfs f0, 0x7c(r31) */ // 0x8064A224
    r0 = *(0x248 + r31); // lwz @ 0x8064A228
    if (==) goto 0x0x8064a2ac;
    r3 = r31 + 0x174; // 0x8064A234
    FUN_806699A8(r3, r4, r5); // bl 0x806699A8
    r3 = *(0x248 + r31); // lwz @ 0x8064A244
    r12 = *(0 + r3); // lwz @ 0x8064A248
    r12 = *(0x68 + r12); // lwz @ 0x8064A24C
    /* mtctr r12 */ // 0x8064A250
    /* bctrl  */ // 0x8064A254
    r0 = *(0x18 + r1); // lha @ 0x8064A258
    *(0x10 + r3) = r0; // sth @ 0x8064A25C
    r0 = *(0x1a + r1); // lha @ 0x8064A260
    *(0x12 + r3) = r0; // sth @ 0x8064A264
    r0 = *(0x1c + r1); // lha @ 0x8064A268
    *(0x14 + r3) = r0; // sth @ 0x8064A26C
    r0 = *(0x1e + r1); // lha @ 0x8064A270
    *(0x16 + r3) = r0; // sth @ 0x8064A274
    r3 = *(0x248 + r31); // lwz @ 0x8064A278
    r12 = *(0 + r3); // lwz @ 0x8064A27C
    r12 = *(0x68 + r12); // lwz @ 0x8064A280
    /* mtctr r12 */ // 0x8064A284
    /* bctrl  */ // 0x8064A288
    r0 = *(0x10 + r1); // lha @ 0x8064A28C
    *(0x18 + r3) = r0; // sth @ 0x8064A290
    r0 = *(0x12 + r1); // lha @ 0x8064A294
    *(0x1a + r3) = r0; // sth @ 0x8064A298
    r0 = *(0x14 + r1); // lha @ 0x8064A29C
    *(0x1c + r3) = r0; // sth @ 0x8064A2A0
    r0 = *(0x16 + r1); // lha @ 0x8064A2A4
    *(0x1e + r3) = r0; // sth @ 0x8064A2A8
    r0 = *(0x24c + r31); // lwz @ 0x8064A2AC
    if (==) goto 0x0x8064a32c;
    r3 = r31 + 0x174; // 0x8064A2B8
    FUN_80669AA4(r3, r4); // bl 0x80669AA4
    r3 = *(0x24c + r31); // lwz @ 0x8064A2C4
    r12 = *(0 + r3); // lwz @ 0x8064A2C8
    r12 = *(0x68 + r12); // lwz @ 0x8064A2CC
    /* mtctr r12 */ // 0x8064A2D0
    /* bctrl  */ // 0x8064A2D4
    r0 = *(8 + r1); // lha @ 0x8064A2D8
    *(0x10 + r3) = r0; // sth @ 0x8064A2DC
    r0 = *(0xa + r1); // lha @ 0x8064A2E0
    *(0x12 + r3) = r0; // sth @ 0x8064A2E4
    r0 = *(0xc + r1); // lha @ 0x8064A2E8
    *(0x14 + r3) = r0; // sth @ 0x8064A2EC
    r0 = *(0xe + r1); // lha @ 0x8064A2F0
    *(0x16 + r3) = r0; // sth @ 0x8064A2F4
    r3 = *(0x24c + r31); // lwz @ 0x8064A2F8
    r12 = *(0 + r3); // lwz @ 0x8064A2FC
    r12 = *(0x68 + r12); // lwz @ 0x8064A300
    /* mtctr r12 */ // 0x8064A304
    /* bctrl  */ // 0x8064A308
    r0 = *(8 + r1); // lha @ 0x8064A30C
    *(0x18 + r3) = r0; // sth @ 0x8064A310
    r0 = *(0xa + r1); // lha @ 0x8064A314
    *(0x1a + r3) = r0; // sth @ 0x8064A318
    r0 = *(0xc + r1); // lha @ 0x8064A31C
    *(0x1c + r3) = r0; // sth @ 0x8064A320
    r0 = *(0xe + r1); // lha @ 0x8064A324
    *(0x1e + r3) = r0; // sth @ 0x8064A328
    r0 = *(0x34 + r1); // lwz @ 0x8064A32C
    r31 = *(0x2c + r1); // lwz @ 0x8064A330
    return;
}