/* Function at 0x808C1034, size=244 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 2 function(s) */

int FUN_808C1034(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* stmw r25, 0x14(r1) */ // 0x808C1040
    r25 = r3;
    r26 = r4;
    r0 = *(0x240 + r4); // lwz @ 0x808C104C
    if (!=) goto 0x0x808c1114;
    if (!=) goto 0x0x808c1114;
    FUN_808CFA50(); // bl 0x808CFA50
    /* lis r30, 0 */ // 0x808C1064
    /* clrlwi r28, r3, 0x18 */ // 0x808C1068
    r30 = r30 + 0; // 0x808C106C
    /* li r27, 0 */ // 0x808C1070
    /* lis r31, 0 */ // 0x808C1074
    /* b 0x808c110c */ // 0x808C1078
    r3 = *(0 + r31); // lwz @ 0x808C107C
    r3 = *(0 + r3); // lwz @ 0x808C1080
    r29 = *(0x204 + r3); // lwz @ 0x808C1084
    if (!=) goto 0x0x808c1098;
    /* li r29, 0 */ // 0x808C1090
    /* b 0x808c10e4 */ // 0x808C1094
    if (==) goto 0x0x808c10e0;
    r12 = *(0 + r29); // lwz @ 0x808C109C
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x808C10A4
    /* mtctr r12 */ // 0x808C10A8
    /* bctrl  */ // 0x808C10AC
    /* b 0x808c10c8 */ // 0x808C10B0
    if (!=) goto 0x0x808c10c4;
    /* li r0, 1 */ // 0x808C10BC
    /* b 0x808c10d4 */ // 0x808C10C0
    r3 = *(0 + r3); // lwz @ 0x808C10C4
    if (!=) goto 0x0x808c10b4;
    /* li r0, 0 */ // 0x808C10D0
    if (==) goto 0x0x808c10e0;
    /* b 0x808c10e4 */ // 0x808C10DC
    /* li r29, 0 */ // 0x808C10E0
    /* clrlwi r0, r27, 0x18 */ // 0x808C10E4
    /* mulli r0, r0, 0xc */ // 0x808C10E8
    r3 = r29 + r0; // 0x808C10EC
    r0 = *(0x5c + r3); // lbz @ 0x808C10F0
    if (==) goto 0x0x808c1108;
    r3 = r25;
    r4 = r26;
    FUN_808B3CF4(r3, r4); // bl 0x808B3CF4
    r27 = r27 + 1; // 0x808C1108
    if (<) goto 0x0x808c107c;
    r0 = *(0x34 + r1); // lwz @ 0x808C1118
    return;
}