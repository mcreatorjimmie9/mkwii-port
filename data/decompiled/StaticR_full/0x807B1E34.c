/* Function at 0x807B1E34, size=472 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 8 function(s) */

int FUN_807B1E34(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r3;
    *(0x34 + r1) = r29; // stw @ 0x807B1E4C
    *(0x30 + r1) = r28; // stw @ 0x807B1E50
    r0 = *(0x1fc + r3); // lwz @ 0x807B1E54
    if (==) goto 0x0x807b1e88;
    r3 = r0;
    FUN_807B56CC(r3); // bl 0x807B56CC
    if (==) goto 0x0x807b1e88;
    r5 = *(0x1fc + r31); // lwz @ 0x807B1E70
    /* li r0, 0 */ // 0x807B1E74
    r3 = r31 + 0x60; // 0x807B1E78
    r4 = r31 + 0x11c; // 0x807B1E7C
    *(5 + r5) = r0; // stb @ 0x807B1E80
    FUN_807CF1B4(r3, r4); // bl 0x807CF1B4
    r3 = *(0x200 + r31); // lwz @ 0x807B1E88
    if (==) goto 0x0x807b1ea4;
    r12 = *(0 + r3); // lwz @ 0x807B1E94
    r12 = *(0x10 + r12); // lwz @ 0x807B1E98
    /* mtctr r12 */ // 0x807B1E9C
    /* bctrl  */ // 0x807B1EA0
    r3 = *(0x204 + r31); // lwz @ 0x807B1EA4
    if (==) goto 0x0x807b1ec0;
    r12 = *(0 + r3); // lwz @ 0x807B1EB0
    r12 = *(0x10 + r12); // lwz @ 0x807B1EB4
    /* mtctr r12 */ // 0x807B1EB8
    /* bctrl  */ // 0x807B1EBC
    r12 = *(0x94 + r31); // lwz @ 0x807B1EC0
    r3 = r31 + 0x60; // 0x807B1EC4
    r12 = *(0xc + r12); // lwz @ 0x807B1EC8
    /* mtctr r12 */ // 0x807B1ECC
    /* bctrl  */ // 0x807B1ED0
    r3 = r31 + 0x60; // 0x807B1ED4
    r4 = r31 + 0x98; // 0x807B1ED8
    FUN_807CF1A0(r3, r4); // bl 0x807CF1A0
    if (!=) goto 0x0x807b1fec;
    r3 = *(0x208 + r31); // lwz @ 0x807B1EE8
    /* li r29, 0 */ // 0x807B1EEC
    r28 = *(4 + r31); // lwz @ 0x807B1EF0
    r30 = r3 + 0xb8; // 0x807B1EF4
    r3 = *(0x14 + r28); // lwz @ 0x807B1EF8
    r3 = *(0 + r3); // lwz @ 0x807B1EFC
    if (==) goto 0x0x807b1f14;
    r5 = r30;
    /* li r4, 0 */ // 0x807B1F0C
    FUN_805E3430(r5, r4); // bl 0x805E3430
    r29 = r29 + 1; // 0x807B1F14
    r28 = r28 + 4; // 0x807B1F18
    if (<) goto 0x0x807b1ef8;
    r4 = *(0x208 + r31); // lwz @ 0x807B1F24
    r3 = r31;
    r4 = r4 + 0xb8; // 0x807B1F2C
    FUN_807B2BDC(r3, r4); // bl 0x807B2BDC
    /* lis r3, 0 */ // 0x807B1F34
    /* lis r4, 0 */ // 0x807B1F38
    /* lfs f0, 0(r4) */ // 0x807B1F3C
    /* li r29, 0 */ // 0x807B1F40
    /* lfs f1, 0(r3) */ // 0x807B1F44
    /* lis r3, 0 */ // 0x807B1F48
    /* lis r5, 0 */ // 0x807B1F4C
    /* lis r30, 0x20e8 */ // 0x807B1F50
    /* stfs f0, 0xc(r1) */ // 0x807B1F54
    r4 = r31 + 0x1d4; // 0x807B1F58
    r3 = *(0 + r3); // lwz @ 0x807B1F5C
    r5 = r5 + 0; // 0x807B1F60
    /* stfs f0, 0x10(r1) */ // 0x807B1F64
    r6 = r30 + 0xfff; // 0x807B1F68
    /* stfs f0, 0x14(r1) */ // 0x807B1F74
    /* li r9, 0 */ // 0x807B1F78
    /* stfs f0, 0x18(r1) */ // 0x807B1F7C
    /* stfs f0, 0x1c(r1) */ // 0x807B1F80
    /* stfs f0, 0x20(r1) */ // 0x807B1F84
    *(8 + r1) = r29; // stw @ 0x807B1F88
    FUN_8081A3B4(r9); // bl 0x8081A3B4
    if (==) goto 0x0x807b1fd8;
    r0 = *(8 + r1); // lwz @ 0x807B1F98
    r4 = r30 + 0xfff; // 0x807B1F9C
    /* and. r0, r0, r4 */ // 0x807B1FA0
    if (==) goto 0x0x807b1fb4;
    FUN_80842FAC(r4, r3); // bl 0x80842FAC
    /* b 0x807b1fb8 */ // 0x807B1FB0
    r3 = r29;
    if (==) goto 0x0x807b1fd8;
    /* lis r4, 0 */ // 0x807B1FC0
    r3 = *(0x20c + r31); // lwz @ 0x807B1FC4
    r4 = *(0 + r4); // lwz @ 0x807B1FC8
    r0 = *(4 + r4); // lhz @ 0x807B1FCC
    r0 = r0 rlwinm 0x18; // rlwinm
    *(0x21 + r3) = r0; // stb @ 0x807B1FD4
    r0 = *(0x1e0 + r31); // lbz @ 0x807B1FD8
    if (==) goto 0x0x807b1fec;
    r3 = r31;
    FUN_807B3030(r3); // bl 0x807B3030
    r0 = *(0x44 + r1); // lwz @ 0x807B1FEC
    r31 = *(0x3c + r1); // lwz @ 0x807B1FF0
    r30 = *(0x38 + r1); // lwz @ 0x807B1FF4
    r29 = *(0x34 + r1); // lwz @ 0x807B1FF8
    r28 = *(0x30 + r1); // lwz @ 0x807B1FFC
    return;
}