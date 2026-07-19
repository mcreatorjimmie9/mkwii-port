/* Function at 0x808C0B10, size=308 bytes */
/* Stack frame: 128 bytes */
/* Saved registers: r25 */
/* Calls: 7 function(s) */

int FUN_808C0B10(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -128(r1) */
    /* saved r25 */
    /* stmw r25, 0x64(r1) */ // 0x808C0B1C
    r28 = r3;
    r29 = r4;
    FUN_808CFA50(); // bl 0x808CFA50
    /* clrlwi r30, r3, 0x18 */ // 0x808C0B2C
    if (>=) goto 0x0x808c0d8c;
    /* mulli r5, r29, 0x174 */ // 0x808C0B38
    r4 = *(0x654 + r28); // lwz @ 0x808C0B3C
    r3 = r28;
    r0 = r4 + 1; // 0x808C0B44
    *(0x654 + r28) = r0; // stw @ 0x808C0B48
    r5 = r28 + r5; // 0x808C0B4C
    r31 = r5 + 0x7c0; // 0x808C0B50
    /* li r6, 0 */ // 0x808C0B54
    r5 = r31;
    FUN_80671C2C(r6, r5); // bl 0x80671C2C
    r0 = r29 + 2; // 0x808C0B64
    if (>) goto 0x0x808c0b70;
    r0 = r29;
    /* lis r27, 0 */ // 0x808C0B74
    r27 = r27 + 0; // 0x808C0B78
    if (>=) goto 0x0x808c0b88;
    /* lis r27, 0 */ // 0x808C0B80
    r27 = r27 + 0; // 0x808C0B84
    /* lis r5, 0 */ // 0x808C0B8C
    r0 = r29 + 2; // 0x808C0B94
    r5 = r5 + 0; // 0x808C0B98
    /* li r4, 4 */ // 0x808C0B9C
    if (>) goto 0x0x808c0ba8;
    r0 = r29;
    if (>=) goto 0x0x808c0bc4;
    r6 = r29 + 2; // 0x808C0BB4
    if (>) goto 0x0x808c0bd8;
    r6 = r29;
    /* b 0x808c0bd8 */ // 0x808C0BC0
    r6 = r29 + 2; // 0x808C0BC8
    if (>) goto 0x0x808c0bd4;
    r6 = r29;
    r6 = r6 + -2; // 0x808C0BD4
    r6 = r6 + 1; // 0x808C0BD8
    /* crclr cr1eq */ // 0x808C0BDC
    FUN_805E3430(r6, r6, r6); // bl 0x805E3430
    r4 = r31;
    FUN_8064E324(r6, r4, r3); // bl 0x8064E324
    /* lis r4, 0 */ // 0x808C0BF0
    r5 = r27;
    r4 = r4 + 0; // 0x808C0C00
    /* li r7, 0 */ // 0x808C0C04
    FUN_8064E36C(r5, r3, r6, r4, r7); // bl 0x8064E36C
    /* li r4, -1 */ // 0x808C0C10
    FUN_8064E32C(r4, r7, r3, r4); // bl 0x8064E32C
    r0 = r30 + -2; // 0x808C0C18
    r3 = r31;
    /* cntlzw r0, r0 */ // 0x808C0C20
    /* srwi r4, r0, 5 */ // 0x808C0C24
    r4 = r4 + 1; // 0x808C0C28
    FUN_8069FEE8(r3, r4); // bl 0x8069FEE8
    /* mulli r0, r29, 0x5c8 */ // 0x808C0C30
    r3 = r31;
    /* li r4, 0 */ // 0x808C0C38
    r5 = r28 + r0; // 0x808C0C3C
    r26 = r5 + 0xd90; // 0x808C0C40
}