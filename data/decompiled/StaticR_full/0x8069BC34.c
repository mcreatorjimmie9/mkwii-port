/* Function at 0x8069BC34, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_8069BC34(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x8069BC3C
    /* li r5, 0 */ // 0x8069BC40
    *(0x14 + r1) = r0; // stw @ 0x8069BC44
    *(0xc + r1) = r31; // stw @ 0x8069BC48
    r31 = r3;
    r12 = *(0x44 + r3); // lwz @ 0x8069BC50
    r12 = *(0x10 + r12); // lwz @ 0x8069BC54
    /* mtctr r12 */ // 0x8069BC58
    r3 = r3 + 0x44; // 0x8069BC5C
    /* bctrl  */ // 0x8069BC60
    r3 = r31;
    r4 = r31 + 0x44; // 0x8069BC68
    FUN_80671C34(r3, r3, r4); // bl 0x80671C34
    r3 = r31;
    /* li r4, 0 */ // 0x8069BC74
    FUN_80671C1C(r3, r4, r3, r4); // bl 0x80671C1C
    r3 = r31;
    /* li r4, 0 */ // 0x8069BC80
    /* li r5, 0 */ // 0x8069BC84
    FUN_806724E0(r4, r3, r4, r5); // bl 0x806724E0
    r0 = *(0x14 + r1); // lwz @ 0x8069BC8C
    r31 = *(0xc + r1); // lwz @ 0x8069BC90
    return;
}