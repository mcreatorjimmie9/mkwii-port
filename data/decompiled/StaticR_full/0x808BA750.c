/* Function at 0x808BA750, size=928 bytes */
/* Stack frame: 224 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 17 function(s) */

int FUN_808BA750(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -224(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x808BA758
    r31 = r3;
    *(0xd8 + r1) = r30; // stw @ 0x808BA768
    *(0xd4 + r1) = r29; // stw @ 0x808BA76C
    r4 = *(0 + r4); // lwz @ 0x808BA770
    r0 = *(0x1760 + r4); // lwz @ 0x808BA774
    if (!=) goto 0x0x808ba78c;
    /* li r0, 0xd4c */ // 0x808BA780
    *(0x3e4 + r3) = r0; // stw @ 0x808BA784
    /* b 0x808ba794 */ // 0x808BA788
    /* li r0, 0xd4d */ // 0x808BA78C
    *(0x3e4 + r3) = r0; // stw @ 0x808BA790
    r0 = *(0x10 + r3); // lwz @ 0x808BA794
    if (!=) goto 0x0x808ba868;
    /* lis r30, 0 */ // 0x808BA7A0
    r3 = *(0 + r30); // lwz @ 0x808BA7A4
    r3 = *(0x98 + r3); // lwz @ 0x808BA7A8
    r3 = *(0x14c + r3); // lwz @ 0x808BA7AC
    FUN_806622BC(); // bl 0x806622BC
    *(0x23d4 + r31) = r3; // stw @ 0x808BA7B4
    r3 = *(0 + r30); // lwz @ 0x808BA7B8
    r3 = *(0 + r3); // lwz @ 0x808BA7BC
    r0 = *(0 + r3); // lwz @ 0x808BA7C0
    if (==) goto 0x0x808ba7d4;
    if (!=) goto 0x0x808ba850;
    r29 = *(0x2a8 + r3); // lwz @ 0x808BA7D4
    if (!=) goto 0x0x808ba7e8;
    /* li r29, 0 */ // 0x808BA7E0
    /* b 0x808ba83c */ // 0x808BA7E4
    /* lis r30, 0 */ // 0x808BA7E8
    r30 = r30 + 0; // 0x808BA7EC
    if (==) goto 0x0x808ba838;
    r12 = *(0 + r29); // lwz @ 0x808BA7F4
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x808BA7FC
    /* mtctr r12 */ // 0x808BA800
    /* bctrl  */ // 0x808BA804
    /* b 0x808ba820 */ // 0x808BA808
    if (!=) goto 0x0x808ba81c;
    /* li r0, 1 */ // 0x808BA814
    /* b 0x808ba82c */ // 0x808BA818
    r3 = *(0 + r3); // lwz @ 0x808BA81C
    if (!=) goto 0x0x808ba80c;
    /* li r0, 0 */ // 0x808BA828
    if (==) goto 0x0x808ba838;
    /* b 0x808ba83c */ // 0x808BA834
    /* li r29, 0 */ // 0x808BA838
    if (==) goto 0x0x808ba850;
    r3 = *(0x1b78 + r29); // lwz @ 0x808BA844
    FUN_806622BC(); // bl 0x806622BC
    *(0x23d4 + r31) = r3; // stw @ 0x808BA84C
    r3 = *(0x23d4 + r31); // lwz @ 0x808BA850
    FUN_80873DF8(); // bl 0x80873DF8
    if (!=) goto 0x0x808ba868;
    /* li r0, 0 */ // 0x808BA860
    *(0x23d4 + r31) = r0; // stw @ 0x808BA864
    r3 = r31;
    FUN_808B3318(r3); // bl 0x808B3318
    r12 = *(0 + r31); // lwz @ 0x808BA870
    r3 = r31;
    r12 = *(0x70 + r12); // lwz @ 0x808BA878
    /* mtctr r12 */ // 0x808BA87C
    /* bctrl  */ // 0x808BA880
    /* li r4, 0 */ // 0x808BA884
    FUN_8066A380(r3, r4); // bl 0x8066A380
    r12 = *(0x6c4 + r31); // lwz @ 0x808BA88C
    r3 = r31 + 0x6c4; // 0x808BA890
    r12 = *(0xc + r12); // lwz @ 0x808BA894
    /* mtctr r12 */ // 0x808BA898
    /* bctrl  */ // 0x808BA89C
    /* lis r4, 0 */ // 0x808BA8A0
    /* lis r30, 0 */ // 0x808BA8A4
    r0 = *(0 + r4); // lwz @ 0x808BA8A8
    r3 = *(0 + r30); // lwz @ 0x808BA8AC
    *(8 + r1) = r0; // stw @ 0x808BA8B0
    r3 = *(0 + r3); // lwz @ 0x808BA8B4
    r3 = *(0 + r3); // lwz @ 0x808BA8B8
    if (==) goto 0x0x808ba8f4;
    FUN_808CF8D8(); // bl 0x808CF8D8
    if (!=) goto 0x0x808ba8f4;
    r3 = *(0 + r30); // lwz @ 0x808BA8D0
    r3 = *(0 + r3); // lwz @ 0x808BA8D4
    r0 = *(0 + r3); // lwz @ 0x808BA8D8
    if (==) goto 0x0x808ba8f4;
    r3 = r31;
    /* li r5, 1 */ // 0x808BA8EC
    FUN_808B4A2C(r3, r4, r5); // bl 0x808B4A2C
    /* lis r3, 0 */ // 0x808BA8F4
    r3 = *(0 + r3); // lwz @ 0x808BA8F8
    r3 = *(0 + r3); // lwz @ 0x808BA8FC
    r3 = *(0 + r3); // lwz @ 0x808BA900
    FUN_808CF8D8(r3); // bl 0x808CF8D8
    if (==) goto 0x0x808ba92c;
    r0 = *(0x10 + r31); // lwz @ 0x808BA910
    if (!=) goto 0x0x808ba92c;
    r3 = r31;
    /* li r5, 1 */ // 0x808BA924
    FUN_808B4A2C(r3, r4, r5); // bl 0x808B4A2C
    /* lis r30, 0 */ // 0x808BA92C
    r3 = *(0 + r30); // lwz @ 0x808BA930
    r3 = *(0 + r3); // lwz @ 0x808BA934
    r3 = *(0 + r3); // lwz @ 0x808BA938
    FUN_808CF8D8(); // bl 0x808CF8D8
    if (==) goto 0x0x808baa48;
    r0 = *(0x10 + r31); // lwz @ 0x808BA948
    if (!=) goto 0x0x808baa48;
    r3 = *(0 + r30); // lwz @ 0x808BA954
    r3 = *(0 + r3); // lwz @ 0x808BA958
    r29 = *(0x140 + r3); // lwz @ 0x808BA95C
    if (!=) goto 0x0x808ba970;
    /* li r29, 0 */ // 0x808BA968
    /* b 0x808ba9c4 */ // 0x808BA96C
    /* lis r30, 0 */ // 0x808BA970
    r30 = r30 + 0; // 0x808BA974
    if (==) goto 0x0x808ba9c0;
    r12 = *(0 + r29); // lwz @ 0x808BA97C
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x808BA984
    /* mtctr r12 */ // 0x808BA988
    /* bctrl  */ // 0x808BA98C
    /* b 0x808ba9a8 */ // 0x808BA990
    if (!=) goto 0x0x808ba9a4;
    /* li r0, 1 */ // 0x808BA99C
    /* b 0x808ba9b4 */ // 0x808BA9A0
    r3 = *(0 + r3); // lwz @ 0x808BA9A4
    if (!=) goto 0x0x808ba994;
    /* li r0, 0 */ // 0x808BA9B0
    if (==) goto 0x0x808ba9c0;
    /* b 0x808ba9c4 */ // 0x808BA9BC
    /* li r29, 0 */ // 0x808BA9C0
    r12 = *(0 + r29); // lwz @ 0x808BA9C4
    r3 = r29;
    r12 = *(0x64 + r12); // lwz @ 0x808BA9CC
    /* mtctr r12 */ // 0x808BA9D0
    /* bctrl  */ // 0x808BA9D4
    r3 = r29;
    /* li r4, 0x10fe */ // 0x808BA9DC
    /* li r5, 0 */ // 0x808BA9E0
    FUN_806B2C88(r3, r4, r5); // bl 0x806B2C88
    r3 = r29;
    /* li r4, 0 */ // 0x808BA9EC
    /* li r5, 0x10ff */ // 0x808BA9F0
    /* li r6, 0 */ // 0x808BA9F4
    /* li r7, -1 */ // 0x808BA9F8
    /* li r8, 0 */ // 0x808BA9FC
    FUN_806B2C90(r4, r5, r6, r7, r8); // bl 0x806B2C90
    r3 = r29;
    /* li r4, 1 */ // 0x808BAA08
    /* li r5, 0x1100 */ // 0x808BAA0C
    /* li r6, 0 */ // 0x808BAA10
    /* li r7, -1 */ // 0x808BAA14
    /* li r8, 0 */ // 0x808BAA18
    FUN_806B2C90(r4, r5, r6, r7, r8); // bl 0x806B2C90
    /* li r0, 0 */ // 0x808BAA20
    *(0x27c + r29) = r0; // stw @ 0x808BAA24
    r3 = r31;
    /* li r4, 0x4e */ // 0x808BAA2C
    r12 = *(0 + r31); // lwz @ 0x808BAA30
    /* li r5, 0 */ // 0x808BAA34
    r12 = *(0x24 + r12); // lwz @ 0x808BAA38
    /* mtctr r12 */ // 0x808BAA3C
    /* bctrl  */ // 0x808BAA40
    *(0x23d8 + r31) = r3; // stw @ 0x808BAA44
    r3 = *(0x2bc + r31); // lwz @ 0x808BAA48
    /* li r4, 0 */ // 0x808BAA4C
    /* li r5, 0 */ // 0x808BAA50
    FUN_808D5A00(r4, r5); // bl 0x808D5A00
    FUN_80654ECC(r4, r5, r3); // bl 0x80654ECC
    /* lis r3, 0 */ // 0x808BAA60
    r4 = *(0 + r3); // lwz @ 0x808BAA64
    r0 = *(0x1760 + r4); // lwz @ 0x808BAA68
    if (==) goto 0x0x808baa80;
    if (==) goto 0x0x808baa94;
    /* b 0x808baad4 */ // 0x808BAA7C
    r3 = *(0x2bc + r31); // lwz @ 0x808BAA80
    /* li r4, 0xd21 */ // 0x808BAA84
    /* li r5, 0 */ // 0x808BAA88
    FUN_808D5A00(r4, r5); // bl 0x808D5A00
    /* b 0x808baad4 */ // 0x808BAA90
    r3 = *(0x175c + r4); // lwz @ 0x808BAA94
    r3 = r3 + 0xd53; // 0x808BAA98
    *(0x30 + r1) = r3; // stw @ 0x808BAA9C
    r0 = *(0x1780 + r4); // lwz @ 0x808BAAA0
    /* clrlwi. r0, r0, 0x1f */ // 0x808BAAA4
    if (==) goto 0x0x808baab4;
    r0 = r3 + 1; // 0x808BAAAC
    *(0x30 + r1) = r0; // stw @ 0x808BAAB0
    r0 = *(0x1780 + r4); // lwz @ 0x808BAAB4
    /* li r4, 0xd23 */ // 0x808BAAB8
    r3 = *(0x2bc + r31); // lwz @ 0x808BAABC
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x808BAAC0
    if (==) goto 0x0x808baacc;
    /* li r4, 0xd26 */ // 0x808BAAC8
    FUN_808D5A00(r4, r5); // bl 0x808D5A00
    r0 = *(0xe4 + r1); // lwz @ 0x808BAAD4
    r31 = *(0xdc + r1); // lwz @ 0x808BAAD8
    r30 = *(0xd8 + r1); // lwz @ 0x808BAADC
    r29 = *(0xd4 + r1); // lwz @ 0x808BAAE0
    return;
}