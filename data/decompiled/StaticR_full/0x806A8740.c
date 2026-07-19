/* Function at 0x806A8740, size=1560 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 21 function(s) */

int FUN_806A8740(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x806A8754
    *(0x14 + r1) = r29; // stw @ 0x806A8758
    r0 = *(8 + r3); // lwz @ 0x806A875C
    if (!=) goto 0x0x806a8d5c;
    r0 = *(0x58 + r3); // lwz @ 0x806A8768
    if (==) goto 0x0x806a87a0;
    if (==) goto 0x0x806a87e0;
    if (==) goto 0x0x806a88c0;
    if (==) goto 0x0x806a88e8;
    if (==) goto 0x0x806a8b08;
    if (==) goto 0x0x806a8cc4;
    /* b 0x806a8d5c */ // 0x806A879C
    /* lis r30, 0 */ // 0x806A87A0
    r3 = *(0 + r30); // lwz @ 0x806A87A4
    r3 = *(0 + r3); // lwz @ 0x806A87A8
    r3 = *(0x404 + r3); // lwz @ 0x806A87AC
    FUN_806598D0(); // bl 0x806598D0
    if (!=) goto 0x0x806a8d5c;
    r4 = *(0 + r30); // lwz @ 0x806A87BC
    /* lis r3, 0 */ // 0x806A87C0
    r3 = *(0 + r3); // lwz @ 0x806A87C4
    r4 = *(0x98 + r4); // lwz @ 0x806A87C8
    r4 = *(0x124 + r4); // lwz @ 0x806A87CC
    FUN_806E5828(r3); // bl 0x806E5828
    /* li r0, 7 */ // 0x806A87D4
    *(0x58 + r31) = r0; // stw @ 0x806A87D8
    /* b 0x806a8d5c */ // 0x806A87DC
    /* lis r30, 0 */ // 0x806A87E0
    r3 = *(0 + r30); // lwz @ 0x806A87E4
    FUN_806E65CC(); // bl 0x806E65CC
    *(8 + r1) = r3; // stw @ 0x806A87EC
    r3 = *(0 + r30); // lwz @ 0x806A87F0
    *(0xc + r1) = r4; // stw @ 0x806A87F4
    FUN_806E69B4(); // bl 0x806E69B4
    if (==) goto 0x0x806a882c;
    /* li r0, 1 */ // 0x806A8804
    *(0x6e + r31) = r0; // stb @ 0x806A8808
    /* lis r3, 0 */ // 0x806A880C
    r3 = *(0 + r3); // lwz @ 0x806A8810
    r3 = *(0 + r3); // lwz @ 0x806A8814
    r3 = *(0x404 + r3); // lwz @ 0x806A8818
    FUN_80659960(r3); // bl 0x80659960
    /* li r0, 8 */ // 0x806A8820
    *(0x58 + r31) = r0; // stw @ 0x806A8824
    /* b 0x806a8d5c */ // 0x806A8828
    r0 = *(8 + r1); // lwz @ 0x806A882C
    if (==) goto 0x0x806a8d5c;
    /* lis r3, 0 */ // 0x806A8838
    r3 = *(0 + r3); // lwz @ 0x806A883C
    r3 = *(0 + r3); // lwz @ 0x806A8840
    r29 = *(0x148 + r3); // lwz @ 0x806A8844
    if (!=) goto 0x0x806a8858;
    /* li r29, 0 */ // 0x806A8850
    /* b 0x806a88ac */ // 0x806A8854
    /* lis r30, 0 */ // 0x806A8858
    r30 = r30 + 0; // 0x806A885C
    if (==) goto 0x0x806a88a8;
    r12 = *(0 + r29); // lwz @ 0x806A8864
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806A886C
    /* mtctr r12 */ // 0x806A8870
    /* bctrl  */ // 0x806A8874
    /* b 0x806a8890 */ // 0x806A8878
    if (!=) goto 0x0x806a888c;
    /* li r0, 1 */ // 0x806A8884
    /* b 0x806a889c */ // 0x806A8888
    r3 = *(0 + r3); // lwz @ 0x806A888C
    if (!=) goto 0x0x806a887c;
    /* li r0, 0 */ // 0x806A8898
    if (==) goto 0x0x806a88a8;
    /* b 0x806a88ac */ // 0x806A88A4
    /* li r29, 0 */ // 0x806A88A8
    r3 = r29;
    FUN_80649164(r3); // bl 0x80649164
    /* li r0, 0xd */ // 0x806A88B4
    *(0x58 + r31) = r0; // stw @ 0x806A88B8
    /* b 0x806a8d5c */ // 0x806A88BC
    /* lis r3, 0 */ // 0x806A88C0
    r3 = *(0 + r3); // lwz @ 0x806A88C4
    r3 = *(0 + r3); // lwz @ 0x806A88C8
    r3 = *(0x404 + r3); // lwz @ 0x806A88CC
    FUN_806598D0(r3); // bl 0x806598D0
    if (!=) goto 0x0x806a8d5c;
    /* li r0, 9 */ // 0x806A88DC
    *(0x58 + r31) = r0; // stw @ 0x806A88E0
    /* b 0x806a8d5c */ // 0x806A88E4
    /* lis r3, 0 */ // 0x806A88E8
    r3 = *(0 + r3); // lwz @ 0x806A88EC
    r3 = *(0 + r3); // lwz @ 0x806A88F0
    r29 = *(0x2a4 + r3); // lwz @ 0x806A88F4
    if (!=) goto 0x0x806a8908;
    /* li r29, 0 */ // 0x806A8900
    /* b 0x806a895c */ // 0x806A8904
    /* lis r30, 0 */ // 0x806A8908
    r30 = r30 + 0; // 0x806A890C
    if (==) goto 0x0x806a8958;
    r12 = *(0 + r29); // lwz @ 0x806A8914
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806A891C
    /* mtctr r12 */ // 0x806A8920
    /* bctrl  */ // 0x806A8924
    /* b 0x806a8940 */ // 0x806A8928
    if (!=) goto 0x0x806a893c;
    /* li r0, 1 */ // 0x806A8934
    /* b 0x806a894c */ // 0x806A8938
    r3 = *(0 + r3); // lwz @ 0x806A893C
    if (!=) goto 0x0x806a892c;
    /* li r0, 0 */ // 0x806A8948
    if (==) goto 0x0x806a8958;
    /* b 0x806a895c */ // 0x806A8954
    /* li r29, 0 */ // 0x806A8958
    if (==) goto 0x0x806a8970;
    r0 = *(0x94 + r29); // lwz @ 0x806A8964
    if (!=) goto 0x0x806a8d5c;
    /* lis r3, 0 */ // 0x806A8970
    r4 = r31 + 0x6c; // 0x806A8974
    r3 = *(0 + r3); // lwz @ 0x806A8978
    FUN_806FF750(r3, r4); // bl 0x806FF750
    if (==) goto 0x0x806a8994;
    /* li r0, 0xa */ // 0x806A8988
    *(0x58 + r31) = r0; // stw @ 0x806A898C
    /* b 0x806a8d5c */ // 0x806A8990
    r0 = *(0x6c + r31); // lbz @ 0x806A8994
    if (!=) goto 0x0x806a89c0;
    r0 = *(0x6d + r31); // lbz @ 0x806A89A0
    if (!=) goto 0x0x806a89c0;
    /* lis r3, 0 */ // 0x806A89AC
    r3 = *(0 + r3); // lwz @ 0x806A89B0
    FUN_806EED28(r3); // bl 0x806EED28
    if (==) goto 0x0x806a8afc;
    /* lis r30, 0 */ // 0x806A89C0
    r3 = *(0 + r30); // lwz @ 0x806A89C4
    FUN_806EED28(); // bl 0x806EED28
    if (==) goto 0x0x806a8a9c;
    r3 = *(0 + r30); // lwz @ 0x806A89D4
    FUN_806EED58(); // bl 0x806EED58
    /* lis r3, 0 */ // 0x806A89DC
    r5 = *(0 + r3); // lwz @ 0x806A89E0
    r0 = *(0x36 + r5); // lha @ 0x806A89E4
    if (<) goto 0x0x806a8a0c;
    /* lis r3, 1 */ // 0x806A89F0
    /* clrlwi r4, r0, 0x18 */ // 0x806A89F4
    r0 = r3 + -0x6c10; // 0x806A89F8
    r0 = r0 * r4; // 0x806A89FC
    r3 = r5 + r0; // 0x806A8A00
    r4 = r3 + 0x38; // 0x806A8A04
    /* b 0x806a8a10 */ // 0x806A8A08
    /* li r4, 0 */ // 0x806A8A0C
    /* lis r3, 0 */ // 0x806A8A10
    /* addis r4, r4, 1 */ // 0x806A8A14
    r5 = *(0 + r3); // lwz @ 0x806A8A18
    r0 = *(0x5c + r5); // lwz @ 0x806A8A1C
    *(-0x7048 + r4) = r0; // stw @ 0x806A8A20
    r0 = *(0x64 + r5); // lwz @ 0x806A8A24
    r3 = *(0x60 + r5); // lwz @ 0x806A8A28
    *(-0x7044 + r4) = r3; // stw @ 0x806A8A2C
    *(-0x7040 + r4) = r0; // stw @ 0x806A8A30
    r0 = *(0x68 + r5); // lwz @ 0x806A8A34
    *(-0x703c + r4) = r0; // stw @ 0x806A8A38
    r0 = *(0x70 + r5); // lwz @ 0x806A8A3C
    r3 = *(0x6c + r5); // lwz @ 0x806A8A40
    *(-0x7038 + r4) = r3; // stw @ 0x806A8A44
    *(-0x7034 + r4) = r0; // stw @ 0x806A8A48
    r0 = *(0x74 + r5); // lwz @ 0x806A8A4C
    *(-0x7030 + r4) = r0; // stw @ 0x806A8A50
    r0 = *(0x78 + r5); // lwz @ 0x806A8A54
    *(-0x702c + r4) = r0; // stw @ 0x806A8A58
    r0 = *(0x7c + r5); // lwz @ 0x806A8A5C
    *(-0x7028 + r4) = r0; // stw @ 0x806A8A60
    r0 = *(0x80 + r5); // lwz @ 0x806A8A64
    *(-0x7024 + r4) = r0; // stw @ 0x806A8A68
    r0 = *(0x88 + r5); // lwz @ 0x806A8A6C
    r3 = *(0x84 + r5); // lwz @ 0x806A8A70
    *(-0x7020 + r4) = r3; // stw @ 0x806A8A74
    *(-0x701c + r4) = r0; // stw @ 0x806A8A78
    r0 = *(0x90 + r5); // lwz @ 0x806A8A7C
    r3 = *(0x8c + r5); // lwz @ 0x806A8A80
    *(-0x7018 + r4) = r3; // stw @ 0x806A8A84
    *(-0x7014 + r4) = r0; // stw @ 0x806A8A88
    r0 = *(0x94 + r5); // lwz @ 0x806A8A8C
    *(-0x7010 + r4) = r0; // stw @ 0x806A8A90
    r0 = *(0x98 + r5); // lwz @ 0x806A8A94
    *(-0x700c + r4) = r0; // stw @ 0x806A8A98
    /* lis r3, 0 */ // 0x806A8A9C
    r5 = *(0 + r3); // lwz @ 0x806A8AA0
    r0 = *(0x36 + r5); // lha @ 0x806A8AA4
    if (<) goto 0x0x806a8acc;
    /* lis r3, 1 */ // 0x806A8AB0
    /* clrlwi r4, r0, 0x18 */ // 0x806A8AB4
    r0 = r3 + -0x6c10; // 0x806A8AB8
    r0 = r0 * r4; // 0x806A8ABC
    r3 = r5 + r0; // 0x806A8AC0
    r3 = r3 + 0x38; // 0x806A8AC4
    /* b 0x806a8ad0 */ // 0x806A8AC8
    /* li r3, 0 */ // 0x806A8ACC
    /* lis r4, 0 */ // 0x806A8AD0
    /* addis r3, r3, 1 */ // 0x806A8AD4
    r4 = *(0 + r4); // lwz @ 0x806A8AD8
    /* li r5, 0x168 */ // 0x806A8ADC
    r3 = r3 + -0x71b0; // 0x806A8AE0
    r4 = r4 + 0x204; // 0x806A8AE4
    FUN_805E3430(r5, r3, r4); // bl 0x805E3430
    /* lis r3, 0 */ // 0x806A8AEC
    r3 = *(0 + r3); // lwz @ 0x806A8AF0
    r3 = *(0x90 + r3); // lwz @ 0x806A8AF4
    FUN_806845D0(r4, r3); // bl 0x806845D0
    /* li r0, 0xb */ // 0x806A8AFC
    *(0x58 + r31) = r0; // stw @ 0x806A8B00
    /* b 0x806a8d5c */ // 0x806A8B04
    /* lis r30, 0 */ // 0x806A8B08
    r3 = *(0 + r30); // lwz @ 0x806A8B0C
    FUN_806F58E0(); // bl 0x806F58E0
    if (==) goto 0x0x806a8d5c;
    r3 = *(0 + r30); // lwz @ 0x806A8B1C
    FUN_806F58E8(); // bl 0x806F58E8
    r0 = r3 + -3; // 0x806A8B24
    if (<=) goto 0x0x806a8b3c;
    if (==) goto 0x0x806a8b48;
    /* b 0x806a8b50 */ // 0x806A8B38
    /* li r0, 0 */ // 0x806A8B3C
    *(0x6c + r31) = r0; // stb @ 0x806A8B40
    /* b 0x806a8b50 */ // 0x806A8B44
    /* li r0, 0 */ // 0x806A8B48
    *(0x6c + r31) = r0; // stb @ 0x806A8B4C
    r0 = *(0x6c + r31); // lbz @ 0x806A8B50
    if (!=) goto 0x0x806a8b7c;
    r0 = *(0x6d + r31); // lbz @ 0x806A8B5C
    if (!=) goto 0x0x806a8b7c;
    /* lis r3, 0 */ // 0x806A8B68
    r3 = *(0 + r3); // lwz @ 0x806A8B6C
    FUN_806EED28(r3); // bl 0x806EED28
    if (==) goto 0x0x806a8cb8;
    /* lis r30, 0 */ // 0x806A8B7C
    r3 = *(0 + r30); // lwz @ 0x806A8B80
    FUN_806EED28(); // bl 0x806EED28
    if (==) goto 0x0x806a8c58;
    r3 = *(0 + r30); // lwz @ 0x806A8B90
    FUN_806EED58(); // bl 0x806EED58
    /* lis r3, 0 */ // 0x806A8B98
    r5 = *(0 + r3); // lwz @ 0x806A8B9C
    r0 = *(0x36 + r5); // lha @ 0x806A8BA0
    if (<) goto 0x0x806a8bc8;
    /* lis r3, 1 */ // 0x806A8BAC
    /* clrlwi r4, r0, 0x18 */ // 0x806A8BB0
    r0 = r3 + -0x6c10; // 0x806A8BB4
    r0 = r0 * r4; // 0x806A8BB8
    r3 = r5 + r0; // 0x806A8BBC
    r4 = r3 + 0x38; // 0x806A8BC0
    /* b 0x806a8bcc */ // 0x806A8BC4
    /* li r4, 0 */ // 0x806A8BC8
    /* lis r3, 0 */ // 0x806A8BCC
    /* addis r4, r4, 1 */ // 0x806A8BD0
    r5 = *(0 + r3); // lwz @ 0x806A8BD4
    r0 = *(0x5c + r5); // lwz @ 0x806A8BD8
    *(-0x7048 + r4) = r0; // stw @ 0x806A8BDC
    r0 = *(0x64 + r5); // lwz @ 0x806A8BE0
    r3 = *(0x60 + r5); // lwz @ 0x806A8BE4
    *(-0x7044 + r4) = r3; // stw @ 0x806A8BE8
    *(-0x7040 + r4) = r0; // stw @ 0x806A8BEC
    r0 = *(0x68 + r5); // lwz @ 0x806A8BF0
    *(-0x703c + r4) = r0; // stw @ 0x806A8BF4
    r0 = *(0x70 + r5); // lwz @ 0x806A8BF8
    r3 = *(0x6c + r5); // lwz @ 0x806A8BFC
    *(-0x7038 + r4) = r3; // stw @ 0x806A8C00
    *(-0x7034 + r4) = r0; // stw @ 0x806A8C04
    r0 = *(0x74 + r5); // lwz @ 0x806A8C08
    *(-0x7030 + r4) = r0; // stw @ 0x806A8C0C
    r0 = *(0x78 + r5); // lwz @ 0x806A8C10
    *(-0x702c + r4) = r0; // stw @ 0x806A8C14
    r0 = *(0x7c + r5); // lwz @ 0x806A8C18
    *(-0x7028 + r4) = r0; // stw @ 0x806A8C1C
    r0 = *(0x80 + r5); // lwz @ 0x806A8C20
    *(-0x7024 + r4) = r0; // stw @ 0x806A8C24
    r0 = *(0x88 + r5); // lwz @ 0x806A8C28
    r3 = *(0x84 + r5); // lwz @ 0x806A8C2C
    *(-0x7020 + r4) = r3; // stw @ 0x806A8C30
    *(-0x701c + r4) = r0; // stw @ 0x806A8C34
    r0 = *(0x90 + r5); // lwz @ 0x806A8C38
    r3 = *(0x8c + r5); // lwz @ 0x806A8C3C
    *(-0x7018 + r4) = r3; // stw @ 0x806A8C40
    *(-0x7014 + r4) = r0; // stw @ 0x806A8C44
    r0 = *(0x94 + r5); // lwz @ 0x806A8C48
    *(-0x7010 + r4) = r0; // stw @ 0x806A8C4C
    r0 = *(0x98 + r5); // lwz @ 0x806A8C50
    *(-0x700c + r4) = r0; // stw @ 0x806A8C54
    /* lis r3, 0 */ // 0x806A8C58
    r5 = *(0 + r3); // lwz @ 0x806A8C5C
    r0 = *(0x36 + r5); // lha @ 0x806A8C60
    if (<) goto 0x0x806a8c88;
    /* lis r3, 1 */ // 0x806A8C6C
    /* clrlwi r4, r0, 0x18 */ // 0x806A8C70
    r0 = r3 + -0x6c10; // 0x806A8C74
    r0 = r0 * r4; // 0x806A8C78
    r3 = r5 + r0; // 0x806A8C7C
    r3 = r3 + 0x38; // 0x806A8C80
    /* b 0x806a8c8c */ // 0x806A8C84
    /* li r3, 0 */ // 0x806A8C88
    /* lis r4, 0 */ // 0x806A8C8C
    /* addis r3, r3, 1 */ // 0x806A8C90
    r4 = *(0 + r4); // lwz @ 0x806A8C94
    /* li r5, 0x168 */ // 0x806A8C98
    r3 = r3 + -0x71b0; // 0x806A8C9C
    r4 = r4 + 0x204; // 0x806A8CA0
    FUN_805E3430(r5, r3, r4); // bl 0x805E3430
    /* lis r3, 0 */ // 0x806A8CA8
    r3 = *(0 + r3); // lwz @ 0x806A8CAC
    r3 = *(0x90 + r3); // lwz @ 0x806A8CB0
    FUN_806845D0(r4, r3); // bl 0x806845D0
    /* li r0, 0xb */ // 0x806A8CB8
    *(0x58 + r31) = r0; // stw @ 0x806A8CBC
    /* b 0x806a8d5c */ // 0x806A8CC0
    /* lis r30, 0 */ // 0x806A8CC4
    r3 = *(0 + r30); // lwz @ 0x806A8CC8
    r3 = *(0x90 + r3); // lwz @ 0x806A8CCC
    FUN_806844E8(); // bl 0x806844E8
    if (!=) goto 0x0x806a8d5c;
    /* li r0, 0xc */ // 0x806A8CDC
    *(0x58 + r31) = r0; // stw @ 0x806A8CE0
    r3 = *(0 + r30); // lwz @ 0x806A8CE4
    r3 = *(0 + r3); // lwz @ 0x806A8CE8
    r29 = *(0x148 + r3); // lwz @ 0x806A8CEC
    if (!=) goto 0x0x806a8d00;
    /* li r29, 0 */ // 0x806A8CF8
    /* b 0x806a8d54 */ // 0x806A8CFC
    /* lis r30, 0 */ // 0x806A8D00
    r30 = r30 + 0; // 0x806A8D04
    if (==) goto 0x0x806a8d50;
    r12 = *(0 + r29); // lwz @ 0x806A8D0C
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806A8D14
    /* mtctr r12 */ // 0x806A8D18
    /* bctrl  */ // 0x806A8D1C
    /* b 0x806a8d38 */ // 0x806A8D20
    if (!=) goto 0x0x806a8d34;
    /* li r0, 1 */ // 0x806A8D2C
    /* b 0x806a8d44 */ // 0x806A8D30
    r3 = *(0 + r3); // lwz @ 0x806A8D34
    if (!=) goto 0x0x806a8d24;
    /* li r0, 0 */ // 0x806A8D40
    if (==) goto 0x0x806a8d50;
    /* b 0x806a8d54 */ // 0x806A8D4C
    /* li r29, 0 */ // 0x806A8D50
    r3 = r29;
}