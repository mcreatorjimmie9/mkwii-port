/* Function at 0x80710DC8, size=184 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 1 function(s) */

int FUN_80710DC8(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* stmw r26, 8(r1) */ // 0x80710DD4
    r29 = r6;
    r27 = r4;
    r30 = r8;
    r28 = r5;
    r26 = r3;
    r31 = r7;
    r4 = r29;
    r5 = r30;
    r12 = *(0 + r3); // lwz @ 0x80710DF8
    r12 = *(0x140 + r12); // lwz @ 0x80710DFC
    /* mtctr r12 */ // 0x80710E00
    /* bctrl  */ // 0x80710E04
    if (==) goto 0x0x80710e64;
    r3 = *(0xac + r26); // lwz @ 0x80710E10
    r7 = r31;
    r4 = r27;
    r5 = r28;
    r6 = r29;
    r8 = r30;
    /* li r31, 0 */ // 0x80710E28
    FUN_8084A6AC(r4, r5, r6, r8); // bl 0x8084A6AC
    if (==) goto 0x0x80710e68;
    r12 = *(0 + r26); // lwz @ 0x80710E38
    r3 = r26;
    r4 = r29;
    r5 = r30;
    r12 = *(0x144 + r12); // lwz @ 0x80710E48
    /* mtctr r12 */ // 0x80710E4C
    /* bctrl  */ // 0x80710E50
    if (==) goto 0x0x80710e68;
    /* li r31, 1 */ // 0x80710E5C
    /* b 0x80710e68 */ // 0x80710E60
    /* li r31, 0 */ // 0x80710E64
    r3 = r31;
    r0 = *(0x24 + r1); // lwz @ 0x80710E70
    return;
}