/* Function at 0x808C6C10, size=484 bytes */
/* Stack frame: 320 bytes */
/* Saved registers: r20 */
/* Calls: 6 function(s) */

int FUN_808C6C10(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -320(r1) */
    /* saved r20 */
    /* lis r5, 0 */ // 0x808C6C18
    *(0x144 + r1) = r0; // stw @ 0x808C6C1C
    /* stmw r20, 0x110(r1) */ // 0x808C6C20
    /* lis r30, 0 */ // 0x808C6C24
    r24 = r3;
    r25 = r4;
    r30 = r30 + 0; // 0x808C6C30
    r5 = *(0 + r5); // lwz @ 0x808C6C34
    r0 = *(0x36 + r5); // lha @ 0x808C6C38
    if (<) goto 0x0x808c6c60;
    /* lis r3, 1 */ // 0x808C6C44
    /* clrlwi r4, r0, 0x18 */ // 0x808C6C48
    r0 = r3 + -0x6c10; // 0x808C6C4C
    r0 = r0 * r4; // 0x808C6C50
    r3 = r5 + r0; // 0x808C6C54
    r29 = r3 + 0x38; // 0x808C6C58
    /* b 0x808c6c64 */ // 0x808C6C5C
    /* li r29, 0 */ // 0x808C6C60
    /* lis r22, 0 */ // 0x808C6C64
    /* li r0, 1 */ // 0x808C6C68
    r3 = *(0 + r22); // lwz @ 0x808C6C6C
    r23 = *(0x1760 + r3); // lwz @ 0x808C6C70
    *(0x1760 + r3) = r0; // stw @ 0x808C6C74
    FUN_808CFE7C(); // bl 0x808CFE7C
    r4 = *(0 + r22); // lwz @ 0x808C6C7C
    r31 = r3;
    *(0x1760 + r4) = r23; // stw @ 0x808C6C88
    if (>=) goto 0x0x808c6f4c;
    r6 = r30 + 0x64; // 0x808C6C90
    r8 = *(0x64 + r30); // lwz @ 0x808C6C98
    r7 = *(4 + r6); // lwz @ 0x808C6CA0
    /* slwi r28, r25, 2 */ // 0x808C6CA4
    r5 = *(8 + r6); // lwz @ 0x808C6CA8
    r4 = *(0xc + r6); // lwz @ 0x808C6CB0
    r0 = *(0x10 + r6); // lwz @ 0x808C6CB4
    r22 = *(0x50 + r30); // lwz @ 0x808C6CB8
    r12 = *(4 + r11); // lwz @ 0x808C6CBC
    r10 = *(8 + r11); // lwz @ 0x808C6CC0
    r9 = *(0xc + r11); // lwz @ 0x808C6CC4
    r6 = *(0x10 + r11); // lwz @ 0x808C6CC8
    *(0x58 + r1) = r8; // stw @ 0x808C6CCC
    *(0x5c + r1) = r7; // stw @ 0x808C6CD0
    *(0x60 + r1) = r5; // stw @ 0x808C6CD4
    *(0x64 + r1) = r4; // stw @ 0x808C6CD8
    *(0x68 + r1) = r0; // stw @ 0x808C6CDC
    *(0x6c + r1) = r22; // stw @ 0x808C6CE0
    /* lwzx r26, r3, r28 */ // 0x808C6CE4
    *(0x70 + r1) = r12; // stw @ 0x808C6CE8
    *(0x74 + r1) = r10; // stw @ 0x808C6CEC
    *(0x78 + r1) = r9; // stw @ 0x808C6CF0
    *(0x7c + r1) = r6; // stw @ 0x808C6CF4
    if (==) goto 0x0x808c6d08;
    if (==) goto 0x0x808c6d28;
    /* b 0x808c6d3c */ // 0x808C6D04
    /* addis r3, r29, 1 */ // 0x808C6D08
    /* li r4, 0x34 */ // 0x808C6D0C
    r3 = r3 + -0x7008; // 0x808C6D10
    FUN_805D84B0(r4, r3); // bl 0x805D84B0
    if (==) goto 0x0x808c6d3c;
    /* li r26, 4 */ // 0x808C6D20
    /* b 0x808c6d3c */ // 0x808C6D24
    FUN_808CFA50(); // bl 0x808CFA50
    /* clrlwi r0, r3, 0x18 */ // 0x808C6D2C
    if (<) goto 0x0x808c6d3c;
    /* li r26, 4 */ // 0x808C6D38
    /* mulli r27, r25, 0x298 */ // 0x808C6D3C
    r4 = *(0x654 + r24); // lwz @ 0x808C6D40
    r3 = r24;
    r0 = r4 + 1; // 0x808C6D48
    *(0x654 + r24) = r0; // stw @ 0x808C6D4C
    r5 = r24 + r27; // 0x808C6D50
    r30 = r5 + 0x6c4; // 0x808C6D54
    /* li r6, 0 */ // 0x808C6D58
    r5 = r30;
    FUN_80671C2C(r6, r5); // bl 0x80671C2C
    /* lis r3, 0 */ // 0x808C6D68
    r22 = r3 + 0; // 0x808C6D6C
    /* lwzx r6, r23, r28 */ // 0x808C6D70
    /* li r4, 0x10 */ // 0x808C6D78
    r5 = r22 + 0x1a; // 0x808C6D7C
    /* crclr cr1eq */ // 0x808C6D80
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
    *(0x38 + r1) = r21; // stw @ 0x808C6D98
    /* li r20, 0 */ // 0x808C6D9C
    *(0x3c + r1) = r4; // stw @ 0x808C6DA0
    *(0x40 + r1) = r3; // stw @ 0x808C6DA4
    *(0x44 + r1) = r0; // stw @ 0x808C6DA8
    /* b 0x808c6dd4 */ // 0x808C6DAC
    /* lwzx r6, r23, r28 */ // 0x808C6DB0
    r3 = r21;
    r7 = r20;
    r5 = r22 + 0x22; // 0x808C6DBC
    /* li r4, 0x10 */ // 0x808C6DC0
    /* crclr cr1eq */ // 0x808C6DC4
    FUN_805E3430(r3, r7, r5, r4); // bl 0x805E3430
    r21 = r21 + 0x10; // 0x808C6DCC
    r20 = r20 + 1; // 0x808C6DD0
    if (<) goto 0x0x808c6db0;
    /* li r28, 0 */ // 0x808C6DE0
    if (==) goto 0x0x808c6e0c;
    if (==) goto 0x0x808c6e20;
}