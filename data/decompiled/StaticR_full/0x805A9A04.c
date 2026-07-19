/* Function at 0x805A9A04, size=56 bytes */
/* Stack frame: 944 bytes */
/* Saved registers: r26 */
/* Calls: 1 function(s) */

int FUN_805A9A04(int r3, int r4, int r5)
{
    /* Stack frame: -944(r1) */
    /* saved r26 */
    /* stmw r26, 0x398(r1) */ // 0x805A9A10
    /* lis r30, 0 */ // 0x805A9A14
    r30 = r30 + 0; // 0x805A9A18
    r28 = r3;
    r29 = r4;
    r26 = r5;
    /* li r4, 0 */ // 0x805A9A2C
    /* li r5, 0x1c0 */ // 0x805A9A30
    *(0x1d0 + r1) = r30; // stw @ 0x805A9A34
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
}