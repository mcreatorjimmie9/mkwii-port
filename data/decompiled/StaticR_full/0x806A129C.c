/* Function at 0x806A129C, size=72 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806A129C(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806A12A8
    r31 = r3;
    FUN_806A02C8(); // bl 0x806A02C8
    r3 = r31 + 0x98; // 0x806A12B4
    FUN_8069F4C0(r3); // bl 0x8069F4C0
    r12 = *(0 + r31); // lwz @ 0x806A12BC
    r3 = r31;
    r12 = *(0x34 + r12); // lwz @ 0x806A12C4
    /* mtctr r12 */ // 0x806A12C8
    /* bctrl  */ // 0x806A12CC
    r0 = *(0x14 + r1); // lwz @ 0x806A12D0
    r31 = *(0xc + r1); // lwz @ 0x806A12D4
    return;
}