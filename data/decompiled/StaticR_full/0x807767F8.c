/* Function at 0x807767F8, size=320 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_807767F8(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r6, 0 */ // 0x80776800
    /* li r8, 1 */ // 0x80776804
    *(0x24 + r1) = r0; // stw @ 0x80776808
    /* lfs f0, 0(r6) */ // 0x8077680C
    *(0x1c + r1) = r31; // stw @ 0x80776810
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x80776818
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x80776820
    *(0x10 + r1) = r28; // stw @ 0x80776824
    r28 = r4;
    /* li r4, 0 */ // 0x8077682C
    *(0xb0 + r3) = r8; // stb @ 0x80776830
    /* stfs f0, 8(r7) */ // 0x80776834
    /* stfs f0, 4(r7) */ // 0x80776838
    /* stfs f0, 0(r7) */ // 0x8077683C
    r0 = *(0xb0 + r3); // lbz @ 0x80776840
    if (==) goto 0x0x8077685c;
    r0 = *(0xb1 + r3); // lbz @ 0x8077684C
    if (!=) goto 0x0x8077685c;
    r4 = r8;
    if (==) goto 0x0x80776954;
    r12 = *(0 + r30); // lwz @ 0x80776864
    r3 = r30;
    /* li r29, 0 */ // 0x8077686C
    r12 = *(0x30 + r12); // lwz @ 0x80776870
    /* mtctr r12 */ // 0x80776874
    /* bctrl  */ // 0x80776878
    /* lis r4, 0x101 */ // 0x8077687C
    r0 = *(0x20 + r3); // lwz @ 0x80776880
    r3 = r4 + 0x101; // 0x80776884
    /* andc. r0, r3, r0 */ // 0x80776888
    if (!=) goto 0x0x807768a8;
    /* lis r3, 0 */ // 0x80776890
    r3 = *(0 + r3); // lwz @ 0x80776894
    FUN_8070D8D8(r3, r3); // bl 0x8070D8D8
    if (==) goto 0x0x807768a8;
    /* li r29, 1 */ // 0x807768A4
    if (!=) goto 0x0x807768f4;
    r3 = r28;
    FUN_8061E2D8(r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x807768B8
    r29 = r3;
    r3 = *(0 + r4); // lwz @ 0x807768C0
    /* clrlwi r4, r29, 0x18 */ // 0x807768C4
    FUN_805C1470(r4); // bl 0x805C1470
    /* extsb r0, r3 */ // 0x807768CC
    if (==) goto 0x0x807768f4;
    r3 = *(0xb4 + r30); // lwz @ 0x807768D8
    r0 = r29 rlwinm 2; // rlwinm
    /* lwzx r3, r3, r0 */ // 0x807768E0
    r12 = *(0 + r3); // lwz @ 0x807768E4
    r12 = *(0xc + r12); // lwz @ 0x807768E8
    /* mtctr r12 */ // 0x807768EC
    /* bctrl  */ // 0x807768F0
    r12 = *(0 + r30); // lwz @ 0x807768F4
    r3 = r30;
    r12 = *(0x28 + r12); // lwz @ 0x807768FC
    /* mtctr r12 */ // 0x80776900
    /* bctrl  */ // 0x80776904
    /* lis r29, 0 */ // 0x80776908
    r4 = r29 + 0; // 0x8077690C
    FUN_805E3430(r4); // bl 0x805E3430
    if (!=) goto 0x0x80776934;
    /* lis r4, 0 */ // 0x8077691C
    r3 = r30;
    /* lfs f1, 0(r4) */ // 0x80776924
    /* li r4, 0x2e4 */ // 0x80776928
    FUN_808A0A88(r4, r3, r4); // bl 0x808A0A88
    /* b 0x80776954 */ // 0x80776930
    r12 = *(0 + r30); // lwz @ 0x80776934
}