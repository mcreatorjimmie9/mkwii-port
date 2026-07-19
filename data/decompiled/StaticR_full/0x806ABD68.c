/* Function at 0x806ABD68, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_806ABD68(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x806ABD70
    /* li r5, 0 */ // 0x806ABD74
    *(0x14 + r1) = r0; // stw @ 0x806ABD78
    *(0xc + r1) = r31; // stw @ 0x806ABD7C
    r31 = r3;
    r12 = *(0x58 + r3); // lwz @ 0x806ABD84
    r12 = *(0x10 + r12); // lwz @ 0x806ABD88
    /* mtctr r12 */ // 0x806ABD8C
    r3 = r3 + 0x58; // 0x806ABD90
    /* bctrl  */ // 0x806ABD94
    r3 = r31;
    r4 = r31 + 0x58; // 0x806ABD9C
    FUN_80671C34(r3, r3, r4); // bl 0x80671C34
    r3 = r31;
    /* li r4, 0 */ // 0x806ABDA8
    FUN_80671C1C(r3, r4, r3, r4); // bl 0x80671C1C
    r3 = r31;
    /* li r4, 0 */ // 0x806ABDB4
    /* li r5, 0 */ // 0x806ABDB8
    FUN_806724E0(r4, r3, r4, r5); // bl 0x806724E0
    r0 = *(0x14 + r1); // lwz @ 0x806ABDC0
    r31 = *(0xc + r1); // lwz @ 0x806ABDC4
    return;
}