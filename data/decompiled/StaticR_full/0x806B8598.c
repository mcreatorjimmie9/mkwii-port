/* Function at 0x806B8598, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_806B8598(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x806B85A0
    /* li r5, 0 */ // 0x806B85A4
    *(0x14 + r1) = r0; // stw @ 0x806B85A8
    *(0xc + r1) = r31; // stw @ 0x806B85AC
    r31 = r3;
    r12 = *(0x6c + r3); // lwz @ 0x806B85B4
    r12 = *(0x10 + r12); // lwz @ 0x806B85B8
    /* mtctr r12 */ // 0x806B85BC
    r3 = r3 + 0x6c; // 0x806B85C0
    /* bctrl  */ // 0x806B85C4
    r3 = r31;
    r4 = r31 + 0x6c; // 0x806B85CC
    FUN_80671C34(r3, r3, r4); // bl 0x80671C34
    r3 = r31;
    /* li r4, 0 */ // 0x806B85D8
    FUN_80671C1C(r3, r4, r3, r4); // bl 0x80671C1C
    r3 = r31;
    /* li r4, 0 */ // 0x806B85E4
    /* li r5, 0 */ // 0x806B85E8
    FUN_806724E0(r4, r3, r4, r5); // bl 0x806724E0
    r0 = *(0x14 + r1); // lwz @ 0x806B85F0
    r31 = *(0xc + r1); // lwz @ 0x806B85F4
    return;
}