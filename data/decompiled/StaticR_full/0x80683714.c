/* Function at 0x80683714, size=196 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 6 function(s) */

int FUN_80683714(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x8068371C
    /* li r5, 0 */ // 0x80683720
    *(0x14 + r1) = r0; // stw @ 0x80683724
    *(0xc + r1) = r31; // stw @ 0x80683728
    r31 = r3;
    r12 = *(0x44 + r3); // lwz @ 0x80683730
    r12 = *(0x10 + r12); // lwz @ 0x80683734
    /* mtctr r12 */ // 0x80683738
    r3 = r3 + 0x44; // 0x8068373C
    /* bctrl  */ // 0x80683740
    r3 = r31;
    r4 = r31 + 0x44; // 0x80683748
    FUN_80671C34(r3, r3, r4); // bl 0x80671C34
    r3 = r31;
    /* li r4, 1 */ // 0x80683754
    FUN_80671C1C(r3, r4, r3, r4); // bl 0x80671C1C
    r3 = r31;
    r5 = r31 + 0x54; // 0x80683760
    /* li r4, 0 */ // 0x80683764
    /* li r6, 0 */ // 0x80683768
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    /* lis r4, 0 */ // 0x80683770
    r3 = r31 + 0x54; // 0x80683774
    r4 = r4 + 0; // 0x80683778
    r5 = r4 + 0xf; // 0x8068377C
    r6 = r4 + 0x1d; // 0x80683780
    FUN_8066CF50(r4, r3, r4, r5, r6); // bl 0x8066CF50
    /* lis r3, 0 */ // 0x80683788
    r3 = *(0 + r3); // lwz @ 0x8068378C
    r3 = *(0x90 + r3); // lwz @ 0x80683790
    r0 = *(0xc + r3); // lwz @ 0x80683794
    if (!=) goto 0x0x806837b4;
    r3 = r31 + 0x54; // 0x806837A0
    /* li r4, 0x806 */ // 0x806837A4
    /* li r5, 0 */ // 0x806837A8
    FUN_806A0A34(r3, r4, r5); // bl 0x806A0A34
    /* b 0x806837c4 */ // 0x806837B0
    r3 = r31 + 0x54; // 0x806837B4
    /* li r4, 0x809 */ // 0x806837B8
    /* li r5, 0 */ // 0x806837BC
    FUN_806A0A34(r3, r4, r5); // bl 0x806A0A34
    r0 = *(0x14 + r1); // lwz @ 0x806837C4
    r31 = *(0xc + r1); // lwz @ 0x806837C8
    return;
}