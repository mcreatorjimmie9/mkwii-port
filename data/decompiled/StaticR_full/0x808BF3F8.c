/* Function at 0x808BF3F8, size=464 bytes */
/* Stack frame: 208 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 15 function(s) */

int FUN_808BF3F8(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -208(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0xc8 + r1) = r30; // stw @ 0x808BF410
    /* lis r30, 0 */ // 0x808BF414
    r30 = r30 + 0; // 0x808BF418
    *(0xc4 + r1) = r29; // stw @ 0x808BF41C
    if (!=) goto 0x0x808bf47c;
    r4 = *(0x654 + r3); // lwz @ 0x808BF424
    r5 = r3 + 0xda8; // 0x808BF428
    /* li r6, 0 */ // 0x808BF42C
    r0 = r4 + 1; // 0x808BF430
    *(0x654 + r3) = r0; // stw @ 0x808BF434
    FUN_80671C2C(r5, r6); // bl 0x80671C2C
    r4 = r31 + 0xda8; // 0x808BF440
    FUN_8064E324(r3, r4); // bl 0x8064E324
    /* lis r6, 0 */ // 0x808BF448
    r6 = r6 + 0; // 0x808BF450
    /* li r7, 0 */ // 0x808BF454
    r4 = r6 + 0x4d; // 0x808BF458
    r5 = r6 + 0x55; // 0x808BF45C
    r6 = r6 + 0x63; // 0x808BF460
    FUN_8064E36C(r6, r7, r4, r5, r6); // bl 0x8064E36C
    /* li r4, -1 */ // 0x808BF46C
    FUN_8064E32C(r5, r6, r3, r4); // bl 0x8064E32C
    r3 = r31 + 0xda8; // 0x808BF474
    /* b 0x808bf714 */ // 0x808BF478
    if (!=) goto 0x0x808bf4f0;
    r4 = *(0x654 + r3); // lwz @ 0x808BF484
    r5 = r3 + 0x6c4; // 0x808BF488
    /* li r6, 0 */ // 0x808BF48C
    r0 = r4 + 1; // 0x808BF490
    *(0x654 + r3) = r0; // stw @ 0x808BF494
    FUN_80671C2C(r5, r6); // bl 0x80671C2C
    /* li r0, 0 */ // 0x808BF49C
    *(8 + r1) = r0; // stw @ 0x808BF4A0
    /* lis r8, 0 */ // 0x808BF4A4
    r3 = r31 + 0x6c4; // 0x808BF4A8
    r8 = r8 + 0; // 0x808BF4AC
    r9 = *(0x6bc + r31); // lwz @ 0x808BF4B0
    r4 = r8 + 0x71; // 0x808BF4B4
    /* li r10, 0 */ // 0x808BF4B8
    r5 = r8 + 0x78; // 0x808BF4BC
    r6 = r8 + 0x8c; // 0x808BF4C0
    r7 = r8 + 0x9d; // 0x808BF4C4
    r8 = r8 + 0xb0; // 0x808BF4C8
    FUN_80699328(r10, r5, r6, r7, r8); // bl 0x80699328
    r4 = *(0xd88 + r31); // lwz @ 0x808BF4D0
    r3 = r31 + 0x6c4; // 0x808BF4D4
    FUN_806993F0(r7, r8, r3); // bl 0x806993F0
    r4 = *(0xd8c + r31); // lwz @ 0x808BF4DC
    r3 = r31 + 0x6c4; // 0x808BF4E0
    FUN_806993F8(r3, r3); // bl 0x806993F8
    /* li r3, 0 */ // 0x808BF4E8
    /* b 0x808bf714 */ // 0x808BF4EC
    if (!=) goto 0x0x808bf578;
    r4 = r30 + 0x18; // 0x808BF4F8
    r6 = *(0x18 + r30); // lwz @ 0x808BF4FC
    r0 = *(4 + r4); // lwz @ 0x808BF500
    r5 = r3 + 0xbfc; // 0x808BF504
    *(0x10 + r1) = r6; // stw @ 0x808BF508
    /* li r6, 0 */ // 0x808BF50C
    *(0x14 + r1) = r0; // stw @ 0x808BF510
    r4 = *(0x654 + r3); // lwz @ 0x808BF514
    r0 = r4 + 1; // 0x808BF518
    *(0x654 + r3) = r0; // stw @ 0x808BF51C
    FUN_80671C2C(r6); // bl 0x80671C2C
    /* li r0, 0 */ // 0x808BF524
    *(8 + r1) = r0; // stw @ 0x808BF528
    /* lis r3, 0 */ // 0x808BF52C
    /* lis r4, 0 */ // 0x808BF530
    r5 = *(0 + r3); // lwz @ 0x808BF534
    r4 = r4 + 0; // 0x808BF538
    r3 = r31 + 0xbfc; // 0x808BF53C
    r0 = *(0x2d4 + r5); // lbz @ 0x808BF544
    r6 = r4 + 0xc0; // 0x808BF548
    r7 = r4 + 0xc8; // 0x808BF54C
    /* li r4, 2 */ // 0x808BF550
    /* cntlzw r0, r0 */ // 0x808BF554
    /* li r9, 1 */ // 0x808BF558
    /* srwi r5, r0, 5 */ // 0x808BF55C
    /* li r10, 0 */ // 0x808BF560
    FUN_8069A8A4(r4, r9, r10); // bl 0x8069A8A4
    r4 = *(0xd90 + r31); // lwz @ 0x808BF568
    r3 = r31 + 0xbfc; // 0x808BF56C
    FUN_8069AA24(r10, r3); // bl 0x8069AA24
    /* b 0x808bf710 */ // 0x808BF574
    if (!=) goto 0x0x808bf600;
    /* li r3, 0x174 */ // 0x808BF580
    FUN_805E3430(r3); // bl 0x805E3430
    r29 = r3;
    if (==) goto 0x0x808bf59c;
    FUN_806A0418(r3); // bl 0x806A0418
    r29 = r3;
    r4 = *(0x654 + r31); // lwz @ 0x808BF59C
    r3 = r31;
    r5 = r29;
    /* li r6, 0 */ // 0x808BF5A8
    r0 = r4 + 1; // 0x808BF5AC
    *(0x654 + r31) = r0; // stw @ 0x808BF5B0
    FUN_80671C2C(r3, r5, r6); // bl 0x80671C2C
    r4 = r29;
    FUN_8064E324(r4, r3); // bl 0x8064E324
    /* lis r6, 0 */ // 0x808BF5C4
}