/* Function at 0x8076FE9C, size=620 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 8 function(s) */

int FUN_8076FE9C(int r3, int r4, int r5)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r31, 0 */ // 0x8076FEAC
    *(0x48 + r1) = r30; // stw @ 0x8076FEB0
    r30 = r3;
    *(0x44 + r1) = r29; // stw @ 0x8076FEB8
    r0 = *(0x4a + r3); // lbz @ 0x8076FEBC
    if (!=) goto 0x0x807700e8;
    r0 = *(0x17 + r3); // lbz @ 0x8076FEC8
    if (==) goto 0x0x8076fed8;
    FUN_8076D228(); // bl 0x8076D228
    /* lfs f1, 0x40(r30) */ // 0x8076FED8
    /* lis r29, 0 */ // 0x8076FEDC
    /* lfs f0, 0x3c(r30) */ // 0x8076FEE0
    r0 = *(0x46 + r30); // lha @ 0x8076FEE8
    /* fadds f1, f1, f0 */ // 0x8076FEEC
    /* lfs f0, 0(r29) */ // 0x8076FEF0
    r4 = *(8 + r30); // lwz @ 0x8076FEF4
    /* slwi r0, r0, 4 */ // 0x8076FEF8
    /* stfs f1, 0x40(r30) */ // 0x8076FEFC
    /* fsubs f1, f0, f1 */ // 0x8076FF00
    r4 = r4 + r0; // 0x8076FF04
    FUN_805A443C(); // bl 0x805A443C
    r0 = *(0x48 + r30); // lha @ 0x8076FF0C
    r4 = *(8 + r30); // lwz @ 0x8076FF14
    /* slwi r0, r0, 4 */ // 0x8076FF18
    /* lfs f1, 0x40(r30) */ // 0x8076FF1C
    r4 = r4 + r0; // 0x8076FF20
    FUN_805A443C(r3); // bl 0x805A443C
    FUN_805A4464(r3, r4, r5); // bl 0x805A4464
    /* lfs f0, 0x14(r1) */ // 0x8076FF38
    /* stfs f0, 0x18(r30) */ // 0x8076FF3C
    /* lfs f1, 0x40(r30) */ // 0x8076FF40
    /* lfs f0, 0(r29) */ // 0x8076FF44
    /* lfs f2, 0x18(r1) */ // 0x8076FF48
    /* stfs f2, 0x1c(r30) */ // 0x8076FF4C
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8076FF50
    /* lfs f0, 0x1c(r1) */ // 0x8076FF54
    /* stfs f0, 0x20(r30) */ // 0x8076FF58
    /* mfcr r0 */ // 0x8076FF5C
    /* rlwinm. r0, r0, 2, 0x1f, 0x1f */ // 0x8076FF60
    if (==) goto 0x0x80770118;
    r3 = r30;
    /* li r31, 1 */ // 0x8076FF6C
    FUN_8077045C(r3); // bl 0x8077045C
    r0 = *(0xc + r30); // lbz @ 0x8076FF74
    if (!=) goto 0x0x8076ffc0;
    r4 = *(0x44 + r30); // lbz @ 0x8076FF80
    if (!=) goto 0x0x8076ffa4;
    r3 = *(0x48 + r30); // lha @ 0x8076FF8C
    r0 = *(6 + r30); // lhz @ 0x8076FF90
    if (!=) goto 0x0x8076ffa4;
    /* li r0, 1 */ // 0x8076FF9C
    /* b 0x8076ffdc */ // 0x8076FFA0
    if (!=) goto 0x0x8076ffd8;
    r0 = *(0x48 + r30); // lha @ 0x8076FFAC
    if (!=) goto 0x0x8076ffd8;
    /* li r0, 1 */ // 0x8076FFB8
    /* b 0x8076ffdc */ // 0x8076FFBC
    r3 = *(0x48 + r30); // lha @ 0x8076FFC0
    r0 = *(6 + r30); // lhz @ 0x8076FFC4
    /* subf r0, r3, r0 */ // 0x8076FFC8
    /* cntlzw r0, r0 */ // 0x8076FFCC
    /* srwi r0, r0, 5 */ // 0x8076FFD0
    /* b 0x8076ffdc */ // 0x8076FFD4
    /* li r0, 0 */ // 0x8076FFD8
    if (==) goto 0x0x80770064;
    r0 = *(0xc + r30); // lbz @ 0x8076FFE4
    /* li r31, 2 */ // 0x8076FFE8
    if (!=) goto 0x0x80770038;
    r0 = *(0x16 + r30); // lbz @ 0x8076FFF4
    if (!=) goto 0x0x80770038;
    r0 = *(0x44 + r30); // lbz @ 0x80770000
    if (!=) goto 0x0x80770024;
    r3 = *(0x48 + r30); // lha @ 0x8077000C
    /* li r0, 0 */ // 0x80770010
    *(0x44 + r30) = r0; // stb @ 0x80770014
    r0 = r3 + -2; // 0x80770018
    *(0x48 + r30) = r0; // sth @ 0x8077001C
    /* b 0x80770038 */ // 0x80770020
    r3 = *(0x48 + r30); // lha @ 0x80770024
    /* li r0, 1 */ // 0x80770028
    *(0x44 + r30) = r0; // stb @ 0x8077002C
    r0 = r3 + 2; // 0x80770030
    *(0x48 + r30) = r0; // sth @ 0x80770034
    r0 = *(0x16 + r30); // lbz @ 0x80770038
    if (==) goto 0x0x80770064;
    r3 = *(6 + r30); // lhz @ 0x80770044
    /* li r0, 1 */ // 0x80770048
    *(0x4a + r30) = r0; // stb @ 0x8077004C
    r0 = r3 + -1; // 0x80770050
    /* extsh r3, r0 */ // 0x80770054
    *(0x48 + r30) = r0; // sth @ 0x80770058
    r0 = r3 + -1; // 0x8077005C
    *(0x46 + r30) = r0; // sth @ 0x80770060
    r4 = *(0x48 + r30); // lha @ 0x80770064
    r0 = *(0x46 + r30); // lha @ 0x8077006C
    r5 = *(8 + r30); // lwz @ 0x80770070
    /* slwi r4, r4, 4 */ // 0x80770074
    /* slwi r0, r0, 4 */ // 0x80770078
    r4 = r5 + r4; // 0x8077007C
    r5 = r5 + r0; // 0x80770080
    FUN_805A4498(); // bl 0x805A4498
    /* lfs f0, 8(r1) */ // 0x80770088
    /* stfs f0, 0x4c(r30) */ // 0x8077008C
    /* fmuls f1, f0, f0 */ // 0x80770090
    /* lfs f0, 0xc(r1) */ // 0x80770094
    /* stfs f0, 0x50(r30) */ // 0x80770098
    /* fmuls f0, f0, f0 */ // 0x8077009C
    /* lfs f2, 0x10(r1) */ // 0x807700A0
    /* stfs f2, 0x54(r30) */ // 0x807700A4
    /* fmuls f2, f2, f2 */ // 0x807700A8
    /* fadds f0, f1, f0 */ // 0x807700AC
    /* fadds f1, f2, f0 */ // 0x807700B0
    FUN_805E3430(); // bl 0x805E3430
    /* lfs f0, 0x30(r30) */ // 0x807700B8
    r3 = r30 + 0x24; // 0x807700BC
    /* lfs f2, 0x4c(r30) */ // 0x807700C0
    /* fdivs f3, f0, f1 */ // 0x807700C4
    /* lfs f1, 0x50(r30) */ // 0x807700C8
    /* lfs f0, 0x54(r30) */ // 0x807700CC
    /* stfs f2, 0x24(r30) */ // 0x807700D0
    /* stfs f1, 0x28(r30) */ // 0x807700D4
    /* stfs f0, 0x2c(r30) */ // 0x807700D8
    /* stfs f3, 0x3c(r30) */ // 0x807700DC
    FUN_805E3430(); // bl 0x805E3430
    /* b 0x80770118 */ // 0x807700E4
    r4 = *(6 + r3); // lhz @ 0x807700E8
    /* li r31, 2 */ // 0x807700EC
    r5 = *(8 + r3); // lwz @ 0x807700F0
    r0 = r4 + -1; // 0x807700F4
    /* slwi r0, r0, 4 */ // 0x807700F8
    /* lfsx f0, r5, r0 */ // 0x807700FC
    r4 = r5 + r0; // 0x80770100
    /* stfs f0, 0x18(r3) */ // 0x80770104
}