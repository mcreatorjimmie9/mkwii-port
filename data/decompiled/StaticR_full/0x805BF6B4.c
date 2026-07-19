/* Function at 0x805BF6B4, size=40 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 1 function(s) */

int FUN_805BF6B4(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* lis r4, 0 */ // 0x805BF6BC
    /* li r5, 0 */ // 0x805BF6C0
    *(0x24 + r1) = r0; // stw @ 0x805BF6C4
    r4 = r4 + 0; // 0x805BF6C8
    r4 = r4 + 0x12; // 0x805BF6CC
    /* stmw r26, 8(r1) */ // 0x805BF6D0
    r26 = r3;
    FUN_805E3430(r4, r4); // bl 0x805E3430
}