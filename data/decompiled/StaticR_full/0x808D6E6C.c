/* Function at 0x808D6E6C, size=64 bytes */
/* Stack frame: 288 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_808D6E6C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -288(r1) */
    /* saved r31 */
    /* saved r30 */
    r6 = r4;
    r7 = r5;
    *(0x124 + r1) = r0; // stw @ 0x808D6E7C
    /* li r4, 0x20 */ // 0x808D6E80
    *(0x11c + r1) = r31; // stw @ 0x808D6E84
    r31 = r3;
    *(0x118 + r1) = r30; // stw @ 0x808D6E8C
    /* lis r30, 0 */ // 0x808D6E90
    r30 = r30 + 0; // 0x808D6E94
    *(0x190 + r3) = r5; // stb @ 0x808D6E98
    r5 = r30 + 0x19; // 0x808D6EA0
    /* crclr cr1eq */ // 0x808D6EA4
    FUN_805E3430(r3, r5); // bl 0x805E3430
}