/* Function at 0x807BB578, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807BB578(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807BB58C
    r30 = r3;
    r3 = *(0x94 + r3); // lwz @ 0x807BB594
    r12 = *(0x34 + r3); // lwz @ 0x807BB598
    r12 = *(0x1c + r12); // lwz @ 0x807BB59C
    /* mtctr r12 */ // 0x807BB5A0
    /* bctrl  */ // 0x807BB5A4
    r3 = r30;
    r4 = r31;
    FUN_807B740C(r3, r4); // bl 0x807B740C
    r0 = *(0x14 + r1); // lwz @ 0x807BB5B4
    r31 = *(0xc + r1); // lwz @ 0x807BB5B8
    r30 = *(8 + r1); // lwz @ 0x807BB5BC
    return;
}