/* Function at 0x807EB000, size=192 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807EB000(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807EB00C
    r31 = r3;
    r3 = *(0x20 + r3); // lwz @ 0x807EB014
    r12 = *(0 + r3); // lwz @ 0x807EB018
    r12 = *(0x14 + r12); // lwz @ 0x807EB01C
    /* mtctr r12 */ // 0x807EB020
    /* bctrl  */ // 0x807EB024
    r5 = *(0x20 + r31); // lwz @ 0x807EB028
    /* lis r4, 0 */ // 0x807EB02C
    r0 = *(0x2c + r31); // lhz @ 0x807EB030
    r3 = r31 + 0x30; // 0x807EB034
    /* lfs f3, 0x20(r5) */ // 0x807EB038
    /* lfs f2, 0x1c(r5) */ // 0x807EB03C
    r0 = r0 | 1; // 0x807EB040
    /* lfs f0, 0x18(r5) */ // 0x807EB044
    /* stfs f0, 0x30(r31) */ // 0x807EB048
    /* lfs f1, 0(r4) */ // 0x807EB04C
    /* stfs f3, 0x38(r31) */ // 0x807EB050
    *(0x2c + r31) = r0; // sth @ 0x807EB054
    /* stfs f2, 0x34(r31) */ // 0x807EB058
    FUN_8081269C(); // bl 0x8081269C
    if (<) goto 0x0x807eb08c;
    r0 = *(0x12c + r31); // lbz @ 0x807EB068
    if (!=) goto 0x0x807eb0ac;
    r12 = *(0 + r31); // lwz @ 0x807EB074
    r3 = r31;
    r12 = *(0x114 + r12); // lwz @ 0x807EB07C
    /* mtctr r12 */ // 0x807EB080
    /* bctrl  */ // 0x807EB084
    /* b 0x807eb0ac */ // 0x807EB088
    r0 = *(0x12c + r31); // lbz @ 0x807EB08C
    if (==) goto 0x0x807eb0ac;
    r12 = *(0 + r31); // lwz @ 0x807EB098
    r3 = r31;
    r12 = *(0x118 + r12); // lwz @ 0x807EB0A0
    /* mtctr r12 */ // 0x807EB0A4
    /* bctrl  */ // 0x807EB0A8
    r0 = *(0x14 + r1); // lwz @ 0x807EB0AC
    r31 = *(0xc + r1); // lwz @ 0x807EB0B0
    return;
}