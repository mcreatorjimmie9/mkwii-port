/* Function at 0x807B71AC, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807B71AC(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807B71B8
    r31 = r3;
    r3 = *(0x44 + r3); // lwz @ 0x807B71C0
    r12 = *(0 + r3); // lwz @ 0x807B71C4
    r12 = *(0x10 + r12); // lwz @ 0x807B71C8
    /* mtctr r12 */ // 0x807B71CC
    /* bctrl  */ // 0x807B71D0
    r3 = *(0x44 + r31); // lwz @ 0x807B71D4
    r12 = *(0 + r3); // lwz @ 0x807B71D8
    r12 = *(0x18 + r12); // lwz @ 0x807B71DC
    /* mtctr r12 */ // 0x807B71E0
    /* bctrl  */ // 0x807B71E4
    r5 = *(0x38 + r31); // lwz @ 0x807B71E8
    r4 = r3;
    r3 = *(0 + r5); // lwz @ 0x807B71F0
    FUN_8061DBFC(r4); // bl 0x8061DBFC
    r0 = *(0x14 + r1); // lwz @ 0x807B71F8
    r31 = *(0xc + r1); // lwz @ 0x807B71FC
    return;
}