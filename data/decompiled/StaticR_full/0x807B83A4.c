/* Function at 0x807B83A4, size=248 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807B83A4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807B83B0
    r31 = r3;
    r3 = *(0x194 + r3); // lwz @ 0x807B83B8
    FUN_807B949C(); // bl 0x807B949C
    r3 = *(0x198 + r31); // lwz @ 0x807B83C0
    r4 = *(0x194 + r31); // lwz @ 0x807B83C4
    r12 = *(0 + r3); // lwz @ 0x807B83C8
    r12 = *(0x10 + r12); // lwz @ 0x807B83CC
    /* mtctr r12 */ // 0x807B83D0
    /* bctrl  */ // 0x807B83D4
    /* lis r3, 0 */ // 0x807B83D8
    r4 = *(0x50 + r31); // lwz @ 0x807B83DC
    /* lfs f1, 0(r3) */ // 0x807B83E0
    /* lis r3, 0 */ // 0x807B83E4
    /* stfs f1, 8(r4) */ // 0x807B83E8
    /* li r0, 0 */ // 0x807B83EC
    /* lfs f0, 0(r3) */ // 0x807B83F0
    r3 = r31;
    /* stfs f1, 4(r4) */ // 0x807B83F8
    /* stfs f1, 0(r4) */ // 0x807B83FC
    /* stfs f1, 0xc(r4) */ // 0x807B8400
    /* stfs f1, 0x10(r4) */ // 0x807B8404
    /* stfs f0, 0x14(r4) */ // 0x807B8408
    /* stfs f1, 0x18(r4) */ // 0x807B840C
    /* stfs f1, 0x20(r4) */ // 0x807B8410
    *(0x24 + r4) = r0; // stb @ 0x807B8414
    *(0x25 + r4) = r0; // stb @ 0x807B8418
    *(0x26 + r4) = r0; // stb @ 0x807B841C
    *(0x27 + r4) = r0; // stb @ 0x807B8420
    *(0x28 + r4) = r0; // stb @ 0x807B8424
    r12 = *(0x34 + r31); // lwz @ 0x807B8428
    r4 = *(0x50 + r31); // lwz @ 0x807B842C
    r12 = *(0x60 + r12); // lwz @ 0x807B8430
    /* mtctr r12 */ // 0x807B8434
    /* bctrl  */ // 0x807B8438
    r12 = *(0x34 + r31); // lwz @ 0x807B843C
    r3 = r31;
    r12 = *(0xc + r12); // lwz @ 0x807B8444
    /* mtctr r12 */ // 0x807B8448
    /* bctrl  */ // 0x807B844C
    r4 = *(0x50 + r31); // lwz @ 0x807B8450
    r3 = r31;
    FUN_807B8524(r3); // bl 0x807B8524
    r12 = *(0x34 + r31); // lwz @ 0x807B845C
    r3 = r31;
    r4 = *(0x50 + r31); // lwz @ 0x807B8464
    r12 = *(0x5c + r12); // lwz @ 0x807B8468
    /* mtctr r12 */ // 0x807B846C
    /* bctrl  */ // 0x807B8470
    r3 = *(0x58 + r31); // lwz @ 0x807B8474
    r12 = *(0 + r3); // lwz @ 0x807B8478
    r12 = *(0x10 + r12); // lwz @ 0x807B847C
    /* mtctr r12 */ // 0x807B8480
    /* bctrl  */ // 0x807B8484
    r0 = *(0x14 + r1); // lwz @ 0x807B8488
    r31 = *(0xc + r1); // lwz @ 0x807B848C
    return;
}