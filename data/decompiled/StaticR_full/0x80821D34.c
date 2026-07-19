/* Function at 0x80821D34, size=720 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r22 */
/* Calls: 21 function(s) */

int FUN_80821D34(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -48(r1) */
    /* saved r22 */
    *(0x34 + r1) = r0; // stw @ 0x80821D40
    /* stmw r22, 8(r1) */ // 0x80821D44
    r30 = r3;
    r22 = r4;
    r23 = r5;
    r31 = r6;
    r24 = r7;
    r25 = r8;
    if (==) goto 0x0x80821d98;
    if (==) goto 0x0x80821e90;
    if (==) goto 0x0x80821ee0;
    if (==) goto 0x0x80821f00;
    if (==) goto 0x0x80821f18;
    if (==) goto 0x0x80821f30;
    if (==) goto 0x0x80821f9c;
    /* b 0x80821fbc */ // 0x80821D94
    r4 = *(0 + r3); // lwz @ 0x80821D98
    /* lis r3, 0 */ // 0x80821D9C
    r27 = *(0 + r3); // lwz @ 0x80821DA0
    r0 = r4 + -0xa; // 0x80821DA4
    if (<=) goto 0x0x80821db8;
    if (!=) goto 0x0x80821dd8;
    r4 = *(0 + r30); // lwz @ 0x80821DB8
    r3 = r27;
    /* li r5, 1 */ // 0x80821DC0
    FUN_808409C0(r3, r5); // bl 0x808409C0
    if (==) goto 0x0x80821dd8;
    /* li r3, 0 */ // 0x80821DD0
    /* b 0x80821ff0 */ // 0x80821DD4
    r0 = *(0 + r30); // lwz @ 0x80821DD8
    if (!=) goto 0x0x80821dfc;
    r3 = r31;
    FUN_80827978(r3); // bl 0x80827978
    /* clrlwi r3, r3, 0x18 */ // 0x80821DEC
    FUN_8083D260(r3); // bl 0x8083D260
    r3 = r27;
    FUN_80840FFC(r3, r3); // bl 0x80840FFC
    r0 = *(0 + r30); // lwz @ 0x80821DFC
    if (!=) goto 0x0x80821e2c;
    r3 = r31;
    FUN_80827978(r3); // bl 0x80827978
    /* lis r4, 0 */ // 0x80821E10
    r0 = r3;
    r3 = *(0 + r4); // lwz @ 0x80821E18
    /* clrlwi r4, r0, 0x18 */ // 0x80821E1C
    FUN_80869F88(r4); // bl 0x80869F88
    r3 = r27;
    FUN_80841014(r3); // bl 0x80841014
    r0 = *(0 + r30); // lwz @ 0x80821E2C
    if (!=) goto 0x0x80821e5c;
    r3 = r31;
    FUN_80827978(r3); // bl 0x80827978
    /* lis r4, 0 */ // 0x80821E40
    r0 = r3;
    r3 = *(0 + r4); // lwz @ 0x80821E48
    /* clrlwi r4, r0, 0x18 */ // 0x80821E4C
    FUN_8086D8A8(r4); // bl 0x8086D8A8
    r3 = r27;
    FUN_80841020(r3); // bl 0x80841020
    r0 = *(0 + r30); // lwz @ 0x80821E5C
    if (!=) goto 0x0x80821e88;
    /* lis r4, 0 */ // 0x80821E68
    r3 = r31;
    r27 = *(0 + r4); // lwz @ 0x80821E70
    FUN_80827978(r4, r3); // bl 0x80827978
    r0 = r3;
    r3 = r27;
    /* clrlwi r4, r0, 0x18 */ // 0x80821E80
    FUN_8082544C(r3); // bl 0x8082544C
    /* li r3, 0 */ // 0x80821E88
    /* b 0x80821ff0 */ // 0x80821E8C
    r4 = r23;
    r5 = r31;
    /* li r6, 0 */ // 0x80821E98
    /* li r7, 0 */ // 0x80821E9C
    /* li r8, 0 */ // 0x80821EA0
    FUN_80822004(r4, r5, r6, r7, r8); // bl 0x80822004
    if (!=) goto 0x0x80821eb8;
    /* li r3, 0 */ // 0x80821EB0
    /* b 0x80821ff0 */ // 0x80821EB4
    r0 = *(0x6c + r3); // lbz @ 0x80821EB8
    /* lis r4, 0 */ // 0x80821EBC
    r5 = *(0 + r4); // lwz @ 0x80821EC0
    r4 = r3;
    /* mulli r0, r0, 0x248 */ // 0x80821EC8
    r3 = *(0x14 + r5); // lwz @ 0x80821ECC
    r3 = r3 + r0; // 0x80821ED0
    FUN_808239BC(r4); // bl 0x808239BC
    /* li r3, 0 */ // 0x80821ED8
    /* b 0x80821ff0 */ // 0x80821EDC
    r4 = r23;
    r5 = r31;
    /* li r6, 1 */ // 0x80821EE8
    /* li r7, 0 */ // 0x80821EEC
    /* li r8, 0 */ // 0x80821EF0
    FUN_80822004(r4, r5, r6, r7, r8); // bl 0x80822004
    /* li r3, 0 */ // 0x80821EF8
    /* b 0x80821ff0 */ // 0x80821EFC
    r4 = r31;
    FUN_808221D4(r8, r3, r4); // bl 0x808221D4
    if (==) goto 0x0x80821fc4;
    /* li r3, 0 */ // 0x80821F10
    /* b 0x80821ff0 */ // 0x80821F14
    r4 = r31;
    FUN_8082234C(r3, r4); // bl 0x8082234C
    if (==) goto 0x0x80821fc4;
    /* li r3, 0 */ // 0x80821F28
    /* b 0x80821ff0 */ // 0x80821F2C
    r4 = *(0 + r30); // lwz @ 0x80821F30
    r3 = r31;
    FUN_8082795C(r3, r3); // bl 0x8082795C
    /* clrlwi r27, r3, 0x10 */ // 0x80821F3C
    /* li r28, 0 */ // 0x80821F40
    /* li r29, 0 */ // 0x80821F44
    /* li r26, 0 */ // 0x80821F48
    /* b 0x80821f80 */ // 0x80821F4C
    r3 = *(4 + r30); // lwz @ 0x80821F50
    /* lwzx r3, r3, r26 */ // 0x80821F54
    r0 = *(0xc + r3); // lha @ 0x80821F58
    if (!=) goto 0x0x80821f78;
    r0 = *(0 + r30); // lwz @ 0x80821F64
    /* li r28, 1 */ // 0x80821F68
    if (!=) goto 0x0x80821f78;
    FUN_808340C4(); // bl 0x808340C4
    r26 = r26 + 4; // 0x80821F78
    r29 = r29 + 1; // 0x80821F7C
    r0 = *(0x14 + r30); // lwz @ 0x80821F80
    if (<) goto 0x0x80821f50;
    if (==) goto 0x0x80821fc4;
    /* li r3, 0 */ // 0x80821F94
    /* b 0x80821ff0 */ // 0x80821F98
    r4 = r23;
    r5 = r31;
    /* li r6, 0 */ // 0x80821FA4
    /* li r7, 1 */ // 0x80821FA8
    /* li r8, 0 */ // 0x80821FAC
    FUN_80822004(r4, r5, r6, r7, r8); // bl 0x80822004
    /* li r3, 0 */ // 0x80821FB4
    /* b 0x80821ff0 */ // 0x80821FB8
    /* li r3, 0 */ // 0x80821FBC
    /* b 0x80821ff0 */ // 0x80821FC0
    if (==) goto 0x0x80821fd4;
    /* li r3, 1 */ // 0x80821FCC
    /* b 0x80821ff0 */ // 0x80821FD0
    r3 = *(0 + r30); // lwz @ 0x80821FD4
    r4 = r22;
    r5 = r23;
    r6 = r31;
    r7 = r24;
    FUN_808279C4(r4, r5, r6, r7); // bl 0x808279C4
    /* li r3, 0 */ // 0x80821FEC
    r0 = *(0x34 + r1); // lwz @ 0x80821FF4
    return;
}