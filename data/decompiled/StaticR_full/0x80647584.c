/* Function at 0x80647584, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80647584(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80647598
    r30 = r3;
    r0 = *(0x20 + r3); // lbz @ 0x806475A0
    if (==) goto 0x0x806475c0;
    r3 = *(0x14 + r3); // lwz @ 0x806475AC
    FUN_808E17F8(); // bl 0x808E17F8
    r3 = *(0x18 + r30); // lwz @ 0x806475B4
    r4 = r31;
    FUN_808E3F3C(r4); // bl 0x808E3F3C
    r0 = *(0x14 + r1); // lwz @ 0x806475C0
    r31 = *(0xc + r1); // lwz @ 0x806475C4
    r30 = *(8 + r1); // lwz @ 0x806475C8
    return;
}