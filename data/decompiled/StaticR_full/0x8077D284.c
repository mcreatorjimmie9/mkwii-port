/* Function at 0x8077D284, size=300 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_8077D284(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x8077D28C
    /* li r6, 0 */ // 0x8077D290
    *(0x34 + r1) = r0; // stw @ 0x8077D294
    /* lfs f0, 0(r4) */ // 0x8077D298
    *(0x2c + r1) = r31; // stw @ 0x8077D29C
    *(0x28 + r1) = r30; // stw @ 0x8077D2A0
    r30 = r3;
    *(0x178 + r3) = r6; // stw @ 0x8077D2A8
    r5 = *(0xd8 + r3); // lwz @ 0x8077D2AC
    /* lfs f1, 0x34(r5) */ // 0x8077D2B0
    /* li r5, 0 */ // 0x8077D2B4
    /* stfs f1, 0x16c(r3) */ // 0x8077D2B8
    /* stfs f0, 0x170(r3) */ // 0x8077D2BC
    /* b 0x8077d2d0 */ // 0x8077D2C0
    r4 = *(0x17c + r3); // lwz @ 0x8077D2C4
    /* stbx r6, r4, r5 */ // 0x8077D2C8
    r5 = r5 + 1; // 0x8077D2CC
    r0 = *(0xd0 + r3); // lbz @ 0x8077D2D0
    if (<) goto 0x0x8077d2c4;
    r4 = *(0x1bc + r3); // lbz @ 0x8077D2DC
    /* li r0, 0 */ // 0x8077D2E0
    *(0x18c + r3) = r0; // stb @ 0x8077D2E4
    if (!=) goto 0x0x8077d314;
    /* lis r4, 0 */ // 0x8077D2F0
    /* lfs f0, 0(r4) */ // 0x8077D2F4
    r4 = r4 + 0; // 0x8077D2F8
    /* stfs f0, 0x190(r3) */ // 0x8077D2FC
    /* lfs f0, 4(r4) */ // 0x8077D300
    /* stfs f0, 0x194(r3) */ // 0x8077D304
    /* lfs f0, 8(r4) */ // 0x8077D308
    /* stfs f0, 0x198(r3) */ // 0x8077D30C
    /* b 0x8077d398 */ // 0x8077D310
    if (!=) goto 0x0x8077d358;
    r3 = *(0xe0 + r3); // lwz @ 0x8077D31C
    r31 = *(0xc + r3); // lwz @ 0x8077D320
    r3 = r31;
    FUN_808A1BCC(r3); // bl 0x808A1BCC
    r4 = r31 + 0x58; // 0x8077D330
    /* li r5, 0 */ // 0x8077D334
    FUN_805C70D8(r3, r3, r4, r5); // bl 0x805C70D8
    /* lfs f0, 0x14(r1) */ // 0x8077D33C
    /* stfs f0, 0x190(r30) */ // 0x8077D340
    /* lfs f0, 0x18(r1) */ // 0x8077D344
    /* stfs f0, 0x194(r30) */ // 0x8077D348
    /* lfs f0, 0x1c(r1) */ // 0x8077D34C
    /* stfs f0, 0x198(r30) */ // 0x8077D350
    /* b 0x8077d398 */ // 0x8077D354
    if (!=) goto 0x0x8077d398;
    r3 = *(0xe0 + r3); // lwz @ 0x8077D360
    r31 = *(0xc + r3); // lwz @ 0x8077D364
    r3 = r31;
    FUN_808A1BCC(r3); // bl 0x808A1BCC
    r4 = r31 + 0x58; // 0x8077D374
    /* li r5, 2 */ // 0x8077D378
    FUN_805C70D8(r3, r3, r4, r5); // bl 0x805C70D8
    /* lfs f0, 8(r1) */ // 0x8077D380
    /* stfs f0, 0x190(r30) */ // 0x8077D384
    /* lfs f0, 0xc(r1) */ // 0x8077D388
    /* stfs f0, 0x194(r30) */ // 0x8077D38C
    /* lfs f0, 0x10(r1) */ // 0x8077D390
    /* stfs f0, 0x198(r30) */ // 0x8077D394
    r0 = *(0x34 + r1); // lwz @ 0x8077D398
    r31 = *(0x2c + r1); // lwz @ 0x8077D39C
    r30 = *(0x28 + r1); // lwz @ 0x8077D3A0
    return;
}