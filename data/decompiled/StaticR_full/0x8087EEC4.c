/* Function at 0x8087EEC4, size=648 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 7 function(s) */

int FUN_8087EEC4(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x8087EED8
    r29 = r3;
    r3 = r4;
    FUN_808CFF20(r3); // bl 0x808CFF20
    r30 = r3;
    if (==) goto 0x0x8087f028;
    /* lis r31, 0 */ // 0x8087EEF4
    r3 = r29;
    r31 = r31 + 0; // 0x8087EEFC
    r5 = r30;
    r4 = r31 + 0xac; // 0x8087EF04
    FUN_806A0D70(r3, r5, r4); // bl 0x806A0D70
    r3 = r29;
    r5 = r30;
    r4 = r31 + 0xbb; // 0x8087EF14
    FUN_806A0D70(r4, r3, r5, r4); // bl 0x806A0D70
    r4 = r31 + 0xc6; // 0x8087EF1C
    r3 = r29 + 0xa8; // 0x8087EF20
    FUN_80665D1C(r5, r4, r4, r3); // bl 0x80665D1C
    r30 = r3;
    if (!=) goto 0x0x8087ef3c;
    /* li r30, 0 */ // 0x8087EF34
    /* b 0x8087ef8c */ // 0x8087EF38
    /* lis r31, 0 */ // 0x8087EF3C
    r31 = r31 + 0; // 0x8087EF40
    if (==) goto 0x0x8087ef88;
    r12 = *(0 + r3); // lwz @ 0x8087EF48
    r12 = *(0xc + r12); // lwz @ 0x8087EF4C
    /* mtctr r12 */ // 0x8087EF50
    /* bctrl  */ // 0x8087EF54
    /* b 0x8087ef70 */ // 0x8087EF58
    if (!=) goto 0x0x8087ef6c;
    /* li r0, 1 */ // 0x8087EF64
    /* b 0x8087ef7c */ // 0x8087EF68
    r3 = *(0 + r3); // lwz @ 0x8087EF6C
    if (!=) goto 0x0x8087ef5c;
    /* li r0, 0 */ // 0x8087EF78
    if (==) goto 0x0x8087ef88;
    /* b 0x8087ef8c */ // 0x8087EF84
    /* li r30, 0 */ // 0x8087EF88
    r0 = *(0xbb + r30); // lbz @ 0x8087EF8C
    /* lis r4, 0 */ // 0x8087EF90
    r4 = r4 + 0; // 0x8087EF94
    r3 = r29 + 0xa8; // 0x8087EF98
    r0 = r0 rlwinm 0; // rlwinm
    r0 = r0 | 1; // 0x8087EFA0
    *(0xbb + r30) = r0; // stb @ 0x8087EFA4
    r4 = r4 + 0xd5; // 0x8087EFA8
    FUN_80665D1C(r3, r4); // bl 0x80665D1C
    r31 = r3;
    if (!=) goto 0x0x8087efc4;
    /* li r31, 0 */ // 0x8087EFBC
    /* b 0x8087f014 */ // 0x8087EFC0
    /* lis r30, 0 */ // 0x8087EFC4
    r30 = r30 + 0; // 0x8087EFC8
    if (==) goto 0x0x8087f010;
    r12 = *(0 + r3); // lwz @ 0x8087EFD0
    r12 = *(0xc + r12); // lwz @ 0x8087EFD4
    /* mtctr r12 */ // 0x8087EFD8
    /* bctrl  */ // 0x8087EFDC
    /* b 0x8087eff8 */ // 0x8087EFE0
    if (!=) goto 0x0x8087eff4;
    /* li r0, 1 */ // 0x8087EFEC
    /* b 0x8087f004 */ // 0x8087EFF0
    r3 = *(0 + r3); // lwz @ 0x8087EFF4
    if (!=) goto 0x0x8087efe4;
    /* li r0, 0 */ // 0x8087F000
    if (==) goto 0x0x8087f010;
    /* b 0x8087f014 */ // 0x8087F00C
    /* li r31, 0 */ // 0x8087F010
    r0 = *(0xbb + r31); // lbz @ 0x8087F014
    r0 = r0 rlwinm 0; // rlwinm
    r0 = r0 | 1; // 0x8087F01C
    *(0xbb + r31) = r0; // stb @ 0x8087F020
    /* b 0x8087f130 */ // 0x8087F024
    /* lis r4, 0 */ // 0x8087F028
    r3 = r29 + 0xa8; // 0x8087F02C
    r4 = r4 + 0; // 0x8087F030
    r4 = r4 + 0xe0; // 0x8087F034
    FUN_80665D1C(r4, r3, r4, r4); // bl 0x80665D1C
    r31 = r3;
    if (!=) goto 0x0x8087f050;
    /* li r31, 0 */ // 0x8087F048
    /* b 0x8087f0a0 */ // 0x8087F04C
    /* lis r30, 0 */ // 0x8087F050
    r30 = r30 + 0; // 0x8087F054
    if (==) goto 0x0x8087f09c;
    r12 = *(0 + r3); // lwz @ 0x8087F05C
    r12 = *(0xc + r12); // lwz @ 0x8087F060
    /* mtctr r12 */ // 0x8087F064
    /* bctrl  */ // 0x8087F068
    /* b 0x8087f084 */ // 0x8087F06C
    if (!=) goto 0x0x8087f080;
    /* li r0, 1 */ // 0x8087F078
    /* b 0x8087f090 */ // 0x8087F07C
    r3 = *(0 + r3); // lwz @ 0x8087F080
    if (!=) goto 0x0x8087f070;
    /* li r0, 0 */ // 0x8087F08C
    if (==) goto 0x0x8087f09c;
    /* b 0x8087f0a0 */ // 0x8087F098
    /* li r31, 0 */ // 0x8087F09C
    r0 = *(0xbb + r31); // lbz @ 0x8087F0A0
    /* lis r4, 0 */ // 0x8087F0A4
    r4 = r4 + 0; // 0x8087F0A8
    r3 = r29 + 0xa8; // 0x8087F0AC
    r0 = r0 rlwinm 0; // rlwinm
    *(0xbb + r31) = r0; // stb @ 0x8087F0B4
    r4 = r4 + 0xef; // 0x8087F0B8
    FUN_80665D1C(r4, r3, r4); // bl 0x80665D1C
    r31 = r3;
    if (!=) goto 0x0x8087f0d4;
    /* li r31, 0 */ // 0x8087F0CC
    /* b 0x8087f124 */ // 0x8087F0D0
    /* lis r30, 0 */ // 0x8087F0D4
    r30 = r30 + 0; // 0x8087F0D8
    if (==) goto 0x0x8087f120;
    r12 = *(0 + r3); // lwz @ 0x8087F0E0
    r12 = *(0xc + r12); // lwz @ 0x8087F0E4
    /* mtctr r12 */ // 0x8087F0E8
    /* bctrl  */ // 0x8087F0EC
    /* b 0x8087f108 */ // 0x8087F0F0
    if (!=) goto 0x0x8087f104;
    /* li r0, 1 */ // 0x8087F0FC
    /* b 0x8087f114 */ // 0x8087F100
    r3 = *(0 + r3); // lwz @ 0x8087F104
    if (!=) goto 0x0x8087f0f4;
    /* li r0, 0 */ // 0x8087F110
    if (==) goto 0x0x8087f120;
    /* b 0x8087f124 */ // 0x8087F11C
    /* li r31, 0 */ // 0x8087F120
    r0 = *(0xbb + r31); // lbz @ 0x8087F124
    r0 = r0 rlwinm 0; // rlwinm
    *(0xbb + r31) = r0; // stb @ 0x8087F12C
    r0 = *(0x24 + r1); // lwz @ 0x8087F130
    r31 = *(0x1c + r1); // lwz @ 0x8087F134
    r30 = *(0x18 + r1); // lwz @ 0x8087F138
    r29 = *(0x14 + r1); // lwz @ 0x8087F13C
    return;
}