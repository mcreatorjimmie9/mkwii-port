/* Function at 0x807FDDA0, size=40 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807FDDA0(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r5, 0x20 */ // 0x807FDDA8
    *(0xc + r1) = r31; // stw @ 0x807FDDB0
    *(8 + r1) = r30; // stw @ 0x807FDDB4
    r30 = r3;
    /* li r3, 0x28 */ // 0x807FDDBC
    r4 = *(0x10 + r30); // lwz @ 0x807FDDC0
    FUN_805E3430(r3); // bl 0x805E3430
}