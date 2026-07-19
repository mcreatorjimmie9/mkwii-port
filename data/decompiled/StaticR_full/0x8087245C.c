/* Function at 0x8087245C, size=148 bytes */
/* Stack frame: 224 bytes */
/* Saved registers: r26 */
/* Calls: 5 function(s) */

int FUN_8087245C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -224(r1) */
    /* saved r26 */
    /* stmw r26, 0xc8(r1) */ // 0x80872468
    r26 = r3;
    r4 = r26;
    FUN_8064E324(r3, r4); // bl 0x8064E324
    FUN_808CFA50(r3, r4); // bl 0x808CFA50
    /* clrlwi r0, r3, 0x18 */ // 0x80872480
    /* lis r3, 0 */ // 0x80872484
    r3 = r3 + 0; // 0x8087248C
    r6 = r3 + 0x6c; // 0x80872490
    if (>) goto 0x0x8087249c;
    r6 = r3 + 0x5b; // 0x80872498
    /* lis r3, 0 */ // 0x8087249C
    /* li r7, 0 */ // 0x808724A0
    r29 = r3 + 0; // 0x808724A4
    r4 = r29 + 0x7f; // 0x808724AC
    r5 = r29 + 0x87; // 0x808724B0
    FUN_8064E36C(r7, r3, r4, r5); // bl 0x8064E36C
    r3 = r26;
    /* li r4, 8 */ // 0x808724BC
    FUN_8069FEE8(r4, r5, r3, r4); // bl 0x8069FEE8
    /* lis r30, 0 */ // 0x808724C4
    r28 = r26 + 0x174; // 0x808724C8
    r30 = r30 + 0; // 0x808724CC
    /* li r27, 0 */ // 0x808724D0
    /* li r31, 9 */ // 0x808724D4
    r6 = r27;
    r5 = r29 + 0x95; // 0x808724E0
    /* li r4, 0x14 */ // 0x808724E4
    /* crclr cr1eq */ // 0x808724E8
    FUN_805E3430(r6, r3, r5, r4); // bl 0x805E3430
}