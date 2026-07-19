/* Function at 0x808D110C, size=148 bytes */
/* Stack frame: 224 bytes */
/* Saved registers: r26 */
/* Calls: 5 function(s) */

int FUN_808D110C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -224(r1) */
    /* saved r26 */
    /* stmw r26, 0xc8(r1) */ // 0x808D1118
    r26 = r3;
    r4 = r26;
    FUN_8064E324(r3, r4); // bl 0x8064E324
    FUN_808CFA50(r3, r4); // bl 0x808CFA50
    /* clrlwi r0, r3, 0x18 */ // 0x808D1130
    /* lis r3, 0 */ // 0x808D1134
    r3 = r3 + 0; // 0x808D113C
    r6 = r3 + 0x79; // 0x808D1140
    if (>) goto 0x0x808d114c;
    r6 = r3 + 0x68; // 0x808D1148
    /* lis r3, 0 */ // 0x808D114C
    /* li r7, 0 */ // 0x808D1150
    r29 = r3 + 0; // 0x808D1154
    r4 = r29 + 0x8c; // 0x808D115C
    r5 = r29 + 0x94; // 0x808D1160
    FUN_8064E36C(r7, r3, r4, r5); // bl 0x8064E36C
    r3 = r26;
    /* li r4, 2 */ // 0x808D116C
    FUN_8069FEE8(r4, r5, r3, r4); // bl 0x8069FEE8
    /* lis r30, 0 */ // 0x808D1174
    r28 = r26 + 0x174; // 0x808D1178
    r30 = r30 + 0; // 0x808D117C
    /* li r27, 0 */ // 0x808D1180
    /* li r31, 9 */ // 0x808D1184
    r6 = r27;
    r5 = r29 + 0xa8; // 0x808D1190
    /* li r4, 0x14 */ // 0x808D1194
    /* crclr cr1eq */ // 0x808D1198
    FUN_805E3430(r6, r3, r5, r4); // bl 0x805E3430
}