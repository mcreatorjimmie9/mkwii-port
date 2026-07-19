/* Function at 0x806D72CC, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_806D72CC(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x806D72D4
    /* li r5, 0 */ // 0x806D72D8
    *(0x14 + r1) = r0; // stw @ 0x806D72DC
    *(0xc + r1) = r31; // stw @ 0x806D72E0
    r31 = r3;
    r12 = *(0x58 + r3); // lwz @ 0x806D72E8
    r12 = *(0x10 + r12); // lwz @ 0x806D72EC
    /* mtctr r12 */ // 0x806D72F0
    r3 = r3 + 0x58; // 0x806D72F4
    /* bctrl  */ // 0x806D72F8
    r3 = r31;
    r4 = r31 + 0x58; // 0x806D7300
    FUN_80671C34(r3, r3, r4); // bl 0x80671C34
    r3 = r31;
    /* li r4, 0 */ // 0x806D730C
    FUN_80671C1C(r3, r4, r3, r4); // bl 0x80671C1C
    r3 = r31;
    /* li r4, 0 */ // 0x806D7318
    /* li r5, 0 */ // 0x806D731C
    FUN_806724E0(r4, r3, r4, r5); // bl 0x806724E0
    r0 = *(0x14 + r1); // lwz @ 0x806D7324
    r31 = *(0xc + r1); // lwz @ 0x806D7328
    return;
}