/* Function at 0x80790DC8, size=1012 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_80790DC8(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80790DDC
    r30 = r3;
    r0 = *(0xb1 + r3); // lbz @ 0x80790DE4
    if (==) goto 0x0x80790e0c;
    r0 = *(0x9c + r3); // lhz @ 0x80790DF0
    if (==) goto 0x0x80790e0c;
    if (==) goto 0x0x80790e0c;
    /* li r3, 0 */ // 0x80790E04
    /* b 0x807911ac */ // 0x80790E08
    r0 = *(0x9c + r3); // lhz @ 0x80790E0C
    if (==) goto 0x0x80790e34;
    if (==) goto 0x0x80790e80;
    if (==) goto 0x0x80790edc;
    if (==) goto 0x0x807910d4;
    /* b 0x807911a0 */ // 0x80790E30
    if (!=) goto 0x0x807911a0;
    /* lis r4, 0x5555 */ // 0x80790E3C
    r5 = *(0xa4 + r3); // lhz @ 0x80790E40
    r0 = r4 + 0x5556; // 0x80790E44
    /* mulhw r4, r0, r5 */ // 0x80790E48
    /* srwi r0, r4, 0x1f */ // 0x80790E4C
    r0 = r4 + r0; // 0x80790E50
    /* mulli r0, r0, 3 */ // 0x80790E54
    /* subf r0, r0, r5 */ // 0x80790E58
    if (==) goto 0x0x80790e6c;
    /* li r3, 0 */ // 0x80790E64
    /* b 0x807911ac */ // 0x80790E68
    r0 = *(0xf8 + r3); // lwz @ 0x80790E6C
    if (==) goto 0x0x807911a0;
    /* li r3, 0 */ // 0x80790E78
    /* b 0x807911ac */ // 0x80790E7C
    if (!=) goto 0x0x807911a0;
    r3 = *(0xf8 + r3); // lwz @ 0x80790E88
    if (==) goto 0x0x807911a0;
    if (==) goto 0x0x80790ea0;
    r0 = *(0x90 + r3); // lwz @ 0x80790E98
    /* b 0x80790ea4 */ // 0x80790E9C
    /* li r0, -1 */ // 0x80790EA0
    if (==) goto 0x0x80790eb8;
    if (==) goto 0x0x80790ed4;
    /* b 0x807911a0 */ // 0x80790EB4
    r12 = *(0 + r30); // lwz @ 0x80790EB8
    r3 = r30;
    /* li r4, 0 */ // 0x80790EC0
    r12 = *(0x134 + r12); // lwz @ 0x80790EC4
    /* mtctr r12 */ // 0x80790EC8
    /* bctrl  */ // 0x80790ECC
    /* b 0x807911a0 */ // 0x80790ED0
    /* li r3, 0 */ // 0x80790ED4
    /* b 0x807911ac */ // 0x80790ED8
    if (==) goto 0x0x80790f00;
    if (==) goto 0x0x80790fbc;
    if (==) goto 0x0x80791044;
    if (==) goto 0x0x80791084;
    /* b 0x807910d4 */ // 0x80790EFC
    r3 = *(0xf8 + r3); // lwz @ 0x80790F00
    if (!=) goto 0x0x80790f14;
    /* li r0, 0 */ // 0x80790F0C
    /* b 0x80790f30 */ // 0x80790F10
    if (==) goto 0x0x80790f20;
    r0 = *(0x90 + r3); // lwz @ 0x80790F18
    /* b 0x80790f24 */ // 0x80790F1C
    /* li r0, -1 */ // 0x80790F20
    /* subf r0, r4, r0 */ // 0x80790F24
    /* cntlzw r0, r0 */ // 0x80790F28
    /* srwi r0, r0, 5 */ // 0x80790F2C
    if (==) goto 0x0x80790f40;
    /* li r3, 0 */ // 0x80790F38
    /* b 0x807911ac */ // 0x80790F3C
    if (!=) goto 0x0x80790f50;
    /* li r0, 0 */ // 0x80790F48
    /* b 0x80790f6c */ // 0x80790F4C
    if (==) goto 0x0x80790f5c;
    r4 = *(0x90 + r3); // lwz @ 0x80790F54
    /* b 0x80790f60 */ // 0x80790F58
    /* li r4, -1 */ // 0x80790F5C
    r0 = r4 + -0x26e; // 0x80790F60
    /* cntlzw r0, r0 */ // 0x80790F64
    /* srwi r0, r0, 5 */ // 0x80790F68
    if (!=) goto 0x0x80790fa8;
    if (!=) goto 0x0x80790f84;
    /* li r0, 0 */ // 0x80790F7C
    /* b 0x80790fa0 */ // 0x80790F80
    if (==) goto 0x0x80790f90;
    r4 = *(0x90 + r3); // lwz @ 0x80790F88
    /* b 0x80790f94 */ // 0x80790F8C
    /* li r4, -1 */ // 0x80790F90
    r0 = r4 + -0x270; // 0x80790F94
    /* cntlzw r0, r0 */ // 0x80790F98
    /* srwi r0, r0, 5 */ // 0x80790F9C
    if (==) goto 0x0x807910d4;
    if (==) goto 0x0x807910d4;
    /* li r4, 0 */ // 0x80790FB0
    FUN_805E3430(r4); // bl 0x805E3430
    /* b 0x807910d4 */ // 0x80790FB8
    r3 = *(0xf8 + r3); // lwz @ 0x80790FBC
    if (!=) goto 0x0x80790fd0;
    /* li r0, 0 */ // 0x80790FC8
    /* b 0x80790fec */ // 0x80790FCC
    if (==) goto 0x0x80790fdc;
    r0 = *(0x90 + r3); // lwz @ 0x80790FD4
    /* b 0x80790fe0 */ // 0x80790FD8
    /* li r0, -1 */ // 0x80790FDC
    /* subf r0, r4, r0 */ // 0x80790FE0
    /* cntlzw r0, r0 */ // 0x80790FE4
    /* srwi r0, r0, 5 */ // 0x80790FE8
    if (==) goto 0x0x80790ffc;
    /* li r3, 0 */ // 0x80790FF4
    /* b 0x807911ac */ // 0x80790FF8
    if (!=) goto 0x0x8079100c;
    /* li r0, 0 */ // 0x80791004
    /* b 0x80791028 */ // 0x80791008
    if (==) goto 0x0x80791018;
    r4 = *(0x90 + r3); // lwz @ 0x80791010
    /* b 0x8079101c */ // 0x80791014
    /* li r4, -1 */ // 0x80791018
    r0 = r4 + -0x270; // 0x8079101C
    /* cntlzw r0, r0 */ // 0x80791020
    /* srwi r0, r0, 5 */ // 0x80791024
    if (==) goto 0x0x807910d4;
    if (==) goto 0x0x807910d4;
    /* li r4, 0 */ // 0x80791038
    FUN_805E3430(r4); // bl 0x805E3430
    /* b 0x807910d4 */ // 0x80791040
    r3 = *(0xf8 + r3); // lwz @ 0x80791044
    if (!=) goto 0x0x80791058;
    /* li r0, 0 */ // 0x80791050
    /* b 0x80791074 */ // 0x80791054
    if (==) goto 0x0x80791064;
    r0 = *(0x90 + r3); // lwz @ 0x8079105C
    /* b 0x80791068 */ // 0x80791060
    /* li r0, -1 */ // 0x80791064
    /* subf r0, r4, r0 */ // 0x80791068
    /* cntlzw r0, r0 */ // 0x8079106C
    /* srwi r0, r0, 5 */ // 0x80791070
    if (==) goto 0x0x807910d4;
    /* li r3, 0 */ // 0x8079107C
    /* b 0x807911ac */ // 0x80791080
    r3 = *(0xf8 + r3); // lwz @ 0x80791084
    if (!=) goto 0x0x80791098;
    /* li r0, 0 */ // 0x80791090
    /* b 0x807910b4 */ // 0x80791094
    if (==) goto 0x0x807910a4;
    r0 = *(0x90 + r3); // lwz @ 0x8079109C
    /* b 0x807910a8 */ // 0x807910A0
    /* li r0, -1 */ // 0x807910A4
    /* subf r0, r4, r0 */ // 0x807910A8
    /* cntlzw r0, r0 */ // 0x807910AC
    /* srwi r0, r0, 5 */ // 0x807910B0
    if (==) goto 0x0x807910c4;
    /* li r3, 0 */ // 0x807910BC
    /* b 0x807911ac */ // 0x807910C0
    if (==) goto 0x0x807910d4;
    /* li r4, 0 */ // 0x807910CC
    FUN_805E3430(r3, r4); // bl 0x805E3430
    r0 = r31 + -0x292; // 0x807910D4
    if (>) goto 0x0x807911a0;
    r4 = *(0x80 + r30); // lwz @ 0x807910E0
    /* li r3, 0 */ // 0x807910E4
    if (==) goto 0x0x80791110;
    if (==) goto 0x0x807910fc;
    r0 = *(0x90 + r4); // lwz @ 0x807910F4
    /* b 0x80791100 */ // 0x807910F8
    /* li r0, -1 */ // 0x807910FC
    if (!=) goto 0x0x80791110;
    r3 = r30 + 0x80; // 0x80791108
    /* b 0x80791190 */ // 0x8079110C
    r4 = *(0x84 + r30); // lwz @ 0x80791110
    if (==) goto 0x0x8079113c;
    if (==) goto 0x0x80791128;
    r0 = *(0x90 + r4); // lwz @ 0x80791120
    /* b 0x8079112c */ // 0x80791124
    /* li r0, -1 */ // 0x80791128
    if (!=) goto 0x0x8079113c;
    r3 = r30 + 0x84; // 0x80791134
    /* b 0x80791190 */ // 0x80791138
    r4 = *(0x88 + r30); // lwz @ 0x8079113C
    if (==) goto 0x0x80791168;
    if (==) goto 0x0x80791154;
    r0 = *(0x90 + r4); // lwz @ 0x8079114C
    /* b 0x80791158 */ // 0x80791150
    /* li r0, -1 */ // 0x80791154
    if (!=) goto 0x0x80791168;
    r3 = r30 + 0x88; // 0x80791160
    /* b 0x80791190 */ // 0x80791164
    r4 = *(0x8c + r30); // lwz @ 0x80791168
    if (==) goto 0x0x80791190;
    if (==) goto 0x0x80791180;
    r0 = *(0x90 + r4); // lwz @ 0x80791178
    /* b 0x80791184 */ // 0x8079117C
    /* li r0, -1 */ // 0x80791180
    if (!=) goto 0x0x80791190;
    r3 = r30 + 0x8c; // 0x8079118C
    if (==) goto 0x0x807911a0;
    /* li r3, 0 */ // 0x80791198
    /* b 0x807911ac */ // 0x8079119C
    r3 = r30;
    r4 = r31;
    FUN_8078E83C(r3, r3, r4); // bl 0x8078E83C
    r0 = *(0x14 + r1); // lwz @ 0x807911AC
    r31 = *(0xc + r1); // lwz @ 0x807911B0
    r30 = *(8 + r1); // lwz @ 0x807911B4
}