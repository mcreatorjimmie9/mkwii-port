/* Function at 0x80706EE4, size=180 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r21 */
/* Calls: 2 function(s) */

int FUN_80706EE4(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -64(r1) */
    /* saved r21 */
    /* lis r11, 0 */ // 0x80706EEC
    *(0x44 + r1) = r0; // stw @ 0x80706EF0
    /* stmw r21, 0x14(r1) */ // 0x80706EF4
    r22 = r3;
    r30 = *(0x48 + r1); // lwz @ 0x80706EFC
    r23 = r4;
    r31 = *(0x4c + r1); // lwz @ 0x80706F04
    r24 = r5;
    r25 = r6;
    r26 = r7;
    r27 = r8;
    r28 = r9;
    r29 = r10;
    r0 = *(0 + r11); // lwz @ 0x80706F20
    if (!=) goto 0x0x80706f68;
    /* lis r3, 0 */ // 0x80706F2C
    r0 = *(0 + r3); // lbz @ 0x80706F30
    /* extsb. r0, r0 */ // 0x80706F34
    if (!=) goto 0x0x80706f60;
    /* lis r4, 0 */ // 0x80706F3C
    /* lis r6, 0 */ // 0x80706F40
    r4 = r4 + 0; // 0x80706F44
    r3 = r3 + 0; // 0x80706F48
    r5 = r4 + 0x6f2; // 0x80706F4C
    r6 = r6 + 0; // 0x80706F50
    /* li r4, 0x80 */ // 0x80706F54
    /* crclr cr1eq */ // 0x80706F58
    FUN_805E3430(r3, r5, r6, r4); // bl 0x805E3430
    /* li r0, 1 */ // 0x80706F60
    /* b 0x80706f6c */ // 0x80706F64
    /* li r0, 0 */ // 0x80706F68
    if (!=) goto 0x0x80706f7c;
    /* li r3, 0x6a */ // 0x80706F74
    /* b 0x80707214 */ // 0x80706F78
    /* li r3, 8 */ // 0x80706F7C
    FUN_805E3430(r3, r3); // bl 0x805E3430
    r21 = r3;
    if (!=) goto 0x0x80706f98;
    /* li r3, 0x68 */ // 0x80706F90
    /* b 0x80707214 */ // 0x80706F94
}