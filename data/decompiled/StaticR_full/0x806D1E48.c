/* Function at 0x806D1E48, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_806D1E48(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x806D1E50
    /* li r5, 0 */ // 0x806D1E54
    *(0x14 + r1) = r0; // stw @ 0x806D1E58
    *(0xc + r1) = r31; // stw @ 0x806D1E5C
    r31 = r3;
    r12 = *(0x58 + r3); // lwz @ 0x806D1E64
    r12 = *(0x10 + r12); // lwz @ 0x806D1E68
    /* mtctr r12 */ // 0x806D1E6C
    r3 = r3 + 0x58; // 0x806D1E70
    /* bctrl  */ // 0x806D1E74
    r3 = r31;
    r4 = r31 + 0x58; // 0x806D1E7C
    FUN_80671C34(r3, r3, r4); // bl 0x80671C34
    r3 = r31;
    /* li r4, 0 */ // 0x806D1E88
    FUN_80671C1C(r3, r4, r3, r4); // bl 0x80671C1C
    r3 = r31;
    /* li r4, 0 */ // 0x806D1E94
    /* li r5, 0 */ // 0x806D1E98
    FUN_806724E0(r4, r3, r4, r5); // bl 0x806724E0
    r0 = *(0x14 + r1); // lwz @ 0x806D1EA0
    r31 = *(0xc + r1); // lwz @ 0x806D1EA4
    return;
}