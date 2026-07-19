/* Function at 0x806C1070, size=444 bytes */
/* Stack frame: 496 bytes */
/* Saved registers: r17 */
/* Calls: 9 function(s) */

int FUN_806C1070(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -496(r1) */
    /* saved r17 */
    /* stmw r17, 0x1b4(r1) */ // 0x806C107C
    r19 = r3;
    r27 = *(0x1c + r1); // lwz @ 0x806C1084
    /* li r22, 0 */ // 0x806C1088
    r29 = *(0x18 + r1); // lwz @ 0x806C108C
    /* li r25, 0 */ // 0x806C1090
    r31 = *(0x14 + r1); // lwz @ 0x806C1094
    /* li r17, 0 */ // 0x806C1098
    /* li r26, 4 */ // 0x806C109C
    /* li r28, 1 */ // 0x806C10A0
    /* li r30, 2 */ // 0x806C10A4
    /* li r18, -1 */ // 0x806C10A8
    r0 = *(0x2488 + r3); // lwz @ 0x806C10AC
    /* slwi r23, r0, 2 */ // 0x806C10B0
    r0 = *(0x2480 + r19); // lwz @ 0x806C10B4
    r24 = r22 + r23; // 0x806C10B8
    if (>=) goto 0x0x806c11ac;
    FUN_80654ECC(r3); // bl 0x80654ECC
    r0 = *(0x247c + r19); // lwz @ 0x806C10CC
    if (==) goto 0x0x806c10ec;
    if (==) goto 0x0x806c1114;
    if (==) goto 0x0x806c113c;
    /* b 0x806c1178 */ // 0x806C10E8
    r27 = r26 rlwimi 0x18; // rlwimi
    r21 = r24;
    r27 = r24 rlwimi 8; // rlwimi
    *(0x1c + r1) = r27; // stw @ 0x806C10F8
    /* li r4, 0 */ // 0x806C1100
    *(0x10 + r1) = r27; // stw @ 0x806C1104
    FUN_806BF2C4(r3, r4); // bl 0x806BF2C4
    r20 = r3;
    /* b 0x806c1178 */ // 0x806C1110
    r29 = r28 rlwimi 0x18; // rlwimi
    r21 = r24;
    r29 = r24 rlwimi 8; // rlwimi
    *(0x18 + r1) = r29; // stw @ 0x806C1120
    /* li r4, 0 */ // 0x806C1128
    *(0xc + r1) = r29; // stw @ 0x806C112C
    FUN_806BF2C4(r3, r4); // bl 0x806BF2C4
    r20 = r3;
    /* b 0x806c1178 */ // 0x806C1138
    /* slwi r0, r24, 5 */ // 0x806C113C
    r31 = r30 rlwimi 0x18; // rlwimi
    r3 = r19 + r0; // 0x806C1144
    r21 = r24;
    r4 = *(0x254a + r3); // lbz @ 0x806C114C
    r31 = r31 rlwinm 0; // rlwinm
    *(0x14 + r1) = r31; // stw @ 0x806C1154
    *(8 + r1) = r31; // stw @ 0x806C115C
    FUN_806BF2C4(r3); // bl 0x806BF2C4
    r20 = r3;
    r4 = r24;
    FUN_8066E0EC(r4, r3); // bl 0x8066E0EC
    *(0x12c + r1) = r3; // stw @ 0x806C1174
    r0 = *(0x2474 + r19); // lwz @ 0x806C1178
    r3 = r0 + r25; // 0x806C1180
    *(0x3b4 + r3) = r21; // stw @ 0x806C1184
    if (<) goto 0x0x806c11a4;
    *(0x1f4 + r3) = r17; // stb @ 0x806C118C
    r4 = r20;
    r3 = r3 + 0x174; // 0x806C1194
    FUN_806A0A34(r4, r3, r5); // bl 0x806A0A34
    /* b 0x806c11bc */ // 0x806C11A0
    *(0x1f4 + r3) = r28; // stb @ 0x806C11A4
    /* b 0x806c11bc */ // 0x806C11A8
    r0 = *(0x2474 + r19); // lwz @ 0x806C11AC
    r3 = r0 + r25; // 0x806C11B0
    *(0x3b4 + r3) = r18; // stw @ 0x806C11B4
    *(0x1f4 + r3) = r28; // stb @ 0x806C11B8
    r22 = r22 + 1; // 0x806C11BC
    r25 = r25 + 0x254; // 0x806C11C0
    if (<) goto 0x0x806c10b4;
    r0 = *(0x247c + r19); // lwz @ 0x806C11CC
    if (!=) goto 0x0x806c1208;
    FUN_80654ECC(r3); // bl 0x80654ECC
    r6 = *(0x2488 + r19); // lwz @ 0x806C11E0
    /* li r4, 0x7d9 */ // 0x806C11EC
    r0 = r6 + 1; // 0x806C11F0
    *(0x20 + r1) = r0; // stw @ 0x806C11F4
    r0 = *(0x2484 + r19); // lwz @ 0x806C11F8
    *(0x24 + r1) = r0; // stw @ 0x806C11FC
    FUN_806A0A34(r4); // bl 0x806A0A34
    /* b 0x806c1218 */ // 0x806C1204
    /* li r4, 0 */ // 0x806C120C
    /* li r5, 0 */ // 0x806C1210
    FUN_806A0A34(r3, r4, r5); // bl 0x806A0A34
    r0 = *(0x1f4 + r1); // lwz @ 0x806C121C
    return;
}