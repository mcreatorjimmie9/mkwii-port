/* Function at 0x80614E0C, size=936 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 20 function(s) */

int FUN_80614E0C(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x80614E14
    *(0xc + r1) = r31; // stw @ 0x80614E1C
    *(8 + r1) = r30; // stw @ 0x80614E20
    r30 = r3;
    r3 = *(0 + r4); // lwz @ 0x80614E28
    /* li r4, 2 */ // 0x80614E2C
    FUN_805C5788(r4); // bl 0x805C5788
    if (==) goto 0x0x8061519c;
    r0 = *(0x250 + r30); // lwz @ 0x80614E3C
    /* clrlwi. r0, r0, 0x1f */ // 0x80614E40
    if (==) goto 0x0x80615020;
    r4 = *(0 + r30); // lwz @ 0x80614E48
    /* lis r3, 0x80c */ // 0x80614E4C
    r0 = r3 + 0x100; // 0x80614E50
    /* li r5, 1 */ // 0x80614E54
    r7 = *(4 + r4); // lwz @ 0x80614E58
    /* li r4, 1 */ // 0x80614E5C
    /* li r6, 1 */ // 0x80614E60
    r3 = *(0xc + r7); // lwz @ 0x80614E64
    /* and. r0, r3, r0 */ // 0x80614E68
    if (!=) goto 0x0x80614e80;
    r0 = *(4 + r7); // lwz @ 0x80614E70
    /* rlwinm. r0, r0, 0, 0x1b, 0x1b */ // 0x80614E74
    if (!=) goto 0x0x80614e80;
    /* li r6, 0 */ // 0x80614E7C
    if (!=) goto 0x0x80614e98;
    r0 = *(0x14 + r7); // lwz @ 0x80614E88
    /* rlwinm. r0, r0, 0, 0x18, 0x18 */ // 0x80614E8C
    if (!=) goto 0x0x80614e98;
    /* li r4, 0 */ // 0x80614E94
    if (!=) goto 0x0x80614eb0;
    r0 = *(8 + r7); // lwz @ 0x80614EA0
    /* clrlwi. r0, r0, 0x1f */ // 0x80614EA4
    if (!=) goto 0x0x80614eb0;
    /* li r5, 0 */ // 0x80614EAC
    if (!=) goto 0x0x80615020;
    /* lis r4, 0 */ // 0x80614EB8
    r3 = r30;
    r31 = *(0 + r4); // lha @ 0x80614EC0
    FUN_8061E2D8(r4, r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x80614EC8
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x80614ED0
    r3 = *(0x68 + r3); // lwz @ 0x80614ED4
    /* lwzx r3, r3, r0 */ // 0x80614ED8
    FUN_80733560(r4); // bl 0x80733560
    r3 = r30;
    FUN_8061E010(r3); // bl 0x8061E010
    FUN_807962A8(r3); // bl 0x807962A8
    r0 = *(0x118 + r30); // lhz @ 0x80614EEC
    /* li r4, 0 */ // 0x80614EF0
    /* rlwinm. r0, r0, 0, 0x1d, 0x1d */ // 0x80614EF4
    if (==) goto 0x0x80614f08;
    r0 = *(0x110 + r30); // lha @ 0x80614EFC
    if (<=) goto 0x0x80614f2c;
    r0 = *(0x118 + r30); // lhz @ 0x80614F08
    /* lis r3, 0 */ // 0x80614F0C
    *(0x110 + r30) = r31; // sth @ 0x80614F10
    r3 = r3 + 0; // 0x80614F14
    r0 = r0 | 4; // 0x80614F18
    /* li r4, 1 */ // 0x80614F1C
    *(0x118 + r30) = r0; // sth @ 0x80614F20
    /* lfs f0, 8(r3) */ // 0x80614F24
    /* stfs f0, 0x124(r30) */ // 0x80614F28
    if (==) goto 0x0x80614fa4;
    r4 = *(0 + r30); // lwz @ 0x80614F34
    r3 = r30;
    r4 = *(4 + r4); // lwz @ 0x80614F3C
    r0 = *(4 + r4); // lwz @ 0x80614F40
    r0 = r0 | 0x10; // 0x80614F44
    *(4 + r4) = r0; // stw @ 0x80614F48
    /* lfs f1, 0x124(r30) */ // 0x80614F4C
    FUN_8061E6BC(); // bl 0x8061E6BC
    r3 = r30;
    /* li r4, 6 */ // 0x80614F58
    FUN_8061E02C(r3, r4); // bl 0x8061E02C
    r3 = r30;
    FUN_8061E2D8(r3, r4, r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x80614F68
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x80614F70
    /* clrlwi r4, r31, 0x10 */ // 0x80614F74
    r3 = *(0x68 + r3); // lwz @ 0x80614F78
    /* lwzx r3, r3, r0 */ // 0x80614F7C
    FUN_807336DC(); // bl 0x807336DC
    r3 = r30;
    FUN_8061E2BC(r3); // bl 0x8061E2BC
    FUN_80859398(r3); // bl 0x80859398
    r3 = r30;
    /* li r4, 4 */ // 0x80614F94
    /* li r5, 0 */ // 0x80614F98
    /* li r6, 1 */ // 0x80614F9C
    FUN_8061E8C0(r3, r4, r5, r6); // bl 0x8061E8C0
    /* lis r3, 0 */ // 0x80614FA4
    r0 = *(0x148 + r30); // lha @ 0x80614FA8
    r3 = *(0 + r3); // lha @ 0x80614FAC
    if (<=) goto 0x0x80614fbc;
    *(0x148 + r30) = r3; // sth @ 0x80614FB8
    r3 = *(0 + r30); // lwz @ 0x80614FBC
    r3 = *(4 + r3); // lwz @ 0x80614FC0
    r0 = *(8 + r3); // lwz @ 0x80614FC4
    r0 = r0 | 0x80; // 0x80614FC8
    *(8 + r3) = r0; // stw @ 0x80614FCC
    r4 = *(0 + r30); // lwz @ 0x80614FD0
    r3 = *(4 + r4); // lwz @ 0x80614FD4
    r0 = *(0xc + r3); // lwz @ 0x80614FD8
    /* rlwinm. r0, r0, 0, 3, 3 */ // 0x80614FDC
    if (==) goto 0x0x80615020;
    r5 = *(4 + r4); // lwz @ 0x80614FE4
    /* li r0, 0 */ // 0x80614FE8
    r3 = r30;
    r4 = *(0xc + r5); // lwz @ 0x80614FF0
    r4 = r4 rlwinm 0; // rlwinm
    *(0xc + r5) = r4; // stw @ 0x80614FF8
    *(0x18e + r30) = r0; // sth @ 0x80614FFC
    FUN_8061E2D8(r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x80615004
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x8061500C
    /* li r4, 1 */ // 0x80615010
    r3 = *(0x68 + r3); // lwz @ 0x80615014
    /* lwzx r3, r3, r0 */ // 0x80615018
    *(0x10d + r3) = r4; // stb @ 0x8061501C
    r0 = *(0x250 + r30); // lwz @ 0x80615020
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x80615024
    if (==) goto 0x0x80615174;
    r7 = *(0 + r30); // lwz @ 0x8061502C
    /* lis r3, 0x80c */ // 0x80615030
    r0 = r3 + 0x100; // 0x80615034
    /* li r4, 1 */ // 0x80615038
    r8 = *(4 + r7); // lwz @ 0x8061503C
    /* li r5, 1 */ // 0x80615040
    /* li r6, 1 */ // 0x80615044
    r3 = *(0xc + r8); // lwz @ 0x80615048
    /* and. r0, r3, r0 */ // 0x8061504C
    if (!=) goto 0x0x80615064;
    r0 = *(4 + r8); // lwz @ 0x80615054
    /* rlwinm. r0, r0, 0, 0x1b, 0x1b */ // 0x80615058
    if (!=) goto 0x0x80615064;
    /* li r6, 0 */ // 0x80615060
    if (!=) goto 0x0x8061507c;
    r0 = *(0x14 + r8); // lwz @ 0x8061506C
    /* rlwinm. r0, r0, 0, 0x18, 0x18 */ // 0x80615070
    if (!=) goto 0x0x8061507c;
    /* li r5, 0 */ // 0x80615078
    if (!=) goto 0x0x80615094;
    r0 = *(8 + r8); // lwz @ 0x80615084
    /* clrlwi. r0, r0, 0x1f */ // 0x80615088
    if (!=) goto 0x0x80615094;
    /* li r4, 0 */ // 0x80615090
    if (!=) goto 0x0x80615174;
    r4 = *(4 + r7); // lwz @ 0x8061509C
    /* lis r3, 0 */ // 0x806150A0
    r0 = *(4 + r4); // lwz @ 0x806150A4
    r0 = r0 | 0x8000; // 0x806150A8
    *(4 + r4) = r0; // stw @ 0x806150AC
    r3 = *(0 + r3); // lha @ 0x806150B0
    r0 = *(0x148 + r30); // lha @ 0x806150B4
    *(0x1c4 + r30) = r3; // sth @ 0x806150B8
    if (<=) goto 0x0x806150c8;
    *(0x148 + r30) = r3; // sth @ 0x806150C4
    r4 = *(0 + r30); // lwz @ 0x806150C8
    r3 = r30;
    r4 = *(4 + r4); // lwz @ 0x806150D0
    r0 = *(8 + r4); // lwz @ 0x806150D4
    r0 = r0 | 0x80; // 0x806150D8
    *(8 + r4) = r0; // stw @ 0x806150DC
    FUN_8061E010(r3); // bl 0x8061E010
    FUN_80796444(); // bl 0x80796444
    r3 = r30;
    FUN_8061E2D8(r3); // bl 0x8061E2D8
    /* lis r31, 0 */ // 0x806150F0
    /* lis r4, 0 */ // 0x806150F4
    r5 = *(0 + r31); // lwz @ 0x806150F8
    r0 = r3 rlwinm 2; // rlwinm
    r4 = *(0 + r4); // lhz @ 0x80615100
    r3 = *(0x68 + r5); // lwz @ 0x80615104
    /* lwzx r3, r3, r0 */ // 0x80615108
    FUN_807336DC(); // bl 0x807336DC
    /* lis r4, 0 */ // 0x80615110
    r3 = r30;
    /* lfs f1, 0(r4) */ // 0x80615118
    /* li r4, 4 */ // 0x8061511C
    /* li r5, 1 */ // 0x80615120
    FUN_8061DC98(r4, r3, r4, r5); // bl 0x8061DC98
    r4 = *(0 + r30); // lwz @ 0x80615128
    r3 = *(4 + r4); // lwz @ 0x8061512C
    r0 = *(0xc + r3); // lwz @ 0x80615130
    /* rlwinm. r0, r0, 0, 3, 3 */ // 0x80615134
    if (==) goto 0x0x80615174;
    r5 = *(4 + r4); // lwz @ 0x8061513C
    /* li r0, 0 */ // 0x80615140
    r3 = r30;
    r4 = *(0xc + r5); // lwz @ 0x80615148
    r4 = r4 rlwinm 0; // rlwinm
    *(0xc + r5) = r4; // stw @ 0x80615150
    *(0x18e + r30) = r0; // sth @ 0x80615154
    FUN_8061E2D8(r3); // bl 0x8061E2D8
    r4 = *(0 + r31); // lwz @ 0x8061515C
    r0 = r3 rlwinm 2; // rlwinm
    /* li r5, 1 */ // 0x80615164
    r3 = *(0x68 + r4); // lwz @ 0x80615168
    /* lwzx r3, r3, r0 */ // 0x8061516C
    *(0x10d + r3) = r5; // stb @ 0x80615170
    r0 = *(0x250 + r30); // lwz @ 0x80615174
    /* rlwinm. r0, r0, 0, 0x1d, 0x1d */ // 0x80615178
    if (==) goto 0x0x80615194;
    r4 = *(0 + r30); // lwz @ 0x80615180
    r3 = r30;
    r4 = *(4 + r4); // lwz @ 0x80615188
    r4 = *(0x78 + r4); // lwz @ 0x8061518C
    FUN_8060D554(r3); // bl 0x8060D554
    /* li r0, 0 */ // 0x80615194
    *(0x250 + r30) = r0; // stw @ 0x80615198
    r0 = *(0x14 + r1); // lwz @ 0x8061519C
    r31 = *(0xc + r1); // lwz @ 0x806151A0
    r30 = *(8 + r1); // lwz @ 0x806151A4
    return;
}