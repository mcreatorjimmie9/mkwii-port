/* Function at 0x80710954, size=184 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 1 function(s) */

int FUN_80710954(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* stmw r26, 8(r1) */ // 0x80710960
    r29 = r6;
    r27 = r4;
    r30 = r8;
    r28 = r5;
    r26 = r3;
    r31 = r7;
    r4 = r29;
    r5 = r30;
    r12 = *(0 + r3); // lwz @ 0x80710984
    r12 = *(0x140 + r12); // lwz @ 0x80710988
    /* mtctr r12 */ // 0x8071098C
    /* bctrl  */ // 0x80710990
    if (==) goto 0x0x807109f0;
    r3 = *(0xac + r26); // lwz @ 0x8071099C
    r7 = r31;
    r4 = r27;
    r5 = r28;
    r6 = r29;
    r8 = r30;
    /* li r31, 0 */ // 0x807109B4
    FUN_8084B77C(r4, r5, r6, r8); // bl 0x8084B77C
    if (==) goto 0x0x807109f4;
    r12 = *(0 + r26); // lwz @ 0x807109C4
    r3 = r26;
    r4 = r29;
    r5 = r30;
    r12 = *(0x144 + r12); // lwz @ 0x807109D4
    /* mtctr r12 */ // 0x807109D8
    /* bctrl  */ // 0x807109DC
    if (==) goto 0x0x807109f4;
    /* li r31, 1 */ // 0x807109E8
    /* b 0x807109f4 */ // 0x807109EC
    /* li r31, 0 */ // 0x807109F0
    r3 = r31;
    r0 = *(0x24 + r1); // lwz @ 0x807109FC
    return;
}