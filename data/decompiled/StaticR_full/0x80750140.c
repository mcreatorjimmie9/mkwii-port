/* Function at 0x80750140, size=388 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 6 function(s) */

int FUN_80750140(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x80750154
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x8075015C
    r29 = r4;
    r0 = *(0xd2 + r3); // lbz @ 0x80750164
    if (==) goto 0x0x80750178;
    r3 = r31;
    /* b 0x807502d0 */ // 0x80750174
    if (==) goto 0x0x8075018c;
    if (==) goto 0x0x807501f8;
    /* b 0x80750264 */ // 0x80750188
    r0 = *(0xc4 + r3); // lwz @ 0x8075018C
    if (!=) goto 0x0x807502cc;
    r3 = r29;
    /* li r4, 1 */ // 0x8075019C
    FUN_8061DCF4(r3, r4); // bl 0x8061DCF4
    r12 = *(0 + r30); // lwz @ 0x807501A4
    r3 = r30;
    r12 = *(0x90 + r12); // lwz @ 0x807501AC
    /* mtctr r12 */ // 0x807501B0
    /* bctrl  */ // 0x807501B4
    /* li r29, 0 */ // 0x807501B8
    *(0xc4 + r30) = r29; // stw @ 0x807501BC
    /* lis r3, 0 */ // 0x807501C0
    /* lis r4, 0 */ // 0x807501C4
    /* lfs f2, 0(r3) */ // 0x807501C8
    /* lis r3, 0 */ // 0x807501CC
    /* lfs f1, 0(r4) */ // 0x807501D0
    /* lfs f0, 0(r3) */ // 0x807501D4
    /* fmuls f1, f2, f1 */ // 0x807501D8
    /* fdivs f1, f1, f0 */ // 0x807501DC
    FUN_805E3430(r3); // bl 0x805E3430
    /* lfs f0, 0x34(r30) */ // 0x807501E4
    *(0xc8 + r30) = r3; // stw @ 0x807501E8
    /* stfs f0, 0xcc(r30) */ // 0x807501EC
    *(0xd0 + r30) = r29; // stb @ 0x807501F0
    /* b 0x807502cc */ // 0x807501F4
    r0 = *(0xc4 + r3); // lwz @ 0x807501F8
    if (!=) goto 0x0x807502cc;
    r3 = r29;
    /* li r4, 1 */ // 0x80750208
    FUN_8061DCF4(r3, r4); // bl 0x8061DCF4
    r12 = *(0 + r30); // lwz @ 0x80750210
    r3 = r30;
    r12 = *(0x90 + r12); // lwz @ 0x80750218
    /* mtctr r12 */ // 0x8075021C
    /* bctrl  */ // 0x80750220
    /* li r29, 0 */ // 0x80750224
    *(0xc4 + r30) = r29; // stw @ 0x80750228
    /* lis r3, 0 */ // 0x8075022C
    /* lis r4, 0 */ // 0x80750230
    /* lfs f2, 0(r3) */ // 0x80750234
    /* lis r3, 0 */ // 0x80750238
    /* lfs f1, 0(r4) */ // 0x8075023C
    /* lfs f0, 0(r3) */ // 0x80750240
    /* fmuls f1, f2, f1 */ // 0x80750244
    /* fdivs f1, f1, f0 */ // 0x80750248
    FUN_805E3430(r3); // bl 0x805E3430
    /* lfs f0, 0x34(r30) */ // 0x80750250
    *(0xc8 + r30) = r3; // stw @ 0x80750254
    /* stfs f0, 0xcc(r30) */ // 0x80750258
    *(0xd0 + r30) = r29; // stb @ 0x8075025C
    /* b 0x807502cc */ // 0x80750260
    r3 = r29;
    FUN_8061DEF4(r3); // bl 0x8061DEF4
    if (==) goto 0x0x80750288;
    /* lis r3, 0 */ // 0x80750274
    r3 = *(0 + r3); // lwz @ 0x80750278
    FUN_805C1588(r3); // bl 0x805C1588
    if (==) goto 0x0x80750290;
    /* li r0, 1 */ // 0x80750288
    *(0xb0 + r30) = r0; // stb @ 0x8075028C
    r0 = *(0xe0 + r30); // lbz @ 0x80750290
    if (==) goto 0x0x807502bc;
    r3 = *(0 + r29); // lwz @ 0x8075029C
    r3 = *(4 + r3); // lwz @ 0x807502A0
    r3 = *(0xc + r3); // lwz @ 0x807502A4
    /* clrlwi. r0, r3, 0x1f */ // 0x807502A8
    if (!=) goto 0x0x807502b8;
    /* rlwinm. r0, r3, 0, 0x1e, 0x1e */ // 0x807502B0
    if (==) goto 0x0x807502bc;
    /* li r31, 0x1a */ // 0x807502B8
    r0 = *(0xe1 + r30); // lbz @ 0x807502BC
}