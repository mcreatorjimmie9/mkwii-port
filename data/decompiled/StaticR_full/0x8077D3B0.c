/* Function at 0x8077D3B0, size=292 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_8077D3B0(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r0, 0x4330 */ // 0x8077D3BC
    *(0x1c + r1) = r31; // stw @ 0x8077D3C0
    r31 = r3;
    r4 = *(0x178 + r3); // lwz @ 0x8077D3C8
    *(8 + r1) = r0; // stw @ 0x8077D3CC
    *(0x10 + r1) = r0; // stw @ 0x8077D3D4
    if (==) goto 0x0x8077d6bc;
    r0 = *(0x1bc + r3); // lbz @ 0x8077D3DC
    if (==) goto 0x0x8077d6bc;
    /* lfs f1, 0x1c0(r3) */ // 0x8077D3E8
    r3 = r4;
    /* lfs f2, 0x1b0(r31) */ // 0x8077D3F0
    FUN_807455C0(r3); // bl 0x807455C0
    /* frsp f0, f1 */ // 0x8077D3F8
    /* lfs f2, 0x16c(r31) */ // 0x8077D3FC
    /* stfs f1, 0x170(r31) */ // 0x8077D400
    r3 = *(0x20 + r31); // lwz @ 0x8077D404
    /* fadds f1, f2, f0 */ // 0x8077D408
    /* stfs f1, 0x174(r31) */ // 0x8077D40C
    /* lfs f0, 0x1c(r3) */ // 0x8077D410
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8077D414
    /* cror cr0eq, cr0lt, cr0eq */ // 0x8077D418
    if (!=) goto 0x0x8077d49c;
    r0 = *(0x178 + r31); // lwz @ 0x8077D420
    if (<=) goto 0x0x8077d49c;
    r3 = *(0xe4 + r31); // lwz @ 0x8077D42C
    /* li r4, 1 */ // 0x8077D430
    FUN_8077468C(r4); // bl 0x8077468C
    if (==) goto 0x0x8077d49c;
    /* li r0, -1 */ // 0x8077D440
    *(0x178 + r31) = r0; // stw @ 0x8077D444
    r4 = *(0x20 + r31); // lwz @ 0x8077D448
    /* lis r3, 0 */ // 0x8077D44C
    /* lfs f0, 0(r3) */ // 0x8077D450
    /* li r0, 1 */ // 0x8077D454
    /* lfs f1, 0x1c(r4) */ // 0x8077D458
    /* li r5, 0 */ // 0x8077D45C
    /* stfs f1, 0x174(r31) */ // 0x8077D460
    /* li r4, 0 */ // 0x8077D464
    *(0x184 + r31) = r0; // stb @ 0x8077D468
    *(0x18c + r31) = r0; // stb @ 0x8077D46C
    /* b 0x8077d484 */ // 0x8077D470
    r3 = *(0x188 + r31); // lwz @ 0x8077D474
    r5 = r5 + 1; // 0x8077D478
    /* stfsx f0, r3, r4 */ // 0x8077D47C
    r4 = r4 + 4; // 0x8077D480
    r0 = *(0xd0 + r31); // lbz @ 0x8077D484
    if (<) goto 0x0x8077d474;
    r3 = r31;
    FUN_807554A4(r4, r3); // bl 0x807554A4
    /* b 0x8077d6c8 */ // 0x8077D498
    r4 = *(0x178 + r31); // lwz @ 0x8077D49C
    r3 = *(0x13c + r31); // lwz @ 0x8077D4A0
    r0 = r4 + 1; // 0x8077D4A4
    *(0x178 + r31) = r0; // stw @ 0x8077D4A8
    r3 = r3 + 0x74; // 0x8077D4AC
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x8077d4c4;
    /* li r3, 0 */ // 0x8077D4BC
    /* b 0x8077d4c8 */ // 0x8077D4C0
    r3 = *(0xc + r3); // lwz @ 0x8077D4C4
    /* li r0, 0 */ // 0x8077D4CC
    if (==) goto 0x0x8077d4dc;
}