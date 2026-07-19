/* Function at 0x808744C4, size=192 bytes */
/* Stack frame: 128 bytes */
/* Saved registers: r25 */
/* Calls: 3 function(s) */

int FUN_808744C4(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -128(r1) */
    /* saved r25 */
    r4 = r3;
    *(0x84 + r1) = r0; // stw @ 0x808744D0
    /* stmw r25, 0x64(r1) */ // 0x808744D8
    FUN_8064E324(r4, r3); // bl 0x8064E324
    /* lis r25, 0 */ // 0x808744E0
    r26 = *(0 + r25); // lwzu @ 0x808744E4
    /* lis r6, 0 */ // 0x808744E8
    *(8 + r1) = r26; // stw @ 0x808744EC
    r27 = *(4 + r25); // lwz @ 0x808744F0
    r6 = r6 + 0; // 0x808744F4
    r28 = *(8 + r25); // lwz @ 0x808744F8
    r29 = *(0xc + r25); // lwz @ 0x80874500
    r4 = r6 + 0x13; // 0x80874504
    r30 = *(0x10 + r25); // lwz @ 0x80874508
    r5 = r6 + 0x1f; // 0x8087450C
    r31 = *(0x14 + r25); // lwz @ 0x80874510
    r6 = r6 + 0x2a; // 0x80874514
    r12 = *(0x18 + r25); // lwz @ 0x80874518
    r11 = *(0x1c + r25); // lwz @ 0x80874520
    r10 = *(0x20 + r25); // lwz @ 0x80874524
    r9 = *(0x24 + r25); // lwz @ 0x80874528
    r8 = *(0x28 + r25); // lwz @ 0x8087452C
    r0 = *(0x2c + r25); // lwz @ 0x80874530
    *(0xc + r1) = r27; // stw @ 0x80874534
    *(0x10 + r1) = r28; // stw @ 0x80874538
    *(0x14 + r1) = r29; // stw @ 0x8087453C
    *(0x18 + r1) = r30; // stw @ 0x80874540
    *(0x1c + r1) = r31; // stw @ 0x80874544
    *(0x20 + r1) = r12; // stw @ 0x80874548
    *(0x24 + r1) = r11; // stw @ 0x8087454C
    *(0x28 + r1) = r10; // stw @ 0x80874550
    *(0x2c + r1) = r9; // stw @ 0x80874554
    *(0x30 + r1) = r8; // stw @ 0x80874558
    *(0x34 + r1) = r0; // stw @ 0x8087455C
    FUN_8064E36C(); // bl 0x8064E36C
    /* li r4, -1 */ // 0x80874568
    FUN_8064E32C(r3, r4); // bl 0x8064E32C
    r0 = *(0x84 + r1); // lwz @ 0x80874574
    return;
}