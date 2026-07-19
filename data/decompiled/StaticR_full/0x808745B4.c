/* Function at 0x808745B4, size=56 bytes */
/* Stack frame: 208 bytes */
/* Saved registers: r21 */
/* Calls: 1 function(s) */

int FUN_808745B4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -208(r1) */
    /* saved r21 */
    /* lis r5, 0 */ // 0x808745BC
    r6 = r4;
    *(0xd4 + r1) = r0; // stw @ 0x808745C4
    /* stmw r21, 0xa4(r1) */ // 0x808745C8
    r22 = r5 + 0; // 0x808745CC
    r30 = r3;
    r5 = r22 + 0x66; // 0x808745D4
    *(0x174 + r3) = r4; // stw @ 0x808745D8
    /* li r4, 0x14 */ // 0x808745E0
    /* crclr cr1eq */ // 0x808745E4
    FUN_805E3430(r5, r3, r4); // bl 0x805E3430
}