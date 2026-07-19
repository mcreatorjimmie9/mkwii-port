/* Function at 0x807E705C, size=144 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807E705C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807E7068
    r31 = r3;
    r0 = *(0xb4 + r3); // lwz @ 0x807E7070
    if (==) goto 0x0x807e70d8;
    if (==) goto 0x0x807e70d8;
    /* lis r4, 0 */ // 0x807E7084
    /* li r0, 5 */ // 0x807E7088
    /* lfs f0, 0(r4) */ // 0x807E708C
    /* li r4, 3 */ // 0x807E7090
    *(0xb4 + r3) = r0; // stw @ 0x807E7094
    r5 = *(8 + r3); // lwz @ 0x807E7098
    /* stfs f0, 0xf8(r3) */ // 0x807E709C
    r3 = *(0x28 + r5); // lwz @ 0x807E70A0
    FUN_805E7060(r4); // bl 0x805E7060
    r12 = *(0 + r3); // lwz @ 0x807E70A8
    r12 = *(8 + r12); // lwz @ 0x807E70AC
    /* mtctr r12 */ // 0x807E70B0
    /* bctrl  */ // 0x807E70B4
    r5 = *(8 + r31); // lwz @ 0x807E70B8
    /* lis r3, 0 */ // 0x807E70BC
    /* lfs f2, 0(r3) */ // 0x807E70C0
    /* li r4, 0 */ // 0x807E70C4
    r3 = *(0x28 + r5); // lwz @ 0x807E70C8
    FUN_805E70EC(r3, r4); // bl 0x805E70EC
    /* li r0, 1 */ // 0x807E70D0
    *(0x100 + r31) = r0; // stb @ 0x807E70D4
    r0 = *(0x14 + r1); // lwz @ 0x807E70D8
    r31 = *(0xc + r1); // lwz @ 0x807E70DC
    return;
}