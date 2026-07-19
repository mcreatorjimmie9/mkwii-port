/* Function at 0x805AD544, size=32 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 1 function(s) */

int FUN_805AD544(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* li r0, 1 */ // 0x805AD550
    /* stmw r27, 0xc(r1) */ // 0x805AD554
    r27 = r3;
    *(0x4c + r3) = r0; // stb @ 0x805AD55C
    FUN_805E3430(); // bl 0x805E3430
}