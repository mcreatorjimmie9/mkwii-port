/* Function at 0x8060E8E4, size=764 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 19 function(s) */

int FUN_8060E8E4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x8060E8F8
    r4 = *(0x152 + r3); // lha @ 0x8060E8FC
    r0 = r4 + -1; // 0x8060E900
    *(0x152 + r3) = r0; // sth @ 0x8060E904
    /* extsh. r0, r0 */ // 0x8060E908
    if (>=) goto 0x0x8060e920;
    /* li r0, 0 */ // 0x8060E910
    *(0x152 + r3) = r0; // sth @ 0x8060E914
    /* li r0, 1 */ // 0x8060E918
    /* b 0x8060e924 */ // 0x8060E91C
    /* li r0, 0 */ // 0x8060E920
    if (==) goto 0x0x8060e994;
    r3 = r31;
    FUN_8061DC70(r3); // bl 0x8061DC70
    r0 = *(0x3a + r3); // lbz @ 0x8060E934
    if (!=) goto 0x0x8060e994;
    r3 = r31;
    FUN_8061E620(r3); // bl 0x8061E620
    if (==) goto 0x0x8060e960;
    /* lis r3, 0 */ // 0x8060E950
    r0 = *(0 + r3); // lha @ 0x8060E954
    *(0x152 + r31) = r0; // sth @ 0x8060E958
    /* b 0x8060e994 */ // 0x8060E95C
    r3 = r31;
    FUN_8061E59C(r3, r3); // bl 0x8061E59C
    /* lis r4, 0 */ // 0x8060E968
    r3 = *(0xc4 + r3); // lwz @ 0x8060E96C
    r0 = *(0 + r4); // lha @ 0x8060E970
    if (>=) goto 0x0x8060e994;
    r3 = r31;
    FUN_8061E59C(r3); // bl 0x8061E59C
    r12 = *(0xc + r3); // lwz @ 0x8060E984
    r12 = *(0x10 + r12); // lwz @ 0x8060E988
    /* mtctr r12 */ // 0x8060E98C
    /* bctrl  */ // 0x8060E990
    r3 = r31;
    FUN_8061E59C(r3); // bl 0x8061E59C
    FUN_805F726C(r3); // bl 0x805F726C
    if (==) goto 0x0x8060e9e8;
    r3 = r31;
    FUN_8061E2D8(r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x8060E9B0
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x8060E9B8
    r3 = *(0x68 + r3); // lwz @ 0x8060E9BC
    /* lwzx r3, r3, r0 */ // 0x8060E9C0
    FUN_80739DE0(r4); // bl 0x80739DE0
    r3 = *(0 + r31); // lwz @ 0x8060E9C8
    r3 = *(4 + r3); // lwz @ 0x8060E9CC
    r0 = *(4 + r3); // lwz @ 0x8060E9D0
    /* rlwinm. r0, r0, 0, 0xd, 0xd */ // 0x8060E9D4
    if (==) goto 0x0x8060e9e8;
    r3 = r31;
    /* li r4, 0xb */ // 0x8060E9E0
    FUN_8061E5D8(r3, r4); // bl 0x8061E5D8
    r3 = r31;
    FUN_8061E620(r3, r4, r3); // bl 0x8061E620
    if (!=) goto 0x0x8060ebc0;
    r3 = r31;
    FUN_8061E59C(r3, r3); // bl 0x8061E59C
    /* lis r4, 0 */ // 0x8060EA00
    r0 = *(0xc4 + r3); // lwz @ 0x8060EA04
    r3 = *(0 + r4); // lha @ 0x8060EA08
    if (!=) goto 0x0x8060ebc0;
    r3 = r31;
    FUN_8061E59C(r3); // bl 0x8061E59C
    r0 = *(0xcc + r3); // lhz @ 0x8060EA1C
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x8060EA20
    if (!=) goto 0x0x8060eb8c;
    r3 = r31;
    FUN_8061E2D8(r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x8060EA30
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x8060EA38
    r3 = *(0x68 + r3); // lwz @ 0x8060EA3C
    /* lwzx r3, r3, r0 */ // 0x8060EA40
    FUN_8073A0E4(r4); // bl 0x8073A0E4
    /* lis r3, 0 */ // 0x8060EA48
    /* li r4, 0 */ // 0x8060EA4C
    r5 = *(0 + r3); // lwz @ 0x8060EA50
    r3 = *(0xb70 + r5); // lwz @ 0x8060EA54
    r3 = r3 + -3; // 0x8060EA58
    if (>) goto 0x0x8060ea78;
    /* li r0, 1 */ // 0x8060EA64
    r0 = r0 << r3; // slw
    /* andi. r0, r0, 0xc1 */ // 0x8060EA6C
    if (==) goto 0x0x8060ea78;
    /* li r4, 1 */ // 0x8060EA74
    if (==) goto 0x0x8060ebac;
    r3 = *(0 + r31); // lwz @ 0x8060EA80
    r3 = *(4 + r3); // lwz @ 0x8060EA84
    r0 = *(0x14 + r3); // lwz @ 0x8060EA88
    /* rlwinm. r0, r0, 0, 0x1c, 0x1c */ // 0x8060EA8C
    if (!=) goto 0x0x8060ebac;
    r0 = *(0xb78 + r5); // lwz @ 0x8060EA94
    if (!=) goto 0x0x8060ebac;
    r3 = r31;
    FUN_8061E2D8(r3); // bl 0x8061E2D8
    r30 = r3;
    r3 = r31;
    FUN_8061E2D8(r3, r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x8060EAB4
    /* lis r5, 0 */ // 0x8060EAB8
    r4 = *(0 + r4); // lwz @ 0x8060EABC
    r0 = r3;
    r3 = *(0 + r5); // lwz @ 0x8060EAC4
    r5 = *(0xb70 + r4); // lwz @ 0x8060EAC8
    if (!=) goto 0x0x8060eb28;
    r4 = *(0xb78 + r4); // lwz @ 0x8060EAD4
    if (!=) goto 0x0x8060eb00;
    r3 = *(0x10 + r3); // lwz @ 0x8060EAE0
    /* clrlwi r4, r0, 0x18 */ // 0x8060EAE4
    /* clrlwi r5, r30, 0x18 */ // 0x8060EAE8
    r12 = *(0 + r3); // lwz @ 0x8060EAEC
    r12 = *(0x2c + r12); // lwz @ 0x8060EAF0
    /* mtctr r12 */ // 0x8060EAF4
    /* bctrl  */ // 0x8060EAF8
    /* b 0x8060ebac */ // 0x8060EAFC
    if (!=) goto 0x0x8060ebac;
    r3 = *(0x10 + r3); // lwz @ 0x8060EB08
    /* clrlwi r4, r0, 0x18 */ // 0x8060EB0C
    /* clrlwi r5, r30, 0x18 */ // 0x8060EB10
    r12 = *(0 + r3); // lwz @ 0x8060EB14
    r12 = *(0x2c + r12); // lwz @ 0x8060EB18
    /* mtctr r12 */ // 0x8060EB1C
    /* bctrl  */ // 0x8060EB20
    /* b 0x8060ebac */ // 0x8060EB24
    if (==) goto 0x0x8060eb38;
    if (!=) goto 0x0x8060ebac;
    r4 = *(0xb78 + r4); // lwz @ 0x8060EB38
    if (!=) goto 0x0x8060eb64;
    r3 = *(0x10 + r3); // lwz @ 0x8060EB44
    /* clrlwi r4, r0, 0x18 */ // 0x8060EB48
    /* clrlwi r5, r30, 0x18 */ // 0x8060EB4C
    r12 = *(0 + r3); // lwz @ 0x8060EB50
    r12 = *(0x2c + r12); // lwz @ 0x8060EB54
    /* mtctr r12 */ // 0x8060EB58
    /* bctrl  */ // 0x8060EB5C
    /* b 0x8060ebac */ // 0x8060EB60
    if (!=) goto 0x0x8060ebac;
    r3 = *(0x10 + r3); // lwz @ 0x8060EB6C
    /* clrlwi r4, r0, 0x18 */ // 0x8060EB70
    /* clrlwi r5, r30, 0x18 */ // 0x8060EB74
    r12 = *(0 + r3); // lwz @ 0x8060EB78
    r12 = *(0x2c + r12); // lwz @ 0x8060EB7C
    /* mtctr r12 */ // 0x8060EB80
    /* bctrl  */ // 0x8060EB84
    /* b 0x8060ebac */ // 0x8060EB88
    r3 = r31;
    FUN_8061E2D8(r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x8060EB94
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x8060EB9C
    r3 = *(0x68 + r3); // lwz @ 0x8060EBA0
    /* lwzx r3, r3, r0 */ // 0x8060EBA4
    FUN_8073A5A0(r4); // bl 0x8073A5A0
    r3 = r31;
    FUN_8061F15C(r3); // bl 0x8061F15C
    /* li r0, 1 */ // 0x8060EBB4
    *(0x154 + r31) = r0; // stb @ 0x8060EBB8
    /* b 0x8060ebc8 */ // 0x8060EBBC
    /* li r0, 0 */ // 0x8060EBC0
    *(0x154 + r31) = r0; // stb @ 0x8060EBC4
    r0 = *(0x14 + r1); // lwz @ 0x8060EBC8
    r31 = *(0xc + r1); // lwz @ 0x8060EBCC
    r30 = *(8 + r1); // lwz @ 0x8060EBD0
    return;
}