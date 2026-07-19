/* Function at 0x8084D4BC, size=40 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r17 */
/* Calls: 1 function(s) */

int FUN_8084D4BC(int r3, int r4)
{
    /* Stack frame: -80(r1) */
    /* saved r17 */
    /* stmw r17, 0x14(r1) */ // 0x8084D4C8
    r29 = r3;
    r4 = *(0x6c + r3); // lwz @ 0x8084D4D0
    r0 = *(0xc + r4); // lwz @ 0x8084D4D8
    *(8 + r1) = r0; // stw @ 0x8084D4DC
    FUN_805E3430(r3); // bl 0x805E3430
}