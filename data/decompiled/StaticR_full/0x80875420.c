/* Function at 0x80875420, size=80 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80875420(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8087542C
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x80875434
    r12 = *(0x5c + r12); // lwz @ 0x80875438
    /* mtctr r12 */ // 0x8087543C
    /* bctrl  */ // 0x80875440
    r4 = r3;
    r3 = r31 + 0xa8; // 0x80875448
    FUN_80665D1C(r4, r3); // bl 0x80665D1C
    *(0x198 + r31) = r3; // stw @ 0x80875450
    r3 = r31;
    FUN_80876EDC(r4, r3, r3); // bl 0x80876EDC
    r0 = *(0x14 + r1); // lwz @ 0x8087545C
    r31 = *(0xc + r1); // lwz @ 0x80875460
    return;
}