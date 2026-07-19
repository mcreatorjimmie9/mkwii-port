/* Function at 0x807C62E0, size=240 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r22 */
/* Calls: 3 function(s) */

int FUN_807C62E0(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    /* saved r22 */
    /* stmw r22, 8(r1) */ // 0x807C62EC
    r22 = r3;
    r23 = r4;
    r24 = r5;
    r25 = r6;
    r26 = r7;
    /* li r29, 0 */ // 0x807C6304
    r31 = r25;
    if (!=) goto 0x0x807c6318;
    r31 = r24;
    /* neg r0, r29 */ // 0x807C6318
    /* li r27, 0 */ // 0x807C631C
    r0 = r0 | r29; // 0x807C6320
    /* srwi r28, r0, 0x1f */ // 0x807C6324
    /* b 0x807c63a8 */ // 0x807C6328
    if (==) goto 0x0x807c6348;
    if (==) goto 0x0x807c635c;
    if (==) goto 0x0x807c6370;
    /* b 0x807c6380 */ // 0x807C6344
    r3 = r22;
    r4 = r28;
    FUN_807C63D0(r3, r4); // bl 0x807C63D0
    r30 = r3;
    /* b 0x807c6380 */ // 0x807C6358
    r3 = r22;
    r4 = r28;
    FUN_807C64A0(r3, r4); // bl 0x807C64A0
    r30 = r3;
    /* b 0x807c6380 */ // 0x807C636C
    r3 = r22;
    r4 = r28;
    FUN_807C656C(r3, r4); // bl 0x807C656C
    r30 = r3;
    if (==) goto 0x0x807c63a4;
    *(8 + r30) = r23; // stw @ 0x807C6388
    r3 = r23;
    r4 = r30;
    r12 = *(0 + r23); // lwz @ 0x807C6394
    r12 = *(0x18 + r12); // lwz @ 0x807C6398
    /* mtctr r12 */ // 0x807C639C
    /* bctrl  */ // 0x807C63A0
    r27 = r27 + 1; // 0x807C63A4
    if (<) goto 0x0x807c632c;
    r29 = r29 + 1; // 0x807C63B0
    if (<) goto 0x0x807c6308;
    r0 = *(0x34 + r1); // lwz @ 0x807C63C0
    return;
}