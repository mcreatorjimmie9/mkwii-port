/* Function at 0x806C0DFC, size=604 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r22 */
/* Calls: 3 function(s) */

int FUN_806C0DFC(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -64(r1) */
    /* saved r22 */
    /* lis r4, 0 */ // 0x806C0E04
    *(0x44 + r1) = r0; // stw @ 0x806C0E08
    /* stmw r22, 0x18(r1) */ // 0x806C0E0C
    r22 = r3;
    r3 = *(0 + r4); // lwz @ 0x806C0E14
    r3 = *(0 + r3); // lwz @ 0x806C0E18
    r27 = *(0x278 + r3); // lwz @ 0x806C0E1C
    if (!=) goto 0x0x806c0e30;
    /* li r27, 0 */ // 0x806C0E28
    /* b 0x806c0e84 */ // 0x806C0E2C
    /* lis r23, 0 */ // 0x806C0E30
    r23 = r23 + 0; // 0x806C0E34
    if (==) goto 0x0x806c0e80;
    r12 = *(0 + r27); // lwz @ 0x806C0E3C
    r3 = r27;
    r12 = *(0x60 + r12); // lwz @ 0x806C0E44
    /* mtctr r12 */ // 0x806C0E48
    /* bctrl  */ // 0x806C0E4C
    /* b 0x806c0e68 */ // 0x806C0E50
    if (!=) goto 0x0x806c0e64;
    /* li r0, 1 */ // 0x806C0E5C
    /* b 0x806c0e74 */ // 0x806C0E60
    r3 = *(0 + r3); // lwz @ 0x806C0E64
    if (!=) goto 0x0x806c0e54;
    /* li r0, 0 */ // 0x806C0E70
    if (==) goto 0x0x806c0e80;
    /* b 0x806c0e84 */ // 0x806C0E7C
    /* li r27, 0 */ // 0x806C0E80
    r3 = r22 + 0x2494; // 0x806C0E84
    FUN_8066DB2C(r3); // bl 0x8066DB2C
    /* li r0, 0 */ // 0x806C0E8C
    *(0x2670 + r22) = r0; // stw @ 0x806C0E90
    /* li r25, 0 */ // 0x806C0E94
    /* lis r31, 0 */ // 0x806C0E98
    /* lis r30, 0 */ // 0x806C0E9C
    /* li r29, 1 */ // 0x806C0EA0
    /* lis r28, 0 */ // 0x806C0EA4
    /* cntlzw r0, r25 */ // 0x806C0EA8
    /* li r23, 0 */ // 0x806C0EAC
    /* srwi r24, r0, 5 */ // 0x806C0EB0
    r3 = *(0 + r28); // lwz @ 0x806C0EB4
    /* clrlwi r4, r23, 0x18 */ // 0x806C0EB8
    r0 = *(0x291c + r3); // lwz @ 0x806C0EBC
    /* mulli r0, r0, 0x58 */ // 0x806C0EC0
    r3 = r3 + r0; // 0x806C0EC4
    r0 = *(0x59 + r3); // lbz @ 0x806C0EC8
    if (==) goto 0x0x806c1028;
    r0 = *(0x48 + r3); // lwz @ 0x806C0ED4
    r3 = r29 << r4; // slw
    /* and. r0, r3, r0 */ // 0x806C0EDC
    if (==) goto 0x0x806c1028;
    r5 = *(0 + r30); // lwz @ 0x806C0EE4
    r0 = *(0x9e0 + r5); // lwz @ 0x806C0EE8
    /* and. r0, r3, r0 */ // 0x806C0EEC
    if (==) goto 0x0x806c1028;
    r3 = r27 + r4; // 0x806C0EF4
    r0 = *(0x2af9 + r3); // lbz @ 0x806C0EF8
    if (!=) goto 0x0x806c1028;
    /* mulli r26, r4, 0xc0 */ // 0x806C0F04
    r3 = *(0 + r31); // lwz @ 0x806C0F08
    r5 = r5 + r26; // 0x806C0F10
    r0 = *(0x170 + r5); // lwz @ 0x806C0F14
    r5 = *(0x174 + r5); // lwz @ 0x806C0F18
    *(0xc + r1) = r5; // stw @ 0x806C0F1C
    *(8 + r1) = r0; // stw @ 0x806C0F20
    r3 = *(0 + r3); // lwz @ 0x806C0F24
    r3 = *(0x404 + r3); // lwz @ 0x806C0F28
    FUN_8065935C(); // bl 0x8065935C
    if (!=) goto 0x0x806c1028;
    r0 = *(0x2670 + r22); // lwz @ 0x806C0F38
    r3 = r22 + 0x2494; // 0x806C0F3C
    r7 = *(8 + r1); // lwz @ 0x806C0F40
    /* clrlwi r5, r23, 0x18 */ // 0x806C0F44
    /* slwi r0, r0, 5 */ // 0x806C0F48
    r8 = *(0xc + r1); // lwz @ 0x806C0F4C
    r4 = r22 + r0; // 0x806C0F50
    /* li r6, 0 */ // 0x806C0F54
    *(0x2534 + r4) = r8; // stw @ 0x806C0F58
    *(0x2530 + r4) = r7; // stw @ 0x806C0F5C
    r4 = *(0 + r30); // lwz @ 0x806C0F60
    r0 = *(0x2670 + r22); // lwz @ 0x806C0F64
    r4 = r4 + r26; // 0x806C0F68
    /* slwi r0, r0, 5 */ // 0x806C0F6C
    r7 = *(0x178 + r4); // lwz @ 0x806C0F70
    r4 = r22 + r0; // 0x806C0F74
    *(0x2538 + r4) = r7; // stw @ 0x806C0F78
    r4 = *(0 + r30); // lwz @ 0x806C0F7C
    r0 = *(0x2670 + r22); // lwz @ 0x806C0F80
    r4 = r4 + r26; // 0x806C0F84
    /* slwi r0, r0, 5 */ // 0x806C0F88
    r7 = *(0x17c + r4); // lhz @ 0x806C0F8C
    r4 = r22 + r0; // 0x806C0F90
    *(0x253c + r4) = r7; // sth @ 0x806C0F94
    r4 = *(0 + r30); // lwz @ 0x806C0F98
    r0 = *(0x2670 + r22); // lwz @ 0x806C0F9C
    r4 = r4 + r26; // 0x806C0FA0
    /* slwi r0, r0, 5 */ // 0x806C0FA4
    r7 = *(0x17e + r4); // lhz @ 0x806C0FA8
    r4 = r22 + r0; // 0x806C0FAC
    *(0x253e + r4) = r7; // sth @ 0x806C0FB0
    r4 = *(0 + r30); // lwz @ 0x806C0FB4
    r0 = *(0x2670 + r22); // lwz @ 0x806C0FB8
    r8 = r4 + r26; // 0x806C0FBC
    /* slwi r0, r0, 5 */ // 0x806C0FC0
    r7 = *(0x168 + r8); // lwz @ 0x806C0FC4
    r4 = r22 + r0; // 0x806C0FC8
    r0 = *(0x16c + r8); // lwz @ 0x806C0FCC
    *(0x2544 + r4) = r0; // stw @ 0x806C0FD0
    *(0x2540 + r4) = r7; // stw @ 0x806C0FD4
    r0 = *(0x2670 + r22); // lwz @ 0x806C0FD8
    /* slwi r0, r0, 5 */ // 0x806C0FDC
    r4 = r22 + r0; // 0x806C0FE0
    *(0x2548 + r4) = r23; // stb @ 0x806C0FE4
    r4 = *(0 + r30); // lwz @ 0x806C0FE8
    r0 = *(0x2670 + r22); // lwz @ 0x806C0FEC
    r4 = r4 + r26; // 0x806C0FF0
    /* slwi r0, r0, 5 */ // 0x806C0FF4
    r7 = *(0x184 + r4); // lbz @ 0x806C0FF8
    r4 = r22 + r0; // 0x806C0FFC
    *(0x2549 + r4) = r7; // stb @ 0x806C1000
    r0 = *(0x2670 + r22); // lwz @ 0x806C1004
    /* slwi r0, r0, 5 */ // 0x806C1008
    r4 = r22 + r0; // 0x806C100C
    *(0x254a + r4) = r24; // stb @ 0x806C1010
    r4 = *(0x2670 + r22); // lwz @ 0x806C1014
    FUN_8066E074(); // bl 0x8066E074
    r3 = *(0x2670 + r22); // lwz @ 0x806C101C
    r0 = r3 + 1; // 0x806C1020
    *(0x2670 + r22) = r0; // stw @ 0x806C1024
    r23 = r23 + 1; // 0x806C1028
    if (<) goto 0x0x806c0eb4;
    r25 = r25 + 1; // 0x806C1034
    if (<) goto 0x0x806c0ea8;
    r3 = *(0x2670 + r22); // lwz @ 0x806C1040
    r0 = *(0x44 + r1); // lwz @ 0x806C1048
    return;
}