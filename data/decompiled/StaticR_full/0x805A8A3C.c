/* Function at 0x805A8A3C, size=320 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 2 function(s) */

int FUN_805A8A3C(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    *(0x34 + r1) = r0; // stw @ 0x805A8A48
    /* stmw r25, 0x14(r1) */ // 0x805A8A4C
    r30 = r3;
    r25 = r4;
    r31 = r5;
    r26 = r6;
    r27 = r8;
    r28 = r9;
    if (==) goto 0x0x805a8a74;
    if (!=) goto 0x0x805a8a78;
    r27 = r31;
    r0 = *(0x20 + r3); // lwz @ 0x805A8A78
    if (!=) goto 0x0x805a8b0c;
    /* li r29, 0 */ // 0x805A8A88
    /* li r6, 1 */ // 0x805A8A8C
    /* li r0, -8 */ // 0x805A8A90
    if (!=) goto 0x0x805a8a9c;
    /* extsb r0, r7 */ // 0x805A8A98
    if (>=) goto 0x0x805a8aa8;
    /* li r6, 2 */ // 0x805A8AA4
    r3 = r25;
    r5 = r27;
    r9 = r30 + 0x18; // 0x805A8AB0
    /* li r4, 0 */ // 0x805A8AB4
    /* li r7, 0 */ // 0x805A8AB8
    /* li r8, 0 */ // 0x805A8ABC
    FUN_805E3430(r5, r9, r4, r7, r8); // bl 0x805E3430
    r0 = *(0x18 + r30); // lwz @ 0x805A8AC4
    *(0x14 + r30) = r3; // stw @ 0x805A8AC8
    if (==) goto 0x0x805a8ae8;
    if (==) goto 0x0x805a8ae8;
    *(0x1c + r30) = r27; // stw @ 0x805A8ADC
    /* li r29, 1 */ // 0x805A8AE0
    /* b 0x805a8af0 */ // 0x805A8AE4
    /* li r0, 0 */ // 0x805A8AE8
    *(0x18 + r30) = r0; // stw @ 0x805A8AEC
    if (==) goto 0x0x805a8b04;
    /* li r0, 2 */ // 0x805A8AF8
    *(0x20 + r30) = r0; // stw @ 0x805A8AFC
    /* b 0x805a8b0c */ // 0x805A8B00
    /* li r0, 0 */ // 0x805A8B04
    *(0x20 + r30) = r0; // stw @ 0x805A8B08
    r3 = *(0x20 + r30); // lwz @ 0x805A8B0C
    r0 = r3 + -2; // 0x805A8B10
    /* cntlzw r0, r0 */ // 0x805A8B14
    /* rlwinm. r0, r0, 0x1b, 5, 0x1f */ // 0x805A8B18
    if (==) goto 0x0x805a8bbc;
    if (==) goto 0x0x805a8b70;
    r3 = r30;
    r4 = r25;
    r5 = r31;
    r6 = r28;
    FUN_805A9134(r3, r4, r5, r6); // bl 0x805A9134
    r4 = *(0x14 + r30); // lwz @ 0x805A8B3C
    if (==) goto 0x0x805a8ba0;
    r3 = *(0x1c + r30); // lwz @ 0x805A8B48
    r12 = *(0 + r3); // lwz @ 0x805A8B4C
    r12 = *(0x18 + r12); // lwz @ 0x805A8B50
    /* mtctr r12 */ // 0x805A8B54
    /* bctrl  */ // 0x805A8B58
    /* li r0, 0 */ // 0x805A8B5C
    *(0x14 + r30) = r0; // stw @ 0x805A8B60
    *(0x18 + r30) = r0; // stw @ 0x805A8B64
    *(0x1c + r30) = r0; // stw @ 0x805A8B68
    /* b 0x805a8ba0 */ // 0x805A8B6C
    r6 = *(0x14 + r30); // lwz @ 0x805A8B70
    /* li r3, 0 */ // 0x805A8B74
    r5 = *(0x18 + r30); // lwz @ 0x805A8B78
}