/* Function at 0x806C9094, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806C9094(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806C90A0
    r31 = r3;
    r3 = r4;
    FUN_8064A384(r3); // bl 0x8064A384
    r12 = *(0 + r31); // lwz @ 0x806C90B0
    r3 = r31;
    /* li r4, 0x41 */ // 0x806C90B8
    /* li r5, 1 */ // 0x806C90BC
    r12 = *(0x1c + r12); // lwz @ 0x806C90C0
    /* mtctr r12 */ // 0x806C90C4
    /* bctrl  */ // 0x806C90C8
    r0 = *(0x14 + r1); // lwz @ 0x806C90CC
    r31 = *(0xc + r1); // lwz @ 0x806C90D0
    return;
}