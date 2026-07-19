/* Function at 0x8064EA34, size=100 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 1 function(s) */

int FUN_8064EA34(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* stmw r26, 8(r1) */ // 0x8064EA40
    r26 = r3;
    r27 = r4;
    /* li r28, 0 */ // 0x8064EA4C
    /* li r31, 0 */ // 0x8064EA50
    r5 = *(0x14 + r3); // lwz @ 0x8064EA54
    r30 = *(2 + r5); // lhz @ 0x8064EA58
    /* b 0x8064ea94 */ // 0x8064EA5C
    r29 = *(0x18 + r26); // lwz @ 0x8064EA60
    r4 = r27;
    r3 = *(0x24 + r26); // lwz @ 0x8064EA68
    /* lhzx r0, r29, r31 */ // 0x8064EA6C
    r3 = r3 + r0; // 0x8064EA70
    FUN_805E3430(r4); // bl 0x805E3430
    if (!=) goto 0x0x8064ea8c;
    /* mulli r0, r28, 0x3c */ // 0x8064EA80
    r3 = r29 + r0; // 0x8064EA84
    /* b 0x8064eaa0 */ // 0x8064EA88
    r31 = r31 + 0x3c; // 0x8064EA8C
    r28 = r28 + 1; // 0x8064EA90
}