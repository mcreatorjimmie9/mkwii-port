/* Function at 0x805BC2B8, size=32 bytes */
/* Stack frame: 176 bytes */
/* Saved registers: r27 */
/* Calls: 1 function(s) */

int FUN_805BC2B8(int r3, int r4)
{
    /* Stack frame: -176(r1) */
    /* saved r27 */
    /* stmw r27, 0x9c(r1) */ // 0x805BC2C4
    r27 = r3;
    r28 = r4;
    r3 = *(0x24 + r3); // lwz @ 0x805BC2D0
    FUN_805E3430(); // bl 0x805E3430
}