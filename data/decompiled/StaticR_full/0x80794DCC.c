/* Function at 0x80794DCC, size=1096 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 11 function(s) */

int FUN_80794DCC(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x80794DE0
    /* lis r30, 0 */ // 0x80794DE4
    *(0x14 + r1) = r29; // stw @ 0x80794DE8
    r3 = *(0 + r30); // lwz @ 0x80794DEC
    FUN_8069526C(); // bl 0x8069526C
    if (==) goto 0x0x80795524;
    r3 = *(0 + r30); // lwz @ 0x80794DFC
    r0 = r3 + -0x35; // 0x80794E00
    if (<=) goto 0x0x80794e30;
    r0 = r3 + -0x39; // 0x80794E0C
    if (<=) goto 0x0x80795524;
    if (==) goto 0x0x80795524;
    if (==) goto 0x0x80794e30;
    /* b 0x80794e44 */ // 0x80794E28
    /* b 0x80795524 */ // 0x80794E2C
    /* lis r3, 0 */ // 0x80794E30
    r3 = *(0 + r3); // lwz @ 0x80794E34
    r0 = *(0xb74 + r3); // lwz @ 0x80794E38
    if (==) goto 0x0x80795524;
    r3 = r31;
    FUN_8079894C(r3); // bl 0x8079894C
    /* lis r3, 0 */ // 0x80794E4C
    r3 = *(0 + r3); // lwz @ 0x80794E50
    r0 = *(0x14 + r3); // lbz @ 0x80794E54
    if (!=) goto 0x0x80795524;
    r3 = *(0xdc + r31); // lwz @ 0x80794E60
    r4 = *(0 + r3); // lwz @ 0x80794E64
    r4 = *(4 + r4); // lwz @ 0x80794E68
    r0 = *(0xc + r4); // lwz @ 0x80794E6C
    /* rlwinm. r0, r0, 0, 0xc, 0xc */ // 0x80794E70
    if (!=) goto 0x0x80795524;
    r0 = *(0xe0 + r31); // lbz @ 0x80794E78
    if (==) goto 0x0x80794e98;
    /* li r0, 0 */ // 0x80794E84
    *(0xf4 + r31) = r0; // stw @ 0x80794E88
    if (==) goto 0x0x80794e98;
    FUN_807A01C0(); // bl 0x807A01C0
    *(0xf4 + r31) = r3; // stw @ 0x80794E94
    r3 = r31 + 0x94; // 0x80794E98
    FUN_807900C8(r3); // bl 0x807900C8
    r12 = *(0 + r31); // lwz @ 0x80794EA0
    r4 = r3;
    r3 = r31;
    r12 = *(0x30 + r12); // lwz @ 0x80794EAC
    /* mtctr r12 */ // 0x80794EB0
    /* bctrl  */ // 0x80794EB4
    r0 = *(0xe1 + r31); // lbz @ 0x80794EB8
    if (!=) goto 0x0x80795524;
    r3 = *(0xdc + r31); // lwz @ 0x80794EC4
    r3 = *(0 + r3); // lwz @ 0x80794EC8
    r4 = *(4 + r3); // lwz @ 0x80794ECC
    r0 = *(4 + r4); // lwz @ 0x80794ED0
    r3 = *(8 + r4); // lwz @ 0x80794ED4
    /* rlwinm. r30, r0, 0x1c, 0x1f, 0x1f */ // 0x80794ED8
    r0 = *(0xc + r4); // lwz @ 0x80794EDC
    r29 = r3 rlwinm 0x1f; // rlwinm
    r0 = r0 rlwinm 0x13; // rlwinm
    if (!=) goto 0x0x80794efc;
    if (!=) goto 0x0x80794efc;
    if (==) goto 0x0x80794f10;
    r12 = *(0 + r31); // lwz @ 0x80794EFC
    r3 = r31;
    r12 = *(0x100 + r12); // lwz @ 0x80794F04
    /* mtctr r12 */ // 0x80794F08
    /* bctrl  */ // 0x80794F0C
    if (!=) goto 0x0x80795524;
    if (==) goto 0x0x80795184;
    r4 = *(0x80 + r31); // lwz @ 0x80794F20
    /* li r3, 0 */ // 0x80794F24
    if (==) goto 0x0x80794f50;
    if (==) goto 0x0x80794f3c;
    r0 = *(0x90 + r4); // lwz @ 0x80794F34
    /* b 0x80794f40 */ // 0x80794F38
    /* li r0, -1 */ // 0x80794F3C
    if (!=) goto 0x0x80794f50;
    r3 = r31 + 0x80; // 0x80794F48
    /* b 0x80794fd0 */ // 0x80794F4C
    r4 = *(0x84 + r31); // lwz @ 0x80794F50
    if (==) goto 0x0x80794f7c;
    if (==) goto 0x0x80794f68;
    r0 = *(0x90 + r4); // lwz @ 0x80794F60
    /* b 0x80794f6c */ // 0x80794F64
    /* li r0, -1 */ // 0x80794F68
    if (!=) goto 0x0x80794f7c;
    r3 = r31 + 0x84; // 0x80794F74
    /* b 0x80794fd0 */ // 0x80794F78
    r4 = *(0x88 + r31); // lwz @ 0x80794F7C
    if (==) goto 0x0x80794fa8;
    if (==) goto 0x0x80794f94;
    r0 = *(0x90 + r4); // lwz @ 0x80794F8C
    /* b 0x80794f98 */ // 0x80794F90
    /* li r0, -1 */ // 0x80794F94
    if (!=) goto 0x0x80794fa8;
    r3 = r31 + 0x88; // 0x80794FA0
    /* b 0x80794fd0 */ // 0x80794FA4
    r4 = *(0x8c + r31); // lwz @ 0x80794FA8
    if (==) goto 0x0x80794fd0;
    if (==) goto 0x0x80794fc0;
    r0 = *(0x90 + r4); // lwz @ 0x80794FB8
    /* b 0x80794fc4 */ // 0x80794FBC
    /* li r0, -1 */ // 0x80794FC0
    if (!=) goto 0x0x80794fd0;
    r3 = r31 + 0x8c; // 0x80794FCC
    if (==) goto 0x0x80794fec;
    r3 = *(0 + r3); // lwz @ 0x80794FD8
    if (==) goto 0x0x80794fec;
    /* li r4, 0xa */ // 0x80794FE4
    FUN_805E3430(r4); // bl 0x805E3430
    r4 = *(0x80 + r31); // lwz @ 0x80794FEC
    /* li r3, 0 */ // 0x80794FF0
    if (==) goto 0x0x8079501c;
    if (==) goto 0x0x80795008;
    r0 = *(0x90 + r4); // lwz @ 0x80795000
    /* b 0x8079500c */ // 0x80795004
    /* li r0, -1 */ // 0x80795008
    if (!=) goto 0x0x8079501c;
    r3 = r31 + 0x80; // 0x80795014
    /* b 0x8079509c */ // 0x80795018
    r4 = *(0x84 + r31); // lwz @ 0x8079501C
    if (==) goto 0x0x80795048;
    if (==) goto 0x0x80795034;
    r0 = *(0x90 + r4); // lwz @ 0x8079502C
    /* b 0x80795038 */ // 0x80795030
    /* li r0, -1 */ // 0x80795034
    if (!=) goto 0x0x80795048;
    r3 = r31 + 0x84; // 0x80795040
    /* b 0x8079509c */ // 0x80795044
    r4 = *(0x88 + r31); // lwz @ 0x80795048
    if (==) goto 0x0x80795074;
    if (==) goto 0x0x80795060;
    r0 = *(0x90 + r4); // lwz @ 0x80795058
    /* b 0x80795064 */ // 0x8079505C
    /* li r0, -1 */ // 0x80795060
    if (!=) goto 0x0x80795074;
    r3 = r31 + 0x88; // 0x8079506C
    /* b 0x8079509c */ // 0x80795070
    r4 = *(0x8c + r31); // lwz @ 0x80795074
    if (==) goto 0x0x8079509c;
    if (==) goto 0x0x8079508c;
    r0 = *(0x90 + r4); // lwz @ 0x80795084
    /* b 0x80795090 */ // 0x80795088
    /* li r0, -1 */ // 0x8079508C
    if (!=) goto 0x0x8079509c;
    r3 = r31 + 0x8c; // 0x80795098
    if (==) goto 0x0x807950b8;
    r3 = *(0 + r3); // lwz @ 0x807950A4
    if (==) goto 0x0x807950b8;
    /* li r4, 0xa */ // 0x807950B0
    FUN_805E3430(r4); // bl 0x805E3430
    r4 = *(0x80 + r31); // lwz @ 0x807950B8
    /* li r3, 0 */ // 0x807950BC
    if (==) goto 0x0x807950e8;
    if (==) goto 0x0x807950d4;
    r0 = *(0x90 + r4); // lwz @ 0x807950CC
    /* b 0x807950d8 */ // 0x807950D0
    /* li r0, -1 */ // 0x807950D4
    if (!=) goto 0x0x807950e8;
    r3 = r31 + 0x80; // 0x807950E0
    /* b 0x80795168 */ // 0x807950E4
    r4 = *(0x84 + r31); // lwz @ 0x807950E8
    if (==) goto 0x0x80795114;
    if (==) goto 0x0x80795100;
    r0 = *(0x90 + r4); // lwz @ 0x807950F8
    /* b 0x80795104 */ // 0x807950FC
    /* li r0, -1 */ // 0x80795100
    if (!=) goto 0x0x80795114;
    r3 = r31 + 0x84; // 0x8079510C
    /* b 0x80795168 */ // 0x80795110
    r4 = *(0x88 + r31); // lwz @ 0x80795114
    if (==) goto 0x0x80795140;
    if (==) goto 0x0x8079512c;
    r0 = *(0x90 + r4); // lwz @ 0x80795124
    /* b 0x80795130 */ // 0x80795128
    /* li r0, -1 */ // 0x8079512C
    if (!=) goto 0x0x80795140;
    r3 = r31 + 0x88; // 0x80795138
    /* b 0x80795168 */ // 0x8079513C
    r4 = *(0x8c + r31); // lwz @ 0x80795140
    if (==) goto 0x0x80795168;
    if (==) goto 0x0x80795158;
    r0 = *(0x90 + r4); // lwz @ 0x80795150
    /* b 0x8079515c */ // 0x80795154
    /* li r0, -1 */ // 0x80795158
    if (!=) goto 0x0x80795168;
    r3 = r31 + 0x8c; // 0x80795164
    if (==) goto 0x0x80795184;
    r3 = *(0 + r3); // lwz @ 0x80795170
    if (==) goto 0x0x80795184;
    /* li r4, 0xa */ // 0x8079517C
    FUN_805E3430(r4); // bl 0x805E3430
    r3 = r31;
    FUN_80798B8C(r4, r3); // bl 0x80798B8C
    r3 = *(0xdc + r31); // lwz @ 0x8079518C
    r4 = *(0 + r3); // lwz @ 0x80795190
    r4 = *(4 + r4); // lwz @ 0x80795194
    r0 = *(4 + r4); // lwz @ 0x80795198
    r0 = r0 rlwinm 0x15; // rlwinm
    *(0xe8 + r31) = r0; // stb @ 0x807951A0
    FUN_8061EA54(); // bl 0x8061EA54
    r4 = *(0xd2 + r31); // lbz @ 0x807951A8
    *(0xe9 + r31) = r3; // stb @ 0x807951AC
    r3 = r4 + 1; // 0x807951B0
    /* clrlwi r0, r3, 0x18 */ // 0x807951B4
    *(0xd2 + r31) = r3; // stb @ 0x807951B8
    /* extsb r0, r0 */ // 0x807951BC
    if (<=) goto 0x0x807951d0;
    /* li r0, 0x64 */ // 0x807951C8
    *(0xd2 + r31) = r0; // stb @ 0x807951CC
    r3 = *(0xdc + r31); // lwz @ 0x807951D0
    FUN_8061E584(); // bl 0x8061E584
    /* lfs f1, 0(r3) */ // 0x807951D8
    /* lfs f0, 4(r3) */ // 0x807951DC
    /* fmuls f1, f1, f1 */ // 0x807951E0
    /* lfs f2, 8(r3) */ // 0x807951E4
    /* fmuls f0, f0, f0 */ // 0x807951E8
    /* fmuls f2, f2, f2 */ // 0x807951EC
    /* fadds f0, f1, f0 */ // 0x807951F0
    /* fadds f1, f2, f0 */ // 0x807951F4
    FUN_805E3430(); // bl 0x805E3430
    r3 = *(0xd3 + r31); // lbz @ 0x807951FC
    /* stfs f1, 0xec(r31) */ // 0x80795200
    r3 = r3 + 1; // 0x80795204
    /* clrlwi r0, r3, 0x18 */ // 0x80795208
    *(0xd3 + r31) = r3; // stb @ 0x8079520C
    /* extsb r0, r0 */ // 0x80795210
}