/* Function at 0x807DBE3C, size=104 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807DBE3C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r5, 0 */ // 0x807DBE44
    *(0xc + r1) = r31; // stw @ 0x807DBE4C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807DBE54
    r30 = r3;
    r0 = *(0x34 + r3); // lwz @ 0x807DBE5C
    if (==) goto 0x0x807dbe80;
    r3 = r0;
    r12 = *(0 + r3); // lwz @ 0x807DBE6C
    r12 = *(0x14 + r12); // lwz @ 0x807DBE70
    /* mtctr r12 */ // 0x807DBE74
    /* bctrl  */ // 0x807DBE78
    r5 = r3;
    r3 = r30;
    r4 = r31;
    FUN_807DB844(r5, r3, r4); // bl 0x807DB844
    r0 = *(0x14 + r1); // lwz @ 0x807DBE8C
    r31 = *(0xc + r1); // lwz @ 0x807DBE90
    r30 = *(8 + r1); // lwz @ 0x807DBE94
    return;
}