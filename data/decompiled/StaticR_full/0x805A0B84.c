/* Function at 0x805A0B84, size=220 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r22 */
/* Calls: 1 function(s) */

int FUN_805A0B84(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -48(r1) */
    /* saved r22 */
    *(0x34 + r1) = r0; // stw @ 0x805A0B90
    /* stmw r22, 8(r1) */ // 0x805A0B94
    r23 = r3;
    r25 = r5;
    r24 = r4;
    r26 = r7;
    r27 = r8;
    r28 = r9;
    r29 = r10;
    /* li r3, -1 */ // 0x805A0BB4
    /* li r5, -1 */ // 0x805A0BB8
    if (<) goto 0x0x805a0bc4;
    r5 = r6 + 1; // 0x805A0BC0
    /* li r0, 1 */ // 0x805A0BC4
    /* extsh r31, r5 */ // 0x805A0BC8
    r22 = r0 << r4; // slw
    /* li r30, 0 */ // 0x805A0BD0
    /* b 0x805a0c3c */ // 0x805A0BD4
    /* clrlwi r0, r30, 0x10 */ // 0x805A0BD8
    if (>=) goto 0x0x805a0bf4;
    /* mulli r0, r0, 0x18 */ // 0x805A0BE4
    r4 = r26 + r0; // 0x805A0BE8
    r8 = *(0x38 + r4); // lwz @ 0x805A0BEC
    /* b 0x805a0bf8 */ // 0x805A0BF0
    /* li r8, 0 */ // 0x805A0BF4
    if (==) goto 0x0x805a0c0c;
    r0 = *(0x18 + r8); // lhz @ 0x805A0C00
    /* and. r0, r0, r22 */ // 0x805A0C04
    if (!=) goto 0x0x805a0c38;
    r3 = r23;
    r4 = r24;
    r5 = r25;
    r6 = r31;
    r9 = r27;
    r10 = r28;
    /* li r7, 0 */ // 0x805A0C24
    FUN_805A0D3C(r5, r6, r9, r10, r7); // bl 0x805A0D3C
    /* extsh r0, r3 */ // 0x805A0C2C
    if (!=) goto 0x0x805a0c4c;
    r30 = r30 + 1; // 0x805A0C38
    r4 = *(4 + r26); // lhz @ 0x805A0C3C
    /* clrlwi r0, r30, 0x10 */ // 0x805A0C40
    if (<) goto 0x0x805a0bd8;
    r0 = *(0x34 + r1); // lwz @ 0x805A0C50
    return;
}