/* Function at 0x807EB4F4, size=248 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 5 function(s) */

int FUN_807EB4F4(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x807EB504
    /* lfs f2, 0(r31) */ // 0x807EB508
    *(0x48 + r1) = r30; // stw @ 0x807EB50C
    /* lis r30, 0 */ // 0x807EB510
    /* lfs f1, 0(r30) */ // 0x807EB514
    *(0x44 + r1) = r29; // stw @ 0x807EB518
    /* lis r29, 0 */ // 0x807EB51C
    r29 = r29 + 0; // 0x807EB520
    *(0x40 + r1) = r28; // stw @ 0x807EB524
    r28 = r3;
    r4 = *(8 + r3); // lwz @ 0x807EB52C
    r3 = *(0x28 + r4); // lwz @ 0x807EB530
    /* li r4, 0 */ // 0x807EB534
    FUN_805E70EC(r4); // bl 0x805E70EC
    r3 = *(8 + r28); // lwz @ 0x807EB53C
    /* li r4, 1 */ // 0x807EB540
    /* lfs f1, 0(r30) */ // 0x807EB544
    r3 = *(0x28 + r3); // lwz @ 0x807EB548
    /* lfs f2, 0(r31) */ // 0x807EB54C
    FUN_805E70EC(r4); // bl 0x805E70EC
    /* li r0, 1 */ // 0x807EB554
    *(0x12c + r28) = r0; // stb @ 0x807EB558
    r4 = r28 + 0x114; // 0x807EB560
    *(0x124 + r28) = r0; // stw @ 0x807EB564
    /* lfs f1, 0x28(r29) */ // 0x807EB568
    FUN_805A443C(r3, r4); // bl 0x805A443C
    r4 = r28 + 0x30; // 0x807EB574
    FUN_805A4464(r3, r4, r5); // bl 0x805A4464
    /* lfs f2, 0x24(r29) */ // 0x807EB580
    /* lis r3, 0 */ // 0x807EB584
    /* lfs f0, 0x18(r29) */ // 0x807EB588
    r4 = r28 + 0x30; // 0x807EB58C
    /* fctiwz f3, f2 */ // 0x807EB590
    /* lfs f1, 0x20(r29) */ // 0x807EB594
    /* fctiwz f0, f0 */ // 0x807EB598
    r3 = *(0 + r3); // lwz @ 0x807EB59C
    /* fctiwz f2, f1 */ // 0x807EB5A0
    /* stfd f3, 0x20(r1) */ // 0x807EB5A4
    /* stfd f2, 0x28(r1) */ // 0x807EB5A8
    /* lfs f1, 0x14(r29) */ // 0x807EB5B0
    /* li r9, 0xc */ // 0x807EB5B4
    /* stfd f0, 0x30(r1) */ // 0x807EB5B8
    r8 = *(0x24 + r1); // lwz @ 0x807EB5BC
    r7 = *(0x2c + r1); // lwz @ 0x807EB5C0
    r6 = *(0x34 + r1); // lwz @ 0x807EB5C4
    FUN_80818D00(r9); // bl 0x80818D00
    r0 = *(0x54 + r1); // lwz @ 0x807EB5CC
    r31 = *(0x4c + r1); // lwz @ 0x807EB5D0
    r30 = *(0x48 + r1); // lwz @ 0x807EB5D4
    r29 = *(0x44 + r1); // lwz @ 0x807EB5D8
    r28 = *(0x40 + r1); // lwz @ 0x807EB5DC
    return;
}