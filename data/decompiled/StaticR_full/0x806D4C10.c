/* Function at 0x806D4C10, size=332 bytes */
/* Stack frame: 272 bytes */
/* Saved registers: r24 */
/* Calls: 8 function(s) */

int FUN_806D4C10(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -272(r1) */
    /* saved r24 */
    /* li r0, 0 */ // 0x806D4C1C
    /* stmw r24, 0xf0(r1) */ // 0x806D4C20
    r26 = r4;
    /* lis r29, 0 */ // 0x806D4C28
    r31 = r3;
    r25 = r5;
    r24 = r6;
    *(8 + r1) = r0; // stb @ 0x806D4C3C
    r3 = *(0 + r29); // lwz @ 0x806D4C40
    *(0xc + r1) = r0; // stw @ 0x806D4C44
    FUN_806F9214(r4); // bl 0x806F9214
    FUN_80654ECC(r3); // bl 0x80654ECC
    r0 = *(0x10 + r1); // lwz @ 0x806D4C54
    /* li r3, 0x19ca */ // 0x806D4C58
    *(0x48 + r1) = r3; // stw @ 0x806D4C5C
    if (!=) goto 0x0x806d4c74;
    r0 = *(0x18 + r1); // lwz @ 0x806D4C68
    *(0xc0 + r1) = r0; // stw @ 0x806D4C6C
    /* b 0x806d4c84 */ // 0x806D4C70
    r3 = *(0 + r29); // lwz @ 0x806D4C74
    r4 = r26;
    FUN_806F8CCC(r4); // bl 0x806F8CCC
    *(0xc0 + r1) = r3; // stw @ 0x806D4C80
    if (==) goto 0x0x806d4c98;
    if (==) goto 0x0x806d4cac;
    /* b 0x806d4cbc */ // 0x806D4C94
    r3 = r31 + 0x4f4; // 0x806D4C98
    /* li r4, 0x1776 */ // 0x806D4CA0
    FUN_806A0A34(r3, r5, r4); // bl 0x806A0A34
    /* b 0x806d4cbc */ // 0x806D4CA8
    r3 = r31 + 0x4f4; // 0x806D4CAC
    /* li r4, 0x1777 */ // 0x806D4CB4
    FUN_806A0A34(r3, r5, r4); // bl 0x806A0A34
    /* li r29, 0 */ // 0x806D4CBC
    *(0x16b4 + r31) = r29; // stw @ 0x806D4CC0
    r26 = r31;
    r28 = r24 + 4; // 0x806D4CC8
    r27 = r31 + 0x668; // 0x806D4CCC
    /* li r25, 0 */ // 0x806D4CD0
    /* li r30, 1 */ // 0x806D4CD4
    r0 = *(0 + r24); // lwz @ 0x806D4CD8
    if (>=) goto 0x0x806d4d08;
    r3 = r27;
    r4 = r28;
    FUN_806D3EE8(r3, r4); // bl 0x806D3EE8
    *(0x6e8 + r26) = r29; // stb @ 0x806D4CF0
    r3 = r27;
    /* li r4, 0x37 */ // 0x806D4CF8
    /* li r5, 0x38 */ // 0x806D4CFC
    FUN_806A0024(r3, r4, r5); // bl 0x806A0024
    /* b 0x806d4d1c */ // 0x806D4D04
    *(0x6e8 + r26) = r30; // stb @ 0x806D4D08
    r3 = r27;
    /* li r4, 0 */ // 0x806D4D10
    /* li r5, 0 */ // 0x806D4D14
    FUN_806A0024(r3, r4, r5); // bl 0x806A0024
    r25 = r25 + 1; // 0x806D4D1C
    r27 = r27 + 0x17c; // 0x806D4D20
    r26 = r26 + 0x17c; // 0x806D4D28
    r28 = r28 + 0x68; // 0x806D4D2C
    if (<) goto 0x0x806d4cd8;
    r3 = *(0 + r24); // lwz @ 0x806D4D34
    /* neg r0, r3 */ // 0x806D4D38
    /* andc r0, r0, r3 */ // 0x806D4D3C
    /* srwi r0, r0, 0x1f */ // 0x806D4D40
    *(0x15c0 + r31) = r0; // stb @ 0x806D4D44
    r0 = *(0x114 + r1); // lwz @ 0x806D4D4C
    return;
}