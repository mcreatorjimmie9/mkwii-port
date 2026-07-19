/* Function at 0x8071089C, size=184 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 1 function(s) */

int FUN_8071089C(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* stmw r26, 8(r1) */ // 0x807108A8
    r29 = r6;
    r27 = r4;
    r30 = r8;
    r28 = r5;
    r26 = r3;
    r31 = r7;
    r4 = r29;
    r5 = r30;
    r12 = *(0 + r3); // lwz @ 0x807108CC
    r12 = *(0x138 + r12); // lwz @ 0x807108D0
    /* mtctr r12 */ // 0x807108D4
    /* bctrl  */ // 0x807108D8
    if (==) goto 0x0x80710938;
    r3 = *(0xac + r26); // lwz @ 0x807108E4
    r7 = r31;
    r4 = r27;
    r5 = r28;
    r6 = r29;
    r8 = r30;
    /* li r31, 0 */ // 0x807108FC
    FUN_8084B5EC(r4, r5, r6, r8); // bl 0x8084B5EC
    if (==) goto 0x0x8071093c;
    r12 = *(0 + r26); // lwz @ 0x8071090C
    r3 = r26;
    r4 = r29;
    r5 = r30;
    r12 = *(0x13c + r12); // lwz @ 0x8071091C
    /* mtctr r12 */ // 0x80710920
    /* bctrl  */ // 0x80710924
    if (==) goto 0x0x8071093c;
    /* li r31, 1 */ // 0x80710930
    /* b 0x8071093c */ // 0x80710934
    /* li r31, 0 */ // 0x80710938
    r3 = r31;
    r0 = *(0x24 + r1); // lwz @ 0x80710944
    return;
}