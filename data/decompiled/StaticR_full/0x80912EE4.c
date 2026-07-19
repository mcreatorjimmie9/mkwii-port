/* Function at 0x80912EE4, size=72 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80912EE4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x38 + r1) = r30; // stw @ 0x80912EF4
    r30 = r3;
    r12 = *(0 + r3); // lwz @ 0x80912EFC
    r12 = *(0x34 + r12); // lwz @ 0x80912F00
    /* mtctr r12 */ // 0x80912F04
    /* bctrl  */ // 0x80912F08
    /* lis r4, 0 */ // 0x80912F0C
    r6 = r3;
    r4 = r4 + 0; // 0x80912F14
    r5 = r4 + 0x54; // 0x80912F1C
    /* li r4, 0x20 */ // 0x80912F20
    /* crclr cr1eq */ // 0x80912F24
    FUN_805E3430(r4, r3, r5, r4); // bl 0x805E3430
}