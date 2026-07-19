/* Function at 0x8086AC34, size=28 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 1 function(s) */

int FUN_8086AC34(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* stmw r26, 8(r1) */ // 0x8086AC40
    r26 = r3;
    /* slwi r3, r3, 2 */ // 0x8086AC48
    FUN_805E3430(); // bl 0x805E3430
}