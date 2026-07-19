/* Function at 0x805DD430, size=220 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_805DD430(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x805DD438
    /* lis r4, 0 */ // 0x805DD43C
    *(0x24 + r1) = r0; // stw @ 0x805DD440
    r5 = r5 + 0; // 0x805DD444
    r4 = r4 + 0; // 0x805DD448
    *(0x1c + r1) = r31; // stw @ 0x805DD44C
    r31 = r3;
    *(0 + r3) = r5; // stw @ 0x805DD454
    r0 = *(4 + r4); // lwz @ 0x805DD458
    if (>) goto 0x0x805dd478;
    r12 = *(0 + r4); // lwz @ 0x805DD464
    r3 = r4;
    r12 = *(0x18 + r12); // lwz @ 0x805DD46C
    /* mtctr r12 */ // 0x805DD470
    /* bctrl  */ // 0x805DD474
    FUN_805D9918(r3); // bl 0x805D9918
    /* clrlwi r4, r3, 0x10 */ // 0x805DD47C
    /* lis r0, 0x4330 */ // 0x805DD480
    /* lis r3, 0 */ // 0x805DD484
    *(0xc + r1) = r4; // stw @ 0x805DD488
    /* lfd f1, 0(r3) */ // 0x805DD48C
    /* lis r3, 0 */ // 0x805DD490
    *(8 + r1) = r0; // stw @ 0x805DD494
    r3 = r3 + 0; // 0x805DD498
    /* lfd f0, 8(r1) */ // 0x805DD49C
    /* fsubs f0, f0, f1 */ // 0x805DD4A0
    /* stfs f0, 4(r31) */ // 0x805DD4A4
    r0 = *(4 + r3); // lwz @ 0x805DD4A8
    if (>) goto 0x0x805dd4c4;
    r12 = *(0 + r3); // lwz @ 0x805DD4B4
    r12 = *(0x18 + r12); // lwz @ 0x805DD4B8
    /* mtctr r12 */ // 0x805DD4BC
    /* bctrl  */ // 0x805DD4C0
    FUN_805D9934(); // bl 0x805D9934
    /* clrlwi r0, r3, 0x10 */ // 0x805DD4C8
    /* lis r3, 0x4330 */ // 0x805DD4CC
    *(0xc + r1) = r0; // stw @ 0x805DD4D0
    /* lis r4, 0 */ // 0x805DD4D4
    /* lfd f1, 0(r4) */ // 0x805DD4D8
    /* li r0, 0 */ // 0x805DD4DC
    *(8 + r1) = r3; // stw @ 0x805DD4E0
    r3 = r31;
    /* lfd f0, 8(r1) */ // 0x805DD4E8
    *(0x10 + r31) = r0; // stb @ 0x805DD4EC
    /* fsubs f0, f0, f1 */ // 0x805DD4F0
    /* stfs f0, 8(r31) */ // 0x805DD4F4
    r31 = *(0x1c + r1); // lwz @ 0x805DD4F8
    r0 = *(0x24 + r1); // lwz @ 0x805DD4FC
    return;
}