/* Function at 0x807ABA8C, size=648 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807ABA8C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x807ABA9C
    r31 = r31 + 0; // 0x807ABAA0
    *(8 + r1) = r30; // stw @ 0x807ABAA4
    r30 = r3;
    r3 = *(4 + r3); // lwz @ 0x807ABAAC
    FUN_807AD310(); // bl 0x807AD310
    r3 = *(0xc + r30); // lwz @ 0x807ABAB4
    /* li r4, 0 */ // 0x807ABAB8
    /* lfs f2, 4(r31) */ // 0x807ABABC
    /* li r0, 0xb */ // 0x807ABAC0
    r6 = *(4 + r3); // lwz @ 0x807ABAC4
    /* li r7, 0 */ // 0x807ABAC8
    /* lfs f1, 8(r31) */ // 0x807ABACC
    r5 = *(4 + r6); // lwz @ 0x807ABAD0
    /* lfs f0, 8(r5) */ // 0x807ABAD4
    /* stfs f0, 0xc(r5) */ // 0x807ABAD8
    /* lfs f0, 8(r5) */ // 0x807ABADC
    /* stfs f0, 0x10(r5) */ // 0x807ABAE0
    *(0x18 + r5) = r4; // stw @ 0x807ABAE4
    /* stfs f2, 0x14(r5) */ // 0x807ABAE8
    *(0x1c + r5) = r4; // stw @ 0x807ABAEC
    *(0x28 + r5) = r4; // stb @ 0x807ABAF0
    r5 = *(8 + r6); // lwz @ 0x807ABAF4
    /* lfs f0, 8(r5) */ // 0x807ABAF8
    /* stfs f0, 0xc(r5) */ // 0x807ABAFC
    /* lfs f0, 8(r5) */ // 0x807ABB00
    /* stfs f0, 0x10(r5) */ // 0x807ABB04
    *(0x18 + r5) = r4; // stw @ 0x807ABB08
    /* stfs f2, 0x14(r5) */ // 0x807ABB0C
    *(0x1c + r5) = r4; // stw @ 0x807ABB10
    *(0x28 + r5) = r4; // stb @ 0x807ABB14
    r3 = *(8 + r3); // lwz @ 0x807ABB18
    /* stfs f2, 0x10(r3) */ // 0x807ABB1C
    r3 = *(0x10 + r30); // lwz @ 0x807ABB20
    r6 = *(4 + r3); // lwz @ 0x807ABB24
    r5 = *(4 + r6); // lwz @ 0x807ABB28
    /* lfs f0, 8(r5) */ // 0x807ABB2C
    /* stfs f0, 0xc(r5) */ // 0x807ABB30
    /* lfs f0, 8(r5) */ // 0x807ABB34
    /* stfs f0, 0x10(r5) */ // 0x807ABB38
    *(0x18 + r5) = r4; // stw @ 0x807ABB3C
    /* stfs f2, 0x14(r5) */ // 0x807ABB40
    *(0x1c + r5) = r4; // stw @ 0x807ABB44
    *(0x28 + r5) = r4; // stb @ 0x807ABB48
    r5 = *(8 + r6); // lwz @ 0x807ABB4C
    /* lfs f0, 8(r5) */ // 0x807ABB50
    /* stfs f0, 0xc(r5) */ // 0x807ABB54
    /* lfs f0, 8(r5) */ // 0x807ABB58
    /* stfs f0, 0x10(r5) */ // 0x807ABB5C
    *(0x18 + r5) = r4; // stw @ 0x807ABB60
    /* stfs f2, 0x14(r5) */ // 0x807ABB64
    *(0x1c + r5) = r4; // stw @ 0x807ABB68
    *(0x28 + r5) = r4; // stb @ 0x807ABB6C
    r3 = *(8 + r3); // lwz @ 0x807ABB70
    /* stfs f2, 0x10(r3) */ // 0x807ABB74
    r4 = *(0x14 + r30); // lwz @ 0x807ABB78
    r3 = r4;
    /* stfs f2, 0xc(r4) */ // 0x807ABB80
    /* mtctr r0 */ // 0x807ABB84
    /* stfs f1, 0x14(r3) */ // 0x807ABB88
    r7 = r7 + 0x10; // 0x807ABB8C
    /* lfs f0, 0xc(r4) */ // 0x807ABB90
    /* fadds f0, f0, f1 */ // 0x807ABB94
    /* stfs f0, 0xc(r4) */ // 0x807ABB98
    /* stfs f1, 0x18(r3) */ // 0x807ABB9C
    /* lfs f0, 0xc(r4) */ // 0x807ABBA0
    /* fadds f0, f0, f1 */ // 0x807ABBA4
    /* stfs f0, 0xc(r4) */ // 0x807ABBA8
    /* stfs f1, 0x1c(r3) */ // 0x807ABBAC
    /* lfs f0, 0xc(r4) */ // 0x807ABBB0
    /* fadds f0, f0, f1 */ // 0x807ABBB4
    /* stfs f0, 0xc(r4) */ // 0x807ABBB8
    /* stfs f1, 0x20(r3) */ // 0x807ABBBC
    /* lfs f0, 0xc(r4) */ // 0x807ABBC0
    /* fadds f0, f0, f1 */ // 0x807ABBC4
    /* stfs f0, 0xc(r4) */ // 0x807ABBC8
    /* stfs f1, 0x24(r3) */ // 0x807ABBCC
    /* lfs f0, 0xc(r4) */ // 0x807ABBD0
    /* fadds f0, f0, f1 */ // 0x807ABBD4
    /* stfs f0, 0xc(r4) */ // 0x807ABBD8
    /* stfs f1, 0x28(r3) */ // 0x807ABBDC
    /* lfs f0, 0xc(r4) */ // 0x807ABBE0
    /* fadds f0, f0, f1 */ // 0x807ABBE4
    /* stfs f0, 0xc(r4) */ // 0x807ABBE8
    /* stfs f1, 0x2c(r3) */ // 0x807ABBEC
    /* lfs f0, 0xc(r4) */ // 0x807ABBF0
    /* fadds f0, f0, f1 */ // 0x807ABBF4
    /* stfs f0, 0xc(r4) */ // 0x807ABBF8
    /* stfs f1, 0x30(r3) */ // 0x807ABBFC
    /* lfs f0, 0xc(r4) */ // 0x807ABC00
    /* fadds f0, f0, f1 */ // 0x807ABC04
    /* stfs f0, 0xc(r4) */ // 0x807ABC08
    /* stfs f1, 0x34(r3) */ // 0x807ABC0C
    /* lfs f0, 0xc(r4) */ // 0x807ABC10
    /* fadds f0, f0, f1 */ // 0x807ABC14
    /* stfs f0, 0xc(r4) */ // 0x807ABC18
    /* stfs f1, 0x38(r3) */ // 0x807ABC1C
    /* lfs f0, 0xc(r4) */ // 0x807ABC20
    /* fadds f0, f0, f1 */ // 0x807ABC24
    /* stfs f0, 0xc(r4) */ // 0x807ABC28
    /* stfs f1, 0x3c(r3) */ // 0x807ABC2C
    /* lfs f0, 0xc(r4) */ // 0x807ABC30
    /* fadds f0, f0, f1 */ // 0x807ABC34
    /* stfs f0, 0xc(r4) */ // 0x807ABC38
    /* stfs f1, 0x40(r3) */ // 0x807ABC3C
    /* lfs f0, 0xc(r4) */ // 0x807ABC40
    /* fadds f0, f0, f1 */ // 0x807ABC44
    /* stfs f0, 0xc(r4) */ // 0x807ABC48
    /* stfs f1, 0x44(r3) */ // 0x807ABC4C
    /* lfs f0, 0xc(r4) */ // 0x807ABC50
    /* fadds f0, f0, f1 */ // 0x807ABC54
    /* stfs f0, 0xc(r4) */ // 0x807ABC58
    /* stfs f1, 0x48(r3) */ // 0x807ABC5C
    /* lfs f0, 0xc(r4) */ // 0x807ABC60
    /* fadds f0, f0, f1 */ // 0x807ABC64
    /* stfs f0, 0xc(r4) */ // 0x807ABC68
    /* stfs f1, 0x4c(r3) */ // 0x807ABC6C
    /* lfs f0, 0xc(r4) */ // 0x807ABC70
    /* fadds f0, f0, f1 */ // 0x807ABC74
    /* stfs f0, 0xc(r4) */ // 0x807ABC78
    /* stfs f1, 0x50(r3) */ // 0x807ABC7C
    r3 = r3 + 0x40; // 0x807ABC80
    /* lfs f0, 0xc(r4) */ // 0x807ABC84
    /* fadds f0, f0, f1 */ // 0x807ABC88
    /* stfs f0, 0xc(r4) */ // 0x807ABC8C
    if (counter-- != 0) goto 0x0x807abb88;
    /* slwi r0, r7, 2 */ // 0x807ABC94
    /* lfs f3, 8(r31) */ // 0x807ABC98
    r3 = r4 + r0; // 0x807ABC9C
    /* lfs f1, 0xc(r31) */ // 0x807ABCA0
    /* stfs f3, 0x14(r3) */ // 0x807ABCA4
    /* li r0, 0 */ // 0x807ABCA8
    /* lfs f0, 4(r31) */ // 0x807ABCAC
    /* lfs f2, 0xc(r4) */ // 0x807ABCB0
    /* fadds f2, f2, f3 */ // 0x807ABCB4
    /* stfs f2, 0xc(r4) */ // 0x807ABCB8
    /* stfs f3, 0x18(r3) */ // 0x807ABCBC
    /* lfs f2, 0xc(r4) */ // 0x807ABCC0
    /* fadds f2, f2, f3 */ // 0x807ABCC4
    /* stfs f2, 0xc(r4) */ // 0x807ABCC8
    /* stfs f3, 0x1c(r3) */ // 0x807ABCCC
    /* lfs f2, 0xc(r4) */ // 0x807ABCD0
    /* fadds f2, f2, f3 */ // 0x807ABCD4
    /* stfs f2, 0xc(r4) */ // 0x807ABCD8
    /* stfs f3, 0x20(r3) */ // 0x807ABCDC
    /* lfs f2, 0xc(r4) */ // 0x807ABCE0
    /* fadds f2, f2, f3 */ // 0x807ABCE4
    /* stfs f2, 0xc(r4) */ // 0x807ABCE8
    /* fdivs f1, f2, f1 */ // 0x807ABCEC
    /* stfs f1, 8(r4) */ // 0x807ABCF0
    /* stfs f0, 4(r4) */ // 0x807ABCF4
    *(0x10 + r4) = r0; // stw @ 0x807ABCF8
    r31 = *(0xc + r1); // lwz @ 0x807ABCFC
    r30 = *(8 + r1); // lwz @ 0x807ABD00
    r0 = *(0x14 + r1); // lwz @ 0x807ABD04
    return;
}