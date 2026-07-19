/* Function at 0x806AA75C, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806AA75C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x806AA764
    /* li r5, 0 */ // 0x806AA768
    *(0x14 + r1) = r0; // stw @ 0x806AA76C
    *(0xc + r1) = r31; // stw @ 0x806AA770
    r31 = r3;
    r12 = *(0x48 + r3); // lwz @ 0x806AA778
    r12 = *(0x10 + r12); // lwz @ 0x806AA77C
    /* mtctr r12 */ // 0x806AA780
    r3 = r3 + 0x48; // 0x806AA784
    /* bctrl  */ // 0x806AA788
    r3 = r31;
    r4 = r31 + 0x48; // 0x806AA790
    FUN_80671C34(r3, r3, r4); // bl 0x80671C34
    r3 = r31;
    /* li r4, 0 */ // 0x806AA79C
    FUN_80671C1C(r3, r4, r3, r4); // bl 0x80671C1C
    r0 = *(0x14 + r1); // lwz @ 0x806AA7A4
    r31 = *(0xc + r1); // lwz @ 0x806AA7A8
    return;
}