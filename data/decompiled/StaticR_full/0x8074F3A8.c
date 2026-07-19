/* Function at 0x8074F3A8, size=244 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 6 function(s) */

int FUN_8074F3A8(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x8074F3B8
    /* lfs f2, 0(r31) */ // 0x8074F3BC
    *(0x18 + r1) = r30; // stw @ 0x8074F3C0
    /* lis r30, 0 */ // 0x8074F3C4
    /* lfs f1, 0(r30) */ // 0x8074F3C8
    *(0x14 + r1) = r29; // stw @ 0x8074F3CC
    r29 = r3;
    r4 = *(8 + r3); // lwz @ 0x8074F3D4
    r3 = *(0x28 + r4); // lwz @ 0x8074F3D8
    /* li r4, 0 */ // 0x8074F3DC
    FUN_805E70EC(r4); // bl 0x805E70EC
    r3 = *(8 + r29); // lwz @ 0x8074F3E4
    /* li r4, 0 */ // 0x8074F3E8
    r3 = *(0x28 + r3); // lwz @ 0x8074F3EC
    FUN_805E7060(r4, r4); // bl 0x805E7060
    r12 = *(0 + r3); // lwz @ 0x8074F3F4
    r12 = *(8 + r12); // lwz @ 0x8074F3F8
    /* mtctr r12 */ // 0x8074F3FC
    /* bctrl  */ // 0x8074F400
    /* stfs f1, 0xe4(r29) */ // 0x8074F404
    /* li r4, 0 */ // 0x8074F408
    r3 = *(8 + r29); // lwz @ 0x8074F40C
    r3 = *(0x28 + r3); // lwz @ 0x8074F410
    FUN_805E7060(r4); // bl 0x805E7060
    r12 = *(0 + r3); // lwz @ 0x8074F418
    /* lfs f1, 0(r30) */ // 0x8074F41C
    r12 = *(0x14 + r12); // lwz @ 0x8074F420
    /* mtctr r12 */ // 0x8074F424
    /* bctrl  */ // 0x8074F428
    r0 = *(0xe0 + r29); // lwz @ 0x8074F42C
    if (!=) goto 0x0x8074f46c;
    r3 = *(8 + r29); // lwz @ 0x8074F438
    /* li r4, 1 */ // 0x8074F43C
    /* lfs f1, 0(r30) */ // 0x8074F440
    /* li r5, 1 */ // 0x8074F444
    r3 = *(0x28 + r3); // lwz @ 0x8074F448
    /* lfs f2, 0(r31) */ // 0x8074F44C
    FUN_805E73A4(r4, r5); // bl 0x805E73A4
    r3 = *(8 + r29); // lwz @ 0x8074F454
    /* li r4, 2 */ // 0x8074F458
    /* lfs f1, 0(r30) */ // 0x8074F45C
    r3 = *(0x28 + r3); // lwz @ 0x8074F460
    /* lfs f2, 0(r31) */ // 0x8074F464
    FUN_805E70EC(r4); // bl 0x805E70EC
    /* li r0, 0 */ // 0x8074F46C
    *(0xe9 + r29) = r0; // stb @ 0x8074F470
    r3 = r29;
    /* li r4, 0 */ // 0x8074F478
    FUN_808A0A44(r3, r4); // bl 0x808A0A44
    r0 = *(0x24 + r1); // lwz @ 0x8074F480
    r31 = *(0x1c + r1); // lwz @ 0x8074F484
    r30 = *(0x18 + r1); // lwz @ 0x8074F488
    r29 = *(0x14 + r1); // lwz @ 0x8074F48C
    return;
}