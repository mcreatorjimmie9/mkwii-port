/* Function at 0x80603F94, size=324 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 7 function(s) */

int FUN_80603F94(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x80603FA8
    r30 = r4;
    r12 = *(0xc + r3); // lwz @ 0x80603FB0
    r4 = *(0x14 + r3); // lwz @ 0x80603FB4
    r12 = *(0x10 + r12); // lwz @ 0x80603FB8
    /* mtctr r12 */ // 0x80603FBC
    /* bctrl  */ // 0x80603FC0
    r5 = *(0x14 + r31); // lwz @ 0x80603FC4
    r3 = r31;
    r4 = r30;
    FUN_80603A6C(r3, r4); // bl 0x80603A6C
    r3 = r31;
    FUN_8061E2BC(r3, r4, r3); // bl 0x8061E2BC
    r12 = *(0x20 + r3); // lwz @ 0x80603FDC
    r5 = *(0x18 + r31); // lbz @ 0x80603FE0
    r12 = *(0x1c + r12); // lwz @ 0x80603FE4
    /* extsb r5, r5 */ // 0x80603FE8
    r4 = *(0x14 + r31); // lwz @ 0x80603FEC
    /* mtctr r12 */ // 0x80603FF0
    /* bctrl  */ // 0x80603FF4
    r3 = r31;
    /* li r4, 0xb */ // 0x80603FFC
    FUN_8061E02C(r3, r4); // bl 0x8061E02C
    r4 = *(0 + r31); // lwz @ 0x80604004
    /* li r3, 5 */ // 0x80604008
    /* li r0, 0 */ // 0x8060400C
    r5 = *(4 + r4); // lwz @ 0x80604010
    r4 = *(8 + r5); // lwz @ 0x80604014
    r4 = r4 | 0x40; // 0x80604018
    *(8 + r5) = r4; // stw @ 0x8060401C
    *(0x38 + r31) = r3; // sth @ 0x80604020
    r3 = *(0 + r31); // lwz @ 0x80604024
    r3 = *(4 + r3); // lwz @ 0x80604028
    *(0xa6 + r3) = r0; // sth @ 0x8060402C
    r3 = *(0 + r31); // lwz @ 0x80604030
    r3 = *(0 + r3); // lwz @ 0x80604034
    r4 = *(0x38 + r3); // lwz @ 0x80604038
    if (==) goto 0x0x80604050;
    r3 = *(0x10 + r4); // lwz @ 0x80604044
    r0 = r3 + 1; // 0x80604048
    *(0x10 + r4) = r0; // stw @ 0x8060404C
    r3 = r31;
    /* li r4, 3 */ // 0x80604054
    /* li r5, 0 */ // 0x80604058
    /* li r6, 1 */ // 0x8060405C
    FUN_8061E8C0(r3, r4, r5, r6); // bl 0x8061E8C0
    r3 = *(0 + r31); // lwz @ 0x80604064
    r3 = *(4 + r3); // lwz @ 0x80604068
    r0 = *(0x14 + r3); // lwz @ 0x8060406C
    /* rlwinm. r0, r0, 0, 0x1d, 0x1d */ // 0x80604070
    if (==) goto 0x0x806040ac;
    r0 = *(0x14 + r31); // lwz @ 0x80604078
    r3 = r31;
    /* extsb r30, r0 */ // 0x80604080
    FUN_8061ECBC(r3); // bl 0x8061ECBC
    *(0x54 + r3) = r30; // stb @ 0x80604088
    r3 = r31;
    r0 = *(0x18 + r31); // lbz @ 0x80604090
    /* extsb r30, r0 */ // 0x80604094
    FUN_8061ECBC(r3); // bl 0x8061ECBC
    *(0x55 + r3) = r30; // stb @ 0x8060409C
    r3 = r31;
    /* li r4, 9 */ // 0x806040A4
    FUN_8061F070(r3, r4); // bl 0x8061F070
    r3 = *(0x4c + r31); // lwz @ 0x806040AC
    r12 = *(0xc + r3); // lwz @ 0x806040B0
    r12 = *(0x70 + r12); // lwz @ 0x806040B4
    /* mtctr r12 */ // 0x806040B8
    /* bctrl  */ // 0x806040BC
    r0 = *(0x14 + r1); // lwz @ 0x806040C0
    r31 = *(0xc + r1); // lwz @ 0x806040C4
    r30 = *(8 + r1); // lwz @ 0x806040C8
    return;
}