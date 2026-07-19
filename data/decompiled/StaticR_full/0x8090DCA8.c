/* Function at 0x8090DCA8, size=68 bytes */
/* Stack frame: 208 bytes */
/* Saved registers: r21 */
/* Calls: 1 function(s) */

int FUN_8090DCA8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -208(r1) */
    /* saved r21 */
    /* stmw r21, 0xa4(r1) */ // 0x8090DCB4
    r29 = r3;
    r12 = *(0 + r3); // lwz @ 0x8090DCBC
    r12 = *(0x34 + r12); // lwz @ 0x8090DCC0
    /* mtctr r12 */ // 0x8090DCC4
    /* bctrl  */ // 0x8090DCC8
    /* lis r4, 0 */ // 0x8090DCCC
    r6 = r3;
    r4 = r4 + 0; // 0x8090DCD4
    r5 = r4 + 0x27; // 0x8090DCDC
    /* li r4, 0x20 */ // 0x8090DCE0
    /* crclr cr1eq */ // 0x8090DCE4
    FUN_805E3430(r4, r3, r5, r4); // bl 0x805E3430
}