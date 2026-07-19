/* Function at 0x805A4E70, size=672 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r22 */
/* Calls: 4 function(s) */

int FUN_805A4E70(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r22 */
    /* stmw r22, 8(r1) */ // 0x805A4E7C
    r25 = r3;
    r0 = *(4 + r3); // lhz @ 0x805A4E84
    if (==) goto 0x0x805a50fc;
    /* li r26, -1 */ // 0x805A4E90
    /* li r27, -1 */ // 0x805A4E94
    /* li r28, 0 */ // 0x805A4E98
    /* b 0x805a4f18 */ // 0x805A4E9C
    /* clrlwi r0, r28, 0x10 */ // 0x805A4EA0
    if (>=) goto 0x0x805a4ebc;
    r3 = *(0 + r25); // lwz @ 0x805A4EAC
    r0 = r28 rlwinm 2; // rlwinm
    /* lwzx r3, r3, r0 */ // 0x805A4EB4
    /* b 0x805a4ec0 */ // 0x805A4EB8
    /* li r3, 0 */ // 0x805A4EBC
    r4 = r25;
    /* clrlwi r5, r28, 0x10 */ // 0x805A4EC4
    FUN_805A5250(r3, r4); // bl 0x805A5250
    r0 = *(4 + r25); // lhz @ 0x805A4ECC
    /* clrlwi r3, r28, 0x10 */ // 0x805A4ED0
    if (>=) goto 0x0x805a4eec;
    r3 = *(0 + r25); // lwz @ 0x805A4EDC
    r0 = r28 rlwinm 2; // rlwinm
    /* lwzx r3, r3, r0 */ // 0x805A4EE4
    /* b 0x805a4ef0 */ // 0x805A4EE8
    /* li r3, 0 */ // 0x805A4EEC
    r3 = *(0 + r3); // lwz @ 0x805A4EF0
    r0 = *(0x11 + r3); // lbz @ 0x805A4EF4
    /* extsb. r3, r0 */ // 0x805A4EF8
    if (!=) goto 0x0x805a4f04;
    /* extsh r27, r28 */ // 0x805A4F00
    /* extsb r0, r26 */ // 0x805A4F04
    if (<=) goto 0x0x805a4f14;
    r26 = r3;
    r28 = r28 + 1; // 0x805A4F14
    r3 = *(4 + r25); // lhz @ 0x805A4F18
    /* clrlwi r0, r28, 0x10 */ // 0x805A4F1C
    if (<) goto 0x0x805a4ea0;
    /* clrlwi r0, r27, 0x10 */ // 0x805A4F28
    *(0xc + r25) = r26; // stb @ 0x805A4F2C
    *(0xe + r25) = r27; // sth @ 0x805A4F34
    if (>=) goto 0x0x805a4f4c;
    r3 = *(0 + r25); // lwz @ 0x805A4F3C
    r0 = r0 rlwinm 2; // rlwinm
    /* lwzx r31, r3, r0 */ // 0x805A4F44
    /* b 0x805a4f50 */ // 0x805A4F48
    /* li r31, 0 */ // 0x805A4F4C
    r3 = *(0 + r31); // lwz @ 0x805A4F50
    r3 = *(0x11 + r3); // lbz @ 0x805A4F54
    /* extsb r0, r3 */ // 0x805A4F58
    if (!=) goto 0x0x805a4f70;
    /* li r0, 0 */ // 0x805A4F64
    *(0x1c + r31) = r0; // stb @ 0x805A4F68
    /* b 0x805a4f74 */ // 0x805A4F6C
    *(0x1c + r31) = r3; // stb @ 0x805A4F70
    r0 = *(0x18 + r31); // lhz @ 0x805A4F74
    r27 = r31;
    /* li r28, 0 */ // 0x805A4F7C
    r0 = r0 | 1; // 0x805A4F80
    *(0x18 + r31) = r0; // sth @ 0x805A4F84
    /* b 0x805a50d8 */ // 0x805A4F88
    if (>=) goto 0x0x805a4f9c;
    r3 = *(0x38 + r27); // lwz @ 0x805A4F94
    /* b 0x805a4fa0 */ // 0x805A4F98
    /* li r3, 0 */ // 0x805A4F9C
    r0 = *(0x18 + r3); // lhz @ 0x805A4FA0
    /* clrlwi. r0, r0, 0x1f */ // 0x805A4FA4
    if (!=) goto 0x0x805a50d0;
    if (>=) goto 0x0x805a4fbc;
    r29 = *(0x38 + r27); // lwz @ 0x805A4FB4
    /* b 0x805a4fc0 */ // 0x805A4FB8
    /* li r29, 0 */ // 0x805A4FBC
    r3 = *(0 + r29); // lwz @ 0x805A4FC0
    r4 = *(0x1c + r31); // lbz @ 0x805A4FC4
    r3 = *(0x11 + r3); // lbz @ 0x805A4FC8
    /* extsb r0, r3 */ // 0x805A4FCC
    if (!=) goto 0x0x805a4fe0;
    *(0x1c + r29) = r4; // stb @ 0x805A4FD8
    /* b 0x805a4fe4 */ // 0x805A4FDC
    *(0x1c + r29) = r3; // stb @ 0x805A4FE0
    r0 = *(0x18 + r29); // lhz @ 0x805A4FE4
    r26 = r29;
    /* li r30, 0 */ // 0x805A4FEC
    r0 = r0 | 1; // 0x805A4FF0
    *(0x18 + r29) = r0; // sth @ 0x805A4FF4
    /* b 0x805a50c4 */ // 0x805A4FF8
    if (>=) goto 0x0x805a500c;
    r3 = *(0x38 + r26); // lwz @ 0x805A5004
    /* b 0x805a5010 */ // 0x805A5008
    /* li r3, 0 */ // 0x805A500C
    r0 = *(0x18 + r3); // lhz @ 0x805A5010
    /* clrlwi. r0, r0, 0x1f */ // 0x805A5014
    if (!=) goto 0x0x805a50bc;
    if (>=) goto 0x0x805a502c;
    r23 = *(0x38 + r26); // lwz @ 0x805A5024
    /* b 0x805a5030 */ // 0x805A5028
    /* li r23, 0 */ // 0x805A502C
    r3 = *(0 + r23); // lwz @ 0x805A5030
    r4 = *(0x1c + r29); // lbz @ 0x805A5034
    r3 = *(0x11 + r3); // lbz @ 0x805A5038
    /* extsb r0, r3 */ // 0x805A503C
    if (!=) goto 0x0x805a5050;
    *(0x1c + r23) = r4; // stb @ 0x805A5048
    /* b 0x805a5054 */ // 0x805A504C
    *(0x1c + r23) = r3; // stb @ 0x805A5050
    r0 = *(0x18 + r23); // lhz @ 0x805A5054
    r22 = r23;
    /* li r24, 0 */ // 0x805A505C
    r0 = r0 | 1; // 0x805A5060
    *(0x18 + r23) = r0; // sth @ 0x805A5064
    /* b 0x805a50b0 */ // 0x805A5068
    if (>=) goto 0x0x805a507c;
    r3 = *(0x38 + r22); // lwz @ 0x805A5074
    /* b 0x805a5080 */ // 0x805A5078
    /* li r3, 0 */ // 0x805A507C
    r0 = *(0x18 + r3); // lhz @ 0x805A5080
    /* clrlwi. r0, r0, 0x1f */ // 0x805A5084
    if (!=) goto 0x0x805a50a8;
    if (>=) goto 0x0x805a509c;
    r3 = *(0x38 + r22); // lwz @ 0x805A5094
    /* b 0x805a50a0 */ // 0x805A5098
    /* li r3, 0 */ // 0x805A509C
    r4 = *(0x1c + r23); // lbz @ 0x805A50A0
    FUN_805A5698(r3); // bl 0x805A5698
    r22 = r22 + 0x18; // 0x805A50A8
    r24 = r24 + 1; // 0x805A50AC
    r4 = *(4 + r23); // lhz @ 0x805A50B0
    if (<) goto 0x0x805a506c;
    r26 = r26 + 0x18; // 0x805A50BC
    r30 = r30 + 1; // 0x805A50C0
    r4 = *(4 + r29); // lhz @ 0x805A50C4
    if (<) goto 0x0x805a4ffc;
    r27 = r27 + 0x18; // 0x805A50D0
    r28 = r28 + 1; // 0x805A50D4
    r4 = *(4 + r31); // lhz @ 0x805A50D8
    if (<) goto 0x0x805a4f8c;
    /* lis r3, 0 */ // 0x805A50E4
    r3 = *(0 + r3); // lwz @ 0x805A50E8
    FUN_805A1A2C(r3); // bl 0x805A1A2C
    r3 = r25;
    FUN_805A1F9C(r3, r3); // bl 0x805A1F9C
    /* stfs f1, 0x10(r25) */ // 0x805A50F8
    r0 = *(0x34 + r1); // lwz @ 0x805A5100
    return;
}