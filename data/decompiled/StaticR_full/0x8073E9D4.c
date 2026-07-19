/* Function at 0x8073E9D4, size=460 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31 */
/* Calls: 6 function(s) */

int FUN_8073E9D4(int r3, int r4, int r5)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    *(0x5c + r1) = r31; // stw @ 0x8073E9E0
    r31 = r3;
    r4 = *(0x124 + r3); // lwz @ 0x8073E9E8
    if (!=) goto 0x0x8073ea00;
    r0 = *(0x328 + r3); // lwz @ 0x8073E9F4
    if (==) goto 0x0x8073eb8c;
    if (!=) goto 0x0x8073ea14;
    r0 = *(0x320 + r3); // lwz @ 0x8073EA08
    if (==) goto 0x0x8073eb8c;
    r4 = r31 + 0x6f4; // 0x8073EA18
    /* li r5, 1 */ // 0x8073EA1C
    FUN_805C70D8(r3, r4, r5); // bl 0x805C70D8
    /* lis r4, 0 */ // 0x8073EA24
    /* lfs f1, 0(r4) */ // 0x8073EA2C
    FUN_805A443C(r4, r3, r4); // bl 0x805A443C
    r0 = *(0x124 + r31); // lwz @ 0x8073EA38
    if (!=) goto 0x0x8073eaf8;
    r3 = *(0x328 + r31); // lwz @ 0x8073EA44
    r12 = *(0 + r3); // lwz @ 0x8073EA48
    r12 = *(0x14 + r12); // lwz @ 0x8073EA4C
    /* mtctr r12 */ // 0x8073EA50
    /* bctrl  */ // 0x8073EA54
    r3 = *(0x328 + r31); // lwz @ 0x8073EA58
    r4 = r31 + 0x6f4; // 0x8073EA5C
    r12 = *(0 + r3); // lwz @ 0x8073EA60
    r12 = *(0x78 + r12); // lwz @ 0x8073EA64
    /* mtctr r12 */ // 0x8073EA68
    /* bctrl  */ // 0x8073EA6C
    r4 = r31 + 0x7bc; // 0x8073EA74
    r5 = r31 + 0x7c8; // 0x8073EA78
    FUN_805A4464(r3, r4, r5); // bl 0x805A4464
    /* lis r4, 0 */ // 0x8073EA80
    /* lfs f1, 0(r4) */ // 0x8073EA88
    FUN_805A443C(r4, r3, r4); // bl 0x805A443C
    FUN_805A4464(r4, r3, r4, r5); // bl 0x805A4464
    r3 = *(0x328 + r31); // lwz @ 0x8073EAA4
    r12 = *(0 + r3); // lwz @ 0x8073EAAC
    r12 = *(0x74 + r12); // lwz @ 0x8073EAB0
    /* mtctr r12 */ // 0x8073EAB4
    /* bctrl  */ // 0x8073EAB8
    r0 = *(0xb0 + r31); // lbz @ 0x8073EABC
    if (==) goto 0x0x8073eae0;
    r3 = *(0x328 + r31); // lwz @ 0x8073EAC8
    r4 = r31 + 0x72c; // 0x8073EACC
    r12 = *(0 + r3); // lwz @ 0x8073EAD0
    r12 = *(0x70 + r12); // lwz @ 0x8073EAD4
    /* mtctr r12 */ // 0x8073EAD8
    /* bctrl  */ // 0x8073EADC
    r3 = *(0x328 + r31); // lwz @ 0x8073EAE0
    r12 = *(0 + r3); // lwz @ 0x8073EAE4
    r12 = *(0x80 + r12); // lwz @ 0x8073EAE8
    /* mtctr r12 */ // 0x8073EAEC
    /* bctrl  */ // 0x8073EAF0
    /* b 0x8073eb8c */ // 0x8073EAF4
    if (!=) goto 0x0x8073eb8c;
    r3 = *(0x320 + r31); // lwz @ 0x8073EB00
    r12 = *(0 + r3); // lwz @ 0x8073EB04
    r12 = *(0x14 + r12); // lwz @ 0x8073EB08
    /* mtctr r12 */ // 0x8073EB0C
    /* bctrl  */ // 0x8073EB10
    r3 = *(0x320 + r31); // lwz @ 0x8073EB14
    r4 = r31 + 0x6f4; // 0x8073EB18
    r12 = *(0 + r3); // lwz @ 0x8073EB1C
    r12 = *(0x78 + r12); // lwz @ 0x8073EB20
    /* mtctr r12 */ // 0x8073EB24
    /* bctrl  */ // 0x8073EB28
    r4 = r31 + 0x7c8; // 0x8073EB30
    FUN_805A4464(r3, r4, r5); // bl 0x805A4464
    r3 = *(0x320 + r31); // lwz @ 0x8073EB3C
    r12 = *(0 + r3); // lwz @ 0x8073EB44
    r12 = *(0x74 + r12); // lwz @ 0x8073EB48
    /* mtctr r12 */ // 0x8073EB4C
    /* bctrl  */ // 0x8073EB50
    r0 = *(0xb0 + r31); // lbz @ 0x8073EB54
    if (==) goto 0x0x8073eb78;
    r3 = *(0x320 + r31); // lwz @ 0x8073EB60
    r4 = r31 + 0x72c; // 0x8073EB64
    r12 = *(0 + r3); // lwz @ 0x8073EB68
    r12 = *(0x70 + r12); // lwz @ 0x8073EB6C
    /* mtctr r12 */ // 0x8073EB70
    /* bctrl  */ // 0x8073EB74
    r3 = *(0x320 + r31); // lwz @ 0x8073EB78
    r12 = *(0 + r3); // lwz @ 0x8073EB7C
    r12 = *(0x80 + r12); // lwz @ 0x8073EB80
    /* mtctr r12 */ // 0x8073EB84
    /* bctrl  */ // 0x8073EB88
    r0 = *(0x64 + r1); // lwz @ 0x8073EB8C
    r31 = *(0x5c + r1); // lwz @ 0x8073EB90
    return;
}