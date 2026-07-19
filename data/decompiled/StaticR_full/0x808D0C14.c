/* Function at 0x808D0C14, size=148 bytes */
/* Stack frame: 208 bytes */
/* Saved registers: r26 */
/* Calls: 5 function(s) */

int FUN_808D0C14(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -208(r1) */
    /* saved r26 */
    /* stmw r26, 0xb8(r1) */ // 0x808D0C20
    r26 = r3;
    r4 = r26;
    FUN_8064E324(r3, r4); // bl 0x8064E324
    FUN_808CFA50(r3, r4); // bl 0x808CFA50
    /* clrlwi r0, r3, 0x18 */ // 0x808D0C38
    /* lis r3, 0 */ // 0x808D0C3C
    r3 = r3 + 0; // 0x808D0C44
    r6 = r3 + 0x10f; // 0x808D0C48
    if (>) goto 0x0x808d0c54;
    r6 = r3 + 0xfb; // 0x808D0C50
    /* lis r3, 0 */ // 0x808D0C54
    /* li r7, 0 */ // 0x808D0C58
    r29 = r3 + 0; // 0x808D0C5C
    r4 = r29 + 0x125; // 0x808D0C64
    r5 = r29 + 0x12d; // 0x808D0C68
    FUN_8064E36C(r7, r3, r4, r5); // bl 0x8064E36C
    r3 = r26;
    /* li r4, 5 */ // 0x808D0C74
    FUN_8069FEE8(r4, r5, r3, r4); // bl 0x8069FEE8
    /* lis r30, 0 */ // 0x808D0C7C
    r28 = r26 + 0x174; // 0x808D0C80
    r30 = r30 + 0; // 0x808D0C84
    /* li r27, 0 */ // 0x808D0C88
    /* li r31, 9 */ // 0x808D0C8C
    r6 = r27;
    r5 = r29 + 0x141; // 0x808D0C98
    /* li r4, 0x14 */ // 0x808D0C9C
    /* crclr cr1eq */ // 0x808D0CA0
    FUN_805E3430(r6, r3, r5, r4); // bl 0x805E3430
}