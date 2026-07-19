/* Function at 0x806314D0, size=48 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r22 */
/* Calls: 2 function(s) */

int FUN_806314D0(int r3)
{
    /* Stack frame: -48(r1) */
    /* saved r22 */
    /* stmw r22, 8(r1) */ // 0x806314DC
    r31 = r3;
    FUN_8062AA9C(); // bl 0x8062AA9C
    /* lis r3, 0 */ // 0x806314E8
    r23 = r31 + 4; // 0x806314EC
    r3 = r3 + 0; // 0x806314F0
    *(0 + r31) = r3; // stw @ 0x806314F4
    r3 = r23;
    FUN_805E3430(r3, r3, r3); // bl 0x805E3430
}