/* Function at 0x805CAFF8, size=340 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r23 */
/* Calls: 5 function(s) */

int FUN_805CAFF8(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -64(r1) */
    /* saved r23 */
    /* mulli r0, r4, 0xf0 */ // 0x805CB004
    /* stmw r23, 0x1c(r1) */ // 0x805CB008
    /* lis r31, 0 */ // 0x805CB00C
    r26 = r3;
    r30 = r4 rlwinm 2; // rlwinm
    r27 = r4;
    r5 = *(0 + r31); // lwz @ 0x805CB01C
    r7 = *(4 + r3); // lwz @ 0x805CB020
    r3 = r5 + r0; // 0x805CB024
    r0 = *(0x38 + r3); // lwz @ 0x805CB028
    r6 = *(0xc + r7); // lwz @ 0x805CB02C
    /* lwzx r29, r6, r30 */ // 0x805CB034
    if (!=) goto 0x0x805cb0f8;
    /* lis r23, 0 */ // 0x805CB03C
    /* li r28, 0 */ // 0x805CB040
    r23 = r23 + 0; // 0x805CB044
    /* li r24, 1 */ // 0x805CB048
    /* li r25, 0 */ // 0x805CB04C
    /* b 0x805cb0e0 */ // 0x805CB050
    r5 = *(0x38 + r29); // lwz @ 0x805CB054
    /* rlwinm. r0, r5, 0, 0x1e, 0x1e */ // 0x805CB058
    if (!=) goto 0x0x805cb0dc;
    /* clrlwi r0, r28, 0x18 */ // 0x805CB060
    /* mulli r0, r0, 0xf0 */ // 0x805CB064
    r3 = r4 + r0; // 0x805CB068
    r0 = *(0x38 + r3); // lwz @ 0x805CB06C
    if (!=) goto 0x0x805cb0a4;
    *(8 + r1) = r23; // stw @ 0x805CB078
    r3 = r29;
    /* li r5, 1 */ // 0x805CB084
    *(0x12 + r1) = r24; // stb @ 0x805CB088
    /* li r6, 2 */ // 0x805CB08C
    *(0xc + r1) = r25; // sth @ 0x805CB090
    *(0xe + r1) = r25; // stb @ 0x805CB094
    *(0x10 + r1) = r25; // sth @ 0x805CB098
    FUN_805C3D4C(r6); // bl 0x805C3D4C
    /* b 0x805cb0dc */ // 0x805CB0A0
    /* rlwinm. r0, r5, 0, 0x1b, 0x1b */ // 0x805CB0A4
    if (!=) goto 0x0x805cb0dc;
    r3 = *(4 + r26); // lwz @ 0x805CB0AC
    /* li r4, 4 */ // 0x805CB0B0
    FUN_805C5788(r4); // bl 0x805C5788
    if (!=) goto 0x0x805cb0d0;
    r3 = *(4 + r26); // lwz @ 0x805CB0C0
    r0 = *(0xc + r3); // lwz @ 0x805CB0C4
    /* lwzx r3, r30, r0 */ // 0x805CB0C8
    *(0x22 + r3) = r25; // sth @ 0x805CB0CC
    r3 = *(4 + r26); // lwz @ 0x805CB0D0
    r4 = r27;
    FUN_805C332C(r4); // bl 0x805C332C
    r28 = r28 + 1; // 0x805CB0DC
    r4 = *(0 + r31); // lwz @ 0x805CB0E0
    /* clrlwi r3, r28, 0x18 */ // 0x805CB0E4
    r0 = *(0x24 + r4); // lbz @ 0x805CB0E8
    if (<) goto 0x0x805cb054;
    /* b 0x805cb138 */ // 0x805CB0F4
    r0 = *(0x38 + r29); // lwz @ 0x805CB0F8
    /* rlwinm. r0, r0, 0, 0x1b, 0x1b */ // 0x805CB0FC
    if (!=) goto 0x0x805cb138;
    r3 = r7;
    /* li r4, 4 */ // 0x805CB108
    FUN_805C5788(r3, r4); // bl 0x805C5788
    if (!=) goto 0x0x805cb12c;
    r3 = *(4 + r26); // lwz @ 0x805CB118
    /* li r0, 0 */ // 0x805CB11C
    r3 = *(0xc + r3); // lwz @ 0x805CB120
    /* lwzx r3, r3, r30 */ // 0x805CB124
    *(0x22 + r3) = r0; // sth @ 0x805CB128
    r3 = *(4 + r26); // lwz @ 0x805CB12C
    r4 = r27;
    FUN_805C332C(r4); // bl 0x805C332C
    r0 = *(0x44 + r1); // lwz @ 0x805CB13C
    return;
}