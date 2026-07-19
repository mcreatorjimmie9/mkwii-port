/* Function at 0x805C3840, size=924 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_805C3840(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* lis r6, 0 */ // 0x805C3848
    *(0x64 + r1) = r0; // stw @ 0x805C3850
    /* lis r5, 0x4330 */ // 0x805C3854
    /* li r0, 0 */ // 0x805C3858
    r6 = r6 + 0; // 0x805C385C
    *(0x5c + r1) = r31; // stw @ 0x805C3860
    r31 = r4;
    *(0x58 + r1) = r30; // stw @ 0x805C3868
    r30 = r3;
    *(0x54 + r1) = r29; // stw @ 0x805C3870
    *(0x38 + r1) = r5; // stw @ 0x805C3874
    *(0x40 + r1) = r5; // stw @ 0x805C3878
    *(0x2c + r1) = r6; // stw @ 0x805C387C
    *(0x36 + r1) = r0; // stb @ 0x805C3880
    *(0x30 + r1) = r0; // sth @ 0x805C3884
    *(0x32 + r1) = r0; // stb @ 0x805C3888
    *(0x34 + r1) = r0; // sth @ 0x805C388C
    if (==) goto 0x0x805c3ad0;
    /* lis r4, 0 */ // 0x805C3894
    /* li r5, 3 */ // 0x805C3898
    r6 = *(0 + r4); // lwz @ 0x805C389C
    r0 = *(0xb90 + r6); // lwz @ 0x805C38A0
    /* rlwinm. r0, r0, 0, 0x1d, 0x1d */ // 0x805C38A4
    if (==) goto 0x0x805c38c4;
    r5 = *(0xb8d + r6); // lbz @ 0x805C38AC
    r0 = r5 + 0xff; // 0x805C38B0
    /* clrlwi r0, r0, 0x18 */ // 0x805C38B4
    if (<=) goto 0x0x805c38c4;
    /* li r5, 3 */ // 0x805C38C0
    /* clrlwi r0, r5, 0x18 */ // 0x805C38C4
    *(0x3c + r1) = r0; // stw @ 0x805C38C8
    /* lis r5, 0 */ // 0x805C38CC
    /* lis r4, 0 */ // 0x805C38D0
    /* lfd f2, 0(r5) */ // 0x805C38D4
    /* lfd f0, 0x38(r1) */ // 0x805C38D8
    /* lfs f1, 0(r4) */ // 0x805C38DC
    /* fsubs f2, f0, f2 */ // 0x805C38E0
    /* lfs f0, 0xc(r3) */ // 0x805C38E4
    /* .byte 0xfc, 0x00, 0x08, 0x40 */ // 0x805C38E8
    /* fadds f1, f1, f2 */ // 0x805C38EC
    if (<=) goto 0x0x805c3934;
    /* fdivs f1, f1, f0 */ // 0x805C38F4
    /* lis r3, 0 */ // 0x805C38F8
    r4 = *(0 + r3); // lwz @ 0x805C38FC
    r4 = *(0x14 + r4); // lwz @ 0x805C3904
    r4 = r4 + 4; // 0x805C3908
    FUN_805C3BDC(r3, r3, r4); // bl 0x805C3BDC
    r5 = *(0x18 + r1); // lhz @ 0x805C3910
    r4 = *(0x1a + r1); // lbz @ 0x805C3914
    r3 = *(0x1c + r1); // lhz @ 0x805C3918
    r0 = *(0x1e + r1); // lbz @ 0x805C391C
    *(0x30 + r1) = r5; // sth @ 0x805C3920
    *(0x32 + r1) = r4; // stb @ 0x805C3924
    *(0x34 + r1) = r3; // sth @ 0x805C3928
    *(0x36 + r1) = r0; // stb @ 0x805C392C
    /* b 0x805c3a10 */ // 0x805C3930
    /* lis r5, 0 */ // 0x805C3934
    /* li r4, 0 */ // 0x805C3938
    r5 = r5 + 0; // 0x805C393C
    *(0x20 + r1) = r5; // stw @ 0x805C3940
    *(0x2a + r1) = r4; // stb @ 0x805C3944
    *(0x24 + r1) = r4; // sth @ 0x805C3948
    *(0x26 + r1) = r4; // stb @ 0x805C394C
    *(0x28 + r1) = r4; // sth @ 0x805C3950
    r0 = *(0xb70 + r6); // lwz @ 0x805C3954
    if (<) goto 0x0x805c396c;
    if (>) goto 0x0x805c396c;
    /* li r4, 1 */ // 0x805C3968
    if (==) goto 0x0x805c3994;
    /* li r0, 0 */ // 0x805C3974
    /* li r5, 1 */ // 0x805C3978
    /* li r4, 5 */ // 0x805C397C
    *(0x2a + r1) = r5; // stb @ 0x805C3980
    *(0x24 + r1) = r4; // sth @ 0x805C3984
    *(0x26 + r1) = r0; // stb @ 0x805C3988
    *(0x28 + r1) = r0; // sth @ 0x805C398C
    /* b 0x805c39b0 */ // 0x805C3990
    /* li r0, 0 */ // 0x805C3994
    /* li r5, 1 */ // 0x805C3998
    /* li r4, 0x64 */ // 0x805C399C
    *(0x2a + r1) = r5; // stb @ 0x805C39A0
    *(0x24 + r1) = r4; // sth @ 0x805C39A4
    *(0x26 + r1) = r0; // stb @ 0x805C39A8
    *(0x28 + r1) = r0; // sth @ 0x805C39AC
    /* lis r4, 0 */ // 0x805C39B0
    /* lfs f0, 0xc(r3) */ // 0x805C39B4
    /* lfs f2, 0(r4) */ // 0x805C39B8
    /* fadds f1, f2, f1 */ // 0x805C39BC
    /* fsubs f1, f1, f0 */ // 0x805C39C0
    /* .byte 0xfc, 0x01, 0x10, 0x40 */ // 0x805C39C4
    if (>=) goto 0x0x805c39d0;
    /* fmr f1, f2 */ // 0x805C39CC
    /* lis r3, 0 */ // 0x805C39D0
    /* lfs f0, 0(r3) */ // 0x805C39D4
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x805C39D8
    if (<=) goto 0x0x805c39e4;
    /* fmr f1, f0 */ // 0x805C39E0
    FUN_805C3BDC(r3, r4); // bl 0x805C3BDC
    r5 = *(0xc + r1); // lhz @ 0x805C39F0
    r4 = *(0xe + r1); // lbz @ 0x805C39F4
    r3 = *(0x10 + r1); // lhz @ 0x805C39F8
    r0 = *(0x12 + r1); // lbz @ 0x805C39FC
    *(0x30 + r1) = r5; // sth @ 0x805C3A00
    *(0x32 + r1) = r4; // stb @ 0x805C3A04
    *(0x34 + r1) = r3; // sth @ 0x805C3A08
    *(0x36 + r1) = r0; // stb @ 0x805C3A0C
    r0 = *(0x34 + r1); // lhz @ 0x805C3A10
    /* lis r4, 0 */ // 0x805C3A14
    *(0x44 + r1) = r0; // stw @ 0x805C3A18
    /* lis r3, 0 */ // 0x805C3A1C
    /* lfd f2, 0(r4) */ // 0x805C3A20
    /* li r4, 0 */ // 0x805C3A24
    /* lfd f1, 0x40(r1) */ // 0x805C3A28
    /* lfs f0, 0(r3) */ // 0x805C3A2C
    /* fsubs f1, f1, f2 */ // 0x805C3A30
    /* fadds f0, f0, f1 */ // 0x805C3A34
    /* fctiwz f0, f0 */ // 0x805C3A38
    /* stfd f0, 0x48(r1) */ // 0x805C3A3C
    r5 = *(0x4c + r1); // lwz @ 0x805C3A40
    /* clrlwi r0, r5, 0x10 */ // 0x805C3A44
    if (<=) goto 0x0x805c3ab0;
    r3 = *(0x32 + r1); // lbz @ 0x805C3A50
    r0 = r5 + -0x3e8; // 0x805C3A54
    /* clrlwi r5, r0, 0x10 */ // 0x805C3A58
    r3 = r3 + 1; // 0x805C3A5C
    /* clrlwi r0, r3, 0x18 */ // 0x805C3A60
    if (<=) goto 0x0x805c3a78;
    r0 = r3 + -0x3c; // 0x805C3A6C
    /* li r4, 1 */ // 0x805C3A70
    /* clrlwi r3, r0, 0x18 */ // 0x805C3A74
    r0 = *(0x30 + r1); // lhz @ 0x805C3A78
    r4 = r4 + r0; // 0x805C3A7C
    /* clrlwi r0, r4, 0x10 */ // 0x805C3A80
    if (<=) goto 0x0x805c3a98;
    /* li r4, 0x3e7 */ // 0x805C3A8C
    /* li r3, 0x3b */ // 0x805C3A90
    /* li r5, 0x3e7 */ // 0x805C3A94
    /* li r0, 1 */ // 0x805C3A98
    *(0x36 + r1) = r0; // stb @ 0x805C3A9C
    *(0x30 + r1) = r4; // sth @ 0x805C3AA0
    *(0x32 + r1) = r3; // stb @ 0x805C3AA4
    *(0x34 + r1) = r5; // sth @ 0x805C3AA8
    /* b 0x805c3bac */ // 0x805C3AAC
    r4 = *(0x32 + r1); // lbz @ 0x805C3AB0
    /* li r0, 1 */ // 0x805C3AB4
    r3 = *(0x30 + r1); // lhz @ 0x805C3AB8
    *(0x36 + r1) = r0; // stb @ 0x805C3ABC
    *(0x30 + r1) = r3; // sth @ 0x805C3AC0
    *(0x32 + r1) = r4; // stb @ 0x805C3AC4
    *(0x34 + r1) = r5; // sth @ 0x805C3AC8
    /* b 0x805c3bac */ // 0x805C3ACC
    /* lis r29, 0 */ // 0x805C3AD0
    /* li r4, 0x10 */ // 0x805C3AD4
    r3 = *(0 + r29); // lwz @ 0x805C3AD8
    r3 = *(8 + r3); // lwz @ 0x805C3ADC
    FUN_805E364C(r4); // bl 0x805E364C
    r5 = *(0 + r29); // lwz @ 0x805C3AE4
    /* lis r4, 0 */ // 0x805C3AE8
    *(0x3c + r1) = r3; // stw @ 0x805C3AEC
    /* li r7, 0 */ // 0x805C3AF0
    r5 = *(0x14 + r5); // lwz @ 0x805C3AF4
    /* lfd f2, 0(r4) */ // 0x805C3AF8
    r0 = *(0xc + r5); // lhz @ 0x805C3AFC
    *(0x44 + r1) = r0; // stw @ 0x805C3B00
    /* lfd f1, 0x38(r1) */ // 0x805C3B04
    /* lfd f0, 0x40(r1) */ // 0x805C3B08
    /* fsubs f1, f1, f2 */ // 0x805C3B0C
    /* fsubs f0, f0, f2 */ // 0x805C3B10
    /* fadds f0, f1, f0 */ // 0x805C3B14
    /* fctiwz f0, f0 */ // 0x805C3B18
    /* stfd f0, 0x48(r1) */ // 0x805C3B1C
    r6 = *(0x4c + r1); // lwz @ 0x805C3B20
    /* clrlwi r0, r6, 0x10 */ // 0x805C3B24
    if (<=) goto 0x0x805c3b90;
    r3 = *(0xa + r5); // lbz @ 0x805C3B30
    r0 = r6 + -0x3e8; // 0x805C3B34
    /* clrlwi r6, r0, 0x10 */ // 0x805C3B38
    r3 = r3 + 1; // 0x805C3B3C
    /* clrlwi r0, r3, 0x18 */ // 0x805C3B40
    if (<=) goto 0x0x805c3b58;
    r0 = r3 + -0x3c; // 0x805C3B4C
    /* li r7, 1 */ // 0x805C3B50
    /* clrlwi r3, r0, 0x18 */ // 0x805C3B54
    r0 = *(8 + r5); // lhz @ 0x805C3B58
    r7 = r7 + r0; // 0x805C3B5C
    /* clrlwi r0, r7, 0x10 */ // 0x805C3B60
    if (<=) goto 0x0x805c3b78;
    /* li r7, 0x3e7 */ // 0x805C3B6C
    /* li r3, 0x3b */ // 0x805C3B70
    /* li r6, 0x3e7 */ // 0x805C3B74
    /* li r0, 1 */ // 0x805C3B78
    *(0x36 + r1) = r0; // stb @ 0x805C3B7C
    *(0x30 + r1) = r7; // sth @ 0x805C3B80
    *(0x32 + r1) = r3; // stb @ 0x805C3B84
    *(0x34 + r1) = r6; // sth @ 0x805C3B88
    /* b 0x805c3bac */ // 0x805C3B8C
    r4 = *(0xa + r5); // lbz @ 0x805C3B90
    /* li r0, 1 */ // 0x805C3B94
    r3 = *(8 + r5); // lhz @ 0x805C3B98
    *(0x30 + r1) = r3; // sth @ 0x805C3B9C
    *(0x36 + r1) = r0; // stb @ 0x805C3BA0
    *(0x32 + r1) = r4; // stb @ 0x805C3BA4
    *(0x34 + r1) = r6; // sth @ 0x805C3BA8
    r3 = r30;
    r6 = r31;
    /* li r5, 1 */ // 0x805C3BB8
    FUN_805C3D4C(r3, r6, r4, r5); // bl 0x805C3D4C
    r0 = *(0x64 + r1); // lwz @ 0x805C3BC0
    r31 = *(0x5c + r1); // lwz @ 0x805C3BC4
    r30 = *(0x58 + r1); // lwz @ 0x805C3BC8
    r29 = *(0x54 + r1); // lwz @ 0x805C3BCC
    return;
}