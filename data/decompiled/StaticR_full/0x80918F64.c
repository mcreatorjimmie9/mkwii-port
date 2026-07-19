/* Function at 0x80918F64, size=52 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r27 */
/* Calls: 1 function(s) */

int FUN_80918F64(int r3, int r4)
{
    /* Stack frame: -64(r1) */
    /* saved r27 */
    /* stmw r27, 0x2c(r1) */ // 0x80918F70
    r27 = r3;
    r12 = *(0 + r3); // lwz @ 0x80918F78
    r12 = *(0x34 + r12); // lwz @ 0x80918F7C
    /* mtctr r12 */ // 0x80918F80
    /* bctrl  */ // 0x80918F84
    /* lis r30, 0 */ // 0x80918F88
    r30 = r30 + 0; // 0x80918F8C
    r4 = r30 + 0x14; // 0x80918F90
    FUN_805E3430(r4); // bl 0x805E3430
}