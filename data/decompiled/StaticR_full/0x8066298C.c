/* Function at 0x8066298C, size=1428 bytes */
/* Stack frame: 1840 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 59 function(s) */

int FUN_8066298C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -1840(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r3;
    *(0x724 + r1) = r29; // stw @ 0x806629A4
    *(0x720 + r1) = r28; // stw @ 0x806629A8
    r0 = *(8 + r3); // lwz @ 0x806629AC
    if (!=) goto 0x0x806631b4;
    r0 = *(0x33c + r3); // lwz @ 0x806629B8
    if (==) goto 0x0x806629f0;
    if (==) goto 0x0x80662bec;
    if (==) goto 0x0x80662d28;
    if (==) goto 0x0x80662d28;
    if (==) goto 0x0x80662f10;
    if (==) goto 0x0x80662fec;
    /* b 0x806631b4 */ // 0x806629EC
    /* li r4, 0 */ // 0x806629F0
    r3 = r3 + 0xec; // 0x806629F4
    FUN_8069F4B0(r4, r3); // bl 0x8069F4B0
    r0 = *(0x38 + r3); // lwz @ 0x806629FC
    if (!=) goto 0x0x806631b4;
    /* lis r28, 0 */ // 0x80662A08
    r3 = *(0 + r28); // lwz @ 0x80662A0C
    FUN_807DF35C(); // bl 0x807DF35C
    if (==) goto 0x0x806631b4;
    r3 = *(0 + r28); // lwz @ 0x80662A1C
    FUN_807DF514(); // bl 0x807DF514
    /* lis r3, 0 */ // 0x80662A24
    /* li r4, 0 */ // 0x80662A28
    r3 = *(0 + r3); // lwz @ 0x80662A2C
    r3 = *(0x98 + r3); // lwz @ 0x80662A30
    r3 = r3 + 0x238; // 0x80662A34
    FUN_8066E0EC(r3, r4, r3); // bl 0x8066E0EC
    r29 = r3;
    FUN_80654ECC(r3, r3); // bl 0x80654ECC
    /* lis r28, 0 */ // 0x80662A48
    *(0x698 + r1) = r29; // stw @ 0x80662A4C
    r28 = r28 + 0; // 0x80662A50
    r3 = r31 + 0x1c8; // 0x80662A54
    r4 = r28 + 0x3c; // 0x80662A58
    /* li r5, 0x251d */ // 0x80662A60
    FUN_806A093C(r3, r4, r6, r5); // bl 0x806A093C
    r3 = r31 + 0x1c8; // 0x80662A68
    r4 = r28 + 0x45; // 0x80662A6C
    /* li r5, 0x251d */ // 0x80662A74
    FUN_806A093C(r3, r4, r6, r5); // bl 0x806A093C
    /* lis r3, 0 */ // 0x80662A7C
    r3 = *(0 + r3); // lwz @ 0x80662A80
    FUN_806EED60(r6, r5, r3); // bl 0x806EED60
    r29 = r3;
    r30 = r4;
    FUN_80654ECC(r3); // bl 0x80654ECC
    /* lis r6, 0x5f6 */ // 0x80662A98
    r3 = r29;
    r4 = r30;
    /* li r5, 0 */ // 0x80662AA4
    r6 = r6 + -0x1f00; // 0x80662AA8
    FUN_805E3430(r6, r3, r4, r5, r6); // bl 0x805E3430
    /* li r6, 0x2710 */ // 0x80662AB0
    /* li r5, 0 */ // 0x80662AB4
    FUN_805E3430(r5, r6, r6, r5); // bl 0x805E3430
    *(0x58c + r1) = r4; // stw @ 0x80662ABC
    r3 = r29;
    r4 = r30;
    /* li r6, 0x2710 */ // 0x80662AC8
    /* li r5, 0 */ // 0x80662ACC
    FUN_805E3430(r3, r4, r6, r5); // bl 0x805E3430
    /* li r6, 0x2710 */ // 0x80662AD4
    /* li r5, 0 */ // 0x80662AD8
    FUN_805E3430(r6, r5, r6, r5); // bl 0x805E3430
    *(0x590 + r1) = r4; // stw @ 0x80662AE0
    r3 = r29;
    r4 = r30;
    /* li r6, 0x2710 */ // 0x80662AEC
    /* li r5, 0 */ // 0x80662AF0
    FUN_805E3430(r3, r4, r6, r5); // bl 0x805E3430
    *(0x594 + r1) = r4; // stw @ 0x80662AF8
    r3 = r31 + 0x1c8; // 0x80662AFC
    r4 = r28 + 0x4c; // 0x80662B00
    /* li r5, 0x83e */ // 0x80662B08
    FUN_806A093C(r3, r4, r6, r5); // bl 0x806A093C
    r3 = r31 + 0x1c8; // 0x80662B10
    r4 = r28 + 0x54; // 0x80662B14
    /* li r5, 0x83e */ // 0x80662B1C
    FUN_806A093C(r3, r4, r6, r5); // bl 0x806A093C
    /* lis r3, 0 */ // 0x80662B24
    /* li r0, -1 */ // 0x80662B28
    *(8 + r1) = r0; // stw @ 0x80662B2C
    r3 = *(0 + r3); // lwz @ 0x80662B34
    FUN_805D951C(r3, r4); // bl 0x805D951C
    r0 = *(8 + r1); // lwz @ 0x80662B3C
    r5 = r28 + 0x63; // 0x80662B44
    /* li r4, 7 */ // 0x80662B48
    /* srwi r6, r0, 0x18 */ // 0x80662B4C
    /* crclr cr1eq */ // 0x80662B50
    FUN_805E3430(r3, r5, r4); // bl 0x805E3430
    r3 = r31 + 0x1c8; // 0x80662B58
    FUN_806A0FA8(r3, r4); // bl 0x806A0FA8
    if (==) goto 0x0x80662b9c;
    r3 = r31 + 0x1c8; // 0x80662B6C
    r4 = r28 + 0x68; // 0x80662B70
    FUN_806A0D70(r3, r4, r5); // bl 0x806A0D70
    r3 = r31 + 0x1c8; // 0x80662B7C
    r4 = r28 + 0x6d; // 0x80662B80
    FUN_806A0D70(r5, r3, r4, r5); // bl 0x806A0D70
    r3 = r31 + 0x1c8; // 0x80662B8C
    r4 = r28 + 0x79; // 0x80662B90
    /* li r5, 1 */ // 0x80662B94
    FUN_806A11CC(r5, r3, r4, r5); // bl 0x806A11CC
    /* lis r3, 0 */ // 0x80662B9C
    /* li r4, 0 */ // 0x80662BA0
    r3 = *(0 + r3); // lwz @ 0x80662BA4
    r3 = *(0x98 + r3); // lwz @ 0x80662BA8
    r3 = r3 + 0x238; // 0x80662BAC
    FUN_8066E0EC(r3, r4, r3); // bl 0x8066E0EC
    r0 = *(0x40c + r31); // lwz @ 0x80662BB4
    r4 = r3;
    if (==) goto 0x0x80662be0;
    r3 = r0;
    r12 = *(0 + r3); // lwz @ 0x80662BC8
    r12 = *(8 + r12); // lwz @ 0x80662BCC
    /* mtctr r12 */ // 0x80662BD0
    /* bctrl  */ // 0x80662BD4
    /* li r0, 0 */ // 0x80662BD8
    *(0x40c + r31) = r0; // stw @ 0x80662BDC
    /* li r0, 1 */ // 0x80662BE0
    *(0x33c + r31) = r0; // stw @ 0x80662BE4
    /* b 0x806631b4 */ // 0x80662BE8
    /* li r4, 0 */ // 0x80662BEC
    r3 = r3 + 0xec; // 0x80662BF0
    FUN_8069F4B0(r4, r3); // bl 0x8069F4B0
    r0 = *(0x38 + r3); // lwz @ 0x80662BF8
    if (!=) goto 0x0x806631b4;
    /* lis r28, 0 */ // 0x80662C04
    r3 = *(0 + r28); // lwz @ 0x80662C08
    FUN_807DF35C(); // bl 0x807DF35C
    if (==) goto 0x0x806631b4;
    r3 = *(0 + r28); // lwz @ 0x80662C18
    FUN_807DF514(); // bl 0x807DF514
    FUN_80654ECC(r3); // bl 0x80654ECC
    /* lis r28, 0 */ // 0x80662C28
    r0 = r31 + 0x340; // 0x80662C2C
    r28 = r28 + 0; // 0x80662C30
    *(0x510 + r1) = r0; // stw @ 0x80662C34
    r3 = r31 + 0x1c8; // 0x80662C38
    r4 = r28 + 0x83; // 0x80662C40
    /* li r5, 0x251d */ // 0x80662C44
    FUN_806A093C(r3, r6, r4, r5); // bl 0x806A093C
    r3 = r31 + 0x1c8; // 0x80662C4C
    r4 = r28 + 0x8c; // 0x80662C50
    /* li r5, 0x251d */ // 0x80662C58
    FUN_806A093C(r3, r4, r6, r5); // bl 0x806A093C
    r0 = *(0x404 + r31); // lwz @ 0x80662C60
    r3 = r31 + 0x1c8; // 0x80662C64
    r4 = r28 + 0x93; // 0x80662C68
    /* li r6, 0 */ // 0x80662C6C
    /* srwi r5, r0, 0x18 */ // 0x80662C70
    r29 = r5 + 0x15e0; // 0x80662C74
    r5 = r29;
    FUN_806A093C(r4, r6, r5); // bl 0x806A093C
    r5 = r29;
    r3 = r31 + 0x1c8; // 0x80662C84
    r4 = r28 + 0x9b; // 0x80662C88
    /* li r6, 0 */ // 0x80662C8C
    FUN_806A093C(r5, r3, r4, r6); // bl 0x806A093C
    r0 = *(0x404 + r31); // lwz @ 0x80662C94
    r5 = r28 + 0xaa; // 0x80662C9C
    /* li r4, 7 */ // 0x80662CA0
    /* srwi r6, r0, 0x18 */ // 0x80662CA4
    /* crclr cr1eq */ // 0x80662CA8
    FUN_805E3430(r3, r5, r4); // bl 0x805E3430
    r3 = r31 + 0x1c8; // 0x80662CB0
    FUN_806A0FA8(r3, r4); // bl 0x806A0FA8
    if (==) goto 0x0x80662cf4;
    r3 = r31 + 0x1c8; // 0x80662CC4
    r4 = r28 + 0xaf; // 0x80662CC8
    FUN_806A0D70(r3, r4, r5); // bl 0x806A0D70
    r3 = r31 + 0x1c8; // 0x80662CD4
    r4 = r28 + 0xb4; // 0x80662CD8
    FUN_806A0D70(r5, r3, r4, r5); // bl 0x806A0D70
    r3 = r31 + 0x1c8; // 0x80662CE4
    r4 = r28 + 0xc0; // 0x80662CE8
    /* li r5, 1 */ // 0x80662CEC
    FUN_806A11CC(r5, r3, r4, r5); // bl 0x806A11CC
    r3 = *(0x40c + r31); // lwz @ 0x80662CF4
    if (==) goto 0x0x80662d1c;
    r12 = *(0 + r3); // lwz @ 0x80662D00
    r4 = r31 + 0x340; // 0x80662D04
    r12 = *(8 + r12); // lwz @ 0x80662D08
    /* mtctr r12 */ // 0x80662D0C
    /* bctrl  */ // 0x80662D10
    /* li r0, 0 */ // 0x80662D14
    *(0x40c + r31) = r0; // stw @ 0x80662D18
    /* li r0, 3 */ // 0x80662D1C
    *(0x33c + r31) = r0; // stw @ 0x80662D20
    /* b 0x806631b4 */ // 0x80662D24
    /* li r4, 0 */ // 0x80662D28
    r3 = r3 + 0xec; // 0x80662D2C
    FUN_8069F4B0(r4, r3); // bl 0x8069F4B0
    r0 = *(0x38 + r3); // lwz @ 0x80662D34
    if (!=) goto 0x0x806631b4;
    /* lis r28, 0 */ // 0x80662D40
    r3 = *(0 + r28); // lwz @ 0x80662D44
    FUN_807DF35C(); // bl 0x807DF35C
    if (==) goto 0x0x806631b4;
    r3 = *(0 + r28); // lwz @ 0x80662D54
    FUN_807DF514(); // bl 0x807DF514
    FUN_80654ECC(r3); // bl 0x80654ECC
    /* lis r28, 0 */ // 0x80662D64
    r0 = r31 + 0x340; // 0x80662D68
    r28 = r28 + 0; // 0x80662D6C
    *(0x44c + r1) = r0; // stw @ 0x80662D70
    r3 = r31 + 0x1c8; // 0x80662D74
    r4 = r28 + 0xca; // 0x80662D7C
    /* li r5, 0x251d */ // 0x80662D80
    FUN_806A093C(r3, r6, r4, r5); // bl 0x806A093C
    r3 = r31 + 0x1c8; // 0x80662D88
    r4 = r28 + 0xd3; // 0x80662D8C
    /* li r5, 0x251d */ // 0x80662D94
    FUN_806A093C(r3, r4, r6, r5); // bl 0x806A093C
    /* lis r29, 0 */ // 0x80662D9C
    r4 = *(0x3f8 + r31); // lwz @ 0x80662DA0
    r3 = *(0 + r29); // lwz @ 0x80662DA4
    r3 = *(0 + r3); // lwz @ 0x80662DA8
    r3 = *(0x404 + r3); // lwz @ 0x80662DAC
    FUN_806597F8(); // bl 0x806597F8
    r30 = r3;
    FUN_80654ECC(r3); // bl 0x80654ECC
    /* lis r5, 0x5f6 */ // 0x80662DC0
    r3 = *(0 + r30); // lwz @ 0x80662DC4
    r6 = r5 + -0x1f00; // 0x80662DC8
    r4 = *(4 + r30); // lwz @ 0x80662DCC
    /* li r5, 0 */ // 0x80662DD0
    FUN_805E3430(r5, r6, r5); // bl 0x805E3430
    /* li r6, 0x2710 */ // 0x80662DD8
    /* li r5, 0 */ // 0x80662DDC
    FUN_805E3430(r5, r6, r5); // bl 0x805E3430
    *(0x340 + r1) = r4; // stw @ 0x80662DE4
    /* li r6, 0x2710 */ // 0x80662DE8
    /* li r5, 0 */ // 0x80662DEC
    r3 = *(0 + r30); // lwz @ 0x80662DF0
    r4 = *(4 + r30); // lwz @ 0x80662DF4
    FUN_805E3430(r6, r5); // bl 0x805E3430
    /* li r6, 0x2710 */ // 0x80662DFC
    /* li r5, 0 */ // 0x80662E00
    FUN_805E3430(r6, r5); // bl 0x805E3430
    *(0x344 + r1) = r4; // stw @ 0x80662E08
    /* li r6, 0x2710 */ // 0x80662E0C
    /* li r5, 0 */ // 0x80662E10
    r3 = *(0 + r30); // lwz @ 0x80662E14
    r4 = *(4 + r30); // lwz @ 0x80662E18
    FUN_805E3430(r6, r5); // bl 0x805E3430
    *(0x348 + r1) = r4; // stw @ 0x80662E20
    r3 = r31 + 0x1c8; // 0x80662E24
    r4 = r28 + 0xda; // 0x80662E28
    /* li r5, 0x83e */ // 0x80662E30
    FUN_806A093C(r3, r4, r6, r5); // bl 0x806A093C
    r3 = r31 + 0x1c8; // 0x80662E38
    r4 = r28 + 0xe2; // 0x80662E3C
    /* li r5, 0x83e */ // 0x80662E44
    FUN_806A093C(r3, r4, r6, r5); // bl 0x806A093C
    r3 = *(0 + r29); // lwz @ 0x80662E4C
    r4 = *(0x3f8 + r31); // lwz @ 0x80662E50
    r3 = *(0 + r3); // lwz @ 0x80662E54
    r3 = *(0x404 + r3); // lwz @ 0x80662E58
    FUN_80659814(); // bl 0x80659814
    r4 = r3;
    r0 = *(0x70 + r4); // lwz @ 0x80662E68
    r5 = r28 + 0xf1; // 0x80662E6C
    /* li r4, 7 */ // 0x80662E70
    /* srwi r6, r0, 0x18 */ // 0x80662E74
    /* crclr cr1eq */ // 0x80662E78
    FUN_805E3430(r5, r4); // bl 0x805E3430
    r3 = r31 + 0x1c8; // 0x80662E80
    FUN_806A0FA8(r3, r4); // bl 0x806A0FA8
    if (==) goto 0x0x80662ec4;
    r3 = r31 + 0x1c8; // 0x80662E94
    r4 = r28 + 0xf6; // 0x80662E98
    FUN_806A0D70(r3, r4, r5); // bl 0x806A0D70
    r3 = r31 + 0x1c8; // 0x80662EA4
    r4 = r28 + 0xfb; // 0x80662EA8
    FUN_806A0D70(r5, r3, r4, r5); // bl 0x806A0D70
    r3 = r31 + 0x1c8; // 0x80662EB4
    r4 = r28 + 0x107; // 0x80662EB8
    /* li r5, 1 */ // 0x80662EBC
    FUN_806A11CC(r5, r3, r4, r5); // bl 0x806A11CC
    r3 = *(0x40c + r31); // lwz @ 0x80662EC4
    /* li r0, -2 */ // 0x80662EC8
    *(0x3fc + r31) = r0; // stw @ 0x80662ECC
    if (==) goto 0x0x80662ef4;
    r12 = *(0 + r3); // lwz @ 0x80662ED8
    r4 = r31 + 0x340; // 0x80662EDC
    r12 = *(8 + r12); // lwz @ 0x80662EE0
    /* mtctr r12 */ // 0x80662EE4
    /* bctrl  */ // 0x80662EE8
    /* li r0, 0 */ // 0x80662EEC
    *(0x40c + r31) = r0; // stw @ 0x80662EF0
    /* li r0, 5 */ // 0x80662EF4
    *(0x33c + r31) = r0; // stw @ 0x80662EF8
    r3 = r31;
    /* li r4, 0x3c */ // 0x80662F00
    /* li r5, -1 */ // 0x80662F04
    FUN_806724B8(r3, r4, r5); // bl 0x806724B8
    /* b 0x806631b4 */ // 0x80662F0C
    /* li r4, 0 */ // 0x80662F10
    r3 = r3 + 0xec; // 0x80662F14
    FUN_8069F4B0(r5, r4, r3); // bl 0x8069F4B0
    r0 = *(0x38 + r3); // lwz @ 0x80662F1C
}