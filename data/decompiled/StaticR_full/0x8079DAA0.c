/* Function at 0x8079DAA0, size=80 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8079DAA0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x8079DAB0
    r30 = r3;
    r0 = *(0x70 + r3); // lbz @ 0x8079DAB8
    if (!=) goto 0x0x8079daf8;
    /* li r31, 0 */ // 0x8079DAC4
    /* b 0x8079dae0 */ // 0x8079DAC8
    r12 = *(0 + r31); // lwz @ 0x8079DACC
    r3 = r31;
    r12 = *(0x10 + r12); // lwz @ 0x8079DAD4
    /* mtctr r12 */ // 0x8079DAD8
    /* bctrl  */ // 0x8079DADC
    r4 = r31;
    r3 = r30 + 0x78; // 0x8079DAE4
    FUN_805E3430(r4, r3); // bl 0x805E3430
}