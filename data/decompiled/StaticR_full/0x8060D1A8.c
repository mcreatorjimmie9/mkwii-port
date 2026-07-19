/* Function at 0x8060D1A8, size=512 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 12 function(s) */

int FUN_8060D1A8(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0x80c */ // 0x8060D1B0
    /* li r6, 1 */ // 0x8060D1B4
    *(0x24 + r1) = r0; // stw @ 0x8060D1B8
    r0 = r4 + 0x100; // 0x8060D1BC
    /* li r4, 1 */ // 0x8060D1C0
    *(0x1c + r1) = r31; // stw @ 0x8060D1C4
    *(0x18 + r1) = r30; // stw @ 0x8060D1C8
    /* lis r30, 0 */ // 0x8060D1CC
    r30 = r30 + 0; // 0x8060D1D0
    *(0x14 + r1) = r29; // stw @ 0x8060D1D4
    r29 = r3;
    r5 = *(0 + r3); // lwz @ 0x8060D1DC
    r7 = *(4 + r5); // lwz @ 0x8060D1E0
    /* li r5, 1 */ // 0x8060D1E4
    r3 = *(0xc + r7); // lwz @ 0x8060D1E8
    /* and. r0, r3, r0 */ // 0x8060D1EC
    if (!=) goto 0x0x8060d204;
    r0 = *(4 + r7); // lwz @ 0x8060D1F4
    /* rlwinm. r0, r0, 0, 0x1b, 0x1b */ // 0x8060D1F8
    if (!=) goto 0x0x8060d204;
    /* li r6, 0 */ // 0x8060D200
    if (!=) goto 0x0x8060d21c;
    r0 = *(0x14 + r7); // lwz @ 0x8060D20C
    /* rlwinm. r0, r0, 0, 0x18, 0x18 */ // 0x8060D210
    if (!=) goto 0x0x8060d21c;
    /* li r5, 0 */ // 0x8060D218
    if (!=) goto 0x0x8060d234;
    r0 = *(8 + r7); // lwz @ 0x8060D224
    /* clrlwi. r0, r0, 0x1f */ // 0x8060D228
    if (!=) goto 0x0x8060d234;
    /* li r4, 0 */ // 0x8060D230
    if (!=) goto 0x0x8060d38c;
    r0 = *(8 + r7); // lwz @ 0x8060D23C
    r31 = *(0x23c + r30); // lha @ 0x8060D240
    /* rlwinm. r0, r0, 0, 0x10, 0x10 */ // 0x8060D244
    if (==) goto 0x0x8060d250;
    r31 = *(0x23e + r30); // lha @ 0x8060D24C
    r3 = r29;
    FUN_8061E2D8(r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x8060D258
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x8060D260
    r3 = *(0x68 + r3); // lwz @ 0x8060D264
    /* lwzx r3, r3, r0 */ // 0x8060D268
    FUN_80733560(r4); // bl 0x80733560
    r3 = r29;
    FUN_8061E010(r3); // bl 0x8061E010
    FUN_807962A8(r3); // bl 0x807962A8
    r0 = *(0x118 + r29); // lhz @ 0x8060D27C
    /* li r4, 0 */ // 0x8060D280
    /* rlwinm. r0, r0, 0, 0x1b, 0x1b */ // 0x8060D284
    if (==) goto 0x0x8060d298;
    r0 = *(0x114 + r29); // lha @ 0x8060D28C
    if (<=) goto 0x0x8060d2b8;
    r0 = *(0x118 + r29); // lhz @ 0x8060D298
    r3 = r30 + 0x3a0; // 0x8060D29C
    *(0x114 + r29) = r31; // sth @ 0x8060D2A0
    /* li r4, 1 */ // 0x8060D2A4
    r0 = r0 | 0x10; // 0x8060D2A8
    *(0x118 + r29) = r0; // sth @ 0x8060D2AC
    /* lfs f0, 0x10(r3) */ // 0x8060D2B0
    /* stfs f0, 0x124(r29) */ // 0x8060D2B4
    if (==) goto 0x0x8060d330;
    r4 = *(0 + r29); // lwz @ 0x8060D2C0
    r3 = r29;
    r4 = *(4 + r4); // lwz @ 0x8060D2C8
    r0 = *(4 + r4); // lwz @ 0x8060D2CC
    r0 = r0 | 0x10; // 0x8060D2D0
    *(4 + r4) = r0; // stw @ 0x8060D2D4
    /* lfs f1, 0x124(r29) */ // 0x8060D2D8
    FUN_8061E6BC(); // bl 0x8061E6BC
    r3 = r29;
    /* li r4, 6 */ // 0x8060D2E4
    FUN_8061E02C(r3, r4); // bl 0x8061E02C
    r3 = r29;
    FUN_8061E2D8(r3, r4, r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x8060D2F4
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x8060D2FC
    /* clrlwi r4, r31, 0x10 */ // 0x8060D300
    r3 = *(0x68 + r3); // lwz @ 0x8060D304
    /* lwzx r3, r3, r0 */ // 0x8060D308
    FUN_807336DC(); // bl 0x807336DC
    r3 = r29;
    FUN_8061E2BC(r3); // bl 0x8061E2BC
    FUN_80859398(r3); // bl 0x80859398
    r3 = r29;
    /* li r4, 4 */ // 0x8060D320
    /* li r5, 0 */ // 0x8060D324
    /* li r6, 1 */ // 0x8060D328
    FUN_8061E8C0(r3, r4, r5, r6); // bl 0x8061E8C0
    r0 = *(0x148 + r29); // lha @ 0x8060D330
    if (<=) goto 0x0x8060d340;
    *(0x148 + r29) = r31; // sth @ 0x8060D33C
    r4 = *(0 + r29); // lwz @ 0x8060D340
    /* lis r3, 0 */ // 0x8060D344
    /* lfs f1, 0(r3) */ // 0x8060D348
    /* li r0, 0 */ // 0x8060D34C
    r7 = *(4 + r4); // lwz @ 0x8060D350
    r3 = r29;
    /* li r4, 3 */ // 0x8060D358
    /* li r5, 1 */ // 0x8060D35C
    r6 = *(8 + r7); // lwz @ 0x8060D360
    r6 = r6 | 0x80; // 0x8060D364
    *(8 + r7) = r6; // stw @ 0x8060D368
    *(0x12c + r29) = r0; // sth @ 0x8060D36C
    r6 = *(0 + r29); // lwz @ 0x8060D370
    *(0x12e + r29) = r31; // sth @ 0x8060D374
    r6 = *(4 + r6); // lwz @ 0x8060D378
    r0 = *(8 + r6); // lwz @ 0x8060D37C
    r0 = r0 | 0x2000; // 0x8060D380
    *(8 + r6) = r0; // stw @ 0x8060D384
    FUN_8061DC98(); // bl 0x8061DC98
    r0 = *(0x24 + r1); // lwz @ 0x8060D38C
    r31 = *(0x1c + r1); // lwz @ 0x8060D390
    r30 = *(0x18 + r1); // lwz @ 0x8060D394
    r29 = *(0x14 + r1); // lwz @ 0x8060D398
    return;
}