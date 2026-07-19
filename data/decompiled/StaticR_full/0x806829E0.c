/* Function at 0x806829E0, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806829E0(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x806829E8
    /* li r5, 0 */ // 0x806829EC
    *(0x14 + r1) = r0; // stw @ 0x806829F0
    *(0xc + r1) = r31; // stw @ 0x806829F4
    r31 = r3;
    r12 = *(0x58 + r3); // lwz @ 0x806829FC
    r12 = *(0x10 + r12); // lwz @ 0x80682A00
    /* mtctr r12 */ // 0x80682A04
    r3 = r3 + 0x58; // 0x80682A08
    /* bctrl  */ // 0x80682A0C
    r3 = r31;
    r4 = r31 + 0x58; // 0x80682A14
    FUN_80671C34(r3, r3, r4); // bl 0x80671C34
    r3 = r31;
    /* li r4, 0 */ // 0x80682A20
    FUN_80671C1C(r3, r4, r3, r4); // bl 0x80671C1C
    r0 = *(0x14 + r1); // lwz @ 0x80682A28
    r31 = *(0xc + r1); // lwz @ 0x80682A2C
    return;
}