/* Function at 0x8083293C, size=28 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 1 function(s) */

int FUN_8083293C(int r3)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* stmw r25, 0x14(r1) */ // 0x80832948
    r25 = r3;
    /* slwi r3, r3, 2 */ // 0x80832950
    FUN_805E3430(); // bl 0x805E3430
}