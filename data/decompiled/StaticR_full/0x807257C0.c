/* Function at 0x807257C0, size=2328 bytes */
/* Stack frame: 224 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 27 function(s) */

int FUN_807257C0(int r3, int r4, int r5)
{
    /* Stack frame: -224(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r31, 0 */ // 0x807257D0
    r31 = r31 + 0; // 0x807257D4
    *(0xd8 + r1) = r30; // stw @ 0x807257D8
    r30 = r3;
    *(0xd4 + r1) = r29; // stw @ 0x807257E0
    *(0xd0 + r1) = r28; // stw @ 0x807257E4
    r0 = *(0xc + r3); // lbz @ 0x807257E8
    if (==) goto 0x0x807257f8;
    FUN_807404F0(); // bl 0x807404F0
    r0 = *(0x90 + r30); // lbz @ 0x807257F8
    if (!=) goto 0x0x8072582c;
    r0 = *(0x124 + r30); // lwz @ 0x80725804
    if (!=) goto 0x0x8072581c;
    r3 = r30;
    FUN_80727C40(r3); // bl 0x80727C40
    /* b 0x8072582c */ // 0x80725818
    if (!=) goto 0x0x8072582c;
    r3 = r30;
    FUN_80728B88(r3); // bl 0x80728B88
    r3 = r30;
    FUN_8072B710(r3, r3); // bl 0x8072B710
    r0 = *(0x12b + r30); // lbz @ 0x80725834
    if (!=) goto 0x0x807268e8;
    r3 = r30;
    FUN_807277F8(r3); // bl 0x807277F8
    r3 = r30;
    FUN_8072AFAC(r3, r3); // bl 0x8072AFAC
    r3 = r30;
    FUN_807298C8(r3, r3, r3); // bl 0x807298C8
    r3 = r30;
    FUN_8072B360(r3, r3, r3); // bl 0x8072B360
    r0 = *(0x96 + r30); // lbz @ 0x80725860
    /* li r29, 1 */ // 0x80725864
    /* li r3, 0 */ // 0x80725868
    /* cntlzw r0, r0 */ // 0x8072586C
    /* rlwinm. r5, r0, 0x1b, 5, 0x1f */ // 0x80725870
    if (==) goto 0x0x80725888;
    r0 = *(0x7a + r30); // lbz @ 0x80725878
    if (==) goto 0x0x80725888;
    /* li r3, 1 */ // 0x80725884
    if (!=) goto 0x0x807258bc;
    /* li r4, 0 */ // 0x80725894
    if (==) goto 0x0x807258b0;
    r3 = *(0x64 + r30); // lwz @ 0x8072589C
    r0 = *(0x60 + r30); // lwz @ 0x807258A0
    if (<) goto 0x0x807258b0;
    /* li r4, 1 */ // 0x807258AC
    if (!=) goto 0x0x807258bc;
    /* li r29, 0 */ // 0x807258B8
    r0 = *(0x14b + r30); // lbz @ 0x807258BC
    if (==) goto 0x0x80725908;
    /* li r29, 0 */ // 0x807258CC
    if (==) goto 0x0x807258e0;
    r0 = *(0x7a + r30); // lbz @ 0x807258D4
    if (!=) goto 0x0x80725904;
    if (==) goto 0x0x80725908;
    r3 = *(0x64 + r30); // lwz @ 0x807258E8
    r0 = *(0x60 + r30); // lwz @ 0x807258EC
    if (<) goto 0x0x80725908;
    r0 = *(0x10c + r30); // lbz @ 0x807258F8
    if (==) goto 0x0x80725908;
    /* li r29, 1 */ // 0x80725904
    r3 = *(0x118 + r30); // lwz @ 0x80725908
    FUN_8061E620(); // bl 0x8061E620
    if (==) goto 0x0x80725920;
    if (==) goto 0x0x80725994;
    r29 = *(0x224 + r30); // lwz @ 0x80725920
    if (==) goto 0x0x80725a40;
    r12 = *(0 + r29); // lwz @ 0x8072592C
    r3 = r29;
    r12 = *(0xc + r12); // lwz @ 0x80725934
    /* mtctr r12 */ // 0x80725938
    /* bctrl  */ // 0x8072593C
    r12 = *(0 + r29); // lwz @ 0x80725940
    r3 = r29;
    r4 = r30 + 0x6d0; // 0x80725948
    r12 = *(0x74 + r12); // lwz @ 0x8072594C
    /* mtctr r12 */ // 0x80725950
    /* bctrl  */ // 0x80725954
    r0 = *(0xb0 + r30); // lbz @ 0x80725958
    if (==) goto 0x0x8072597c;
    r12 = *(0 + r29); // lwz @ 0x80725964
    r3 = r29;
    r4 = r30 + 0x72c; // 0x8072596C
    r12 = *(0x70 + r12); // lwz @ 0x80725970
    /* mtctr r12 */ // 0x80725974
    /* bctrl  */ // 0x80725978
    r12 = *(0 + r29); // lwz @ 0x8072597C
    r3 = r29;
    r12 = *(0x80 + r12); // lwz @ 0x80725984
    /* mtctr r12 */ // 0x80725988
    /* bctrl  */ // 0x8072598C
    /* b 0x80725a40 */ // 0x80725990
    r29 = *(0x224 + r30); // lwz @ 0x80725994
    if (==) goto 0x0x80725a40;
    r3 = r29 + 0x74; // 0x807259A0
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x807259b8;
    /* li r3, 0 */ // 0x807259B0
    /* b 0x807259bc */ // 0x807259B4
    r3 = *(0xc + r3); // lwz @ 0x807259B8
    /* li r0, 0 */ // 0x807259C0
    if (==) goto 0x0x807259d0;
    if (!=) goto 0x0x807259d4;
    /* li r0, 1 */ // 0x807259D0
    if (==) goto 0x0x80725a40;
    r12 = *(0 + r29); // lwz @ 0x807259DC
    r3 = r29;
    r12 = *(0x14 + r12); // lwz @ 0x807259E4
    /* mtctr r12 */ // 0x807259E8
    /* bctrl  */ // 0x807259EC
    r12 = *(0 + r29); // lwz @ 0x807259F0
    r3 = r29;
    r4 = r30 + 0x6d0; // 0x807259F8
    r12 = *(0x74 + r12); // lwz @ 0x807259FC
    /* mtctr r12 */ // 0x80725A00
    /* bctrl  */ // 0x80725A04
    r0 = *(0xb0 + r30); // lbz @ 0x80725A08
    if (==) goto 0x0x80725a2c;
    r12 = *(0 + r29); // lwz @ 0x80725A14
    r3 = r29;
    r4 = r30 + 0x72c; // 0x80725A1C
    r12 = *(0x70 + r12); // lwz @ 0x80725A20
    /* mtctr r12 */ // 0x80725A24
    /* bctrl  */ // 0x80725A28
    r12 = *(0 + r29); // lwz @ 0x80725A2C
    r3 = r29;
    r12 = *(0x80 + r12); // lwz @ 0x80725A34
    /* mtctr r12 */ // 0x80725A38
    /* bctrl  */ // 0x80725A3C
    r0 = *(0x4c + r30); // lwz @ 0x80725A40
    if (<) goto 0x0x80725a98;
    r0 = *(0x50 + r30); // lwz @ 0x80725A4C
    if (<) goto 0x0x80725a98;
    r3 = *(0x238 + r30); // lwz @ 0x80725A58
    r3 = r3 + 0x74; // 0x80725A5C
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x80725a74;
    /* li r3, 0 */ // 0x80725A6C
    /* b 0x80725a78 */ // 0x80725A70
    r3 = *(0xc + r3); // lwz @ 0x80725A74
    /* li r0, 0 */ // 0x80725A7C
    if (==) goto 0x0x80725a8c;
    if (!=) goto 0x0x80725a90;
    /* li r0, 1 */ // 0x80725A8C
    if (==) goto 0x0x80725af8;
    r29 = *(0x260 + r30); // lwz @ 0x80725A98
    if (==) goto 0x0x80725b6c;
    r3 = r29 + 0x74; // 0x80725AA4
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x80725abc;
    /* li r3, 0 */ // 0x80725AB4
    /* b 0x80725ac0 */ // 0x80725AB8
    r3 = *(0xc + r3); // lwz @ 0x80725ABC
    /* li r0, 0 */ // 0x80725AC4
    if (==) goto 0x0x80725ad4;
    if (!=) goto 0x0x80725ad8;
    /* li r0, 1 */ // 0x80725AD4
    if (==) goto 0x0x80725b6c;
    r12 = *(0 + r29); // lwz @ 0x80725AE0
    r3 = r29;
    r12 = *(0x18 + r12); // lwz @ 0x80725AE8
    /* mtctr r12 */ // 0x80725AEC
    /* bctrl  */ // 0x80725AF0
    /* b 0x80725b6c */ // 0x80725AF4
    r29 = *(0x260 + r30); // lwz @ 0x80725AF8
    if (==) goto 0x0x80725b6c;
    r3 = r29 + 0x74; // 0x80725B04
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x80725b1c;
    /* li r3, 0 */ // 0x80725B14
    /* b 0x80725b20 */ // 0x80725B18
    r3 = *(0xc + r3); // lwz @ 0x80725B1C
    /* li r0, 0 */ // 0x80725B24
    if (==) goto 0x0x80725b34;
    if (!=) goto 0x0x80725b38;
    /* li r0, 1 */ // 0x80725B34
    if (==) goto 0x0x80725b6c;
    r12 = *(0 + r29); // lwz @ 0x80725B40
    r3 = r29;
    r4 = r30 + 0x6f4; // 0x80725B48
    r12 = *(0x78 + r12); // lwz @ 0x80725B4C
    /* mtctr r12 */ // 0x80725B50
    /* bctrl  */ // 0x80725B54
    r12 = *(0 + r29); // lwz @ 0x80725B58
    r3 = r29;
    r12 = *(0x80 + r12); // lwz @ 0x80725B60
    /* mtctr r12 */ // 0x80725B64
    /* bctrl  */ // 0x80725B68
    r0 = *(0x4c + r30); // lwz @ 0x80725B6C
    if (<) goto 0x0x80725bc4;
    r0 = *(0x50 + r30); // lwz @ 0x80725B78
    if (<) goto 0x0x80725bc4;
    r3 = *(0x238 + r30); // lwz @ 0x80725B84
    r3 = r3 + 0x74; // 0x80725B88
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x80725ba0;
    /* li r3, 0 */ // 0x80725B98
    /* b 0x80725ba4 */ // 0x80725B9C
    r3 = *(0xc + r3); // lwz @ 0x80725BA0
    /* li r0, 0 */ // 0x80725BA8
    if (==) goto 0x0x80725bb8;
    if (!=) goto 0x0x80725bbc;
    /* li r0, 1 */ // 0x80725BB8
    if (==) goto 0x0x80725c24;
    r29 = *(0x268 + r30); // lwz @ 0x80725BC4
    if (==) goto 0x0x80725c98;
    r3 = r29 + 0x74; // 0x80725BD0
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x80725be8;
    /* li r3, 0 */ // 0x80725BE0
    /* b 0x80725bec */ // 0x80725BE4
    r3 = *(0xc + r3); // lwz @ 0x80725BE8
    /* li r0, 0 */ // 0x80725BF0
    if (==) goto 0x0x80725c00;
    if (!=) goto 0x0x80725c04;
    /* li r0, 1 */ // 0x80725C00
    if (==) goto 0x0x80725c98;
    r12 = *(0 + r29); // lwz @ 0x80725C0C
    r3 = r29;
    r12 = *(0x18 + r12); // lwz @ 0x80725C14
    /* mtctr r12 */ // 0x80725C18
    /* bctrl  */ // 0x80725C1C
    /* b 0x80725c98 */ // 0x80725C20
    r29 = *(0x268 + r30); // lwz @ 0x80725C24
    if (==) goto 0x0x80725c98;
    r3 = r29 + 0x74; // 0x80725C30
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x80725c48;
    /* li r3, 0 */ // 0x80725C40
    /* b 0x80725c4c */ // 0x80725C44
    r3 = *(0xc + r3); // lwz @ 0x80725C48
    /* li r0, 0 */ // 0x80725C50
    if (==) goto 0x0x80725c60;
    if (!=) goto 0x0x80725c64;
    /* li r0, 1 */ // 0x80725C60
    if (==) goto 0x0x80725c98;
    r12 = *(0 + r29); // lwz @ 0x80725C6C
    r3 = r29;
    r4 = r30 + 0x6f4; // 0x80725C74
    r12 = *(0x78 + r12); // lwz @ 0x80725C78
    /* mtctr r12 */ // 0x80725C7C
    /* bctrl  */ // 0x80725C80
    r12 = *(0 + r29); // lwz @ 0x80725C84
    r3 = r29;
    r12 = *(0x80 + r12); // lwz @ 0x80725C8C
    /* mtctr r12 */ // 0x80725C90
    /* bctrl  */ // 0x80725C94
    r0 = *(0x4c + r30); // lwz @ 0x80725C98
    if (<) goto 0x0x80725cf0;
    r0 = *(0x50 + r30); // lwz @ 0x80725CA4
    if (<) goto 0x0x80725cf0;
    r3 = *(0x238 + r30); // lwz @ 0x80725CB0
    r3 = r3 + 0x74; // 0x80725CB4
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x80725ccc;
    /* li r3, 0 */ // 0x80725CC4
    /* b 0x80725cd0 */ // 0x80725CC8
    r3 = *(0xc + r3); // lwz @ 0x80725CCC
    /* li r0, 0 */ // 0x80725CD4
    if (==) goto 0x0x80725ce4;
    if (!=) goto 0x0x80725ce8;
    /* li r0, 1 */ // 0x80725CE4
    if (==) goto 0x0x80725d50;
    r29 = *(0x264 + r30); // lwz @ 0x80725CF0
    if (==) goto 0x0x80725dc4;
    r3 = r29 + 0x74; // 0x80725CFC
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x80725d14;
    /* li r3, 0 */ // 0x80725D0C
    /* b 0x80725d18 */ // 0x80725D10
    r3 = *(0xc + r3); // lwz @ 0x80725D14
    /* li r0, 0 */ // 0x80725D1C
    if (==) goto 0x0x80725d2c;
    if (!=) goto 0x0x80725d30;
    /* li r0, 1 */ // 0x80725D2C
    if (==) goto 0x0x80725dc4;
    r12 = *(0 + r29); // lwz @ 0x80725D38
    r3 = r29;
    r12 = *(0x18 + r12); // lwz @ 0x80725D40
    /* mtctr r12 */ // 0x80725D44
    /* bctrl  */ // 0x80725D48
    /* b 0x80725dc4 */ // 0x80725D4C
    r29 = *(0x264 + r30); // lwz @ 0x80725D50
    if (==) goto 0x0x80725dc4;
    r3 = r29 + 0x74; // 0x80725D5C
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x80725d74;
    /* li r3, 0 */ // 0x80725D6C
    /* b 0x80725d78 */ // 0x80725D70
    r3 = *(0xc + r3); // lwz @ 0x80725D74
    /* li r0, 0 */ // 0x80725D7C
    if (==) goto 0x0x80725d8c;
    if (!=) goto 0x0x80725d90;
    /* li r0, 1 */ // 0x80725D8C
    if (==) goto 0x0x80725dc4;
    r12 = *(0 + r29); // lwz @ 0x80725D98
    r3 = r29;
    r4 = r30 + 0x6f4; // 0x80725DA0
    r12 = *(0x78 + r12); // lwz @ 0x80725DA4
    /* mtctr r12 */ // 0x80725DA8
    /* bctrl  */ // 0x80725DAC
    r12 = *(0 + r29); // lwz @ 0x80725DB0
    r3 = r29;
    r12 = *(0x80 + r12); // lwz @ 0x80725DB8
    /* mtctr r12 */ // 0x80725DBC
    /* bctrl  */ // 0x80725DC0
    r0 = *(0x4c + r30); // lwz @ 0x80725DC4
    if (<) goto 0x0x80725e1c;
    r0 = *(0x50 + r30); // lwz @ 0x80725DD0
    if (<) goto 0x0x80725e1c;
    r3 = *(0x238 + r30); // lwz @ 0x80725DDC
    r3 = r3 + 0x74; // 0x80725DE0
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x80725df8;
    /* li r3, 0 */ // 0x80725DF0
    /* b 0x80725dfc */ // 0x80725DF4
    r3 = *(0xc + r3); // lwz @ 0x80725DF8
    /* li r0, 0 */ // 0x80725E00
    if (==) goto 0x0x80725e10;
    if (!=) goto 0x0x80725e14;
    /* li r0, 1 */ // 0x80725E10
    if (==) goto 0x0x80725e7c;
    r29 = *(0x26c + r30); // lwz @ 0x80725E1C
    if (==) goto 0x0x80725ef0;
    r3 = r29 + 0x74; // 0x80725E28
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x80725e40;
    /* li r3, 0 */ // 0x80725E38
    /* b 0x80725e44 */ // 0x80725E3C
    r3 = *(0xc + r3); // lwz @ 0x80725E40
    /* li r0, 0 */ // 0x80725E48
    if (==) goto 0x0x80725e58;
    if (!=) goto 0x0x80725e5c;
    /* li r0, 1 */ // 0x80725E58
    if (==) goto 0x0x80725ef0;
    r12 = *(0 + r29); // lwz @ 0x80725E64
    r3 = r29;
    r12 = *(0x18 + r12); // lwz @ 0x80725E6C
    /* mtctr r12 */ // 0x80725E70
    /* bctrl  */ // 0x80725E74
    /* b 0x80725ef0 */ // 0x80725E78
    r29 = *(0x26c + r30); // lwz @ 0x80725E7C
    if (==) goto 0x0x80725ef0;
    r3 = r29 + 0x74; // 0x80725E88
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x80725ea0;
    /* li r3, 0 */ // 0x80725E98
    /* b 0x80725ea4 */ // 0x80725E9C
    r3 = *(0xc + r3); // lwz @ 0x80725EA0
    /* li r0, 0 */ // 0x80725EA8
    if (==) goto 0x0x80725eb8;
    if (!=) goto 0x0x80725ebc;
    /* li r0, 1 */ // 0x80725EB8
    if (==) goto 0x0x80725ef0;
    r12 = *(0 + r29); // lwz @ 0x80725EC4
    r3 = r29;
    r4 = r30 + 0x6f4; // 0x80725ECC
    r12 = *(0x78 + r12); // lwz @ 0x80725ED0
    /* mtctr r12 */ // 0x80725ED4
    /* bctrl  */ // 0x80725ED8
    r12 = *(0 + r29); // lwz @ 0x80725EDC
    r3 = r29;
    r12 = *(0x80 + r12); // lwz @ 0x80725EE4
    /* mtctr r12 */ // 0x80725EE8
    /* bctrl  */ // 0x80725EEC
    r29 = *(0x1f8 + r30); // lwz @ 0x80725EF0
    if (==) goto 0x0x80725f64;
    r3 = r29 + 0x74; // 0x80725EFC
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x80725f14;
    /* li r3, 0 */ // 0x80725F0C
    /* b 0x80725f18 */ // 0x80725F10
    r3 = *(0xc + r3); // lwz @ 0x80725F14
    /* li r0, 0 */ // 0x80725F1C
    if (==) goto 0x0x80725f2c;
    if (!=) goto 0x0x80725f30;
    /* li r0, 1 */ // 0x80725F2C
    if (==) goto 0x0x80725f64;
    r12 = *(0 + r29); // lwz @ 0x80725F38
    r3 = r29;
    r4 = r30 + 0x6f4; // 0x80725F40
    r12 = *(0x78 + r12); // lwz @ 0x80725F44
    /* mtctr r12 */ // 0x80725F48
    /* bctrl  */ // 0x80725F4C
    r12 = *(0 + r29); // lwz @ 0x80725F50
    r3 = r29;
    r12 = *(0x80 + r12); // lwz @ 0x80725F58
    /* mtctr r12 */ // 0x80725F5C
    /* bctrl  */ // 0x80725F60
    r29 = *(0x1f0 + r30); // lwz @ 0x80725F64
    if (==) goto 0x0x80725fd8;
    r3 = r29 + 0x74; // 0x80725F70
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x80725f88;
    /* li r3, 0 */ // 0x80725F80
    /* b 0x80725f8c */ // 0x80725F84
    r3 = *(0xc + r3); // lwz @ 0x80725F88
    /* li r0, 0 */ // 0x80725F90
    if (==) goto 0x0x80725fa0;
    if (!=) goto 0x0x80725fa4;
    /* li r0, 1 */ // 0x80725FA0
    if (==) goto 0x0x80725fd8;
    r12 = *(0 + r29); // lwz @ 0x80725FAC
    r3 = r29;
    r4 = r30 + 0x6f4; // 0x80725FB4
    r12 = *(0x78 + r12); // lwz @ 0x80725FB8
    /* mtctr r12 */ // 0x80725FBC
    /* bctrl  */ // 0x80725FC0
    r12 = *(0 + r29); // lwz @ 0x80725FC4
    r3 = r29;
    r12 = *(0x80 + r12); // lwz @ 0x80725FCC
    /* mtctr r12 */ // 0x80725FD0
    /* bctrl  */ // 0x80725FD4
    r29 = *(0x258 + r30); // lwz @ 0x80725FD8
    if (==) goto 0x0x8072604c;
    r3 = r29 + 0x74; // 0x80725FE4
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x80725ffc;
    /* li r3, 0 */ // 0x80725FF4
    /* b 0x80726000 */ // 0x80725FF8
    r3 = *(0xc + r3); // lwz @ 0x80725FFC
    /* li r0, 0 */ // 0x80726004
    if (==) goto 0x0x80726014;
    if (!=) goto 0x0x80726018;
    /* li r0, 1 */ // 0x80726014
    if (==) goto 0x0x8072604c;
    r12 = *(0 + r29); // lwz @ 0x80726020
    r3 = r29;
    r4 = r30 + 0x6f4; // 0x80726028
    r12 = *(0x78 + r12); // lwz @ 0x8072602C
    /* mtctr r12 */ // 0x80726030
    /* bctrl  */ // 0x80726034
    r12 = *(0 + r29); // lwz @ 0x80726038
    r3 = r29;
    r12 = *(0x80 + r12); // lwz @ 0x80726040
    /* mtctr r12 */ // 0x80726044
    /* bctrl  */ // 0x80726048
    r29 = *(0x294 + r30); // lwz @ 0x8072604C
    if (==) goto 0x0x807260c0;
    r3 = r29 + 0x74; // 0x80726058
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x80726070;
    /* li r3, 0 */ // 0x80726068
    /* b 0x80726074 */ // 0x8072606C
    r3 = *(0xc + r3); // lwz @ 0x80726070
    /* li r0, 0 */ // 0x80726078
    if (==) goto 0x0x80726088;
    if (!=) goto 0x0x8072608c;
    /* li r0, 1 */ // 0x80726088
    if (==) goto 0x0x807260c0;
    r12 = *(0 + r29); // lwz @ 0x80726094
    r3 = r29;
    r4 = r30 + 0x6d0; // 0x8072609C
    r12 = *(0x74 + r12); // lwz @ 0x807260A0
    /* mtctr r12 */ // 0x807260A4
    /* bctrl  */ // 0x807260A8
    r12 = *(0 + r29); // lwz @ 0x807260AC
    r3 = r29;
    r12 = *(0x80 + r12); // lwz @ 0x807260B4
    /* mtctr r12 */ // 0x807260B8
    /* bctrl  */ // 0x807260BC
    r29 = *(0x298 + r30); // lwz @ 0x807260C0
    if (==) goto 0x0x80726134;
    r3 = r29 + 0x74; // 0x807260CC
    FUN_805E3430(r3); // bl 0x805E3430
}