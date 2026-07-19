/* Function at 0x807BB110, size=240 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_807BB110(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807BB11C
    r31 = r3;
    FUN_807B6F84(); // bl 0x807B6F84
    /* li r0, 1 */ // 0x807BB128
    *(0x5c + r31) = r0; // stw @ 0x807BB12C
    r3 = *(0x8c + r31); // lwz @ 0x807BB130
    r12 = *(0 + r3); // lwz @ 0x807BB134
    r12 = *(0xc + r12); // lwz @ 0x807BB138
    /* mtctr r12 */ // 0x807BB13C
    /* bctrl  */ // 0x807BB140
    r3 = *(0x44 + r31); // lwz @ 0x807BB144
    r12 = *(0 + r3); // lwz @ 0x807BB148
    r12 = *(0xc + r12); // lwz @ 0x807BB14C
    /* mtctr r12 */ // 0x807BB150
    /* bctrl  */ // 0x807BB154
    r3 = *(0x94 + r31); // lwz @ 0x807BB158
    r12 = *(0x34 + r3); // lwz @ 0x807BB15C
    r12 = *(0x18 + r12); // lwz @ 0x807BB160
    /* mtctr r12 */ // 0x807BB164
    /* bctrl  */ // 0x807BB168
    r12 = *(0x34 + r31); // lwz @ 0x807BB16C
    r3 = r31;
    r12 = *(0x24 + r12); // lwz @ 0x807BB174
    /* mtctr r12 */ // 0x807BB178
    /* bctrl  */ // 0x807BB17C
    /* lis r3, 0 */ // 0x807BB180
    r3 = *(0 + r3); // lwz @ 0x807BB184
    FUN_807BFFC0(r3); // bl 0x807BFFC0
    if (==) goto 0x0x807bb1a8;
    if (==) goto 0x0x807bb1bc;
    if (==) goto 0x0x807bb1d0;
    /* b 0x807bb1e0 */ // 0x807BB1A4
    /* lis r4, 0 */ // 0x807BB1A8
    r3 = *(0x58 + r31); // lwz @ 0x807BB1AC
    r0 = *(0 + r4); // lha @ 0x807BB1B0
    *(8 + r3) = r0; // stw @ 0x807BB1B4
    /* b 0x807bb1e0 */ // 0x807BB1B8
    /* lis r4, 0 */ // 0x807BB1BC
    r3 = *(0x58 + r31); // lwz @ 0x807BB1C0
    r0 = *(0 + r4); // lha @ 0x807BB1C4
    *(8 + r3) = r0; // stw @ 0x807BB1C8
    /* b 0x807bb1e0 */ // 0x807BB1CC
    /* lis r4, 0 */ // 0x807BB1D0
    r3 = *(0x58 + r31); // lwz @ 0x807BB1D4
    r0 = *(0 + r4); // lha @ 0x807BB1D8
    *(8 + r3) = r0; // stw @ 0x807BB1DC
    r3 = r31;
    r4 = r31 + 0x60; // 0x807BB1E4
    FUN_807CF1B4(r3, r4); // bl 0x807CF1B4
    r0 = *(0x14 + r1); // lwz @ 0x807BB1EC
    r31 = *(0xc + r1); // lwz @ 0x807BB1F0
    return;
}