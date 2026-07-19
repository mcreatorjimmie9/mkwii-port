/* Function at 0x806B7F54, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806B7F54(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x806B7F5C
    /* li r5, 0 */ // 0x806B7F60
    *(0x14 + r1) = r0; // stw @ 0x806B7F64
    *(0xc + r1) = r31; // stw @ 0x806B7F68
    r31 = r3;
    r12 = *(0x44 + r3); // lwz @ 0x806B7F70
    r12 = *(0x10 + r12); // lwz @ 0x806B7F74
    /* mtctr r12 */ // 0x806B7F78
    r3 = r3 + 0x44; // 0x806B7F7C
    /* bctrl  */ // 0x806B7F80
    r3 = r31;
    r4 = r31 + 0x44; // 0x806B7F88
    FUN_80671C34(r3, r3, r4); // bl 0x80671C34
    r3 = r31;
    /* li r4, 0 */ // 0x806B7F94
    FUN_80671C1C(r3, r4, r3, r4); // bl 0x80671C1C
    r0 = *(0x14 + r1); // lwz @ 0x806B7F9C
    r31 = *(0xc + r1); // lwz @ 0x806B7FA0
    return;
}