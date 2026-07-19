/* Function at 0x80777C70, size=160 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80777C70(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 1 */ // 0x80777C78
    *(0x14 + r1) = r0; // stw @ 0x80777C7C
    *(0xc + r1) = r31; // stw @ 0x80777C80
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x80777C88
    r12 = *(0x68 + r12); // lwz @ 0x80777C8C
    /* mtctr r12 */ // 0x80777C90
    /* bctrl  */ // 0x80777C94
    r3 = *(0xe0 + r31); // lwz @ 0x80777C98
    /* li r4, 1 */ // 0x80777C9C
    r12 = *(0 + r3); // lwz @ 0x80777CA0
    r12 = *(0x68 + r12); // lwz @ 0x80777CA4
    /* mtctr r12 */ // 0x80777CA8
    /* bctrl  */ // 0x80777CAC
    r12 = *(0 + r31); // lwz @ 0x80777CB0
    r3 = r31;
    r12 = *(0x98 + r12); // lwz @ 0x80777CB8
    /* mtctr r12 */ // 0x80777CBC
    /* bctrl  */ // 0x80777CC0
    if (!=) goto 0x0x80777ce8;
    r12 = *(0 + r31); // lwz @ 0x80777CCC
    /* lis r4, 0 */ // 0x80777CD0
    r3 = r31;
    /* lfs f1, 0(r4) */ // 0x80777CD8
    r12 = *(0xe0 + r12); // lwz @ 0x80777CDC
    /* mtctr r12 */ // 0x80777CE0
    /* bctrl  */ // 0x80777CE4
    /* lis r4, 0 */ // 0x80777CE8
    r3 = r31;
    /* lfs f1, 0(r4) */ // 0x80777CF0
    /* li r4, 0x256 */ // 0x80777CF4
    FUN_808A0A88(r4, r3, r4); // bl 0x808A0A88
    r0 = *(0x14 + r1); // lwz @ 0x80777CFC
    r31 = *(0xc + r1); // lwz @ 0x80777D00
    return;
}