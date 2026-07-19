/* Function at 0x80710B08, size=252 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 1 function(s) */

int FUN_80710B08(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* stfd f31, 0x28(r1) */ // 0x80710B14
    /* fmr f31, f1 */ // 0x80710B18
    /* stmw r25, 0xc(r1) */ // 0x80710B1C
    r28 = r6;
    r26 = r4;
    r30 = r8;
    r27 = r5;
    r25 = r3;
    r29 = r7;
    r31 = r9;
    r4 = r28;
    r5 = r30;
    r12 = *(0 + r3); // lwz @ 0x80710B44
    r12 = *(0x140 + r12); // lwz @ 0x80710B48
    /* mtctr r12 */ // 0x80710B4C
    /* bctrl  */ // 0x80710B50
    if (!=) goto 0x0x80710b64;
    /* li r31, 0 */ // 0x80710B5C
    /* b 0x80710be8 */ // 0x80710B60
    r12 = *(0 + r25); // lwz @ 0x80710B64
    r3 = r25;
    r4 = r31;
    r12 = *(0x124 + r12); // lwz @ 0x80710B70
    /* mtctr r12 */ // 0x80710B74
    /* bctrl  */ // 0x80710B78
    r12 = *(0 + r25); // lwz @ 0x80710B7C
    r3 = r25;
    r4 = r31;
    r12 = *(0x120 + r12); // lwz @ 0x80710B88
    /* mtctr r12 */ // 0x80710B8C
    /* bctrl  */ // 0x80710B90
    /* fmr f1, f31 */ // 0x80710B94
    r3 = *(0xac + r25); // lwz @ 0x80710B98
    r4 = r26;
    r5 = r27;
    r6 = r28;
    r7 = r29;
    r8 = r30;
    /* li r31, 0 */ // 0x80710BB0
    FUN_8084AD38(r5, r6, r7, r8); // bl 0x8084AD38
    if (==) goto 0x0x80710be8;
    r12 = *(0 + r25); // lwz @ 0x80710BC0
    r3 = r25;
    r4 = r28;
    r5 = r30;
    r12 = *(0x144 + r12); // lwz @ 0x80710BD0
    /* mtctr r12 */ // 0x80710BD4
    /* bctrl  */ // 0x80710BD8
    if (==) goto 0x0x80710be8;
    /* li r31, 1 */ // 0x80710BE4
    r3 = r31;
    /* lfd f31, 0x28(r1) */ // 0x80710BEC
    r0 = *(0x34 + r1); // lwz @ 0x80710BF4
    return;
}