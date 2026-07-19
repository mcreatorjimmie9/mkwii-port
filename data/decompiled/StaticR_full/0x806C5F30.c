/* Function at 0x806C5F30, size=284 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r22 */
/* Calls: 10 function(s) */

int FUN_806C5F30(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -80(r1) */
    /* saved r22 */
    /* li r4, 4 */ // 0x806C5F38
    /* li r5, 1 */ // 0x806C5F3C
    *(0x54 + r1) = r0; // stw @ 0x806C5F40
    /* li r6, 0 */ // 0x806C5F44
    /* stmw r22, 0x28(r1) */ // 0x806C5F48
    r28 = r3;
    r3 = r3 + 0x1270; // 0x806C5F50
    FUN_8066D808(r6, r3); // bl 0x8066D808
    r12 = *(0xd0 + r28); // lwz @ 0x806C5F58
    r3 = r28 + 0xd0; // 0x806C5F5C
    /* li r4, 1 */ // 0x806C5F60
    /* li r5, 0 */ // 0x806C5F64
    r12 = *(0x10 + r12); // lwz @ 0x806C5F68
    /* mtctr r12 */ // 0x806C5F6C
    /* bctrl  */ // 0x806C5F70
    r3 = r28;
    r4 = r28 + 0xd0; // 0x806C5F78
    FUN_80671C34(r3, r4); // bl 0x80671C34
    r3 = r28 + 0xd0; // 0x806C5F80
    /* li r4, 2 */ // 0x806C5F84
    FUN_8066A380(r3, r4, r3, r4); // bl 0x8066A380
    r3 = r28 + 0xd0; // 0x806C5F8C
    r5 = r28 + 0x80; // 0x806C5F90
    /* li r4, 1 */ // 0x806C5F94
    /* li r6, 0 */ // 0x806C5F98
    /* li r7, 0 */ // 0x806C5F9C
    FUN_8066A350(r3, r5, r4, r6, r7); // bl 0x8066A350
    r3 = r28;
    /* li r4, 7 */ // 0x806C5FA8
    FUN_80671C1C(r6, r7, r3, r4); // bl 0x80671C1C
    r3 = r28;
    r5 = r28 + 0x2f4; // 0x806C5FB4
    /* li r4, 0 */ // 0x806C5FB8
    /* li r6, 0 */ // 0x806C5FBC
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r28 + 0x2f4; // 0x806C5FC4
    /* li r4, 0 */ // 0x806C5FC8
    FUN_808D5444(r4, r6, r3, r4); // bl 0x808D5444
    r3 = r28 + 0x2f4; // 0x806C5FD0
    /* li r4, 0x838 */ // 0x806C5FD4
    /* li r5, 0 */ // 0x806C5FD8
    FUN_808D5844(r4, r3, r4, r5); // bl 0x808D5844
    /* lis r27, 1 */ // 0x806C5FE0
    /* lis r3, 0 */ // 0x806C5FE4
    /* li r29, 0 */ // 0x806C5FE8
    /* lis r25, 0 */ // 0x806C5FEC
    r31 = r3 + 0; // 0x806C5FF0
    r26 = r27 + -0x7340; // 0x806C5FF4
    /* clrlwi r3, r29, 0x18 */ // 0x806C5FF8
    r24 = r31 + 0x2c; // 0x806C5FFC
    r22 = r3 + 1; // 0x806C6004
    if (>=) goto 0x0x806c6010;
    r24 = r31 + 0x1d; // 0x806C600C
    /* clrlwi r0, r29, 0x18 */ // 0x806C6010
    r3 = r28;
    /* mulli r23, r0, 0x254 */ // 0x806C6018
    r4 = r22;
    /* li r6, 0 */ // 0x806C6020
    r5 = r28 + r23; // 0x806C6024
    r30 = r5 + 0x468; // 0x806C6028
    r5 = r30;
    FUN_80671C2C(r4, r6, r5); // bl 0x80671C2C
    r5 = r31 + 0x3b; // 0x806C6038
    /* clrlwi r6, r29, 0x18 */ // 0x806C603C
    /* li r4, 0xf */ // 0x806C6040
    /* crclr cr1eq */ // 0x806C6044
    FUN_805E3430(r3, r5, r4); // bl 0x805E3430
}