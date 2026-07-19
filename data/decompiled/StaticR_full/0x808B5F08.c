/* Function at 0x808B5F08, size=420 bytes */
/* Stack frame: 240 bytes */
/* Saved registers: r21 */
/* Calls: 5 function(s) */

int FUN_808B5F08(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -240(r1) */
    /* saved r21 */
    /* lis r5, 0 */ // 0x808B5F10
    *(0xf4 + r1) = r0; // stw @ 0x808B5F14
    /* stmw r21, 0xc4(r1) */ // 0x808B5F18
    /* lis r30, 0 */ // 0x808B5F1C
    r25 = r3;
    r26 = r4;
    r30 = r30 + 0; // 0x808B5F28
    r5 = *(0 + r5); // lwz @ 0x808B5F2C
    r0 = *(0x36 + r5); // lha @ 0x808B5F30
    if (<) goto 0x0x808b5f58;
    /* lis r3, 1 */ // 0x808B5F3C
    /* clrlwi r4, r0, 0x18 */ // 0x808B5F40
    r0 = r3 + -0x6c10; // 0x808B5F44
    r0 = r0 * r4; // 0x808B5F48
    r3 = r5 + r0; // 0x808B5F4C
    r29 = r3 + 0x38; // 0x808B5F50
    /* b 0x808b5f5c */ // 0x808B5F54
    /* li r29, 0 */ // 0x808B5F58
    /* lis r23, 0 */ // 0x808B5F5C
    /* li r0, 3 */ // 0x808B5F60
    r3 = *(0 + r23); // lwz @ 0x808B5F64
    r24 = *(0x1760 + r3); // lwz @ 0x808B5F68
    *(0x1760 + r3) = r0; // stw @ 0x808B5F6C
    FUN_808CFE7C(); // bl 0x808CFE7C
    r4 = *(0 + r23); // lwz @ 0x808B5F74
    r31 = r3;
    *(0x1760 + r4) = r24; // stw @ 0x808B5F80
    if (>=) goto 0x0x808b6174;
    r5 = r30 + 0x48; // 0x808B5F88
    r9 = r30 + 0x38; // 0x808B5F8C
    r7 = *(0x48 + r30); // lwz @ 0x808B5F90
    r6 = *(4 + r5); // lwz @ 0x808B5F98
    /* slwi r28, r26, 2 */ // 0x808B5F9C
    r4 = *(8 + r5); // lwz @ 0x808B5FA0
    r0 = *(0xc + r5); // lwz @ 0x808B5FA8
    r11 = *(0x38 + r30); // lwz @ 0x808B5FAC
    r10 = *(4 + r9); // lwz @ 0x808B5FB0
    r8 = *(8 + r9); // lwz @ 0x808B5FB4
    r5 = *(0xc + r9); // lwz @ 0x808B5FB8
    *(0x58 + r1) = r7; // stw @ 0x808B5FBC
    *(0x5c + r1) = r6; // stw @ 0x808B5FC0
    *(0x60 + r1) = r4; // stw @ 0x808B5FC4
    *(0x64 + r1) = r0; // stw @ 0x808B5FC8
    *(0x68 + r1) = r11; // stw @ 0x808B5FCC
    /* lwzx r27, r3, r28 */ // 0x808B5FD0
    *(0x6c + r1) = r10; // stw @ 0x808B5FD4
    *(0x70 + r1) = r8; // stw @ 0x808B5FD8
    *(0x74 + r1) = r5; // stw @ 0x808B5FDC
    if (!=) goto 0x0x808b5ff8;
    FUN_808CFA50(); // bl 0x808CFA50
    /* clrlwi r0, r3, 0x18 */ // 0x808B5FE8
    if (<) goto 0x0x808b5ff8;
    /* li r27, 4 */ // 0x808B5FF4
    /* mulli r30, r26, 0x298 */ // 0x808B5FF8
    r4 = *(0x654 + r25); // lwz @ 0x808B5FFC
    r3 = r25;
    r0 = r4 + 1; // 0x808B6004
    *(0x654 + r25) = r0; // stw @ 0x808B6008
    r5 = r25 + r30; // 0x808B600C
    /* li r6, 0 */ // 0x808B6010
    r5 = r5 + 0x6c4; // 0x808B6014
    FUN_80671C2C(r6, r5); // bl 0x80671C2C
    /* lis r3, 0 */ // 0x808B6020
    r23 = r3 + 0; // 0x808B6024
    /* lwzx r6, r24, r28 */ // 0x808B6028
    /* li r4, 0x10 */ // 0x808B6030
    r5 = r23 + 0x1e; // 0x808B6034
    /* crclr cr1eq */ // 0x808B6038
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
    *(0x38 + r1) = r22; // stw @ 0x808B6050
    /* li r21, 0 */ // 0x808B6054
    *(0x3c + r1) = r4; // stw @ 0x808B6058
    *(0x40 + r1) = r3; // stw @ 0x808B605C
    *(0x44 + r1) = r0; // stw @ 0x808B6060
    /* b 0x808b608c */ // 0x808B6064
    /* lwzx r6, r24, r28 */ // 0x808B6068
    r3 = r22;
    r7 = r21;
    r5 = r23 + 0x26; // 0x808B6074
    /* li r4, 0x10 */ // 0x808B6078
    /* crclr cr1eq */ // 0x808B607C
    FUN_805E3430(r3, r7, r5, r4); // bl 0x805E3430
    r22 = r22 + 0x10; // 0x808B6084
    r21 = r21 + 1; // 0x808B6088
    if (<) goto 0x0x808b6068;
    /* li r5, 0 */ // 0x808B6098
    if (==) goto 0x0x808b60bc;
    if (==) goto 0x0x808b60d0;
}