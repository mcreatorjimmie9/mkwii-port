/* Function at 0x808E99D4, size=208 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r26 */
/* Calls: 3 function(s) */

int FUN_808E99D4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -80(r1) */
    /* saved r26 */
    /* stmw r26, 0x38(r1) */ // 0x808E99E0
    r26 = r3;
    r27 = r4;
    FUN_808CFA50(); // bl 0x808CFA50
    r4 = *(0x654 + r26); // lwz @ 0x808E99F0
    /* mulli r29, r27, 0x174 */ // 0x808E99F4
    r0 = *(0x6c8 + r26); // lwz @ 0x808E99F8
    /* clrlwi r28, r3, 0x18 */ // 0x808E99FC
    r3 = r4 + 1; // 0x808E9A00
    *(0x654 + r26) = r3; // stw @ 0x808E9A04
    r3 = r26;
    r5 = r0 + r29; // 0x808E9A0C
    /* li r6, 0 */ // 0x808E9A10
    FUN_80671C2C(r3, r3, r6); // bl 0x80671C2C
    r3 = *(0x6c8 + r26); // lwz @ 0x808E9A18
    r0 = r27 + 2; // 0x808E9A20
    r31 = r3 + r29; // 0x808E9A24
    if (>) goto 0x0x808e9a30;
    r0 = r27;
    /* lis r30, 0 */ // 0x808E9A34
    r30 = r30 + 0; // 0x808E9A38
    if (>=) goto 0x0x808e9a48;
    /* lis r30, 0 */ // 0x808E9A40
    r30 = r30 + 0; // 0x808E9A44
    /* lis r5, 0 */ // 0x808E9A4C
    r0 = r27 + 2; // 0x808E9A54
    r5 = r5 + 0; // 0x808E9A58
    /* li r4, 4 */ // 0x808E9A5C
    if (>) goto 0x0x808e9a68;
    r0 = r27;
    if (>=) goto 0x0x808e9a84;
    r6 = r27 + 2; // 0x808E9A74
    if (>) goto 0x0x808e9a98;
    r6 = r27;
    /* b 0x808e9a98 */ // 0x808E9A80
    r6 = r27 + 2; // 0x808E9A88
    if (>) goto 0x0x808e9a94;
    r6 = r27;
    r6 = r6 + -2; // 0x808E9A94
    r6 = r6 + 1; // 0x808E9A98
    /* crclr cr1eq */ // 0x808E9A9C
    FUN_805E3430(r6, r6, r6); // bl 0x805E3430
}