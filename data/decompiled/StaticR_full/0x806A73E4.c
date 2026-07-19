/* Function at 0x806A73E4, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806A73E4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x806A73EC
    /* li r5, 0 */ // 0x806A73F0
    *(0x14 + r1) = r0; // stw @ 0x806A73F4
    *(0xc + r1) = r31; // stw @ 0x806A73F8
    r31 = r3;
    r12 = *(0x44 + r3); // lwz @ 0x806A7400
    r12 = *(0x10 + r12); // lwz @ 0x806A7404
    /* mtctr r12 */ // 0x806A7408
    r3 = r3 + 0x44; // 0x806A740C
    /* bctrl  */ // 0x806A7410
    r3 = r31;
    r4 = r31 + 0x44; // 0x806A7418
    FUN_80671C34(r3, r3, r4); // bl 0x80671C34
    r3 = r31;
    /* li r4, 0 */ // 0x806A7424
    FUN_80671C1C(r3, r4, r3, r4); // bl 0x80671C1C
    r0 = *(0x14 + r1); // lwz @ 0x806A742C
    r31 = *(0xc + r1); // lwz @ 0x806A7430
    return;
}