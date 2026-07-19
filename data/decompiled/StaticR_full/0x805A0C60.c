/* Function at 0x805A0C60, size=220 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r22 */
/* Calls: 1 function(s) */

int FUN_805A0C60(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -48(r1) */
    /* saved r22 */
    *(0x34 + r1) = r0; // stw @ 0x805A0C6C
    /* stmw r22, 8(r1) */ // 0x805A0C70
    r23 = r3;
    r25 = r5;
    r24 = r4;
    r26 = r7;
    r27 = r8;
    r28 = r9;
    r29 = r10;
    /* li r3, -1 */ // 0x805A0C90
    /* li r5, -1 */ // 0x805A0C94
    if (<) goto 0x0x805a0ca0;
    r5 = r6 + 1; // 0x805A0C9C
    /* li r0, 1 */ // 0x805A0CA0
    /* extsh r31, r5 */ // 0x805A0CA4
    r22 = r0 << r4; // slw
    /* li r30, 0 */ // 0x805A0CAC
    /* b 0x805a0d18 */ // 0x805A0CB0
    /* clrlwi r0, r30, 0x10 */ // 0x805A0CB4
    if (>=) goto 0x0x805a0cd0;
    r0 = r30 rlwinm 2; // rlwinm
    r4 = r26 + r0; // 0x805A0CC4
    r8 = *(0x20 + r4); // lwz @ 0x805A0CC8
    /* b 0x805a0cd4 */ // 0x805A0CCC
    /* li r8, 0 */ // 0x805A0CD0
    if (==) goto 0x0x805a0ce8;
    r0 = *(0x18 + r8); // lhz @ 0x805A0CDC
    /* and. r0, r0, r22 */ // 0x805A0CE0
    if (!=) goto 0x0x805a0d14;
    r3 = r23;
    r4 = r24;
    r5 = r25;
    r6 = r31;
    r9 = r27;
    r10 = r28;
    /* li r7, 1 */ // 0x805A0D00
    FUN_805A0D3C(r5, r6, r9, r10, r7); // bl 0x805A0D3C
    /* extsh r0, r3 */ // 0x805A0D08
    if (!=) goto 0x0x805a0d28;
    r30 = r30 + 1; // 0x805A0D14
    r4 = *(6 + r26); // lhz @ 0x805A0D18
    /* clrlwi r0, r30, 0x10 */ // 0x805A0D1C
    if (<) goto 0x0x805a0cb4;
    r0 = *(0x34 + r1); // lwz @ 0x805A0D2C
    return;
}