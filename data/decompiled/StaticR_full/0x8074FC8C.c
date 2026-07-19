/* Function at 0x8074FC8C, size=148 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 2 function(s) */

int FUN_8074FC8C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* stmw r26, 8(r1) */ // 0x8074FC98
    r26 = r3;
    /* li r27, 0 */ // 0x8074FCA0
    /* li r29, 0 */ // 0x8074FCA4
    r3 = *(0xb0 + r26); // lwz @ 0x8074FCA8
    /* lwzx r0, r3, r29 */ // 0x8074FCAC
    if (==) goto 0x0x8074fcfc;
    r3 = r26;
    FUN_808A1BCC(r3); // bl 0x808A1BCC
    r3 = *(0xb0 + r26); // lwz @ 0x8074FCC0
    r30 = r26 + 0x58; // 0x8074FCC4
    /* li r31, 0 */ // 0x8074FCC8
    /* lwzx r28, r3, r29 */ // 0x8074FCCC
    r3 = *(0x14 + r28); // lwz @ 0x8074FCD0
    r3 = *(0 + r3); // lwz @ 0x8074FCD4
    if (==) goto 0x0x8074fcec;
    r5 = r30;
    /* li r4, 0 */ // 0x8074FCE4
    FUN_805E3430(r5, r4); // bl 0x805E3430
    r31 = r31 + 1; // 0x8074FCEC
    r28 = r28 + 4; // 0x8074FCF0
    if (<) goto 0x0x8074fcd0;
    r27 = r27 + 1; // 0x8074FCFC
    r29 = r29 + 4; // 0x8074FD00
    if (<) goto 0x0x8074fca8;
    r0 = *(0x24 + r1); // lwz @ 0x8074FD10
    return;
}