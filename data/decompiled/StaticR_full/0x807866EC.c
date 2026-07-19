/* Function at 0x807866EC, size=36 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807866EC(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x807866FC
    r31 = r31 + 0; // 0x80786700
    *(8 + r1) = r30; // stw @ 0x80786704
    r30 = r3;
    FUN_805E3430(); // bl 0x805E3430
}