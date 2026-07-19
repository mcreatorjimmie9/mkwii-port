/* Function at 0x80818EF4, size=260 bytes */
/* Stack frame: 128 bytes */
/* Saved registers: r21 */
/* Calls: 3 function(s) */

int FUN_80818EF4(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -128(r1) */
    /* saved r21 */
    /* lis r5, 0 */ // 0x80818EFC
    *(0x84 + r1) = r0; // stw @ 0x80818F00
    /* stmw r21, 0x54(r1) */ // 0x80818F04
    /* slwi r22, r4, 2 */ // 0x80818F08
    r29 = r3;
    r5 = *(0 + r5); // lwz @ 0x80818F10
    r5 = *(0x18 + r5); // lwz @ 0x80818F14
    /* lwzx r5, r5, r22 */ // 0x80818F18
    r0 = *(0x334 + r5); // lhz @ 0x80818F1C
    r30 = r0 rlwinm 0x1e; // rlwinm
    FUN_80648FE8(); // bl 0x80648FE8
    r31 = r29 + r22; // 0x80818F28
    /* cntlzw r3, r30 */ // 0x80818F2C
    r0 = *(0x74 + r31); // lwz @ 0x80818F30
    /* srwi r3, r3, 5 */ // 0x80818F34
    if (==) goto 0x0x80819068;
    if (==) goto 0x0x80818f70;
    /* lis r6, 0 */ // 0x80818F48
    /* lbzu r5, 0(r6) */ // 0x80818F4C
    *(0x48 + r1) = r5; // stb @ 0x80818F50
    r4 = *(1 + r6); // lbz @ 0x80818F54
    r3 = *(2 + r6); // lbz @ 0x80818F58
    r0 = *(3 + r6); // lbz @ 0x80818F5C
    *(0x49 + r1) = r4; // stb @ 0x80818F60
    *(0x4a + r1) = r3; // stb @ 0x80818F64
    *(0x4b + r1) = r0; // stb @ 0x80818F68
    /* b 0x80818f94 */ // 0x80818F6C
    /* lis r6, 0 */ // 0x80818F70
    /* lbzu r5, 0(r6) */ // 0x80818F74
    *(0x48 + r1) = r5; // stb @ 0x80818F78
    r4 = *(1 + r6); // lbz @ 0x80818F7C
    r3 = *(2 + r6); // lbz @ 0x80818F80
    r0 = *(3 + r6); // lbz @ 0x80818F84
    *(0x49 + r1) = r4; // stb @ 0x80818F88
    *(0x4a + r1) = r3; // stb @ 0x80818F8C
    *(0x4b + r1) = r0; // stb @ 0x80818F90
    /* lis r22, 0 */ // 0x80818F94
    r28 = *(0x48 + r1); // lwz @ 0x80818F98
    r22 = r22 + 0; // 0x80818F9C
    /* li r21, 0 */ // 0x80818FA0
    /* lis r24, 0 */ // 0x80818FA4
    /* lis r25, 0 */ // 0x80818FA8
    /* lis r26, 0 */ // 0x80818FAC
    /* lis r27, 0 */ // 0x80818FB0
    /* b 0x80819050 */ // 0x80818FB4
    r0 = *(0xc + r29); // lwz @ 0x80818FB8
    *(0xc + r1) = r0; // stw @ 0x80818FC0
    r4 = *(0 + r22); // lwz @ 0x80818FC4
    FUN_805E3430(r3); // bl 0x805E3430
    r23 = r3;
    if (!=) goto 0x0x80818ff4;
    r3 = r24 + 0; // 0x80818FD8
    r5 = r25 + 0; // 0x80818FDC
    r6 = r26 + 0; // 0x80818FE0
    r7 = r27 + 0; // 0x80818FE4
    /* li r4, 0x26d */ // 0x80818FE8
    /* crclr cr1eq */ // 0x80818FEC
    FUN_805E3430(r5, r6, r7, r4); // bl 0x805E3430
    r4 = *(0x10 + r29); // lwz @ 0x80818FF4
}