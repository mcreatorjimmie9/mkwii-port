/* Function at 0x8089DC4C, size=400 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r22 */
/* Calls: 4 function(s) */

int FUN_8089DC4C(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -64(r1) */
    /* saved r22 */
    /* stfd f31, 0x38(r1) */ // 0x8089DC58
    /* fmr f31, f1 */ // 0x8089DC5C
    /* stmw r22, 0x10(r1) */ // 0x8089DC60
    r28 = r3;
    r22 = r4;
    r23 = r5;
    r24 = r6;
    r25 = r7;
    r26 = r8;
    r27 = r9;
    r0 = *(4 + r3); // lhz @ 0x8089DC80
    if (!=) goto 0x0x8089dc94;
    /* li r3, 0 */ // 0x8089DC8C
    /* b 0x8089ddc4 */ // 0x8089DC90
    /* lis r3, 0 */ // 0x8089DC94
    /* li r29, 0 */ // 0x8089DC98
    r3 = *(0 + r3); // lwz @ 0x8089DC9C
    /* li r5, 0x10 */ // 0x8089DCA0
    FUN_80816AD0(r3, r5); // bl 0x80816AD0
    if (!=) goto 0x0x8089dcd8;
    /* fmr f1, f31 */ // 0x8089DCB0
    r3 = r28;
    r4 = r22;
    r5 = r23;
    r6 = r24;
    r7 = r25;
    r8 = r26;
    r9 = r27;
    FUN_8089D294(r5, r6, r7, r8, r9); // bl 0x8089D294
    /* b 0x8089ddc4 */ // 0x8089DCD4
    /* li r28, 0 */ // 0x8089DCDC
    if (==) goto 0x0x8089dd50;
    r3 = *(0x58 + r25); // lwz @ 0x8089DCE4
    if (==) goto 0x0x8089dd50;
    r0 = *(0 + r3); // lwz @ 0x8089DCF0
    /* rlwinm. r0, r0, 0, 0x17, 0x17 */ // 0x8089DCF4
    if (==) goto 0x0x8089dd04;
    r28 = *(4 + r3); // lwz @ 0x8089DCFC
    /* b 0x8089dd08 */ // 0x8089DD00
    /* li r28, 0 */ // 0x8089DD04
    if (==) goto 0x0x8089dd50;
    r12 = *(0 + r28); // lwz @ 0x8089DD10
    /* fmr f1, f31 */ // 0x8089DD14
    r3 = r28;
    r4 = r22;
    r12 = *(0x100 + r12); // lwz @ 0x8089DD20
    r5 = r23;
    r6 = r24;
    r7 = r25;
    r8 = r26;
    r9 = r27;
    /* li r29, 1 */ // 0x8089DD38
    /* mtctr r12 */ // 0x8089DD3C
    /* bctrl  */ // 0x8089DD40
    if (!=) goto 0x0x8089dd50;
    /* li r29, 0 */ // 0x8089DD4C
    /* lis r30, 0 */ // 0x8089DD50
    r3 = *(0 + r30); // lwz @ 0x8089DD54
    FUN_80815B9C(); // bl 0x80815B9C
    /* b 0x8089ddb0 */ // 0x8089DD5C
    if (==) goto 0x0x8089ddb0;
    r12 = *(0 + r3); // lwz @ 0x8089DD68
    /* fmr f1, f31 */ // 0x8089DD6C
    r4 = r22;
    r5 = r23;
    r12 = *(0x100 + r12); // lwz @ 0x8089DD78
    r6 = r24;
    r7 = r25;
    r8 = r26;
    r9 = r27;
    /* li r31, 0 */ // 0x8089DD8C
    /* mtctr r12 */ // 0x8089DD90
    /* bctrl  */ // 0x8089DD94
    if (!=) goto 0x0x8089dda8;
    if (==) goto 0x0x8089ddac;
    /* li r31, 1 */ // 0x8089DDA8
    r29 = r31;
    r3 = *(0 + r30); // lwz @ 0x8089DDB0
    FUN_80815B34(); // bl 0x80815B34
    if (!=) goto 0x0x8089dd60;
    r3 = r29;
    /* lfd f31, 0x38(r1) */ // 0x8089DDC4
    r0 = *(0x44 + r1); // lwz @ 0x8089DDCC
    return;
}