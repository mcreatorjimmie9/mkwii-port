/* Function at 0x8070DE98, size=136 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8070DE98(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    r8 = r4;
    r7 = r6;
    *(0x24 + r1) = r0; // stw @ 0x8070DEA8
    r0 = r5;
    r5 = r8;
    *(0x1c + r1) = r31; // stw @ 0x8070DEB4
    /* lis r31, 0 */ // 0x8070DEB8
    r4 = r31 + 0; // 0x8070DEBC
    r6 = r0;
    *(0x18 + r1) = r30; // stw @ 0x8070DEC4
    r8 = r4 + 0xd; // 0x8070DEC8
    *(0x14 + r1) = r29; // stw @ 0x8070DECC
    r29 = r3;
    FUN_8089F5F0(r6, r8); // bl 0x8089F5F0
    /* lis r4, 0 */ // 0x8070DED8
    /* lis r3, 0 */ // 0x8070DEDC
    /* lfs f1, 0(r4) */ // 0x8070DEE0
    /* lis r4, 0 */ // 0x8070DEE4
    /* lfs f0, 0(r3) */ // 0x8070DEE8
    r4 = r4 + 0; // 0x8070DEEC
    *(0 + r29) = r4; // stw @ 0x8070DEF0
    /* lis r3, 0 */ // 0x8070DEF4
    /* stfs f1, 0xb4(r29) */ // 0x8070DEF8
    /* stfs f0, 0xb8(r29) */ // 0x8070DEFC
    r3 = *(0 + r3); // lwz @ 0x8070DF00
    r0 = *(0x25 + r3); // lbz @ 0x8070DF04
    if (!=) goto 0x0x8070df48;
    /* li r3, 0x7c */ // 0x8070DF10
    FUN_805E3430(r3); // bl 0x805E3430
    r30 = r3;
}