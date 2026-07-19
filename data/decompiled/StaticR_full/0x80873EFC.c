/* Function at 0x80873EFC, size=148 bytes */
/* Stack frame: 208 bytes */
/* Saved registers: r26 */
/* Calls: 5 function(s) */

int FUN_80873EFC(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -208(r1) */
    /* saved r26 */
    /* stmw r26, 0xb8(r1) */ // 0x80873F08
    r26 = r3;
    r4 = r26;
    FUN_8064E324(r3, r4); // bl 0x8064E324
    FUN_808CFA50(r3, r4); // bl 0x808CFA50
    /* clrlwi r0, r3, 0x18 */ // 0x80873F20
    /* lis r3, 0 */ // 0x80873F24
    r3 = r3 + 0; // 0x80873F2C
    r6 = r3 + 0x117; // 0x80873F30
    if (>) goto 0x0x80873f3c;
    r6 = r3 + 0x103; // 0x80873F38
    /* lis r3, 0 */ // 0x80873F3C
    /* li r7, 0 */ // 0x80873F40
    r29 = r3 + 0; // 0x80873F44
    r4 = r29 + 0x12d; // 0x80873F4C
    r5 = r29 + 0x135; // 0x80873F50
    FUN_8064E36C(r7, r3, r4, r5); // bl 0x8064E36C
    r3 = r26;
    /* li r4, 4 */ // 0x80873F5C
    FUN_8069FEE8(r4, r5, r3, r4); // bl 0x8069FEE8
    /* lis r30, 0 */ // 0x80873F64
    r28 = r26 + 0x174; // 0x80873F68
    r30 = r30 + 0; // 0x80873F6C
    /* li r27, 0 */ // 0x80873F70
    /* li r31, 9 */ // 0x80873F74
    r6 = r27;
    r5 = r29 + 0x143; // 0x80873F80
    /* li r4, 0x14 */ // 0x80873F84
    /* crclr cr1eq */ // 0x80873F88
    FUN_805E3430(r6, r3, r5, r4); // bl 0x805E3430
}