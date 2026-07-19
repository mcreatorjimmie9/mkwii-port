/* Function at 0x8064F98C, size=124 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_8064F98C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x8064F994
    /* li r5, 0 */ // 0x8064F998
    *(0x14 + r1) = r0; // stw @ 0x8064F99C
    *(0xc + r1) = r31; // stw @ 0x8064F9A0
    r31 = r3;
    r12 = *(0x44 + r3); // lwz @ 0x8064F9A8
    r12 = *(0x10 + r12); // lwz @ 0x8064F9AC
    /* mtctr r12 */ // 0x8064F9B0
    r3 = r3 + 0x44; // 0x8064F9B4
    /* bctrl  */ // 0x8064F9B8
    r3 = r31;
    r4 = r31 + 0x44; // 0x8064F9C0
    FUN_80671C34(r3, r3, r4); // bl 0x80671C34
    r3 = r31;
    /* li r4, 0 */ // 0x8064F9CC
    FUN_80671C1C(r3, r4, r3, r4); // bl 0x80671C1C
    /* lis r3, 0 */ // 0x8064F9D4
    r3 = *(0 + r3); // lwz @ 0x8064F9D8
    r3 = *(0 + r3); // lwz @ 0x8064F9DC
    FUN_80685EA4(r4, r3); // bl 0x80685EA4
    r3 = r31;
    /* li r4, 0 */ // 0x8064F9E8
    /* li r5, 0 */ // 0x8064F9EC
    FUN_806724E0(r3, r4, r5); // bl 0x806724E0
    r0 = *(0x14 + r1); // lwz @ 0x8064F9F4
    r31 = *(0xc + r1); // lwz @ 0x8064F9F8
    return;
}