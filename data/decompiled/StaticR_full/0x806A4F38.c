/* Function at 0x806A4F38, size=184 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_806A4F38(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    /* li r4, 3 */ // 0x806A4F4C
    *(8 + r1) = r30; // stw @ 0x806A4F50
    r30 = r3;
    r3 = r3 + 0x98; // 0x806A4F58
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x806A4F60
    /* li r4, 0 */ // 0x806A4F64
    /* lfs f1, 0(r5) */ // 0x806A4F68
    FUN_8069F59C(r3, r5, r4); // bl 0x8069F59C
    r3 = *(0x28c + r30); // lwz @ 0x806A4F70
    r0 = *(0x290 + r30); // lwz @ 0x806A4F74
    r4 = r3 + 1; // 0x806A4F78
    if (<) goto 0x0x806a4f88;
    /* li r4, 0 */ // 0x806A4F84
    r12 = *(0 + r30); // lwz @ 0x806A4F88
    r3 = r30;
    r12 = *(0x50 + r12); // lwz @ 0x806A4F90
    /* mtctr r12 */ // 0x806A4F94
    /* bctrl  */ // 0x806A4F98
    r12 = *(0 + r30); // lwz @ 0x806A4F9C
    r3 = r30;
    r4 = r31;
    r12 = *(0x48 + r12); // lwz @ 0x806A4FA8
    /* mtctr r12 */ // 0x806A4FAC
    /* bctrl  */ // 0x806A4FB0
    r3 = *(0x284 + r30); // lwz @ 0x806A4FB4
    if (==) goto 0x0x806a4fd8;
    r12 = *(0 + r3); // lwz @ 0x806A4FC0
    r4 = r30;
    r5 = r31;
    r12 = *(8 + r12); // lwz @ 0x806A4FCC
    /* mtctr r12 */ // 0x806A4FD0
    /* bctrl  */ // 0x806A4FD4
    r0 = *(0x14 + r1); // lwz @ 0x806A4FD8
    r31 = *(0xc + r1); // lwz @ 0x806A4FDC
    r30 = *(8 + r1); // lwz @ 0x806A4FE0
    return;
}