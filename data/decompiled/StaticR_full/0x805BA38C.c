/* Function at 0x805BA38C, size=160 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 1 function(s) */

int FUN_805BA38C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x805BA398
    r29 = r5;
    r27 = r3;
    r28 = r4;
    /* li r5, 0 */ // 0x805BA3A8
    r6 = *(8 + r3); // lhz @ 0x805BA3AC
    r30 = r6 + -1; // 0x805BA3B0
    /* mulli r31, r30, 0x24 */ // 0x805BA3B4
    /* b 0x805ba40c */ // 0x805BA3B8
    r0 = *(4 + r27); // lwz @ 0x805BA3BC
    /* li r4, 0 */ // 0x805BA3C0
    r3 = r0 + r31; // 0x805BA3C4
    r0 = *(0x20 + r3); // lwz @ 0x805BA3C8
    if (==) goto 0x0x805ba3e0;
    r0 = *(0x20 + r3); // lwz @ 0x805BA3D4
    if (!=) goto 0x0x805ba3e4;
    /* li r4, 1 */ // 0x805BA3E0
    if (==) goto 0x0x805ba404;
    r4 = r28;
    r5 = r29;
    FUN_805A904C(r4, r4, r5); // bl 0x805A904C
    r5 = r3;
    if (!=) goto 0x0x805ba414;
    r31 = r31 + -0x24; // 0x805BA404
    r30 = r30 + -1; // 0x805BA408
    if (>=) goto 0x0x805ba3bc;
    r3 = r5;
    r0 = *(0x24 + r1); // lwz @ 0x805BA41C
    return;
}