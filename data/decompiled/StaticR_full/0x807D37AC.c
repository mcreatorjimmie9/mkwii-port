/* Function at 0x807D37AC, size=160 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_807D37AC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807D37B8
    r31 = r3;
    FUN_807B6F84(); // bl 0x807B6F84
    /* li r0, 0 */ // 0x807D37C4
    *(0x5c + r31) = r0; // stw @ 0x807D37C8
    r3 = *(0x44 + r31); // lwz @ 0x807D37CC
    r12 = *(0 + r3); // lwz @ 0x807D37D0
    r12 = *(0xc + r12); // lwz @ 0x807D37D4
    /* mtctr r12 */ // 0x807D37D8
    /* bctrl  */ // 0x807D37DC
    FUN_807C02F8(); // bl 0x807C02F8
    if (!=) goto 0x0x807d380c;
    /* lis r3, 0 */ // 0x807D37EC
    r3 = *(0 + r3); // lwz @ 0x807D37F0
    r0 = *(0xb74 + r3); // lwz @ 0x807D37F4
    if (==) goto 0x0x807d380c;
    r0 = *(0xb70 + r3); // lwz @ 0x807D3800
    if (!=) goto 0x0x807d3830;
    r12 = *(0x34 + r31); // lwz @ 0x807D380C
    r3 = r31;
    r12 = *(0x24 + r12); // lwz @ 0x807D3814
    /* mtctr r12 */ // 0x807D3818
    /* bctrl  */ // 0x807D381C
    r3 = r31;
    r4 = r31 + 0x60; // 0x807D3824
    FUN_807CF1B4(r3, r4); // bl 0x807CF1B4
    /* b 0x807d3838 */ // 0x807D382C
    r3 = r31;
    FUN_807CF188(r3, r4, r3); // bl 0x807CF188
    r0 = *(0x14 + r1); // lwz @ 0x807D3838
    r31 = *(0xc + r1); // lwz @ 0x807D383C
    return;
}