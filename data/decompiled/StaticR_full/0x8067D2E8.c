/* Function at 0x8067D2E8, size=928 bytes */
/* Stack frame: 480 bytes */
/* Saved registers: r21 */
/* Calls: 17 function(s) */

int FUN_8067D2E8(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -480(r1) */
    /* saved r21 */
    /* lis r8, 0 */ // 0x8067D2F0
    /* lis r5, 0 */ // 0x8067D2F4
    *(0x1e4 + r1) = r0; // stw @ 0x8067D2F8
    /* li r0, 0 */ // 0x8067D2FC
    r8 = r8 + 0; // 0x8067D300
    /* stmw r21, 0x1b4(r1) */ // 0x8067D308
    r24 = r3;
    /* li r7, 0 */ // 0x8067D310
    r26 = *(0xc38 + r3); // lwz @ 0x8067D314
    r3 = *(0 + r5); // lwz @ 0x8067D318
    /* li r5, 1 */ // 0x8067D31C
    *(0xd0 + r1) = r8; // stw @ 0x8067D320
    r4 = r26;
    *(0xda + r1) = r0; // stb @ 0x8067D328
    *(0xd4 + r1) = r0; // sth @ 0x8067D32C
    *(0xd6 + r1) = r0; // stb @ 0x8067D330
    *(0xd8 + r1) = r0; // sth @ 0x8067D334
    *(0xdc + r1) = r8; // stw @ 0x8067D338
    *(0xe6 + r1) = r0; // stb @ 0x8067D33C
    *(0xe0 + r1) = r0; // sth @ 0x8067D340
    *(0xe2 + r1) = r0; // stb @ 0x8067D344
    *(0xe4 + r1) = r0; // sth @ 0x8067D348
    FUN_806F81F4(); // bl 0x806F81F4
    if (==) goto 0x0x8067d674;
    FUN_806DF188(r3); // bl 0x806DF188
    r5 = *(0xc44 + r24); // lwz @ 0x8067D360
    r6 = *(0xc48 + r24); // lwz @ 0x8067D368
    /* li r4, 0 */ // 0x8067D36C
    FUN_806DE040(r3, r4); // bl 0x806DE040
    r0 = *(0xd4 + r1); // lhz @ 0x8067D374
    r4 = *(0xd6 + r1); // lbz @ 0x8067D37C
    /* mulli r0, r0, 0x3c */ // 0x8067D380
    r5 = *(0xd8 + r1); // lhz @ 0x8067D384
    r0 = r4 + r0; // 0x8067D388
    /* mulli r0, r0, 0x3e8 */ // 0x8067D38C
    r4 = r5 + r0; // 0x8067D390
    FUN_806DE050(); // bl 0x806DE050
    /* lis r31, 1 */ // 0x8067D398
    /* li r25, 0 */ // 0x8067D39C
    /* lis r22, 0x5c */ // 0x8067D3A0
    /* lis r29, 0 */ // 0x8067D3A4
    r30 = r31 + -0x7340; // 0x8067D3A8
    /* li r23, 0xa */ // 0x8067D3AC
    /* clrlwi r4, r25, 0x18 */ // 0x8067D3B0
    r5 = *(0 + r29); // lwz @ 0x8067D3B4
    r0 = r4 * r30; // 0x8067D3B8
    r3 = *(0x14 + r5); // lwz @ 0x8067D3BC
    r3 = r3 + r0; // 0x8067D3C0
    r3 = *(8 + r3); // lwz @ 0x8067D3C4
    /* addis r0, r3, -0x524b */ // 0x8067D3C8
    if (!=) goto 0x0x8067d490;
    r0 = r31 + -0x6c10; // 0x8067D3D4
    r0 = r4 * r0; // 0x8067D3D8
    r0 = r5 + r0; // 0x8067D3DC
    /* addic. r21, r0, 0x38 */ // 0x8067D3E0
    if (==) goto 0x0x8067d490;
    /* mulli r27, r4, 0x274 */ // 0x8067D3E8
    r3 = r24 + 0x174; // 0x8067D3EC
    r28 = r24 + r27; // 0x8067D3F0
    r4 = *(0xdd0 + r28); // lwz @ 0x8067D3F4
    FUN_8066E0EC(r3); // bl 0x8066E0EC
    /* neg r0, r3 */ // 0x8067D3FC
    r0 = r0 | r3; // 0x8067D400
    /* rlwinm. r0, r0, 1, 0x1f, 0x1f */ // 0x8067D404
    if (==) goto 0x0x8067d490;
    /* addis r3, r21, 1 */ // 0x8067D40C
    /* li r5, -1 */ // 0x8067D410
    /* li r6, 0 */ // 0x8067D414
    /* mtctr r23 */ // 0x8067D418
    /* clrlwi r0, r6, 0x18 */ // 0x8067D41C
    /* mulli r0, r0, 0x14 */ // 0x8067D420
    r4 = r3 + r0; // 0x8067D424
    r0 = *(-0x6e6e + r4); // lbz @ 0x8067D428
    /* cmpwi cr1, r0, 0 */
    if (==) goto 0x0x8067d464;
    r0 = *(-0x6e6c + r4); // lwz @ 0x8067D434
    if (!=) goto 0x0x8067d464;
    if (==) goto 0x0x8067d464;
    r0 = *(-0x6e74 + r4); // lhz @ 0x8067D444
    r3 = *(-0x6e72 + r4); // lbz @ 0x8067D448
    /* mulli r0, r0, 0x3c */ // 0x8067D44C
    r4 = *(-0x6e70 + r4); // lhz @ 0x8067D450
    r0 = r3 + r0; // 0x8067D454
    /* mulli r0, r0, 0x3e8 */ // 0x8067D458
    r5 = r4 + r0; // 0x8067D45C
    /* b 0x8067d46c */ // 0x8067D460
    r6 = r6 + 1; // 0x8067D464
    if (counter-- != 0) goto 0x0x8067d41c;
    r0 = r22 + -0x7281; // 0x8067D46C
    if (>=) goto 0x0x8067d47c;
    r0 = r5;
    r4 = r24 + r27; // 0x8067D47C
    *(0xdd8 + r28) = r0; // stw @ 0x8067D480
    r4 = r4 + 0xc54; // 0x8067D488
    FUN_806DE238(r3, r4); // bl 0x806DE238
    r25 = r25 + 1; // 0x8067D490
    if (<) goto 0x0x8067d3b0;
    /* li r25, 0 */ // 0x8067D49C
    /* lis r31, 0 */ // 0x8067D4A0
    /* lis r23, 0x5c */ // 0x8067D4A4
    /* li r27, 5 */ // 0x8067D4A8
    r3 = *(0 + r31); // lwz @ 0x8067D4AC
    /* clrlwi r4, r25, 0x18 */ // 0x8067D4B0
    r3 = *(0 + r3); // lwz @ 0x8067D4B4
    r3 = *(0x404 + r3); // lwz @ 0x8067D4B8
    FUN_80659884(); // bl 0x80659884
    if (==) goto 0x0x8067d600;
    r3 = *(0 + r31); // lwz @ 0x8067D4C8
    /* clrlwi r4, r25, 0x18 */ // 0x8067D4CC
    r3 = *(0 + r3); // lwz @ 0x8067D4D0
    r3 = *(0x404 + r3); // lwz @ 0x8067D4D4
    FUN_80659814(); // bl 0x80659814
    /* li r8, -1 */ // 0x8067D4DC
    /* li r9, 0 */ // 0x8067D4E0
    /* mtctr r27 */ // 0x8067D4E4
    r0 = r9 rlwinm 3; // rlwinm
    /* li r5, 0 */ // 0x8067D4EC
    r4 = r3 + r0; // 0x8067D4F0
    /* li r6, 0 */ // 0x8067D4F4
    r0 = *(0x78 + r4); // lwz @ 0x8067D4F8
    /* li r7, 0 */ // 0x8067D4FC
    /* cmpwi cr1, r0, 0 */
    if (<) goto 0x0x8067d558;
    if (!=) goto 0x0x8067d558;
    if (<) goto 0x0x8067d52c;
    r0 = *(0x7c + r4); // lwz @ 0x8067D514
    /* li r4, 1 */ // 0x8067D518
    r5 = r0 rlwinm 8; // rlwinm
    r6 = r0 rlwinm 0xf; // rlwinm
    r7 = r0 rlwinm 0x19; // rlwinm
    /* b 0x8067d530 */ // 0x8067D528
    /* li r4, 0 */ // 0x8067D52C
    if (==) goto 0x0x8067d558;
    /* clrlwi r0, r5, 0x10 */ // 0x8067D538
    /* clrlwi r3, r6, 0x18 */ // 0x8067D53C
    /* mulli r0, r0, 0x3c */ // 0x8067D540
    /* clrlwi r4, r7, 0x10 */ // 0x8067D544
    r0 = r3 + r0; // 0x8067D548
    /* mulli r0, r0, 0x3e8 */ // 0x8067D54C
    r8 = r4 + r0; // 0x8067D550
    /* b 0x8067d5d4 */ // 0x8067D554
    r9 = r9 + 1; // 0x8067D558
    /* li r5, 0 */ // 0x8067D55C
    r0 = r9 rlwinm 3; // rlwinm
    /* li r6, 0 */ // 0x8067D564
    r4 = r3 + r0; // 0x8067D568
    /* li r7, 0 */ // 0x8067D56C
    r0 = *(0x78 + r4); // lwz @ 0x8067D570
    /* cmpwi cr1, r0, 0 */
    if (<) goto 0x0x8067d5cc;
    if (!=) goto 0x0x8067d5cc;
    if (<) goto 0x0x8067d5a0;
    r0 = *(0x7c + r4); // lwz @ 0x8067D588
    /* li r4, 1 */ // 0x8067D58C
    r5 = r0 rlwinm 8; // rlwinm
    r6 = r0 rlwinm 0xf; // rlwinm
    r7 = r0 rlwinm 0x19; // rlwinm
    /* b 0x8067d5a4 */ // 0x8067D59C
    /* li r4, 0 */ // 0x8067D5A0
    if (==) goto 0x0x8067d5cc;
    /* clrlwi r0, r5, 0x10 */ // 0x8067D5AC
    /* clrlwi r3, r6, 0x18 */ // 0x8067D5B0
    /* mulli r0, r0, 0x3c */ // 0x8067D5B4
    /* clrlwi r4, r7, 0x10 */ // 0x8067D5B8
    r0 = r3 + r0; // 0x8067D5BC
    /* mulli r0, r0, 0x3e8 */ // 0x8067D5C0
    r8 = r4 + r0; // 0x8067D5C4
    /* b 0x8067d5d4 */ // 0x8067D5C8
    r9 = r9 + 1; // 0x8067D5CC
    if (counter-- != 0) goto 0x0x8067d4e8;
    r5 = r23 + -0x7281; // 0x8067D5D4
    if (>=) goto 0x0x8067d5e4;
    r5 = r8;
    /* clrlwi r0, r25, 0x18 */ // 0x8067D5E4
    /* mulli r0, r0, 0x274 */ // 0x8067D5EC
    r4 = r24 + r0; // 0x8067D5F0
    *(0x17a8 + r4) = r5; // stw @ 0x8067D5F4
    r4 = r4 + 0x1624; // 0x8067D5F8
    FUN_806DE238(r3, r4); // bl 0x806DE238
    r25 = r25 + 1; // 0x8067D600
    if (<) goto 0x0x8067d4ac;
    r4 = r24 + 0x6230; // 0x8067D610
    FUN_806DE238(r3, r4); // bl 0x806DE238
    FUN_806DE258(r3, r4, r3); // bl 0x806DE258
    FUN_806DF234(r4, r3, r3); // bl 0x806DF234
    FUN_806DE2A4(r3, r3, r3); // bl 0x806DE2A4
    FUN_806DE544(r3, r3, r3); // bl 0x806DE544
    r21 = r24 + 0x380; // 0x8067D638
    /* li r22, 0 */ // 0x8067D63C
    r4 = r21;
    r5 = r22;
    FUN_806DE824(r4, r5, r3); // bl 0x806DE824
    r22 = r22 + 1; // 0x8067D650
    r21 = r21 + 0x174; // 0x8067D654
    if (<) goto 0x0x8067d640;
    FUN_806DE560(r3); // bl 0x806DE560
    /* li r4, -1 */ // 0x8067D66C
    FUN_806DF1D4(r3, r3, r4); // bl 0x806DF1D4
    r0 = *(0x1e4 + r1); // lwz @ 0x8067D678
    return;
}