/* Function at 0x8060D3A8, size=428 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 13 function(s) */

int FUN_8060D3A8(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0x80c */ // 0x8060D3B0
    /* li r6, 1 */ // 0x8060D3B4
    *(0x14 + r1) = r0; // stw @ 0x8060D3B8
    r0 = r4 + 0x100; // 0x8060D3BC
    /* li r4, 1 */ // 0x8060D3C0
    *(0xc + r1) = r31; // stw @ 0x8060D3C4
    *(8 + r1) = r30; // stw @ 0x8060D3C8
    r30 = r3;
    r5 = *(0 + r3); // lwz @ 0x8060D3D0
    r7 = *(4 + r5); // lwz @ 0x8060D3D4
    /* li r5, 1 */ // 0x8060D3D8
    r3 = *(0xc + r7); // lwz @ 0x8060D3DC
    /* and. r0, r3, r0 */ // 0x8060D3E0
    if (!=) goto 0x0x8060d3f8;
    r0 = *(4 + r7); // lwz @ 0x8060D3E8
    /* rlwinm. r0, r0, 0, 0x1b, 0x1b */ // 0x8060D3EC
    if (!=) goto 0x0x8060d3f8;
    /* li r6, 0 */ // 0x8060D3F4
    if (!=) goto 0x0x8060d410;
    r0 = *(0x14 + r7); // lwz @ 0x8060D400
    /* rlwinm. r0, r0, 0, 0x18, 0x18 */ // 0x8060D404
    if (!=) goto 0x0x8060d410;
    /* li r5, 0 */ // 0x8060D40C
    if (!=) goto 0x0x8060d428;
    r0 = *(8 + r7); // lwz @ 0x8060D418
    /* clrlwi. r0, r0, 0x1f */ // 0x8060D41C
    if (!=) goto 0x0x8060d428;
    /* li r4, 0 */ // 0x8060D424
    if (!=) goto 0x0x8060d53c;
    /* lis r4, 0 */ // 0x8060D430
    r3 = r30;
    r31 = *(0 + r4); // lha @ 0x8060D438
    FUN_8061E2D8(r4, r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x8060D440
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x8060D448
    r3 = *(0x68 + r3); // lwz @ 0x8060D44C
    /* lwzx r3, r3, r0 */ // 0x8060D450
    FUN_80733560(r4); // bl 0x80733560
    r3 = r30;
    FUN_8061E010(r3); // bl 0x8061E010
    FUN_807962A8(r3); // bl 0x807962A8
    r0 = *(0x118 + r30); // lhz @ 0x8060D464
    /* li r4, 0 */ // 0x8060D468
    /* clrlwi. r0, r0, 0x1f */ // 0x8060D46C
    if (==) goto 0x0x8060d480;
    r0 = *(0x10c + r30); // lha @ 0x8060D474
    if (<=) goto 0x0x8060d4a0;
    r0 = *(0x118 + r30); // lhz @ 0x8060D480
    /* lis r3, 0 */ // 0x8060D484
    *(0x10c + r30) = r31; // sth @ 0x8060D488
    /* li r4, 1 */ // 0x8060D48C
    r0 = r0 | 1; // 0x8060D490
    *(0x118 + r30) = r0; // sth @ 0x8060D494
    /* lfs f0, 0(r3) */ // 0x8060D498
    /* stfs f0, 0x124(r30) */ // 0x8060D49C
    if (==) goto 0x0x8060d518;
    r4 = *(0 + r30); // lwz @ 0x8060D4A8
    r3 = r30;
    r4 = *(4 + r4); // lwz @ 0x8060D4B0
    r0 = *(4 + r4); // lwz @ 0x8060D4B4
    r0 = r0 | 0x10; // 0x8060D4B8
    *(4 + r4) = r0; // stw @ 0x8060D4BC
    /* lfs f1, 0x124(r30) */ // 0x8060D4C0
    FUN_8061E6BC(); // bl 0x8061E6BC
    r3 = r30;
    /* li r4, 6 */ // 0x8060D4CC
    FUN_8061E02C(r3, r4); // bl 0x8061E02C
    r3 = r30;
    FUN_8061E2D8(r3, r4, r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x8060D4DC
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x8060D4E4
    /* clrlwi r4, r31, 0x10 */ // 0x8060D4E8
    r3 = *(0x68 + r3); // lwz @ 0x8060D4EC
    /* lwzx r3, r3, r0 */ // 0x8060D4F0
    FUN_807336DC(); // bl 0x807336DC
    r3 = r30;
    FUN_8061E2BC(r3); // bl 0x8061E2BC
    FUN_80859398(r3); // bl 0x80859398
    r3 = r30;
    /* li r4, 4 */ // 0x8060D508
    /* li r5, 0 */ // 0x8060D50C
    /* li r6, 1 */ // 0x8060D510
    FUN_8061E8C0(r3, r4, r5, r6); // bl 0x8061E8C0
    /* lis r4, 0 */ // 0x8060D518
    r3 = r30;
    /* lfs f1, 0(r4) */ // 0x8060D520
    /* li r4, 3 */ // 0x8060D524
    /* li r5, 1 */ // 0x8060D528
    FUN_8061DC98(r4, r3, r4, r5); // bl 0x8061DC98
    r3 = r30;
    /* li r4, 0x1e */ // 0x8060D534
    FUN_8061F03C(r4, r5, r3, r4); // bl 0x8061F03C
    r0 = *(0x14 + r1); // lwz @ 0x8060D53C
    r31 = *(0xc + r1); // lwz @ 0x8060D540
    r30 = *(8 + r1); // lwz @ 0x8060D544
    return;
}