/* Function at 0x808755F4, size=204 bytes */
/* Stack frame: 112 bytes */
/* Saved registers: r27 */
/* Calls: 4 function(s) */

int FUN_808755F4(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -112(r1) */
    /* saved r27 */
    /* lis r5, 0 */ // 0x808755FC
    *(0x74 + r1) = r0; // stw @ 0x80875600
    /* stmw r27, 0x5c(r1) */ // 0x80875604
    r27 = r3;
    *(0x1b4 + r3) = r4; // stb @ 0x8087560C
    /* clrlwi r4, r4, 0x18 */ // 0x80875610
    r3 = *(0 + r5); // lwz @ 0x80875614
    FUN_8061D97C(); // bl 0x8061D97C
    *(0x1c8 + r27) = r3; // stw @ 0x8087561C
    r4 = r27;
    FUN_8064E324(r4, r3); // bl 0x8064E324
    /* lis r27, 0 */ // 0x8087562C
    r28 = *(0 + r27); // lwzu @ 0x80875630
    /* lis r6, 0 */ // 0x80875634
    *(8 + r1) = r28; // stw @ 0x80875638
    r29 = *(4 + r27); // lwz @ 0x8087563C
    r6 = r6 + 0; // 0x80875640
    r30 = *(8 + r27); // lwz @ 0x80875644
    r31 = *(0xc + r27); // lwz @ 0x8087564C
    r4 = r6 + 0x8b; // 0x80875650
    r12 = *(0x10 + r27); // lwz @ 0x80875654
    r5 = r6 + 0x96; // 0x80875658
    r11 = *(0x14 + r27); // lwz @ 0x8087565C
    r6 = r6 + 0xa0; // 0x80875660
    r10 = *(0x18 + r27); // lwz @ 0x80875664
    r9 = *(0x1c + r27); // lwz @ 0x8087566C
    r8 = *(0x20 + r27); // lwz @ 0x80875670
    r0 = *(0x24 + r27); // lwz @ 0x80875674
    *(0xc + r1) = r29; // stw @ 0x80875678
    *(0x10 + r1) = r30; // stw @ 0x8087567C
    *(0x14 + r1) = r31; // stw @ 0x80875680
    *(0x18 + r1) = r12; // stw @ 0x80875684
    *(0x1c + r1) = r11; // stw @ 0x80875688
    *(0x20 + r1) = r10; // stw @ 0x8087568C
    *(0x24 + r1) = r9; // stw @ 0x80875690
    *(0x28 + r1) = r8; // stw @ 0x80875694
    *(0x2c + r1) = r0; // stw @ 0x80875698
    FUN_8064E36C(); // bl 0x8064E36C
    /* li r4, -1 */ // 0x808756A4
    FUN_8064E32C(r3, r4); // bl 0x8064E32C
    r0 = *(0x74 + r1); // lwz @ 0x808756B0
    return;
}