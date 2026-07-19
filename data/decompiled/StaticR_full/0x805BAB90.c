/* Function at 0x805BAB90, size=76 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r22 */
/* Calls: 1 function(s) */

int FUN_805BAB90(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r22 */
    /* lis r6, 0x1062 */ // 0x805BAB98
    *(0x34 + r1) = r0; // stw @ 0x805BAB9C
    /* stmw r22, 8(r1) */ // 0x805BABA0
    /* li r25, 0 */ // 0x805BABA4
    /* li r30, 0x64 */ // 0x805BABA8
    r22 = r3;
    r31 = r25 * r30; // 0x805BABB0
    r23 = r4;
    r24 = r5;
    r28 = r6 + 0x4dd3; // 0x805BABBC
    /* li r27, 1 */ // 0x805BABC0
    /* li r26, 8 */ // 0x805BABC4
    /* lis r29, -0x8000 */ // 0x805BABC8
    r3 = r22;
    r4 = r23;
    r5 = r24;
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
}