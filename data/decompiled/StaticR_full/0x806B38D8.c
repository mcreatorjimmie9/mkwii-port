/* Function at 0x806B38D8, size=2644 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 21 function(s) */

int FUN_806B38D8(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r3, 0 */ // 0x806B38E0
    *(0x54 + r1) = r29; // stw @ 0x806B38F0
    *(0x50 + r1) = r28; // stw @ 0x806B38F4
    r3 = *(0 + r3); // lwz @ 0x806B38F8
    r28 = *(0x98 + r3); // lwz @ 0x806B38FC
    if (!=) goto 0x0x806b3910;
    /* li r3, -1 */ // 0x806B3908
    /* b 0x806b4600 */ // 0x806B390C
    if (!=) goto 0x0x806b391c;
    /* li r0, 0 */ // 0x806B3914
    /* b 0x806b39a4 */ // 0x806B3918
    /* lis r7, 0 */ // 0x806B391C
    /* li r0, 0x70 */ // 0x806B3920
    r7 = r7 + 0; // 0x806B3924
    r3 = r28;
    r5 = *(1 + r7); // lbz @ 0x806B392C
    *(0x4d + r1) = r5; // stb @ 0x806B3934
    r6 = *(0 + r7); // lbz @ 0x806B3938
    r5 = *(2 + r7); // lbz @ 0x806B393C
    *(0x4c + r1) = r6; // stb @ 0x806B3940
    *(0x4e + r1) = r5; // stb @ 0x806B3944
    *(0x4d + r1) = r0; // stb @ 0x806B3948
    FUN_805E3430(); // bl 0x805E3430
    if (!=) goto 0x0x806b3960;
    /* li r0, 0 */ // 0x806B3958
    /* b 0x806b39a4 */ // 0x806B395C
    if (==) goto 0x0x806b3974;
    r0 = *(-1 + r3); // lbz @ 0x806B3968
    if (!=) goto 0x0x806b39a0;
    /* lis r4, 0 */ // 0x806B3974
    r4 = r4 + 0; // 0x806B397C
    /* crclr cr1eq */ // 0x806B3980
    r3 = r3 + 2; // 0x806B3984
    FUN_805E3430(r4, r5, r4, r3); // bl 0x805E3430
    /* subfic r4, r3, -1 */ // 0x806B398C
    r0 = r3 + 1; // 0x806B3990
    r0 = r4 | r0; // 0x806B3994
    /* srwi r0, r0, 0x1f */ // 0x806B3998
    /* b 0x806b39a4 */ // 0x806B399C
    /* li r0, 0 */ // 0x806B39A0
    if (!=) goto 0x0x806b39b4;
    /* li r5, 0 */ // 0x806B39AC
    /* b 0x806b3a3c */ // 0x806B39B0
    r5 = *(0x48 + r1); // lwz @ 0x806B39B4
    if (>=) goto 0x0x806b3a00;
    if (>=) goto 0x0x806b39e8;
    if (==) goto 0x0x806b3a3c;
    if (>=) goto 0x0x806b3a38;
    if (>=) goto 0x0x806b3a38;
    if (>=) goto 0x0x806b3a3c;
    /* b 0x806b3a38 */ // 0x806B39E4
    if (==) goto 0x0x806b3a3c;
    if (>=) goto 0x0x806b3a38;
    if (>=) goto 0x0x806b3a38;
    /* b 0x806b3a3c */ // 0x806B39FC
    if (>=) goto 0x0x806b3a20;
    if (==) goto 0x0x806b3a3c;
    if (>=) goto 0x0x806b3a38;
    if (>=) goto 0x0x806b3a38;
    /* b 0x806b3a3c */ // 0x806B3A1C
    if (==) goto 0x0x806b3a3c;
    if (>=) goto 0x0x806b3a38;
    if (>=) goto 0x0x806b3a38;
    /* b 0x806b3a3c */ // 0x806B3A34
    /* li r5, 0 */ // 0x806B3A38
    /* lis r3, 0 */ // 0x806B3A3C
    /* li r4, 0 */ // 0x806B3A40
    r3 = *(0 + r3); // lwz @ 0x806B3A44
    r3 = r3 + 0x34; // 0x806B3A48
    FUN_8067F4F4(r5, r3, r4, r3); // bl 0x8067F4F4
    /* lis r3, 0 */ // 0x806B3A50
    r3 = *(0 + r3); // lwz @ 0x806B3A54
    r28 = *(0x98 + r3); // lwz @ 0x806B3A58
    if (!=) goto 0x0x806b3a6c;
    /* li r0, 0 */ // 0x806B3A64
    /* b 0x806b3af8 */ // 0x806B3A68
    /* lis r7, 0 */ // 0x806B3A6C
    /* li r0, 0x73 */ // 0x806B3A70
    r7 = r7 + 0; // 0x806B3A74
    r3 = r28;
    r5 = *(1 + r7); // lbz @ 0x806B3A7C
    *(0x45 + r1) = r5; // stb @ 0x806B3A84
    r6 = *(0 + r7); // lbz @ 0x806B3A88
    r5 = *(2 + r7); // lbz @ 0x806B3A8C
    *(0x44 + r1) = r6; // stb @ 0x806B3A90
    *(0x46 + r1) = r5; // stb @ 0x806B3A94
    *(0x45 + r1) = r0; // stb @ 0x806B3A98
    FUN_805E3430(); // bl 0x805E3430
    if (!=) goto 0x0x806b3ab0;
    /* li r0, 0 */ // 0x806B3AA8
    /* b 0x806b3af8 */ // 0x806B3AAC
    if (==) goto 0x0x806b3ac4;
    r0 = *(-1 + r3); // lbz @ 0x806B3AB8
    if (!=) goto 0x0x806b3af4;
    /* lis r4, 0 */ // 0x806B3AC4
    r4 = r4 + 0; // 0x806B3ACC
    r4 = r4 + 3; // 0x806B3AD0
    /* crclr cr1eq */ // 0x806B3AD4
    r3 = r3 + 2; // 0x806B3AD8
    FUN_805E3430(r5, r4, r4, r3); // bl 0x805E3430
    /* subfic r4, r3, -1 */ // 0x806B3AE0
    r0 = r3 + 1; // 0x806B3AE4
    r0 = r4 | r0; // 0x806B3AE8
    /* srwi r0, r0, 0x1f */ // 0x806B3AEC
    /* b 0x806b3af8 */ // 0x806B3AF0
    /* li r0, 0 */ // 0x806B3AF4
    if (!=) goto 0x0x806b3b08;
    /* li r31, -1 */ // 0x806B3B00
    /* b 0x806b3b24 */ // 0x806B3B04
    r28 = *(0x40 + r1); // lwz @ 0x806B3B08
    r3 = r28;
    FUN_80694DFC(r3); // bl 0x80694DFC
    /* li r31, -1 */ // 0x806B3B18
    if (!=) goto 0x0x806b3b24;
    r31 = r28;
    if (==) goto 0x0x806b45fc;
    if (>=) goto 0x0x806b3b5c;
    if (==) goto 0x0x806b3b9c;
    if (>=) goto 0x0x806b3b48;
    if (==) goto 0x0x806b3b94;
    /* b 0x806b45fc */ // 0x806B3B44
    if (>=) goto 0x0x806b3f58;
    if (>=) goto 0x0x806b45fc;
    /* b 0x806b3cb8 */ // 0x806B3B58
    if (==) goto 0x0x806b3f58;
    if (>=) goto 0x0x806b3b88;
    if (>=) goto 0x0x806b3b7c;
    if (>=) goto 0x0x806b45fc;
    /* b 0x806b3f58 */ // 0x806B3B78
    if (>=) goto 0x0x806b45fc;
    /* b 0x806b3f58 */ // 0x806B3B84
    if (==) goto 0x0x806b3f58;
    /* b 0x806b45fc */ // 0x806B3B90
    r3 = r31;
    /* b 0x806b4600 */ // 0x806B3B98
    /* lis r3, 0 */ // 0x806B3B9C
    r3 = *(0 + r3); // lwz @ 0x806B3BA0
    r28 = *(0x98 + r3); // lwz @ 0x806B3BA4
    if (!=) goto 0x0x806b3bb8;
    /* li r0, 0 */ // 0x806B3BB0
    /* b 0x806b3c44 */ // 0x806B3BB4
    /* lis r7, 0 */ // 0x806B3BB8
    /* li r0, 0x6c */ // 0x806B3BBC
    r7 = r7 + 0; // 0x806B3BC0
    r3 = r28;
    r5 = *(1 + r7); // lbz @ 0x806B3BC8
    *(0x3d + r1) = r5; // stb @ 0x806B3BD0
    r6 = *(0 + r7); // lbz @ 0x806B3BD4
    r5 = *(2 + r7); // lbz @ 0x806B3BD8
    *(0x3c + r1) = r6; // stb @ 0x806B3BDC
    *(0x3e + r1) = r5; // stb @ 0x806B3BE0
    *(0x3d + r1) = r0; // stb @ 0x806B3BE4
    FUN_805E3430(); // bl 0x805E3430
    if (!=) goto 0x0x806b3bfc;
    /* li r0, 0 */ // 0x806B3BF4
    /* b 0x806b3c44 */ // 0x806B3BF8
    if (==) goto 0x0x806b3c10;
    r0 = *(-1 + r3); // lbz @ 0x806B3C04
    if (!=) goto 0x0x806b3c40;
    /* lis r4, 0 */ // 0x806B3C10
    r4 = r4 + 0; // 0x806B3C18
    r4 = r4 + 6; // 0x806B3C1C
    /* crclr cr1eq */ // 0x806B3C20
    r3 = r3 + 2; // 0x806B3C24
    FUN_805E3430(r5, r4, r4, r3); // bl 0x805E3430
    /* subfic r4, r3, -1 */ // 0x806B3C2C
    r0 = r3 + 1; // 0x806B3C30
    r0 = r4 | r0; // 0x806B3C34
    /* srwi r0, r0, 0x1f */ // 0x806B3C38
    /* b 0x806b3c44 */ // 0x806B3C3C
    /* li r0, 0 */ // 0x806B3C40
    if (!=) goto 0x0x806b3c54;
    /* li r6, -1 */ // 0x806B3C4C
    /* b 0x806b3c68 */ // 0x806B3C50
    r0 = *(0x38 + r1); // lwz @ 0x806B3C54
    /* li r6, -1 */ // 0x806B3C58
    if (>) goto 0x0x806b3c68;
    r6 = r0;
    if (<) goto 0x0x806b45fc;
    /* lis r3, 1 */ // 0x806B3C70
    /* lis r5, 0 */ // 0x806B3C74
    /* clrlwi r4, r6, 0x18 */ // 0x806B3C78
    r5 = *(0 + r5); // lwz @ 0x806B3C7C
    r0 = r3 + -0x7340; // 0x806B3C80
    r0 = r0 * r4; // 0x806B3C84
    r3 = *(0x14 + r5); // lwz @ 0x806B3C88
    r3 = r3 + r0; // 0x806B3C8C
    r3 = *(8 + r3); // lwz @ 0x806B3C90
    /* addis r0, r3, -0x524b */ // 0x806B3C94
    if (==) goto 0x0x806b45fc;
    /* lis r4, 0 */ // 0x806B3CA0
    r3 = r31;
    r4 = *(0 + r4); // lwz @ 0x806B3CA8
    r4 = *(0x98 + r4); // lwz @ 0x806B3CAC
    *(0x4e8 + r4) = r6; // stb @ 0x806B3CB0
    /* b 0x806b4600 */ // 0x806B3CB4
    /* lis r3, 0 */ // 0x806B3CB8
    r3 = *(0 + r3); // lwz @ 0x806B3CBC
    r28 = *(0x98 + r3); // lwz @ 0x806B3CC0
    if (!=) goto 0x0x806b3cd4;
    /* li r0, 0 */ // 0x806B3CCC
    /* b 0x806b3d60 */ // 0x806B3CD0
    /* lis r7, 0 */ // 0x806B3CD4
    /* li r0, 0x6c */ // 0x806B3CD8
    r7 = r7 + 0; // 0x806B3CDC
    r3 = r28;
    r5 = *(1 + r7); // lbz @ 0x806B3CE4
    *(0x35 + r1) = r5; // stb @ 0x806B3CEC
    r6 = *(0 + r7); // lbz @ 0x806B3CF0
    r5 = *(2 + r7); // lbz @ 0x806B3CF4
    *(0x34 + r1) = r6; // stb @ 0x806B3CF8
    *(0x36 + r1) = r5; // stb @ 0x806B3CFC
    *(0x35 + r1) = r0; // stb @ 0x806B3D00
    FUN_805E3430(); // bl 0x805E3430
    if (!=) goto 0x0x806b3d18;
    /* li r0, 0 */ // 0x806B3D10
    /* b 0x806b3d60 */ // 0x806B3D14
    if (==) goto 0x0x806b3d2c;
    r0 = *(-1 + r3); // lbz @ 0x806B3D20
    if (!=) goto 0x0x806b3d5c;
    /* lis r4, 0 */ // 0x806B3D2C
    r4 = r4 + 0; // 0x806B3D34
    r4 = r4 + 9; // 0x806B3D38
    /* crclr cr1eq */ // 0x806B3D3C
    r3 = r3 + 2; // 0x806B3D40
    FUN_805E3430(r5, r4, r4, r3); // bl 0x805E3430
    /* subfic r4, r3, -1 */ // 0x806B3D48
    r0 = r3 + 1; // 0x806B3D4C
    r0 = r4 | r0; // 0x806B3D50
    /* srwi r0, r0, 0x1f */ // 0x806B3D54
    /* b 0x806b3d60 */ // 0x806B3D58
    /* li r0, 0 */ // 0x806B3D5C
    if (!=) goto 0x0x806b3d70;
    /* li r30, -1 */ // 0x806B3D68
    /* b 0x806b3d84 */ // 0x806B3D6C
    r0 = *(0x30 + r1); // lwz @ 0x806B3D70
    /* li r30, -1 */ // 0x806B3D74
    if (>) goto 0x0x806b3d84;
    r30 = r0;
    if (<) goto 0x0x806b45fc;
    /* lis r28, 1 */ // 0x806B3D8C
    /* lis r29, 0 */ // 0x806B3D90
    /* clrlwi r4, r30, 0x18 */ // 0x806B3D94
    r3 = *(0 + r29); // lwz @ 0x806B3D98
    r0 = r28 + -0x7340; // 0x806B3D9C
    r0 = r0 * r4; // 0x806B3DA0
    r5 = *(0x14 + r3); // lwz @ 0x806B3DA4
    r5 = r5 + r0; // 0x806B3DA8
    r5 = *(8 + r5); // lwz @ 0x806B3DAC
    /* addis r0, r5, -0x524b */ // 0x806B3DB0
    if (!=) goto 0x0x806b45fc;
    FUN_805D383C(); // bl 0x805D383C
    r5 = *(0 + r29); // lwz @ 0x806B3DC0
    /* lis r3, 0 */ // 0x806B3DC4
    r3 = *(0 + r3); // lwz @ 0x806B3DC8
    r0 = *(0x36 + r5); // lha @ 0x806B3DCC
    if (<) goto 0x0x806b3df0;
    /* clrlwi r4, r0, 0x18 */ // 0x806B3DD8
    r0 = r28 + -0x6c10; // 0x806B3DDC
    r0 = r0 * r4; // 0x806B3DE0
    r4 = r5 + r0; // 0x806B3DE4
    r4 = r4 + 0x38; // 0x806B3DE8
    /* b 0x806b3df4 */ // 0x806B3DEC
    /* li r4, 0 */ // 0x806B3DF0
    /* lis r5, 0 */ // 0x806B3DF4
    r4 = r4 + 0x16; // 0x806B3DF8
    r5 = *(0 + r5); // lwz @ 0x806B3DFC
    r5 = *(0x34 + r5); // lwz @ 0x806B3E00
    FUN_805B7738(r4, r5, r4); // bl 0x805B7738
    /* li r28, 0 */ // 0x806B3E0C
    if (==) goto 0x0x806b3e24;
    r0 = *(0xa4 + r3); // lbz @ 0x806B3E14
    if (==) goto 0x0x806b3e24;
    /* li r28, 1 */ // 0x806B3E20
    if (==) goto 0x0x806b3e40;
    r12 = *(0 + r3); // lwz @ 0x806B3E2C
    /* li r4, 1 */ // 0x806B3E30
    r12 = *(8 + r12); // lwz @ 0x806B3E34
    /* mtctr r12 */ // 0x806B3E38
    /* bctrl  */ // 0x806B3E3C
    if (!=) goto 0x0x806b45fc;
    /* lis r4, 0 */ // 0x806B3E48
    /* lis r3, 0 */ // 0x806B3E4C
    r4 = *(0 + r4); // lwz @ 0x806B3E50
    r4 = *(0x98 + r4); // lwz @ 0x806B3E54
    *(0x4e8 + r4) = r30; // stb @ 0x806B3E58
    r7 = *(0 + r3); // lwz @ 0x806B3E5C
    r6 = *(0x36 + r7); // lha @ 0x806B3E60
    if (<) goto 0x0x806b3e88;
    /* lis r3, 1 */ // 0x806B3E6C
    /* clrlwi r4, r6, 0x18 */ // 0x806B3E70
    r0 = r3 + -0x6c10; // 0x806B3E74
    r0 = r0 * r4; // 0x806B3E78
    r3 = r7 + r0; // 0x806B3E7C
    r4 = r3 + 0x38; // 0x806B3E80
    /* b 0x806b3e8c */ // 0x806B3E84
    /* li r4, 0 */ // 0x806B3E88
    /* lis r3, 0 */ // 0x806B3E8C
    /* addis r4, r4, 1 */ // 0x806B3E90
    r5 = *(0 + r3); // lwz @ 0x806B3E94
    r3 = *(-0x6c1a + r4); // lbz @ 0x806B3E98
    r0 = *(0xf0 + r5); // lbz @ 0x806B3E9C
    if (!=) goto 0x0x806b3ec8;
    r3 = *(-0x6c19 + r4); // lbz @ 0x806B3EA8
    r0 = *(0xf1 + r5); // lbz @ 0x806B3EAC
    if (!=) goto 0x0x806b3ec8;
    r3 = *(-0x6c18 + r4); // lbz @ 0x806B3EB8
    r0 = *(0xf2 + r5); // lbz @ 0x806B3EBC
    if (==) goto 0x0x806b3f50;
    if (<) goto 0x0x806b3ef0;
    r4 = *(0x36 + r7); // lha @ 0x806B3ED0
    /* lis r3, 1 */ // 0x806B3ED4
    r0 = r3 + -0x6c10; // 0x806B3ED8
    /* clrlwi r3, r4, 0x18 */ // 0x806B3EDC
    r0 = r0 * r3; // 0x806B3EE0
    r3 = r7 + r0; // 0x806B3EE4
    r3 = r3 + 0x38; // 0x806B3EE8
    /* b 0x806b3ef4 */ // 0x806B3EEC
    /* li r3, 0 */ // 0x806B3EF0
    /* addis r4, r3, 1 */ // 0x806B3EF4
    r0 = *(0xf0 + r5); // lbz @ 0x806B3EF8
    *(-0x6c1a + r4) = r0; // stb @ 0x806B3EFC
    /* lis r3, 0 */ // 0x806B3F00
    r0 = *(0xf1 + r5); // lbz @ 0x806B3F04
    *(-0x6c19 + r4) = r0; // stb @ 0x806B3F08
    r0 = *(0xf2 + r5); // lbz @ 0x806B3F0C
    *(-0x6c18 + r4) = r0; // stb @ 0x806B3F10
    r0 = *(0xf3 + r5); // lbz @ 0x806B3F14
    *(-0x6c17 + r4) = r0; // stb @ 0x806B3F18
    r5 = *(0 + r3); // lwz @ 0x806B3F1C
    r0 = *(0x36 + r5); // lha @ 0x806B3F20
    if (<) goto 0x0x806b3f48;
    /* lis r3, 1 */ // 0x806B3F2C
    /* clrlwi r4, r0, 0x18 */ // 0x806B3F30
    r0 = r3 + -0x6c10; // 0x806B3F34
    r0 = r0 * r4; // 0x806B3F38
    r3 = r5 + r0; // 0x806B3F3C
    r3 = r3 + 0x38; // 0x806B3F40
    /* b 0x806b3f4c */ // 0x806B3F44
    /* li r3, 0 */ // 0x806B3F48
    FUN_805D83DC(r3, r3); // bl 0x805D83DC
    r3 = r31;
    /* b 0x806b4600 */ // 0x806B3F54
    /* lis r3, 0 */ // 0x806B3F58
    r3 = *(0 + r3); // lwz @ 0x806B3F5C
    r28 = *(0x98 + r3); // lwz @ 0x806B3F60
    if (!=) goto 0x0x806b3f74;
    /* li r0, 0 */ // 0x806B3F6C
    /* b 0x806b4000 */ // 0x806B3F70
    /* lis r7, 0 */ // 0x806B3F74
    /* li r0, 0x6c */ // 0x806B3F78
    r7 = r7 + 0; // 0x806B3F7C
    r3 = r28;
    r5 = *(1 + r7); // lbz @ 0x806B3F84
    *(0x2d + r1) = r5; // stb @ 0x806B3F8C
    r6 = *(0 + r7); // lbz @ 0x806B3F90
    r5 = *(2 + r7); // lbz @ 0x806B3F94
    *(0x2c + r1) = r6; // stb @ 0x806B3F98
    *(0x2e + r1) = r5; // stb @ 0x806B3F9C
    *(0x2d + r1) = r0; // stb @ 0x806B3FA0
    FUN_805E3430(); // bl 0x805E3430
    if (!=) goto 0x0x806b3fb8;
    /* li r0, 0 */ // 0x806B3FB0
    /* b 0x806b4000 */ // 0x806B3FB4
    if (==) goto 0x0x806b3fcc;
    r0 = *(-1 + r3); // lbz @ 0x806B3FC0
    if (!=) goto 0x0x806b3ffc;
    /* lis r4, 0 */ // 0x806B3FCC
    r4 = r4 + 0; // 0x806B3FD4
    r4 = r4 + 0xc; // 0x806B3FD8
    /* crclr cr1eq */ // 0x806B3FDC
    r3 = r3 + 2; // 0x806B3FE0
    FUN_805E3430(r5, r4, r4, r3); // bl 0x805E3430
    /* subfic r4, r3, -1 */ // 0x806B3FE8
    r0 = r3 + 1; // 0x806B3FEC
    r0 = r4 | r0; // 0x806B3FF0
    /* srwi r0, r0, 0x1f */ // 0x806B3FF4
    /* b 0x806b4000 */ // 0x806B3FF8
    /* li r0, 0 */ // 0x806B3FFC
    if (!=) goto 0x0x806b4010;
    /* li r30, -1 */ // 0x806B4008
    /* b 0x806b4024 */ // 0x806B400C
    r0 = *(0x28 + r1); // lwz @ 0x806B4010
    /* li r30, -1 */ // 0x806B4014
    if (>) goto 0x0x806b4024;
    r30 = r0;
    if (<) goto 0x0x806b45fc;
    /* lis r29, 1 */ // 0x806B402C
    /* lis r28, 0 */ // 0x806B4030
    /* clrlwi r4, r30, 0x18 */ // 0x806B4034
    r3 = *(0 + r28); // lwz @ 0x806B4038
    r0 = r29 + -0x7340; // 0x806B403C
    r0 = r0 * r4; // 0x806B4040
    r5 = *(0x14 + r3); // lwz @ 0x806B4044
    r5 = r5 + r0; // 0x806B4048
    r5 = *(8 + r5); // lwz @ 0x806B404C
    /* addis r0, r5, -0x524b */ // 0x806B4050
    if (!=) goto 0x0x806b45fc;
    FUN_805D383C(); // bl 0x805D383C
    r4 = *(0 + r28); // lwz @ 0x806B4060
    r0 = *(0x36 + r4); // lha @ 0x806B4064
    if (<) goto 0x0x806b4088;
    /* clrlwi r3, r0, 0x18 */ // 0x806B4070
    r0 = r29 + -0x6c10; // 0x806B4074
    r0 = r0 * r3; // 0x806B4078
    r3 = r4 + r0; // 0x806B407C
    r6 = r3 + 0x38; // 0x806B4080
    /* b 0x806b408c */ // 0x806B4084
    /* li r6, 0 */ // 0x806B4088
    /* lis r3, 0 */ // 0x806B408C
    /* lis r4, 0 */ // 0x806B4090
    r5 = *(0 + r3); // lwz @ 0x806B4094
    r28 = r6 + 0x16; // 0x806B4098
    r3 = *(0 + r4); // lwz @ 0x806B409C
    r4 = r28;
    r5 = *(0x34 + r5); // lwz @ 0x806B40A4
    FUN_805B7738(r4); // bl 0x805B7738
    /* li r29, 0 */ // 0x806B40B0
    if (==) goto 0x0x806b40c8;
    r0 = *(0xa4 + r3); // lbz @ 0x806B40B8
    if (==) goto 0x0x806b40c8;
    /* li r29, 1 */ // 0x806B40C4
    if (==) goto 0x0x806b40e4;
    r12 = *(0 + r3); // lwz @ 0x806B40D0
    /* li r4, 1 */ // 0x806B40D4
    r12 = *(8 + r12); // lwz @ 0x806B40D8
    /* mtctr r12 */ // 0x806B40DC
    /* bctrl  */ // 0x806B40E0
    if (==) goto 0x0x806b45fc;
    /* lis r6, 0 */ // 0x806B40EC
    r5 = r28;
    r3 = *(0 + r6); // lwz @ 0x806B40F4
    /* li r4, 0 */ // 0x806B40F8
    r3 = *(0x98 + r3); // lwz @ 0x806B40FC
    *(0x4e8 + r3) = r30; // stb @ 0x806B4100
    r3 = *(0 + r6); // lwz @ 0x806B4104
    r3 = *(0x98 + r3); // lwz @ 0x806B4108
    r3 = r3 + 0x238; // 0x806B410C
    FUN_8066DE9C(r3); // bl 0x8066DE9C
    /* lis r3, 0 */ // 0x806B4114
    r7 = *(0 + r3); // lwz @ 0x806B4118
    r6 = *(0x36 + r7); // lha @ 0x806B411C
    if (<) goto 0x0x806b4144;
    /* lis r3, 1 */ // 0x806B4128
    /* clrlwi r4, r6, 0x18 */ // 0x806B412C
    r0 = r3 + -0x6c10; // 0x806B4130
    r0 = r0 * r4; // 0x806B4134
    r3 = r7 + r0; // 0x806B4138
    r4 = r3 + 0x38; // 0x806B413C
    /* b 0x806b4148 */ // 0x806B4140
    /* li r4, 0 */ // 0x806B4144
    /* lis r3, 0 */ // 0x806B4148
    /* addis r4, r4, 1 */ // 0x806B414C
    r5 = *(0 + r3); // lwz @ 0x806B4150
    r3 = *(-0x6c1a + r4); // lbz @ 0x806B4154
    r0 = *(0xf0 + r5); // lbz @ 0x806B4158
    if (!=) goto 0x0x806b4184;
    r3 = *(-0x6c19 + r4); // lbz @ 0x806B4164
    r0 = *(0xf1 + r5); // lbz @ 0x806B4168
    if (!=) goto 0x0x806b4184;
    r3 = *(-0x6c18 + r4); // lbz @ 0x806B4174
    r0 = *(0xf2 + r5); // lbz @ 0x806B4178
    if (==) goto 0x0x806b420c;
    if (<) goto 0x0x806b41ac;
    r4 = *(0x36 + r7); // lha @ 0x806B418C
    /* lis r3, 1 */ // 0x806B4190
    r0 = r3 + -0x6c10; // 0x806B4194
    /* clrlwi r3, r4, 0x18 */ // 0x806B4198
    r0 = r0 * r3; // 0x806B419C
    r3 = r7 + r0; // 0x806B41A0
    r3 = r3 + 0x38; // 0x806B41A4
    /* b 0x806b41b0 */ // 0x806B41A8
    /* li r3, 0 */ // 0x806B41AC
    /* addis r4, r3, 1 */ // 0x806B41B0
    r0 = *(0xf0 + r5); // lbz @ 0x806B41B4
    *(-0x6c1a + r4) = r0; // stb @ 0x806B41B8
    /* lis r3, 0 */ // 0x806B41BC
    r0 = *(0xf1 + r5); // lbz @ 0x806B41C0
    *(-0x6c19 + r4) = r0; // stb @ 0x806B41C4
    r0 = *(0xf2 + r5); // lbz @ 0x806B41C8
    *(-0x6c18 + r4) = r0; // stb @ 0x806B41CC
    r0 = *(0xf3 + r5); // lbz @ 0x806B41D0
    *(-0x6c17 + r4) = r0; // stb @ 0x806B41D4
    r5 = *(0 + r3); // lwz @ 0x806B41D8
    r0 = *(0x36 + r5); // lha @ 0x806B41DC
    if (<) goto 0x0x806b4204;
    /* lis r3, 1 */ // 0x806B41E8
    /* clrlwi r4, r0, 0x18 */ // 0x806B41EC
    r0 = r3 + -0x6c10; // 0x806B41F0
    r0 = r0 * r4; // 0x806B41F4
    r3 = r5 + r0; // 0x806B41F8
    r3 = r3 + 0x38; // 0x806B41FC
    /* b 0x806b4208 */ // 0x806B4200
    /* li r3, 0 */ // 0x806B4204
    FUN_805D83DC(r3, r3); // bl 0x805D83DC
    r0 = r31 + -0x4e; // 0x806B420C
    if (<=) goto 0x0x806b42e0;
    r0 = r31 + -0x52; // 0x806B4218
    if (<=) goto 0x0x806b42e0;
    if (!=) goto 0x0x806b45f4;
    /* lis r3, 0 */ // 0x806B422C
    r3 = *(0 + r3); // lwz @ 0x806B4230
    r28 = *(0x98 + r3); // lwz @ 0x806B4234
    if (==) goto 0x0x806b42ac;
    /* lis r7, 0 */ // 0x806B4240
    /* li r0, 0x72 */ // 0x806B4244
    r7 = r7 + 0; // 0x806B4248
    r3 = r28;
    r5 = *(1 + r7); // lbz @ 0x806B4250
    *(0x25 + r1) = r5; // stb @ 0x806B4258
    r6 = *(0 + r7); // lbz @ 0x806B425C
    r5 = *(2 + r7); // lbz @ 0x806B4260
    *(0x24 + r1) = r6; // stb @ 0x806B4264
    *(0x26 + r1) = r5; // stb @ 0x806B4268
    *(0x25 + r1) = r0; // stb @ 0x806B426C
    FUN_805E3430(); // bl 0x805E3430
    if (==) goto 0x0x806b42ac;
    if (==) goto 0x0x806b4290;
    r0 = *(-1 + r3); // lbz @ 0x806B4284
    if (!=) goto 0x0x806b42ac;
    /* lis r4, 0 */ // 0x806B4290
    r4 = r4 + 0; // 0x806B4298
    r4 = r4 + 0xf; // 0x806B429C
    /* crclr cr1eq */ // 0x806B42A0
    r3 = r3 + 2; // 0x806B42A4
    FUN_805E3430(r5, r4, r4, r3); // bl 0x805E3430
    r3 = *(0x20 + r1); // lwz @ 0x806B42AC
    /* li r0, -1 */ // 0x806B42B0
    if (>) goto 0x0x806b42c0;
    r0 = r3;
    if (<) goto 0x0x806b45fc;
    /* lis r4, 0 */ // 0x806B42C8
    r3 = r31;
    r4 = *(0 + r4); // lwz @ 0x806B42D0
    r4 = *(0x98 + r4); // lwz @ 0x806B42D4
    *(0x508 + r4) = r0; // stw @ 0x806B42D8
    /* b 0x806b4600 */ // 0x806B42DC
    /* lis r3, 0 */ // 0x806B42E0
    r3 = *(0 + r3); // lwz @ 0x806B42E4
    r28 = *(0x98 + r3); // lwz @ 0x806B42E8
    if (!=) goto 0x0x806b42fc;
    /* li r0, 0 */ // 0x806B42F4
    /* b 0x806b4388 */ // 0x806B42F8
    /* lis r7, 0 */ // 0x806B42FC
    /* li r0, 0x74 */ // 0x806B4300
    r7 = r7 + 0; // 0x806B4304
    r3 = r28;
    r5 = *(1 + r7); // lbz @ 0x806B430C
    *(0x1d + r1) = r5; // stb @ 0x806B4314
    r6 = *(0 + r7); // lbz @ 0x806B4318
    r5 = *(2 + r7); // lbz @ 0x806B431C
    *(0x1c + r1) = r6; // stb @ 0x806B4320
    *(0x1e + r1) = r5; // stb @ 0x806B4324
    *(0x1d + r1) = r0; // stb @ 0x806B4328
}