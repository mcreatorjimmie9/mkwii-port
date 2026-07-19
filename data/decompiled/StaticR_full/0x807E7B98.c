/* Function at 0x807E7B98, size=144 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807E7B98(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807E7BA4
    r31 = r3;
    r0 = *(0x100 + r3); // lbz @ 0x807E7BAC
    if (!=) goto 0x0x807e7c14;
    /* lis r4, 0 */ // 0x807E7BB8
    /* li r0, 5 */ // 0x807E7BBC
    /* lfs f0, 0(r4) */ // 0x807E7BC0
    /* li r4, 3 */ // 0x807E7BC4
    *(0xb4 + r3) = r0; // stw @ 0x807E7BC8
    r5 = *(8 + r3); // lwz @ 0x807E7BCC
    /* stfs f0, 0xf8(r3) */ // 0x807E7BD0
    r3 = *(0x28 + r5); // lwz @ 0x807E7BD4
    FUN_805E7060(r4); // bl 0x805E7060
    r12 = *(0 + r3); // lwz @ 0x807E7BDC
    r12 = *(8 + r12); // lwz @ 0x807E7BE0
    /* mtctr r12 */ // 0x807E7BE4
    /* bctrl  */ // 0x807E7BE8
    r5 = *(8 + r31); // lwz @ 0x807E7BEC
    /* lis r3, 0 */ // 0x807E7BF0
    /* lfs f2, 0(r3) */ // 0x807E7BF4
    /* li r4, 0 */ // 0x807E7BF8
    r3 = *(0x28 + r5); // lwz @ 0x807E7BFC
    FUN_805E70EC(r3, r4); // bl 0x805E70EC
    /* li r3, 1 */ // 0x807E7C04
    /* li r0, 0x3c */ // 0x807E7C08
    *(0x100 + r31) = r3; // stb @ 0x807E7C0C
    *(0x124 + r31) = r0; // stw @ 0x807E7C10
    r0 = *(0x14 + r1); // lwz @ 0x807E7C14
    r31 = *(0xc + r1); // lwz @ 0x807E7C18
    return;
}