/* Function at 0x805C133C, size=52 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 1 function(s) */

int FUN_805C133C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x805C1348
    /* lis r31, 0 */ // 0x805C134C
    r27 = r3;
    r28 = r4;
    r3 = r28;
    r4 = r27 + 0xb48; // 0x805C135C
    r5 = *(0 + r31); // lwz @ 0x805C1360
    r6 = *(0x34 + r5); // lwz @ 0x805C1364
    /* li r5, 4 */ // 0x805C1368
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
}