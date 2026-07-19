/* Function at 0x80631DFC, size=112 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r24 */
/* Calls: 1 function(s) */

int FUN_80631DFC(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -48(r1) */
    /* saved r24 */
    /* lis r9, 0 */ // 0x80631E04
    *(0x34 + r1) = r0; // stw @ 0x80631E08
    /* stmw r24, 0x10(r1) */ // 0x80631E0C
    r25 = r3;
    r26 = r4;
    r27 = r5;
    r28 = r6;
    r29 = r7;
    r30 = r8;
    /* li r4, 0 */ // 0x80631E28
    r3 = *(0 + r9); // lwz @ 0x80631E2C
    r3 = *(0xb70 + r3); // lwz @ 0x80631E30
    r0 = r3 + -3; // 0x80631E34
    if (>) goto 0x0x80631e54;
    /* li r3, 1 */ // 0x80631E40
    r0 = r3 << r0; // slw
    /* andi. r0, r0, 0xc1 */ // 0x80631E48
    if (==) goto 0x0x80631e54;
    r4 = r3;
    if (==) goto 0x0x80631f04;
    /* li r3, 0x360 */ // 0x80631E5C
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r31 = r3;
}