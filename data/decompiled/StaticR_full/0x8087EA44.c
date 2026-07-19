/* Function at 0x8087EA44, size=520 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 7 function(s) */

int FUN_8087EA44(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r6, 0 */ // 0x8087EA4C
    /* lis r5, 0 */ // 0x8087EA50
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x8087EA60
    *(0x14 + r1) = r29; // stw @ 0x8087EA64
    *(0x10 + r1) = r28; // stw @ 0x8087EA68
    r28 = r4;
    r7 = *(0 + r6); // lwz @ 0x8087EA70
    /* mulli r6, r4, 0xf0 */ // 0x8087EA74
    r5 = *(0 + r5); // lwz @ 0x8087EA78
    /* li r4, 0 */ // 0x8087EA7C
    r0 = *(0xb70 + r7); // lwz @ 0x8087EA80
    r3 = r7 + r6; // 0x8087EA84
    r5 = *(0x98 + r5); // lwz @ 0x8087EA88
    r3 = *(0x34 + r3); // lwz @ 0x8087EA90
    r29 = r5 + 0x188; // 0x8087EA94
    if (<) goto 0x0x8087eaa8;
    if (>) goto 0x0x8087eaa8;
    /* li r4, 1 */ // 0x8087EAA4
    if (!=) goto 0x0x8087eab8;
    if (<) goto 0x0x8087eaf4;
    /* lis r30, 0 */ // 0x8087EAB8
    r3 = r31;
    r30 = r30 + 0; // 0x8087EAC0
    r5 = r29;
    r6 = r28;
    /* li r7, 2 */ // 0x8087EACC
    r4 = r30 + 0x1d; // 0x8087EAD0
    FUN_806A105C(r5, r6, r7, r4); // bl 0x806A105C
    r3 = r31;
    r5 = r29;
    r6 = r28;
    r4 = r30 + 0x28; // 0x8087EAE4
    /* li r7, 2 */ // 0x8087EAE8
    FUN_806A105C(r3, r5, r6, r4, r7); // bl 0x806A105C
    /* b 0x8087ec2c */ // 0x8087EAF0
    FUN_808CFF20(r6, r4, r7); // bl 0x808CFF20
    /* lis r30, 0 */ // 0x8087EAF8
    r29 = r3;
    r30 = r30 + 0; // 0x8087EB00
    r3 = r31;
    r5 = r29;
    r4 = r30 + 0x37; // 0x8087EB0C
    FUN_806A0D70(r3, r5, r4); // bl 0x806A0D70
    r3 = r31;
    r5 = r29;
    r4 = r30 + 0x46; // 0x8087EB1C
    FUN_806A0D70(r4, r3, r5, r4); // bl 0x806A0D70
    r4 = r30 + 0x51; // 0x8087EB24
    r3 = r31 + 0xa8; // 0x8087EB28
    FUN_80665D1C(r5, r4, r4, r3); // bl 0x80665D1C
    r29 = r3;
    if (!=) goto 0x0x8087eb44;
    /* li r29, 0 */ // 0x8087EB3C
    /* b 0x8087eb94 */ // 0x8087EB40
    /* lis r30, 0 */ // 0x8087EB44
    r30 = r30 + 0; // 0x8087EB48
    if (==) goto 0x0x8087eb90;
    r12 = *(0 + r3); // lwz @ 0x8087EB50
    r12 = *(0xc + r12); // lwz @ 0x8087EB54
    /* mtctr r12 */ // 0x8087EB58
    /* bctrl  */ // 0x8087EB5C
    /* b 0x8087eb78 */ // 0x8087EB60
    if (!=) goto 0x0x8087eb74;
    /* li r0, 1 */ // 0x8087EB6C
    /* b 0x8087eb84 */ // 0x8087EB70
    r3 = *(0 + r3); // lwz @ 0x8087EB74
    if (!=) goto 0x0x8087eb64;
    /* li r0, 0 */ // 0x8087EB80
    if (==) goto 0x0x8087eb90;
    /* b 0x8087eb94 */ // 0x8087EB8C
    /* li r29, 0 */ // 0x8087EB90
    r0 = *(0xbb + r29); // lbz @ 0x8087EB94
    /* lis r4, 0 */ // 0x8087EB98
    r4 = r4 + 0; // 0x8087EB9C
    r3 = r31 + 0xa8; // 0x8087EBA0
    r0 = r0 rlwinm 0; // rlwinm
    r0 = r0 | 1; // 0x8087EBA8
    *(0xbb + r29) = r0; // stb @ 0x8087EBAC
    r4 = r4 + 0x60; // 0x8087EBB0
    FUN_80665D1C(r3, r4); // bl 0x80665D1C
    r30 = r3;
    if (!=) goto 0x0x8087ebcc;
    /* li r30, 0 */ // 0x8087EBC4
    /* b 0x8087ec1c */ // 0x8087EBC8
    /* lis r29, 0 */ // 0x8087EBCC
    r29 = r29 + 0; // 0x8087EBD0
    if (==) goto 0x0x8087ec18;
    r12 = *(0 + r3); // lwz @ 0x8087EBD8
    r12 = *(0xc + r12); // lwz @ 0x8087EBDC
    /* mtctr r12 */ // 0x8087EBE0
    /* bctrl  */ // 0x8087EBE4
    /* b 0x8087ec00 */ // 0x8087EBE8
    if (!=) goto 0x0x8087ebfc;
    /* li r0, 1 */ // 0x8087EBF4
    /* b 0x8087ec0c */ // 0x8087EBF8
    r3 = *(0 + r3); // lwz @ 0x8087EBFC
    if (!=) goto 0x0x8087ebec;
    /* li r0, 0 */ // 0x8087EC08
    if (==) goto 0x0x8087ec18;
    /* b 0x8087ec1c */ // 0x8087EC14
    /* li r30, 0 */ // 0x8087EC18
    r0 = *(0xbb + r30); // lbz @ 0x8087EC1C
    r0 = r0 rlwinm 0; // rlwinm
    r0 = r0 | 1; // 0x8087EC24
    *(0xbb + r30) = r0; // stb @ 0x8087EC28
    r0 = *(0x24 + r1); // lwz @ 0x8087EC2C
    r31 = *(0x1c + r1); // lwz @ 0x8087EC30
    r30 = *(0x18 + r1); // lwz @ 0x8087EC34
    r29 = *(0x14 + r1); // lwz @ 0x8087EC38
    r28 = *(0x10 + r1); // lwz @ 0x8087EC3C
    return;
}