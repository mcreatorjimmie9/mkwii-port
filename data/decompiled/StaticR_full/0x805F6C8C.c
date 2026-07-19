/* Function at 0x805F6C8C, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805F6C8C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r5;
    *(8 + r1) = r30; // stw @ 0x805F6CA0
    r30 = r4;
    r3 = *(0x6c + r3); // lwz @ 0x805F6CA8
    r12 = *(0 + r3); // lwz @ 0x805F6CAC
    r12 = *(8 + r12); // lwz @ 0x805F6CB0
    /* mtctr r12 */ // 0x805F6CB4
    /* bctrl  */ // 0x805F6CB8
    r4 = r31;
    r5 = r30;
    FUN_805E3430(r4, r5); // bl 0x805E3430
}