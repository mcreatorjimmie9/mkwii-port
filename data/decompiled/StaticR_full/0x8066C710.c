/* Function at 0x8066C710, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8066C710(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x8066C718
    *(0x14 + r1) = r0; // stw @ 0x8066C71C
    /* lfs f1, 0(r4) */ // 0x8066C720
    /* li r4, -1 */ // 0x8066C724
    *(0xc + r1) = r31; // stw @ 0x8066C728
    r31 = r3;
    FUN_80671C48(r4); // bl 0x80671C48
    r3 = *(0x188 + r31); // lwz @ 0x8066C734
    if (==) goto 0x0x8066c754;
    r12 = *(0 + r3); // lwz @ 0x8066C740
    r4 = r31;
    r12 = *(8 + r12); // lwz @ 0x8066C748
    /* mtctr r12 */ // 0x8066C74C
    /* bctrl  */ // 0x8066C750
    r0 = *(0x14 + r1); // lwz @ 0x8066C754
    r31 = *(0xc + r1); // lwz @ 0x8066C758
    return;
}