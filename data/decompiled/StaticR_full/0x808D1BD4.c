/* Function at 0x808D1BD4, size=152 bytes */
/* Stack frame: 128 bytes */
/* Saved registers: r24 */
/* Calls: 5 function(s) */

int FUN_808D1BD4(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -128(r1) */
    /* saved r24 */
    /* stmw r24, 0x60(r1) */ // 0x808D1BE0
    r24 = r3;
    r25 = r4;
    r26 = r5;
    r4 = r24;
    FUN_8064E324(r3, r4); // bl 0x8064E324
    FUN_808CFA50(r3, r4); // bl 0x808CFA50
    /* clrlwi r0, r3, 0x18 */ // 0x808D1C00
    /* lis r3, 0 */ // 0x808D1C04
    r3 = r3 + 0; // 0x808D1C0C
    r6 = r3 + 0x171; // 0x808D1C10
    if (>) goto 0x0x808d1c1c;
    r6 = r3 + 0x15d; // 0x808D1C18
    /* lis r3, 0 */ // 0x808D1C1C
    /* li r7, 0 */ // 0x808D1C20
    r29 = r3 + 0; // 0x808D1C24
    r4 = r29 + 0x187; // 0x808D1C2C
    r5 = r29 + 0x18f; // 0x808D1C30
    FUN_8064E36C(r7, r3, r4, r5); // bl 0x8064E36C
    r3 = r24;
    /* li r4, 5 */ // 0x808D1C3C
    FUN_8069FEE8(r4, r5, r3, r4); // bl 0x8069FEE8
    /* lis r30, 0 */ // 0x808D1C44
    r28 = r24 + 0x18c; // 0x808D1C48
    /* li r27, 0 */ // 0x808D1C4C
    r30 = r30 + 0; // 0x808D1C50
    r6 = r27;
    r5 = r29 + 0x1a3; // 0x808D1C5C
    /* li r4, 0x14 */ // 0x808D1C60
    /* crclr cr1eq */ // 0x808D1C64
    FUN_805E3430(r6, r3, r5, r4); // bl 0x805E3430
}