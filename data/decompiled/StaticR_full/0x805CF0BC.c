/* Function at 0x805CF0BC, size=112 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 2 function(s) */

int FUN_805CF0BC(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* stmw r26, 8(r1) */ // 0x805CF0C8
    /* mulli r31, r4, 0x24 */ // 0x805CF0CC
    r30 = r3;
    r26 = r4;
    r28 = r3 + r31; // 0x805CF0D8
    r27 = r5;
    /* li r3, 1 */ // 0x805CF0E0
    r0 = *(0x2c8 + r28); // lwz @ 0x805CF0E4
    if (==) goto 0x0x805cf100;
    r0 = *(0x2c8 + r28); // lwz @ 0x805CF0F0
    if (==) goto 0x0x805cf100;
    /* li r3, 0 */ // 0x805CF0FC
    if (!=) goto 0x0x805cf1c8;
    r3 = r26;
    FUN_805E3430(r3, r3); // bl 0x805E3430
    r0 = *(0 + r3); // lbz @ 0x805CF110
    /* extsb. r0, r0 */ // 0x805CF114
    if (==) goto 0x0x805cf1c8;
    r3 = r26;
    FUN_805E3430(r3); // bl 0x805E3430
    r29 = r3;
    r3 = r26;
}