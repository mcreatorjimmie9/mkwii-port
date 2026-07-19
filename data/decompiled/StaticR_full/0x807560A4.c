/* Function at 0x807560A4, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807560A4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807560B8
    r30 = r3;
    r5 = *(8 + r3); // lwz @ 0x807560C0
    FUN_80750EC0(); // bl 0x80750EC0
    r5 = *(0xe4 + r30); // lwz @ 0x807560C8
    r3 = r30;
    r4 = r31;
    FUN_80750EC0(r3, r4); // bl 0x80750EC0
    r0 = *(0x14 + r1); // lwz @ 0x807560D8
    r31 = *(0xc + r1); // lwz @ 0x807560DC
    r30 = *(8 + r1); // lwz @ 0x807560E0
    return;
}