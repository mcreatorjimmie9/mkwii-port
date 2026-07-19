/* Function at 0x808705B8, size=384 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r25 */
/* Calls: 11 function(s) */

int FUN_808705B8(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -80(r1) */
    /* saved r25 */
    /* li r0, 0 */ // 0x808705C4
    /* stmw r25, 0x34(r1) */ // 0x808705C8
    r31 = r3;
    /* lis r28, 0 */ // 0x808705D0
    r25 = r4;
    r27 = r31;
    /* li r29, 0 */ // 0x808705DC
    r28 = r28 + 0; // 0x808705E0
    *(0x184 + r3) = r0; // stw @ 0x808705E4
    r26 = r28;
    /* li r30, 0 */ // 0x808705EC
    r3 = *(0 + r26); // lwz @ 0x808705F0
    FUN_8089E314(); // bl 0x8089E314
    r4 = r27 + r30; // 0x808705F8
    r30 = r30 + 1; // 0x808705FC
    *(0x18c + r4) = r3; // stb @ 0x80870604
    r26 = r26 + 4; // 0x80870608
    if (<) goto 0x0x808705f0;
    r29 = r29 + 1; // 0x80870610
    r27 = r27 + 8; // 0x80870614
    r28 = r28 + 0x20; // 0x8087061C
    if (<) goto 0x0x808705e8;
    /* li r3, 0x18 */ // 0x80870624
    FUN_8089E314(r3); // bl 0x8089E314
    *(0x1a4 + r31) = r3; // stb @ 0x8087062C
    /* li r3, 0x1a */ // 0x80870630
    FUN_8089E314(r3, r3); // bl 0x8089E314
    *(0x1a5 + r31) = r3; // stb @ 0x80870638
    r3 = r31;
    /* li r4, 2 */ // 0x80870640
    FUN_80871BFC(r3, r3, r4); // bl 0x80871BFC
    r30 = r3;
    r3 = r31;
    /* li r4, 0 */ // 0x80870650
    FUN_80871BFC(r4, r3, r4); // bl 0x80871BFC
    r29 = r3;
    r3 = r31;
    /* li r4, 1 */ // 0x80870660
    FUN_80871BFC(r4, r3, r4); // bl 0x80871BFC
    if (<=) goto 0x0x80870680;
    if (<=) goto 0x0x8087068c;
    r30 = r3;
    /* b 0x8087068c */ // 0x8087067C
    if (<=) goto 0x0x8087068c;
    r30 = r29;
    r5 = r30 + 1; // 0x8087068C
    r3 = r31;
    /* srwi r0, r5, 0x1f */ // 0x80870694
    /* li r4, 3 */ // 0x80870698
    r0 = r0 + r5; // 0x8087069C
    r0 = r0 >> 1; // srawi
    *(0x1a8 + r31) = r0; // stw @ 0x808706A4
    FUN_80871BFC(r4); // bl 0x80871BFC
    if (==) goto 0x0x808706d8;
    r0 = *(0x1a8 + r31); // lwz @ 0x808706B4
    if (>=) goto 0x0x808706c8;
    /* li r0, 3 */ // 0x808706C0
    /* b 0x808706d4 */ // 0x808706C4
    if (<=) goto 0x0x808706d4;
    /* li r0, 4 */ // 0x808706D0
    *(0x1a8 + r31) = r0; // stw @ 0x808706D4
    r4 = r31;
    FUN_8064E324(r4, r3); // bl 0x8064E324
    /* lis r7, 0 */ // 0x808706E4
    r7 = r7 + 0; // 0x808706EC
    r4 = r7 + 0x18; // 0x808706F4
    r5 = r7 + 0x20; // 0x808706F8
    r6 = r7 + 0x48; // 0x808706FC
    if (>) goto 0x0x80870708;
    r6 = r7 + 0x34; // 0x80870704
    /* li r7, 0 */ // 0x80870708
    FUN_8064E36C(r5, r6, r6, r7); // bl 0x8064E36C
    r3 = r31;
    /* li r4, 3 */ // 0x80870714
    FUN_80871BFC(r6, r7, r3, r4); // bl 0x80871BFC
    r0 = *(0x1a8 + r31); // lwz @ 0x8087071C
    /* mulli r0, r0, 6 */ // 0x80870720
    r30 = r0 + r3; // 0x80870724
    *(0x1ac + r31) = r30; // stw @ 0x80870728
    /* mulli r3, r30, 0x260 */ // 0x8087072C
    r3 = r3 + 0x10; // 0x80870730
    FUN_805E3430(r3); // bl 0x805E3430
}