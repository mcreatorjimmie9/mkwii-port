/* Function at 0x8069EE08, size=136 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 5 function(s) */

int FUN_8069EE08(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x8069EE10
    /* li r5, 0 */ // 0x8069EE14
    *(0x14 + r1) = r0; // stw @ 0x8069EE18
    *(0xc + r1) = r31; // stw @ 0x8069EE1C
    r31 = r3;
    r12 = *(0x44 + r3); // lwz @ 0x8069EE24
    r12 = *(0x10 + r12); // lwz @ 0x8069EE28
    /* mtctr r12 */ // 0x8069EE2C
    r3 = r3 + 0x44; // 0x8069EE30
    /* bctrl  */ // 0x8069EE34
    r3 = r31;
    r4 = r31 + 0x44; // 0x8069EE3C
    FUN_80671C34(r3, r3, r4); // bl 0x80671C34
    r3 = r31;
    /* li r4, 1 */ // 0x8069EE48
    FUN_80671C1C(r3, r4, r3, r4); // bl 0x80671C1C
    r3 = r31;
    r5 = r31 + 0x58; // 0x8069EE54
    /* li r4, 0 */ // 0x8069EE58
    /* li r6, 0 */ // 0x8069EE5C
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r31 + 0x58; // 0x8069EE64
    FUN_808744C4(r5, r4, r6, r3); // bl 0x808744C4
    r3 = r31;
    /* li r4, 0 */ // 0x8069EE70
    /* li r5, 0 */ // 0x8069EE74
    FUN_806724E0(r3, r3, r4, r5); // bl 0x806724E0
    r0 = *(0x14 + r1); // lwz @ 0x8069EE7C
    r31 = *(0xc + r1); // lwz @ 0x8069EE80
    return;
}