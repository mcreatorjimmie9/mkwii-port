/* Function at 0x806DEC38, size=552 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806DEC38(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* lis r7, 0x4330 */ // 0x806DEC40
    r6 = *(0xc + r4); // lhz @ 0x806DEC44
    *(0x34 + r1) = r0; // stw @ 0x806DEC48
    /* lis r8, 0 */ // 0x806DEC4C
    r0 = *(0x18 + r4); // lhz @ 0x806DEC50
    /* mulli r9, r6, 0x3c */ // 0x806DEC54
    *(0x2c + r1) = r31; // stw @ 0x806DEC58
    r31 = r5;
    r10 = *(0xe + r4); // lbz @ 0x806DEC60
    /* mulli r0, r0, 0x3c */ // 0x806DEC64
    r6 = *(0x1a + r4); // lbz @ 0x806DEC68
    r9 = r10 + r9; // 0x806DEC6C
    *(0x28 + r1) = r30; // stw @ 0x806DEC70
    r11 = *(0x10 + r4); // lhz @ 0x806DEC74
    r30 = r4;
    r0 = r6 + r0; // 0x806DEC7C
    r4 = *(0x1c + r4); // lhz @ 0x806DEC80
    /* mulli r5, r9, 0x3e8 */ // 0x806DEC84
    *(8 + r1) = r7; // stw @ 0x806DEC88
    /* lfd f2, 0(r8) */ // 0x806DEC8C
    *(0x10 + r1) = r7; // stw @ 0x806DEC90
    /* mulli r0, r0, 0x3e8 */ // 0x806DEC94
    r5 = r11 + r5; // 0x806DEC98
    *(0xc + r1) = r5; // stw @ 0x806DEC9C
    r0 = r4 + r0; // 0x806DECA0
    *(0x14 + r1) = r0; // stw @ 0x806DECA4
    /* lfd f1, 8(r1) */ // 0x806DECA8
    /* lfd f0, 0x10(r1) */ // 0x806DECAC
    *(0x24 + r1) = r29; // stw @ 0x806DECB0
    /* fsubs f1, f1, f2 */ // 0x806DECB4
    /* fsubs f0, f0, f2 */ // 0x806DECB8
    r29 = r3;
    /* stfs f1, 8(r3) */ // 0x806DECC0
    /* stfs f0, 0xc(r3) */ // 0x806DECC4
    FUN_806DE5D0(); // bl 0x806DE5D0
    /* li r0, 4 */ // 0x806DECCC
    /* li r5, 0 */ // 0x806DECD0
    /* mtctr r0 */ // 0x806DECD4
    r3 = r30 + r5; // 0x806DECD8
    r4 = r29 + r5; // 0x806DECDC
    r0 = *(0x7c + r3); // lbz @ 0x806DECE0
    r5 = r5 + 8; // 0x806DECE4
    *(0xc0 + r4) = r0; // stb @ 0x806DECE8
    r0 = *(0x7d + r3); // lbz @ 0x806DECEC
    *(0xc1 + r4) = r0; // stb @ 0x806DECF0
    r0 = *(0x7e + r3); // lbz @ 0x806DECF4
    *(0xc2 + r4) = r0; // stb @ 0x806DECF8
    r0 = *(0x7f + r3); // lbz @ 0x806DECFC
    *(0xc3 + r4) = r0; // stb @ 0x806DED00
    r0 = *(0x80 + r3); // lbz @ 0x806DED04
    *(0xc4 + r4) = r0; // stb @ 0x806DED08
    r0 = *(0x81 + r3); // lbz @ 0x806DED0C
    *(0xc5 + r4) = r0; // stb @ 0x806DED10
    r0 = *(0x82 + r3); // lbz @ 0x806DED14
    *(0xc6 + r4) = r0; // stb @ 0x806DED18
    r0 = *(0x83 + r3); // lbz @ 0x806DED1C
    r3 = r30 + r5; // 0x806DED20
    *(0xc7 + r4) = r0; // stb @ 0x806DED24
    r4 = r29 + r5; // 0x806DED28
    r0 = *(0x7c + r3); // lbz @ 0x806DED2C
    r5 = r5 + 8; // 0x806DED30
    *(0xc0 + r4) = r0; // stb @ 0x806DED34
    r0 = *(0x7d + r3); // lbz @ 0x806DED38
    *(0xc1 + r4) = r0; // stb @ 0x806DED3C
    r0 = *(0x7e + r3); // lbz @ 0x806DED40
    *(0xc2 + r4) = r0; // stb @ 0x806DED44
    r0 = *(0x7f + r3); // lbz @ 0x806DED48
    *(0xc3 + r4) = r0; // stb @ 0x806DED4C
    r0 = *(0x80 + r3); // lbz @ 0x806DED50
    *(0xc4 + r4) = r0; // stb @ 0x806DED54
    r0 = *(0x81 + r3); // lbz @ 0x806DED58
    *(0xc5 + r4) = r0; // stb @ 0x806DED5C
    r0 = *(0x82 + r3); // lbz @ 0x806DED60
    *(0xc6 + r4) = r0; // stb @ 0x806DED64
    r0 = *(0x83 + r3); // lbz @ 0x806DED68
    r3 = r30 + r5; // 0x806DED6C
    *(0xc7 + r4) = r0; // stb @ 0x806DED70
    r4 = r29 + r5; // 0x806DED74
    r0 = *(0x7c + r3); // lbz @ 0x806DED78
    r5 = r5 + 8; // 0x806DED7C
    *(0xc0 + r4) = r0; // stb @ 0x806DED80
    r0 = *(0x7d + r3); // lbz @ 0x806DED84
    *(0xc1 + r4) = r0; // stb @ 0x806DED88
    r0 = *(0x7e + r3); // lbz @ 0x806DED8C
    *(0xc2 + r4) = r0; // stb @ 0x806DED90
    r0 = *(0x7f + r3); // lbz @ 0x806DED94
    *(0xc3 + r4) = r0; // stb @ 0x806DED98
    r0 = *(0x80 + r3); // lbz @ 0x806DED9C
    *(0xc4 + r4) = r0; // stb @ 0x806DEDA0
    r0 = *(0x81 + r3); // lbz @ 0x806DEDA4
    *(0xc5 + r4) = r0; // stb @ 0x806DEDA8
    r0 = *(0x82 + r3); // lbz @ 0x806DEDAC
    *(0xc6 + r4) = r0; // stb @ 0x806DEDB0
    r0 = *(0x83 + r3); // lbz @ 0x806DEDB4
    *(0xc7 + r4) = r0; // stb @ 0x806DEDB8
    if (counter-- != 0) goto 0x0x806decd8;
    r4 = r30 + r5; // 0x806DEDC0
    r3 = r29 + r5; // 0x806DEDC4
    r0 = *(0x7c + r4); // lbz @ 0x806DEDC8
    *(0xc0 + r3) = r0; // stb @ 0x806DEDD0
    r0 = *(0x7d + r4); // lbz @ 0x806DEDD4
    *(0xc1 + r3) = r0; // stb @ 0x806DEDD8
    r0 = *(0x7e + r4); // lbz @ 0x806DEDDC
    *(0xc2 + r3) = r0; // stb @ 0x806DEDE0
    r0 = *(0x7f + r4); // lbz @ 0x806DEDE4
    *(0xc3 + r3) = r0; // stb @ 0x806DEDE8
    if (==) goto 0x0x806dee1c;
    r0 = *(0 + r30); // lwz @ 0x806DEDF0
    /* lis r3, 0x51ec */ // 0x806DEDF4
    r3 = r3 + -0x7ae1; // 0x806DEDF8
    /* mulli r0, r0, 0x96 */ // 0x806DEDFC
    /* mulhw r0, r3, r0 */ // 0x806DEE00
    r0 = r0 >> 5; // srawi
    /* srwi r3, r0, 0x1f */ // 0x806DEE08
    r3 = r0 + r3; // 0x806DEE0C
    r0 = r3 + 0x32; // 0x806DEE10
    *(0x124 + r29) = r0; // stw @ 0x806DEE14
    /* b 0x806dee44 */ // 0x806DEE18
    r0 = *(0 + r30); // lwz @ 0x806DEE1C
    /* lis r3, 0x51ec */ // 0x806DEE20
    r3 = r3 + -0x7ae1; // 0x806DEE24
    /* mulli r0, r0, 0x69 */ // 0x806DEE28
    /* mulhw r0, r3, r0 */ // 0x806DEE2C
    r0 = r0 >> 5; // srawi
    /* srwi r3, r0, 0x1f */ // 0x806DEE34
    r3 = r0 + r3; // 0x806DEE38
    r0 = r3 + 0x23; // 0x806DEE3C
    *(0x124 + r29) = r0; // stw @ 0x806DEE40
    r0 = *(0x34 + r1); // lwz @ 0x806DEE44
    r31 = *(0x2c + r1); // lwz @ 0x806DEE48
    r30 = *(0x28 + r1); // lwz @ 0x806DEE4C
    r29 = *(0x24 + r1); // lwz @ 0x806DEE50
    return;
}