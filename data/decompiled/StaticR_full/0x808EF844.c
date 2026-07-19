/* Function at 0x808EF844, size=1400 bytes */
/* Stack frame: 768 bytes */
/* Saved registers: r19 */
/* Calls: 37 function(s) */

int FUN_808EF844(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -768(r1) */
    /* saved r19 */
    /* stmw r19, 0x2cc(r1) */ // 0x808EF850
    r19 = r3;
    FUN_80654ECC(r3); // bl 0x80654ECC
    /* lis r3, 0 */ // 0x808EF860
    r5 = *(0 + r3); // lwz @ 0x808EF864
    r0 = *(0x36 + r5); // lha @ 0x808EF868
    if (<) goto 0x0x808ef890;
    /* lis r3, 1 */ // 0x808EF874
    /* clrlwi r4, r0, 0x18 */ // 0x808EF878
    r0 = r3 + -0x6c10; // 0x808EF87C
    r0 = r0 * r4; // 0x808EF880
    r3 = r5 + r0; // 0x808EF884
    r25 = r3 + 0x38; // 0x808EF888
    /* b 0x808ef894 */ // 0x808EF88C
    /* li r25, 0 */ // 0x808EF890
    /* lis r3, 0 */ // 0x808EF894
    /* lis r7, 0 */ // 0x808EF898
    r5 = *(0 + r3); // lwz @ 0x808EF89C
    /* lis r3, 0 */ // 0x808EF8A0
    r7 = r7 + 0; // 0x808EF8A4
    /* li r6, 0 */ // 0x808EF8A8
    r24 = *(0x34 + r5); // lwz @ 0x808EF8AC
    /* lis r4, 0 */ // 0x808EF8B0
    r23 = *(0x30 + r5); // lwz @ 0x808EF8B4
    /* li r0, -1 */ // 0x808EF8B8
    r5 = *(0 + r3); // lwz @ 0x808EF8BC
    *(8 + r1) = r7; // stw @ 0x808EF8C0
    r3 = *(0 + r4); // lwz @ 0x808EF8C4
    *(0x12 + r1) = r6; // stb @ 0x808EF8C8
    *(0xc + r1) = r6; // sth @ 0x808EF8CC
    *(0xe + r1) = r6; // stb @ 0x808EF8D0
    *(0x10 + r1) = r6; // sth @ 0x808EF8D4
    r5 = *(0xc + r5); // lwz @ 0x808EF8D8
    r5 = *(0 + r5); // lwz @ 0x808EF8DC
    r6 = *(0x40 + r5); // lwz @ 0x808EF8E0
    r5 = *(4 + r6); // lhz @ 0x808EF8E4
    *(0xc + r1) = r5; // sth @ 0x808EF8E8
    r5 = *(6 + r6); // lbz @ 0x808EF8EC
    *(0xe + r1) = r5; // stb @ 0x808EF8F0
    r5 = *(8 + r6); // lhz @ 0x808EF8F4
    *(0x10 + r1) = r5; // sth @ 0x808EF8F8
    r5 = *(0xa + r6); // lbz @ 0x808EF8FC
    *(0x12 + r1) = r5; // stb @ 0x808EF900
    r3 = *(0x98 + r3); // lwz @ 0x808EF904
    *(0x4b4 + r3) = r0; // stw @ 0x808EF908
    r0 = *(0x12 + r1); // lbz @ 0x808EF90C
    if (==) goto 0x0x808ef934;
    r5 = *(0 + r4); // lwz @ 0x808EF918
    /* lis r3, 0 */ // 0x808EF91C
    r3 = *(0 + r3); // lwz @ 0x808EF920
    r20 = *(0x98 + r5); // lwz @ 0x808EF928
    FUN_80702E84(r3, r4); // bl 0x80702E84
    *(0x4b4 + r20) = r3; // stw @ 0x808EF930
    /* lis r20, 0 */ // 0x808EF934
    r9 = *(0 + r20); // lwz @ 0x808EF938
    r3 = *(0x98 + r9); // lwz @ 0x808EF93C
    r0 = *(0x4b4 + r3); // lwz @ 0x808EF940
    if (==) goto 0x0x808efa20;
    r8 = *(0xc + r1); // lhz @ 0x808EF94C
    /* lis r4, 0 */ // 0x808EF950
    r7 = *(0xe + r1); // lbz @ 0x808EF954
    /* lis r5, 0 */ // 0x808EF958
    r6 = *(0x10 + r1); // lhz @ 0x808EF95C
    r4 = r4 + 0; // 0x808EF960
    r0 = *(0x12 + r1); // lbz @ 0x808EF964
    r3 = r9 + 0x34; // 0x808EF968
    *(0x110 + r1) = r4; // stw @ 0x808EF96C
    /* li r4, 0 */ // 0x808EF970
    r5 = *(0 + r5); // lwz @ 0x808EF974
    *(0x114 + r1) = r8; // sth @ 0x808EF978
    *(0x116 + r1) = r7; // stb @ 0x808EF97C
    *(0x118 + r1) = r6; // sth @ 0x808EF980
    *(0x11a + r1) = r0; // stb @ 0x808EF984
    r0 = *(0x34 + r5); // lwz @ 0x808EF988
    *(0x11c + r1) = r0; // stw @ 0x808EF98C
    r0 = *(0x30 + r5); // lwz @ 0x808EF990
    *(0x120 + r1) = r0; // stw @ 0x808EF994
    FUN_8067F3BC(); // bl 0x8067F3BC
    FUN_80680010(); // bl 0x80680010
    *(0x124 + r1) = r3; // stw @ 0x808EF9A0
    /* li r4, 0 */ // 0x808EF9A4
    r3 = *(0 + r20); // lwz @ 0x808EF9A8
    r3 = *(0x98 + r3); // lwz @ 0x808EF9AC
    r3 = r3 + 0x188; // 0x808EF9B0
    FUN_8066E0EC(r4, r3); // bl 0x8066E0EC
    r4 = r3;
    r4 = r4 + 0x94; // 0x808EF9C0
    FUN_805B71B8(r3, r4, r3, r4); // bl 0x805B71B8
    /* li r0, 9 */ // 0x808EF9C8
    /* mtctr r0 */ // 0x808EF9D4
    r3 = *(4 + r4); // lwz @ 0x808EF9D8
    r0 = *(8 + r4); // lwzu @ 0x808EF9DC
    *(4 + r5) = r3; // stw @ 0x808EF9E0
    *(8 + r5) = r0; // stwu @ 0x808EF9E4
    if (counter-- != 0) goto 0x0x808ef9d8;
    r0 = *(4 + r4); // lwz @ 0x808EF9EC
    /* lis r20, 0 */ // 0x808EF9F0
    *(4 + r5) = r0; // stw @ 0x808EF9F4
    /* lis r3, 0 */ // 0x808EF9F8
    r5 = *(0 + r20); // lwz @ 0x808EFA00
    r3 = *(0 + r3); // lwz @ 0x808EFA04
    r5 = *(0x98 + r5); // lwz @ 0x808EFA08
    r5 = *(0x4b4 + r5); // lwz @ 0x808EFA0C
    FUN_807032CC(r4); // bl 0x807032CC
    r3 = *(0 + r20); // lwz @ 0x808EFA14
    r3 = *(0x90 + r3); // lwz @ 0x808EFA18
    FUN_806845FC(); // bl 0x806845FC
    /* lis r3, 0 */ // 0x808EFA20
    r3 = *(0 + r3); // lwz @ 0x808EFA24
    r3 = *(0x98 + r3); // lwz @ 0x808EFA28
    r0 = *(0x4b4 + r3); // lwz @ 0x808EFA2C
    if (!=) goto 0x0x808efaa8;
    FUN_805ABE9C(r3); // bl 0x805ABE9C
    /* li r4, 0 */ // 0x808EFA44
    FUN_805AC748(r3, r3, r4); // bl 0x805AC748
    r0 = *(0x128 + r1); // lbz @ 0x808EFA4C
    /* li r3, 0 */ // 0x808EFA50
    if (==) goto 0x0x808efa6c;
    r0 = *(0x1fc + r1); // lwz @ 0x808EFA5C
    if (==) goto 0x0x808efa6c;
    /* li r3, 1 */ // 0x808EFA68
    if (==) goto 0x0x808efa90;
    /* lis r3, 0 */ // 0x808EFA74
    r3 = *(0 + r3); // lwz @ 0x808EFA7C
    /* li r4, 5 */ // 0x808EFA80
    /* li r5, 0 */ // 0x808EFA84
    r3 = *(0x90 + r3); // lwz @ 0x808EFA88
    FUN_80684670(r6, r4, r5); // bl 0x80684670
    /* lis r4, 0 */ // 0x808EFA90
    r4 = r4 + 0; // 0x808EFA98
    /* li r5, 0xc */ // 0x808EFA9C
    /* li r6, 5 */ // 0x808EFAA0
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    /* lis r26, 0 */ // 0x808EFAA8
    /* lis r27, 0 */ // 0x808EFAAC
    /* li r22, 0 */ // 0x808EFAB0
    /* lis r30, 0 */ // 0x808EFAB4
    r26 = r26 + 0; // 0x808EFAB8
    r27 = r27 + 0; // 0x808EFABC
    /* li r28, 0 */ // 0x808EFAC0
    /* lis r29, 0 */ // 0x808EFAC4
    /* lis r31, 0 */ // 0x808EFAC8
    r4 = *(0x1a0 + r19); // lwz @ 0x808EFACC
    r3 = r22 rlwinm 2; // rlwinm
    r0 = r22 + 1; // 0x808EFAD4
    /* lwzx r21, r4, r3 */ // 0x808EFAD8
    /* clrlwi r3, r0, 0x18 */ // 0x808EFADC
    FUN_808AF904(); // bl 0x808AF904
    r5 = r3;
    r3 = r21;
    r4 = r26 + 0x109; // 0x808EFAEC
    /* li r6, 0 */ // 0x808EFAF0
    FUN_806A093C(r5, r3, r4, r6); // bl 0x806A093C
    r3 = r21;
    r4 = r26 + 0x112; // 0x808EFAFC
    FUN_806A0B6C(r4, r6, r3, r4); // bl 0x806A0B6C
    *(0x60 + r1) = r27; // stw @ 0x808EFB04
    r3 = *(0 + r29); // lwz @ 0x808EFB08
    *(0x64 + r1) = r28; // sth @ 0x808EFB0C
    *(0x66 + r1) = r28; // stb @ 0x808EFB10
    *(0x68 + r1) = r28; // sth @ 0x808EFB14
    *(0x6a + r1) = r28; // stb @ 0x808EFB18
    r3 = *(0 + r3); // lwz @ 0x808EFB1C
    r0 = *(0 + r3); // lwz @ 0x808EFB20
    if (!=) goto 0x0x808efb44;
    r3 = *(0 + r30); // lwz @ 0x808EFB2C
    /* clrlwi r4, r22, 0x18 */ // 0x808EFB30
    FUN_80702FF0(r5); // bl 0x80702FF0
    /* b 0x808efb5c */ // 0x808EFB40
    r5 = *(0 + r31); // lwz @ 0x808EFB44
    r3 = r25;
    /* clrlwi r4, r22, 0x18 */ // 0x808EFB4C
    r5 = *(0xb68 + r5); // lwz @ 0x808EFB50
    FUN_805D7994(r3); // bl 0x805D7994
    r20 = r3;
    if (==) goto 0x0x808efc7c;
    r0 = *(0x56 + r20); // lbz @ 0x808EFB64
    if (==) goto 0x0x808efc5c;
    r0 = *(0x50 + r20); // lhz @ 0x808EFB70
    if (>=) goto 0x0x808efb84;
    if (<=) goto 0x0x808efb94;
    /* li r0, 0x63 */ // 0x808EFB84
    /* li r5, 0x3b */ // 0x808EFB88
    /* li r7, 0x3e7 */ // 0x808EFB8C
    /* b 0x808efba0 */ // 0x808EFB90
    r5 = *(0x52 + r20); // lbz @ 0x808EFB94
    /* clrlwi r0, r0, 0x18 */ // 0x808EFB98
    r7 = *(0x54 + r20); // lhz @ 0x808EFB9C
    *(0x204 + r1) = r5; // stw @ 0x808EFBA0
    r3 = r21;
    r4 = r26 + 0x11e; // 0x808EFBA8
    *(0x200 + r1) = r0; // stw @ 0x808EFBB0
    /* li r5, 0x578 */ // 0x808EFBB4
    *(0x208 + r1) = r7; // stw @ 0x808EFBB8
    FUN_806A093C(r4, r6, r5); // bl 0x806A093C
    r3 = r21;
    /* li r4, 0 */ // 0x808EFBC4
    FUN_8087EA44(r5, r3, r4); // bl 0x8087EA44
    r4 = *(0x58 + r20); // lwz @ 0x808EFBCC
    r3 = r21;
    FUN_8087EEC4(r3, r4, r3); // bl 0x8087EEC4
    r3 = *(0 + r29); // lwz @ 0x808EFBD8
    /* clrlwi r4, r22, 0x18 */ // 0x808EFBDC
    r3 = *(0x98 + r3); // lwz @ 0x808EFBE0
    r0 = *(0x4b4 + r3); // lwz @ 0x808EFBE4
    if (!=) goto 0x0x808efc00;
    r3 = r21;
    /* li r4, 0 */ // 0x808EFBF4
    FUN_8087F79C(r3, r4); // bl 0x8087F79C
    /* b 0x808efc0c */ // 0x808EFBFC
    r3 = r21;
    /* li r4, 0 */ // 0x808EFC04
    FUN_8087F8A4(r4, r3, r4); // bl 0x8087F8A4
    r3 = *(0x5c + r20); // lwz @ 0x808EFC0C
    FUN_808AF680(r3, r4); // bl 0x808AF680
    r5 = r3;
    r3 = r21;
    r4 = r26 + 0x123; // 0x808EFC1C
    /* li r6, 0 */ // 0x808EFC20
    FUN_806A093C(r5, r3, r4, r6); // bl 0x806A093C
    r0 = *(0x60 + r20); // lwz @ 0x808EFC28
    if (!=) goto 0x0x808efc4c;
    r3 = r21;
    r4 = r26 + 0x12f; // 0x808EFC38
    /* li r5, 0x25f2 */ // 0x808EFC3C
    /* li r6, 0 */ // 0x808EFC40
    FUN_806A093C(r3, r4, r5, r6); // bl 0x806A093C
    /* b 0x808efc7c */ // 0x808EFC48
    r3 = r21;
    r4 = r26 + 0x13b; // 0x808EFC50
    FUN_806A0B6C(r6, r3, r4); // bl 0x806A0B6C
    /* b 0x808efc7c */ // 0x808EFC58
    r3 = r21;
    r4 = r26 + 0x147; // 0x808EFC60
    /* li r5, 0x579 */ // 0x808EFC64
    /* li r6, 0 */ // 0x808EFC68
    FUN_806A093C(r3, r4, r5, r6); // bl 0x806A093C
    r3 = r21;
    /* li r4, -1 */ // 0x808EFC74
    FUN_8087EEC4(r5, r6, r3, r4); // bl 0x8087EEC4
    r3 = r21;
    r4 = r26 + 0x14c; // 0x808EFC80
    FUN_806A0B6C(r3, r4, r3, r4); // bl 0x806A0B6C
    r3 = r21;
    r4 = r26 + 0x158; // 0x808EFC8C
    FUN_806A0B6C(r3, r4, r3, r4); // bl 0x806A0B6C
    r22 = r22 + 1; // 0x808EFC94
    if (<) goto 0x0x808efacc;
    /* lis r3, 0 */ // 0x808EFCA0
    r4 = *(0x1a0 + r19); // lwz @ 0x808EFCA4
    r3 = *(0 + r3); // lwz @ 0x808EFCA8
    r20 = *(0x14 + r4); // lwz @ 0x808EFCAC
    r3 = *(0x98 + r3); // lwz @ 0x808EFCB0
    r0 = *(0x4b4 + r3); // lwz @ 0x808EFCB4
    if (==) goto 0x0x808efccc;
    /* li r0, 1 */ // 0x808EFCC0
    *(0x80 + r20) = r0; // stb @ 0x808EFCC4
    /* b 0x808efda8 */ // 0x808EFCC8
    /* lis r19, 0 */ // 0x808EFCCC
    /* li r0, 0 */ // 0x808EFCD0
    *(0x80 + r20) = r0; // stb @ 0x808EFCD8
    r3 = r20;
    /* li r5, 0x4cb */ // 0x808EFCE0
    /* li r6, 0 */ // 0x808EFCE8
    FUN_806A093C(r3, r5, r4, r6); // bl 0x806A093C
    r0 = *(0x12 + r1); // lbz @ 0x808EFCF0
    if (==) goto 0x0x808efd58;
    r0 = *(0xc + r1); // lhz @ 0x808EFCFC
    if (>=) goto 0x0x808efd10;
    if (<=) goto 0x0x808efd20;
    /* li r0, 0x63 */ // 0x808EFD10
    /* li r5, 0x3b */ // 0x808EFD14
    /* li r7, 0x3e7 */ // 0x808EFD18
    /* b 0x808efd2c */ // 0x808EFD1C
    r5 = *(0xe + r1); // lbz @ 0x808EFD20
    /* clrlwi r0, r0, 0x18 */ // 0x808EFD24
    r7 = *(0x10 + r1); // lhz @ 0x808EFD28
    /* lis r4, 0 */ // 0x808EFD2C
    *(0x204 + r1) = r5; // stw @ 0x808EFD30
    r4 = r4 + 0; // 0x808EFD34
    r3 = r20;
    *(0x200 + r1) = r0; // stw @ 0x808EFD3C
    r4 = r4 + 0x16b; // 0x808EFD40
    /* li r5, 0x578 */ // 0x808EFD48
    *(0x208 + r1) = r7; // stw @ 0x808EFD4C
    FUN_806A093C(r4, r6, r5); // bl 0x806A093C
    /* b 0x808efd6c */ // 0x808EFD54
    r3 = r20;
    /* li r5, 0x579 */ // 0x808EFD60
    /* li r6, 0 */ // 0x808EFD64
    FUN_806A093C(r3, r4, r5, r6); // bl 0x806A093C
    r3 = r20;
    /* li r4, 0 */ // 0x808EFD70
    FUN_8087F79C(r5, r6, r3, r4); // bl 0x8087F79C
    r3 = r20;
    r4 = r24;
    FUN_8087EEC4(r3, r4, r3, r4); // bl 0x8087EEC4
    r3 = r23;
    FUN_808AF680(r3, r4, r3); // bl 0x808AF680
    /* lis r4, 0 */ // 0x808EFD8C
    r5 = r3;
    r4 = r4 + 0; // 0x808EFD94
    r3 = r20;
    r4 = r4 + 0x175; // 0x808EFD9C
    /* li r6, 0 */ // 0x808EFDA0
    FUN_806A093C(r5, r4, r3, r4, r6); // bl 0x806A093C
    r0 = *(0x304 + r1); // lwz @ 0x808EFDAC
    return;
}