/* Function at 0x8089DABC, size=400 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r22 */
/* Calls: 4 function(s) */

int FUN_8089DABC(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -64(r1) */
    /* saved r22 */
    /* stfd f31, 0x38(r1) */ // 0x8089DAC8
    /* fmr f31, f1 */ // 0x8089DACC
    /* stmw r22, 0x10(r1) */ // 0x8089DAD0
    r28 = r3;
    r22 = r4;
    r23 = r5;
    r24 = r6;
    r25 = r7;
    r26 = r8;
    r27 = r9;
    r0 = *(4 + r3); // lhz @ 0x8089DAF0
    if (!=) goto 0x0x8089db04;
    /* li r3, 0 */ // 0x8089DAFC
    /* b 0x8089dc34 */ // 0x8089DB00
    /* lis r3, 0 */ // 0x8089DB04
    /* li r29, 0 */ // 0x8089DB08
    r3 = *(0 + r3); // lwz @ 0x8089DB0C
    /* li r5, 0x10 */ // 0x8089DB10
    FUN_80816AD0(r3, r5); // bl 0x80816AD0
    if (!=) goto 0x0x8089db48;
    /* fmr f1, f31 */ // 0x8089DB20
    r3 = r28;
    r4 = r22;
    r5 = r23;
    r6 = r24;
    r7 = r25;
    r8 = r26;
    r9 = r27;
    FUN_8089D13C(r5, r6, r7, r8, r9); // bl 0x8089D13C
    /* b 0x8089dc34 */ // 0x8089DB44
    /* li r28, 0 */ // 0x8089DB4C
    if (==) goto 0x0x8089dbc0;
    r3 = *(0x58 + r25); // lwz @ 0x8089DB54
    if (==) goto 0x0x8089dbc0;
    r0 = *(0 + r3); // lwz @ 0x8089DB60
    /* rlwinm. r0, r0, 0, 0x17, 0x17 */ // 0x8089DB64
    if (==) goto 0x0x8089db74;
    r28 = *(4 + r3); // lwz @ 0x8089DB6C
    /* b 0x8089db78 */ // 0x8089DB70
    /* li r28, 0 */ // 0x8089DB74
    if (==) goto 0x0x8089dbc0;
    r12 = *(0 + r28); // lwz @ 0x8089DB80
    /* fmr f1, f31 */ // 0x8089DB84
    r3 = r28;
    r4 = r22;
    r12 = *(0xfc + r12); // lwz @ 0x8089DB90
    r5 = r23;
    r6 = r24;
    r7 = r25;
    r8 = r26;
    r9 = r27;
    /* li r29, 1 */ // 0x8089DBA8
    /* mtctr r12 */ // 0x8089DBAC
    /* bctrl  */ // 0x8089DBB0
    if (!=) goto 0x0x8089dbc0;
    /* li r29, 0 */ // 0x8089DBBC
    /* lis r30, 0 */ // 0x8089DBC0
    r3 = *(0 + r30); // lwz @ 0x8089DBC4
    FUN_80815B9C(); // bl 0x80815B9C
    /* b 0x8089dc20 */ // 0x8089DBCC
    if (==) goto 0x0x8089dc20;
    r12 = *(0 + r3); // lwz @ 0x8089DBD8
    /* fmr f1, f31 */ // 0x8089DBDC
    r4 = r22;
    r5 = r23;
    r12 = *(0xfc + r12); // lwz @ 0x8089DBE8
    r6 = r24;
    r7 = r25;
    r8 = r26;
    r9 = r27;
    /* li r31, 0 */ // 0x8089DBFC
    /* mtctr r12 */ // 0x8089DC00
    /* bctrl  */ // 0x8089DC04
    if (!=) goto 0x0x8089dc18;
    if (==) goto 0x0x8089dc1c;
    /* li r31, 1 */ // 0x8089DC18
    r29 = r31;
    r3 = *(0 + r30); // lwz @ 0x8089DC20
    FUN_80815B34(); // bl 0x80815B34
    if (!=) goto 0x0x8089dbd0;
    r3 = r29;
    /* lfd f31, 0x38(r1) */ // 0x8089DC34
    r0 = *(0x44 + r1); // lwz @ 0x8089DC3C
    return;
}