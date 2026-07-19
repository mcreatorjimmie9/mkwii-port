/* Function at 0x807FE674, size=28 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r27 */
/* Calls: 1 function(s) */

int FUN_807FE674(int r3)
{
    /* Stack frame: -64(r1) */
    /* saved r27 */
    /* stmw r27, 0x2c(r1) */ // 0x807FE680
    r30 = r3;
    r3 = *(0x10 + r3); // lwz @ 0x807FE688
    FUN_805E3430(); // bl 0x805E3430
}