/* Function at 0x8071B3DC, size=220 bytes */
/* Stack frame: 176 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_8071B3DC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -176(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x8071B3E4
    /* lis r0, 0x4330 */ // 0x8071B3EC
    /* lfd f1, 0(r4) */ // 0x8071B3F0
    *(0xac + r1) = r31; // stw @ 0x8071B3F4
    r31 = r3;
    *(0xa8 + r1) = r30; // stw @ 0x8071B3FC
    *(0xa4 + r1) = r29; // stw @ 0x8071B400
    r5 = *(0xd8 + r3); // lwz @ 0x8071B404
    /* lfs f0, 0xcc(r3) */ // 0x8071B408
    r5 = r5 + 1; // 0x8071B40C
    *(0x90 + r1) = r0; // stw @ 0x8071B410
    /* xoris r0, r5, 0x8000 */ // 0x8071B414
    /* fabs f2, f0 */ // 0x8071B418
    *(0x94 + r1) = r0; // stw @ 0x8071B41C
    /* lfd f0, 0x90(r1) */ // 0x8071B420
    *(0xd8 + r3) = r5; // stw @ 0x8071B424
    /* fsubs f0, f0, f1 */ // 0x8071B428
    /* .byte 0xfc, 0x00, 0x10, 0x40 */ // 0x8071B42C
    if (<=) goto 0x0x8071b43c;
    /* li r0, 0 */ // 0x8071B434
    *(0xd8 + r3) = r0; // stw @ 0x8071B438
    r12 = *(0 + r31); // lwz @ 0x8071B43C
    r3 = r31;
    r12 = *(0x124 + r12); // lwz @ 0x8071B444
    /* mtctr r12 */ // 0x8071B448
    /* bctrl  */ // 0x8071B44C
    r12 = *(0 + r31); // lwz @ 0x8071B450
    r3 = r31;
    r12 = *(0x120 + r12); // lwz @ 0x8071B458
    /* mtctr r12 */ // 0x8071B45C
    /* bctrl  */ // 0x8071B460
    r0 = *(0x54 + r31); // lbz @ 0x8071B464
    if (==) goto 0x0x8071b478;
    r5 = r31 + 0x48; // 0x8071B470
    /* b 0x8071b4a8 */ // 0x8071B474
    /* li r0, 1 */ // 0x8071B478
    *(0x54 + r31) = r0; // stb @ 0x8071B47C
    r4 = r31 + 0x58; // 0x8071B484
    FUN_8070E704(r3, r4); // bl 0x8070E704
    /* lfs f0, 8(r1) */ // 0x8071B48C
    r5 = r31 + 0x48; // 0x8071B490
    /* stfs f0, 0x48(r31) */ // 0x8071B494
    /* lfs f0, 0xc(r1) */ // 0x8071B498
    /* stfs f0, 0x4c(r31) */ // 0x8071B49C
    /* lfs f0, 0x10(r1) */ // 0x8071B4A0
    /* stfs f0, 0x50(r31) */ // 0x8071B4A4
    r4 = r31 + 0x3c; // 0x8071B4AC
    r6 = r31 + 0x30; // 0x8071B4B0
    FUN_805E3430(r3, r4, r6); // bl 0x805E3430
}