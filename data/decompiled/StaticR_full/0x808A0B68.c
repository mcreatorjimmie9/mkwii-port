/* Function at 0x808A0B68, size=72 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_808A0B68(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x808A0B78
    r30 = r3;
    r12 = *(0 + r3); // lwz @ 0x808A0B80
    r12 = *(0x38 + r12); // lwz @ 0x808A0B84
    /* mtctr r12 */ // 0x808A0B88
    /* bctrl  */ // 0x808A0B8C
    /* lis r4, 0 */ // 0x808A0B90
    r6 = r3;
    r4 = r4 + 0; // 0x808A0B98
    r3 = *(0x28 + r30); // lwz @ 0x808A0B9C
    r5 = r4 + 0x20; // 0x808A0BA0
    /* li r4, 0x20 */ // 0x808A0BA4
    /* crclr cr1eq */ // 0x808A0BA8
    FUN_805E3430(r4, r5, r4); // bl 0x805E3430
}