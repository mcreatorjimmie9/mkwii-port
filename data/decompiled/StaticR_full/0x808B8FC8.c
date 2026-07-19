/* Function at 0x808B8FC8, size=420 bytes */
/* Stack frame: 160 bytes */
/* Saved registers: r16 */
/* Calls: 2 function(s) */

void FUN_808B8FC8(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -160(r1) */
    /* saved r16 */
    /* stmw r16, 0x60(r1) */ // 0x808B8FD4
    /* lis r20, 0 */ // 0x808B8FD8
    r20 = r20 + 0; // 0x808B8FDC
    r6 = r20 + 0xc0; // 0x808B8FE0
    r5 = r20 + 0xd8; // 0x808B8FE4
    r25 = r20 + 0xf8; // 0x808B8FEC
    r26 = *(0x240 + r4); // lwz @ 0x808B8FF0
    r27 = *(0xc0 + r20); // lwz @ 0x808B8FF4
    r28 = *(4 + r6); // lwz @ 0x808B8FF8
    r29 = *(8 + r6); // lwz @ 0x808B9000
    r30 = *(0xc + r6); // lwz @ 0x808B9004
    r31 = *(0x10 + r6); // lwz @ 0x808B9008
    r12 = *(0x14 + r6); // lwz @ 0x808B900C
    r11 = *(0xd8 + r20); // lbz @ 0x808B9010
    r10 = *(1 + r5); // lbz @ 0x808B9014
    r9 = *(2 + r5); // lbz @ 0x808B9018
    r8 = *(3 + r5); // lbz @ 0x808B901C
    r7 = *(4 + r5); // lbz @ 0x808B9020
    r6 = *(5 + r5); // lbz @ 0x808B9024
    r5 = *(0xe0 + r20); // lwz @ 0x808B9028
    r0 = *(4 + r19); // lwz @ 0x808B902C
    r16 = *(8 + r19); // lwz @ 0x808B9030
    r17 = *(0xc + r19); // lwz @ 0x808B9034
    r18 = *(0x10 + r19); // lwz @ 0x808B9038
    r19 = *(0x14 + r19); // lwz @ 0x808B903C
    r20 = *(0xf8 + r20); // lwz @ 0x808B9040
    r21 = *(4 + r25); // lwz @ 0x808B9044
    r22 = *(8 + r25); // lwz @ 0x808B9048
    r23 = *(0xc + r25); // lwz @ 0x808B904C
    r24 = *(0x10 + r25); // lwz @ 0x808B9050
    r25 = *(0x14 + r25); // lwz @ 0x808B9054
    *(0x40 + r1) = r27; // stw @ 0x808B9058
    *(0x44 + r1) = r28; // stw @ 0x808B905C
    *(0x48 + r1) = r29; // stw @ 0x808B9060
    *(0x4c + r1) = r30; // stw @ 0x808B9064
    *(0x50 + r1) = r31; // stw @ 0x808B9068
    *(0x54 + r1) = r12; // stw @ 0x808B906C
    *(8 + r1) = r11; // stb @ 0x808B9070
    *(9 + r1) = r10; // stb @ 0x808B9074
    *(0xa + r1) = r9; // stb @ 0x808B9078
    *(0xb + r1) = r8; // stb @ 0x808B907C
    *(0xc + r1) = r7; // stb @ 0x808B9080
    *(0xd + r1) = r6; // stb @ 0x808B9084
    *(0x28 + r1) = r5; // stw @ 0x808B9088
    *(0x2c + r1) = r0; // stw @ 0x808B908C
    *(0x30 + r1) = r16; // stw @ 0x808B9090
    *(0x34 + r1) = r17; // stw @ 0x808B9094
    *(0x38 + r1) = r18; // stw @ 0x808B9098
    *(0x3c + r1) = r19; // stw @ 0x808B909C
    *(0x10 + r1) = r20; // stw @ 0x808B90A0
    *(0x14 + r1) = r21; // stw @ 0x808B90A4
    *(0x18 + r1) = r22; // stw @ 0x808B90A8
    *(0x1c + r1) = r23; // stw @ 0x808B90AC
    *(0x20 + r1) = r24; // stw @ 0x808B90B0
    *(0x24 + r1) = r25; // stw @ 0x808B90B4
    if (!=) goto 0x0x808b90d8;
    /* lis r5, 0 */ // 0x808B90BC
    r5 = *(0 + r5); // lwz @ 0x808B90C0
    r0 = *(0x1780 + r5); // lwz @ 0x808B90C4
    r0 = r0 rlwinm 0; // rlwinm
    *(0x1780 + r5) = r0; // stw @ 0x808B90CC
    FUN_808B3CF4(r5); // bl 0x808B3CF4
    /* b 0x808b9158 */ // 0x808B90D4
    /* lis r6, 0 */ // 0x808B90D8
    r6 = *(0 + r6); // lwz @ 0x808B90E0
    /* slwi r9, r26, 2 */ // 0x808B90E4
    /* lbzx r0, r5, r26 */ // 0x808B90E8
    r6 = *(0x98 + r6); // lwz @ 0x808B90F0
    /* lis r5, 0 */ // 0x808B90F4
    /* lwzx r7, r7, r9 */ // 0x808B90F8
    *(0x74 + r6) = r7; // stw @ 0x808B9100
    r5 = *(0 + r5); // lwz @ 0x808B9104
    if (==) goto 0x0x808b911c;
    r0 = *(0x1780 + r5); // lwz @ 0x808B910C
    r0 = r0 | 1; // 0x808B9110
    *(0x1780 + r5) = r0; // stw @ 0x808B9114
    /* b 0x808b9128 */ // 0x808B9118
    r0 = *(0x1780 + r5); // lwz @ 0x808B911C
    r0 = r0 rlwinm 0; // rlwinm
    *(0x1780 + r5) = r0; // stw @ 0x808B9124
    /* lis r7, 0 */ // 0x808B9128
    r5 = *(0 + r7); // lwz @ 0x808B9130
    /* lwzx r0, r8, r9 */ // 0x808B9138
    *(0x175c + r5) = r0; // stw @ 0x808B913C
    r5 = r4;
    /* lwzx r0, r6, r9 */ // 0x808B9144
    /* li r4, 0x6b */ // 0x808B9148
    r6 = *(0 + r7); // lwz @ 0x808B914C
    *(0x176c + r6) = r0; // stw @ 0x808B9150
    FUN_808B38C8(r5, r4); // bl 0x808B38C8
    r0 = *(0xa4 + r1); // lwz @ 0x808B915C
    return;
}