/* Function at 0x805C7EEC, size=556 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 5 function(s) */

int FUN_805C7EEC(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* lis r6, 0 */ // 0x805C7EF4
    *(0x34 + r1) = r0; // stw @ 0x805C7EF8
    /* stmw r25, 0x14(r1) */ // 0x805C7EFC
    r26 = r3;
    r27 = r4;
    r28 = r5;
    /* li r4, 4 */ // 0x805C7F0C
    r3 = *(0 + r6); // lwz @ 0x805C7F10
    FUN_805C5788(r4); // bl 0x805C5788
    if (!=) goto 0x0x805c8104;
    /* lis r3, 0 */ // 0x805C7F20
    /* mulli r0, r28, 0x18 */ // 0x805C7F24
    r3 = *(0 + r3); // lwz @ 0x805C7F28
    r3 = r3 + r0; // 0x805C7F2C
    r0 = *(0x3c4 + r3); // lbz @ 0x805C7F30
    if (==) goto 0x0x805c8104;
    /* lis r3, 0 */ // 0x805C7F3C
    r4 = *(4 + r26); // lwz @ 0x805C7F40
    /* mulli r6, r27, 0xf0 */ // 0x805C7F44
    r5 = *(0 + r3); // lwz @ 0x805C7F48
    r7 = *(0xc + r4); // lwz @ 0x805C7F4C
    r4 = r27 rlwinm 2; // rlwinm
    r0 = r28 rlwinm 2; // rlwinm
    r3 = r5 + r6; // 0x805C7F58
    r6 = *(0xf4 + r3); // lwz @ 0x805C7F5C
    /* lwzx r30, r7, r4 */ // 0x805C7F60
    /* lwzx r29, r7, r0 */ // 0x805C7F68
    if (!=) goto 0x0x805c7f78;
    /* li r31, 0 */ // 0x805C7F70
    /* b 0x805c7fa0 */ // 0x805C7F74
    /* mulli r0, r28, 0xf0 */ // 0x805C7F78
    r3 = r5 + r0; // 0x805C7F7C
    r0 = *(0xf4 + r3); // lwz @ 0x805C7F80
    if (!=) goto 0x0x805c7f94;
    /* li r31, 0 */ // 0x805C7F8C
    /* b 0x805c7fa0 */ // 0x805C7F90
    /* subf r0, r6, r0 */ // 0x805C7F94
    /* cntlzw r0, r0 */ // 0x805C7F98
    /* srwi r31, r0, 5 */ // 0x805C7F9C
    if (!=) goto 0x0x805c8104;
    /* lis r25, 0 */ // 0x805C7FA8
    /* lis r4, 0 */ // 0x805C7FAC
    /* lis r5, 0 */ // 0x805C7FB0
    r6 = *(0 + r4); // lwz @ 0x805C7FB4
    r8 = *(0 + r5); // lwz @ 0x805C7FB8
    r4 = r28;
    r3 = *(0 + r25); // lwz @ 0x805C7FC0
    r5 = r27;
    /* li r7, 1 */ // 0x805C7FC8
    FUN_808F9D4C(r4, r5, r7); // bl 0x808F9D4C
    /* mulli r28, r27, 0x18 */ // 0x805C7FD0
    r0 = *(0 + r25); // lwz @ 0x805C7FD4
    r3 = r0 + r28; // 0x805C7FD8
    r0 = *(0x3c4 + r3); // lbz @ 0x805C7FDC
    if (!=) goto 0x0x805c8000;
    /* lis r3, 0 */ // 0x805C7FE8
    r4 = r27;
    r3 = *(0 + r3); // lwz @ 0x805C7FF0
    FUN_8061D97C(r3, r4); // bl 0x8061D97C
    FUN_8061DFF8(r3, r4); // bl 0x8061DFF8
    FUN_8060EFB4(r3, r4); // bl 0x8060EFB4
    if (==) goto 0x0x805c8054;
    r3 = *(4 + r26); // lwz @ 0x805C8008
    r0 = *(0x22 + r30); // lhz @ 0x805C800C
    r3 = *(0x3c + r3); // lwz @ 0x805C8010
    r3 = *(4 + r3); // lwz @ 0x805C8014
    r3 = *(0x1d2 + r3); // lha @ 0x805C8018
    /* add. r0, r3, r0 */ // 0x805C801C
    if (>=) goto 0x0x805c8028;
    /* li r0, 0 */ // 0x805C8024
    *(0x22 + r30) = r0; // sth @ 0x805C8028
    r3 = *(4 + r26); // lwz @ 0x805C802C
    r0 = *(0x22 + r29); // lhz @ 0x805C8030
    r3 = *(0x3c + r3); // lwz @ 0x805C8034
    r3 = *(4 + r3); // lwz @ 0x805C8038
    r3 = *(0x1d0 + r3); // lha @ 0x805C803C
    /* add. r0, r3, r0 */ // 0x805C8040
    if (>=) goto 0x0x805c804c;
    /* li r0, 0 */ // 0x805C8048
    *(0x22 + r29) = r0; // sth @ 0x805C804C
    /* b 0x805c809c */ // 0x805C8050
    r3 = *(4 + r26); // lwz @ 0x805C8054
    r0 = *(0x22 + r30); // lhz @ 0x805C8058
    r3 = *(0x3c + r3); // lwz @ 0x805C805C
    r3 = *(4 + r3); // lwz @ 0x805C8060
    r3 = *(0x1ce + r3); // lha @ 0x805C8064
    /* add. r0, r3, r0 */ // 0x805C8068
    if (>=) goto 0x0x805c8074;
    /* li r0, 0 */ // 0x805C8070
    *(0x22 + r30) = r0; // sth @ 0x805C8074
    r3 = *(4 + r26); // lwz @ 0x805C8078
    r0 = *(0x22 + r29); // lhz @ 0x805C807C
    r3 = *(0x3c + r3); // lwz @ 0x805C8080
    r3 = *(4 + r3); // lwz @ 0x805C8084
    r3 = *(0x1c8 + r3); // lha @ 0x805C8088
    /* add. r0, r3, r0 */ // 0x805C808C
    if (>=) goto 0x0x805c8098;
    /* li r0, 0 */ // 0x805C8094
    *(0x22 + r29) = r0; // sth @ 0x805C8098
    /* lis r3, 0 */ // 0x805C809C
    r0 = *(0 + r3); // lwz @ 0x805C80A0
    r3 = r0 + r28; // 0x805C80A4
    r0 = *(0x3c4 + r3); // lbz @ 0x805C80A8
    if (!=) goto 0x0x805c8104;
    if (!=) goto 0x0x805c8104;
    r3 = *(4 + r26); // lwz @ 0x805C80BC
    r0 = *(0x22 + r30); // lhz @ 0x805C80C0
    r3 = *(0x3c + r3); // lwz @ 0x805C80C4
    r3 = *(4 + r3); // lwz @ 0x805C80C8
    r3 = *(0x1cc + r3); // lha @ 0x805C80CC
    /* add. r0, r3, r0 */ // 0x805C80D0
    if (>=) goto 0x0x805c80dc;
    /* li r0, 0 */ // 0x805C80D8
    *(0x22 + r30) = r0; // sth @ 0x805C80DC
    r3 = *(4 + r26); // lwz @ 0x805C80E0
    r0 = *(0x22 + r29); // lhz @ 0x805C80E4
    r3 = *(0x3c + r3); // lwz @ 0x805C80E8
    r3 = *(4 + r3); // lwz @ 0x805C80EC
    r3 = *(0x1ca + r3); // lha @ 0x805C80F0
    /* add. r0, r3, r0 */ // 0x805C80F4
    if (>=) goto 0x0x805c8100;
    /* li r0, 0 */ // 0x805C80FC
    *(0x22 + r29) = r0; // sth @ 0x805C8100
    r0 = *(0x34 + r1); // lwz @ 0x805C8108
    return;
}