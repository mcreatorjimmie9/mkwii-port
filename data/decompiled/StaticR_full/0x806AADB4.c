/* Function at 0x806AADB4, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_806AADB4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x806AADBC
    /* li r5, 0 */ // 0x806AADC0
    *(0x14 + r1) = r0; // stw @ 0x806AADC4
    *(0xc + r1) = r31; // stw @ 0x806AADC8
    r31 = r3;
    r12 = *(0x44 + r3); // lwz @ 0x806AADD0
    r12 = *(0x10 + r12); // lwz @ 0x806AADD4
    /* mtctr r12 */ // 0x806AADD8
    r3 = r3 + 0x44; // 0x806AADDC
    /* bctrl  */ // 0x806AADE0
    r3 = r31;
    r4 = r31 + 0x44; // 0x806AADE8
    FUN_80671C34(r3, r3, r4); // bl 0x80671C34
    r3 = r31;
    /* li r4, 0 */ // 0x806AADF4
    FUN_80671C1C(r3, r4, r3, r4); // bl 0x80671C1C
    r3 = r31;
    /* li r4, 0 */ // 0x806AAE00
    /* li r5, 0 */ // 0x806AAE04
    FUN_806724E0(r4, r3, r4, r5); // bl 0x806724E0
    r0 = *(0x14 + r1); // lwz @ 0x806AAE0C
    r31 = *(0xc + r1); // lwz @ 0x806AAE10
    return;
}