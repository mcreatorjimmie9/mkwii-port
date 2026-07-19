/* Function at 0x806DF76C, size=1564 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 14 function(s) */

int FUN_806DF76C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x806DF778
    r31 = r3;
    r0 = *(8 + r3); // lwz @ 0x806DF780
    if (!=) goto 0x0x806dfd74;
    r0 = *(0x68 + r3); // lwz @ 0x806DF78C
    if (==) goto 0x0x806df7b4;
    if (==) goto 0x0x806df87c;
    if (==) goto 0x0x806dfa68;
    if (==) goto 0x0x806dfc78;
    /* b 0x806dfd74 */ // 0x806DF7B0
    /* lis r3, 0 */ // 0x806DF7B4
    r3 = *(0 + r3); // lwz @ 0x806DF7B8
    r3 = *(0 + r3); // lwz @ 0x806DF7BC
    r29 = *(0x2a4 + r3); // lwz @ 0x806DF7C0
    if (!=) goto 0x0x806df7d4;
    /* li r29, 0 */ // 0x806DF7CC
    /* b 0x806df828 */ // 0x806DF7D0
    /* lis r30, 0 */ // 0x806DF7D4
    r30 = r30 + 0; // 0x806DF7D8
    if (==) goto 0x0x806df824;
    r12 = *(0 + r29); // lwz @ 0x806DF7E0
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806DF7E8
    /* mtctr r12 */ // 0x806DF7EC
    /* bctrl  */ // 0x806DF7F0
    /* b 0x806df80c */ // 0x806DF7F4
    if (!=) goto 0x0x806df808;
    /* li r0, 1 */ // 0x806DF800
    /* b 0x806df818 */ // 0x806DF804
    r3 = *(0 + r3); // lwz @ 0x806DF808
    if (!=) goto 0x0x806df7f8;
    /* li r0, 0 */ // 0x806DF814
    if (==) goto 0x0x806df824;
    /* b 0x806df828 */ // 0x806DF820
    /* li r29, 0 */ // 0x806DF824
    r0 = *(0x94 + r29); // lwz @ 0x806DF828
    if (!=) goto 0x0x806dfd74;
    /* lis r6, 0 */ // 0x806DF834
    /* li r30, 1 */ // 0x806DF838
    r4 = *(0 + r6); // lwz @ 0x806DF83C
    /* lis r5, 0 */ // 0x806DF840
    r3 = r29 + 0xa0; // 0x806DF844
    r4 = *(0x98 + r4); // lwz @ 0x806DF848
    *(0x3c4 + r4) = r30; // stw @ 0x806DF84C
    r4 = *(0 + r6); // lwz @ 0x806DF850
    r5 = *(0 + r5); // lwz @ 0x806DF854
    r4 = *(0x98 + r4); // lwz @ 0x806DF858
    r0 = *(0x36 + r5); // lha @ 0x806DF85C
    *(0x3cc + r4) = r0; // stw @ 0x806DF860
    FUN_8066045C(); // bl 0x8066045C
    r3 = r29;
    /* li r4, 0 */ // 0x806DF86C
    FUN_8065FAC4(r3, r4); // bl 0x8065FAC4
    *(0x68 + r31) = r30; // stw @ 0x806DF874
    /* b 0x806dfd74 */ // 0x806DF878
    /* lis r3, 0 */ // 0x806DF87C
    r3 = *(0 + r3); // lwz @ 0x806DF880
    r3 = *(0 + r3); // lwz @ 0x806DF884
    r29 = *(0x2a4 + r3); // lwz @ 0x806DF888
    if (!=) goto 0x0x806df89c;
    /* li r29, 0 */ // 0x806DF894
    /* b 0x806df8f0 */ // 0x806DF898
    /* lis r30, 0 */ // 0x806DF89C
    r30 = r30 + 0; // 0x806DF8A0
    if (==) goto 0x0x806df8ec;
    r12 = *(0 + r29); // lwz @ 0x806DF8A8
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806DF8B0
    /* mtctr r12 */ // 0x806DF8B4
    /* bctrl  */ // 0x806DF8B8
    /* b 0x806df8d4 */ // 0x806DF8BC
    if (!=) goto 0x0x806df8d0;
    /* li r0, 1 */ // 0x806DF8C8
    /* b 0x806df8e0 */ // 0x806DF8CC
    r3 = *(0 + r3); // lwz @ 0x806DF8D0
    if (!=) goto 0x0x806df8c0;
    /* li r0, 0 */ // 0x806DF8DC
    if (==) goto 0x0x806df8ec;
    /* b 0x806df8f0 */ // 0x806DF8E8
    /* li r29, 0 */ // 0x806DF8EC
    r0 = *(0x94 + r29); // lwz @ 0x806DF8F0
    if (!=) goto 0x0x806dfd74;
    /* lis r30, 0 */ // 0x806DF8FC
    r3 = *(0 + r30); // lwz @ 0x806DF900
    r3 = *(0x18 + r3); // lwz @ 0x806DF904
    FUN_805ABD4C(); // bl 0x805ABD4C
    if (==) goto 0x0x806df9e0;
    r29 = *(0 + r30); // lwz @ 0x806DF914
    r3 = *(0x18 + r29); // lwz @ 0x806DF918
    FUN_805ABD4C(); // bl 0x805ABD4C
    if (==) goto 0x0x806df930;
    r5 = *(0x18 + r29); // lwz @ 0x806DF928
    /* b 0x806df934 */ // 0x806DF92C
    /* li r5, 0 */ // 0x806DF930
    /* lis r3, 0 */ // 0x806DF934
    r4 = r31 + 0x70; // 0x806DF938
    r3 = *(0 + r3); // lwz @ 0x806DF93C
    FUN_806FA6D0(r5, r3, r4); // bl 0x806FA6D0
    if (==) goto 0x0x806df958;
    /* li r0, 2 */ // 0x806DF94C
    *(0x68 + r31) = r0; // stw @ 0x806DF950
    /* b 0x806dfd74 */ // 0x806DF954
    /* lis r3, 0 */ // 0x806DF958
    r3 = *(0 + r3); // lwz @ 0x806DF95C
    r3 = *(0 + r3); // lwz @ 0x806DF960
    r29 = *(0x144 + r3); // lwz @ 0x806DF964
    if (!=) goto 0x0x806df978;
    /* li r29, 0 */ // 0x806DF970
    /* b 0x806df9cc */ // 0x806DF974
    /* lis r30, 0 */ // 0x806DF978
    r30 = r30 + 0; // 0x806DF97C
    if (==) goto 0x0x806df9c8;
    r12 = *(0 + r29); // lwz @ 0x806DF984
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806DF98C
    /* mtctr r12 */ // 0x806DF990
    /* bctrl  */ // 0x806DF994
    /* b 0x806df9b0 */ // 0x806DF998
    if (!=) goto 0x0x806df9ac;
    /* li r0, 1 */ // 0x806DF9A4
    /* b 0x806df9bc */ // 0x806DF9A8
    r3 = *(0 + r3); // lwz @ 0x806DF9AC
    if (!=) goto 0x0x806df99c;
    /* li r0, 0 */ // 0x806DF9B8
    if (==) goto 0x0x806df9c8;
    /* b 0x806df9cc */ // 0x806DF9C4
    /* li r29, 0 */ // 0x806DF9C8
    r3 = r29;
    FUN_80649164(r3); // bl 0x80649164
    /* li r0, 5 */ // 0x806DF9D4
    *(0x68 + r31) = r0; // stw @ 0x806DF9D8
    /* b 0x806dfd74 */ // 0x806DF9DC
    /* lis r3, 0 */ // 0x806DF9E0
    r3 = *(0 + r3); // lwz @ 0x806DF9E4
    r3 = *(0 + r3); // lwz @ 0x806DF9E8
    r29 = *(0x144 + r3); // lwz @ 0x806DF9EC
    if (!=) goto 0x0x806dfa00;
    /* li r29, 0 */ // 0x806DF9F8
    /* b 0x806dfa54 */ // 0x806DF9FC
    /* lis r30, 0 */ // 0x806DFA00
    r30 = r30 + 0; // 0x806DFA04
    if (==) goto 0x0x806dfa50;
    r12 = *(0 + r29); // lwz @ 0x806DFA0C
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806DFA14
    /* mtctr r12 */ // 0x806DFA18
    /* bctrl  */ // 0x806DFA1C
    /* b 0x806dfa38 */ // 0x806DFA20
    if (!=) goto 0x0x806dfa34;
    /* li r0, 1 */ // 0x806DFA2C
    /* b 0x806dfa44 */ // 0x806DFA30
    r3 = *(0 + r3); // lwz @ 0x806DFA34
    if (!=) goto 0x0x806dfa24;
    /* li r0, 0 */ // 0x806DFA40
    if (==) goto 0x0x806dfa50;
    /* b 0x806dfa54 */ // 0x806DFA4C
    /* li r29, 0 */ // 0x806DFA50
    r3 = r29;
    FUN_80649164(r3); // bl 0x80649164
    /* li r0, 4 */ // 0x806DFA5C
    *(0x68 + r31) = r0; // stw @ 0x806DFA60
    /* b 0x806dfd74 */ // 0x806DFA64
    /* lis r30, 0 */ // 0x806DFA68
    r3 = *(0 + r30); // lwz @ 0x806DFA6C
    FUN_806F58E0(); // bl 0x806F58E0
    if (==) goto 0x0x806dfd74;
    r3 = *(0 + r30); // lwz @ 0x806DFA7C
    FUN_806F58E8(); // bl 0x806F58E8
    if (==) goto 0x0x806dfa98;
    if (==) goto 0x0x806dfbf0;
    /* b 0x806dfd74 */ // 0x806DFA94
    /* lis r3, 0 */ // 0x806DFA98
    r3 = *(0 + r3); // lwz @ 0x806DFA9C
    r3 = *(0 + r3); // lwz @ 0x806DFAA0
    r29 = *(0x2a4 + r3); // lwz @ 0x806DFAA4
    if (!=) goto 0x0x806dfab8;
    /* li r29, 0 */ // 0x806DFAB0
    /* b 0x806dfb0c */ // 0x806DFAB4
    /* lis r30, 0 */ // 0x806DFAB8
    r30 = r30 + 0; // 0x806DFABC
    if (==) goto 0x0x806dfb08;
    r12 = *(0 + r29); // lwz @ 0x806DFAC4
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806DFACC
    /* mtctr r12 */ // 0x806DFAD0
    /* bctrl  */ // 0x806DFAD4
    /* b 0x806dfaf0 */ // 0x806DFAD8
    if (!=) goto 0x0x806dfaec;
    /* li r0, 1 */ // 0x806DFAE4
    /* b 0x806dfafc */ // 0x806DFAE8
    r3 = *(0 + r3); // lwz @ 0x806DFAEC
    if (!=) goto 0x0x806dfadc;
    /* li r0, 0 */ // 0x806DFAF8
    if (==) goto 0x0x806dfb08;
    /* b 0x806dfb0c */ // 0x806DFB04
    /* li r29, 0 */ // 0x806DFB08
    /* li r28, -1 */ // 0x806DFB0C
    /* li r27, 0 */ // 0x806DFB10
    /* lis r30, 0 */ // 0x806DFB14
    /* b 0x806dfb68 */ // 0x806DFB18
    r4 = r27;
    r3 = r29 + 0xa0; // 0x806DFB20
    FUN_806607C4(r4, r3); // bl 0x806607C4
    r0 = *(0 + r3); // lbz @ 0x806DFB28
    if (==) goto 0x0x806dfb64;
    r4 = *(0x6c + r31); // lwz @ 0x806DFB34
    r0 = *(0xc4 + r3); // lwz @ 0x806DFB38
    if (!=) goto 0x0x806dfb64;
    r4 = *(0 + r30); // lwz @ 0x806DFB44
    r5 = *(0xb8 + r3); // lwz @ 0x806DFB48
    r3 = *(0x98 + r4); // lwz @ 0x806DFB4C
    r0 = *(0x3c8 + r3); // lwz @ 0x806DFB50
    if (!=) goto 0x0x806dfb64;
    r28 = r27;
    /* b 0x806dfb74 */ // 0x806DFB60
    r27 = r27 + 1; // 0x806DFB64
    r0 = *(0x300 + r29); // lwz @ 0x806DFB68
    if (<) goto 0x0x806dfb1c;
    r4 = r28;
    r3 = r29 + 0xa0; // 0x806DFB78
    FUN_806608D4(r4, r3); // bl 0x806608D4
    /* lis r3, 0 */ // 0x806DFB80
    r5 = *(0 + r3); // lwz @ 0x806DFB84
    r0 = *(0x36 + r5); // lha @ 0x806DFB88
    if (<) goto 0x0x806dfbb0;
    /* lis r3, 1 */ // 0x806DFB94
    /* clrlwi r4, r0, 0x18 */ // 0x806DFB98
    r0 = r3 + -0x6c10; // 0x806DFB9C
    r0 = r0 * r4; // 0x806DFBA0
    r3 = r5 + r0; // 0x806DFBA4
    r3 = r3 + 0x38; // 0x806DFBA8
    /* b 0x806dfbb4 */ // 0x806DFBAC
    /* li r3, 0 */ // 0x806DFBB0
    /* addis r5, r3, 1 */ // 0x806DFBB4
    /* lis r3, 2 */ // 0x806DFBB8
    r4 = *(-0x6d5c + r5); // lwz @ 0x806DFBBC
    r0 = r3 + -0x7961; // 0x806DFBC0
    if (>=) goto 0x0x806dfbd4;
    r0 = r4 + 1; // 0x806DFBCC
    *(-0x6d5c + r5) = r0; // stw @ 0x806DFBD0
    /* lis r3, 0 */ // 0x806DFBD4
    r3 = *(0 + r3); // lwz @ 0x806DFBD8
    r3 = *(0x90 + r3); // lwz @ 0x806DFBDC
    FUN_806845FC(r3); // bl 0x806845FC
    /* li r0, 3 */ // 0x806DFBE4
    *(0x68 + r31) = r0; // stw @ 0x806DFBE8
    /* b 0x806dfd74 */ // 0x806DFBEC
    /* lis r3, 0 */ // 0x806DFBF0
    r3 = *(0 + r3); // lwz @ 0x806DFBF4
    r3 = *(0 + r3); // lwz @ 0x806DFBF8
    r29 = *(0x144 + r3); // lwz @ 0x806DFBFC
    if (!=) goto 0x0x806dfc10;
    /* li r29, 0 */ // 0x806DFC08
    /* b 0x806dfc64 */ // 0x806DFC0C
    /* lis r30, 0 */ // 0x806DFC10
    r30 = r30 + 0; // 0x806DFC14
    if (==) goto 0x0x806dfc60;
    r12 = *(0 + r29); // lwz @ 0x806DFC1C
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806DFC24
    /* mtctr r12 */ // 0x806DFC28
    /* bctrl  */ // 0x806DFC2C
    /* b 0x806dfc48 */ // 0x806DFC30
    if (!=) goto 0x0x806dfc44;
    /* li r0, 1 */ // 0x806DFC3C
    /* b 0x806dfc54 */ // 0x806DFC40
    r3 = *(0 + r3); // lwz @ 0x806DFC44
    if (!=) goto 0x0x806dfc34;
    /* li r0, 0 */ // 0x806DFC50
    if (==) goto 0x0x806dfc60;
    /* b 0x806dfc64 */ // 0x806DFC5C
    /* li r29, 0 */ // 0x806DFC60
    r3 = r29;
    FUN_80649164(r3); // bl 0x80649164
    /* li r0, 5 */ // 0x806DFC6C
    *(0x68 + r31) = r0; // stw @ 0x806DFC70
    /* b 0x806dfd74 */ // 0x806DFC74
    /* lis r3, 0 */ // 0x806DFC78
    r3 = *(0 + r3); // lwz @ 0x806DFC7C
    r3 = *(0 + r3); // lwz @ 0x806DFC80
    r29 = *(0x2a4 + r3); // lwz @ 0x806DFC84
    if (!=) goto 0x0x806dfc98;
    /* li r29, 0 */ // 0x806DFC90
    /* b 0x806dfcec */ // 0x806DFC94
    /* lis r30, 0 */ // 0x806DFC98
    r30 = r30 + 0; // 0x806DFC9C
    if (==) goto 0x0x806dfce8;
    r12 = *(0 + r29); // lwz @ 0x806DFCA4
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806DFCAC
    /* mtctr r12 */ // 0x806DFCB0
    /* bctrl  */ // 0x806DFCB4
    /* b 0x806dfcd0 */ // 0x806DFCB8
    if (!=) goto 0x0x806dfccc;
    /* li r0, 1 */ // 0x806DFCC4
    /* b 0x806dfcdc */ // 0x806DFCC8
    r3 = *(0 + r3); // lwz @ 0x806DFCCC
    if (!=) goto 0x0x806dfcbc;
    /* li r0, 0 */ // 0x806DFCD8
    if (==) goto 0x0x806dfce8;
    /* b 0x806dfcec */ // 0x806DFCE4
    /* li r29, 0 */ // 0x806DFCE8
    r0 = *(0x94 + r29); // lwz @ 0x806DFCEC
    if (!=) goto 0x0x806dfd74;
    /* lis r3, 0 */ // 0x806DFCF8
    r3 = *(0 + r3); // lwz @ 0x806DFCFC
    r3 = *(0 + r3); // lwz @ 0x806DFD00
    r29 = *(0x144 + r3); // lwz @ 0x806DFD04
    if (!=) goto 0x0x806dfd18;
    /* li r29, 0 */ // 0x806DFD10
    /* b 0x806dfd6c */ // 0x806DFD14
    /* lis r30, 0 */ // 0x806DFD18
    r30 = r30 + 0; // 0x806DFD1C
    if (==) goto 0x0x806dfd68;
    r12 = *(0 + r29); // lwz @ 0x806DFD24
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806DFD2C
    /* mtctr r12 */ // 0x806DFD30
    /* bctrl  */ // 0x806DFD34
    /* b 0x806dfd50 */ // 0x806DFD38
    if (!=) goto 0x0x806dfd4c;
    /* li r0, 1 */ // 0x806DFD44
    /* b 0x806dfd5c */ // 0x806DFD48
    r3 = *(0 + r3); // lwz @ 0x806DFD4C
    if (!=) goto 0x0x806dfd3c;
    /* li r0, 0 */ // 0x806DFD58
    if (==) goto 0x0x806dfd68;
    /* b 0x806dfd6c */ // 0x806DFD64
    /* li r29, 0 */ // 0x806DFD68
    r3 = r29;
    FUN_80649164(r3); // bl 0x80649164
    r0 = *(0x24 + r1); // lwz @ 0x806DFD78
    return;
}