/* Function at 0x805B22BC, size=48 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805B22BC(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x805B22CC
    r31 = r31 + 0; // 0x805B22D0
    *(8 + r1) = r30; // stw @ 0x805B22D4
    /* li r30, 0 */ // 0x805B22D8
    /* lfs f1, 0x48(r31) */ // 0x805B22DC
    r3 = r30;
    /* lfs f2, 0x4c(r31) */ // 0x805B22E4
    FUN_805E3430(r3); // bl 0x805E3430
}