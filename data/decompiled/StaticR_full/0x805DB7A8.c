/* Function at 0x805DB7A8, size=488 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_805DB7A8(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r0 = r3 + 0x2c; // 0x805DB7B4
    *(0x4c + r1) = r31; // stw @ 0x805DB7BC
    r31 = r5;
    *(0x48 + r1) = r30; // stw @ 0x805DB7C4
    r30 = r3;
    *(0x44 + r1) = r29; // stw @ 0x805DB7CC
    r29 = r4;
    *(0x40 + r1) = r28; // stw @ 0x805DB7D4
    r28 = r6;
    if (!=) goto 0x0x805db7f4;
    r0 = *(0x28 + r3); // lbz @ 0x805DB7E0
    if (!=) goto 0x0x805db7f4;
    /* li r3, 0 */ // 0x805DB7EC
    /* b 0x805db970 */ // 0x805DB7F0
    /* li r5, 0 */ // 0x805DB7F8
    if (<) goto 0x0x805db818;
    /* lis r3, 0 */ // 0x805DB800
    r3 = r3 + 0; // 0x805DB804
    r0 = *(4 + r3); // lwz @ 0x805DB808
    if (>=) goto 0x0x805db818;
    /* li r5, 1 */ // 0x805DB814
    if (!=) goto 0x0x805db834;
    /* lis r3, 0 */ // 0x805DB820
    r12 = *(0 + r3); // lwzu @ 0x805DB824
    r12 = *(0x18 + r12); // lwz @ 0x805DB828
    /* mtctr r12 */ // 0x805DB82C
    /* bctrl  */ // 0x805DB830
    /* lis r3, 0 */ // 0x805DB834
    /* slwi r29, r29, 2 */ // 0x805DB838
    r3 = r3 + 0; // 0x805DB83C
    /* li r4, 1 */ // 0x805DB840
    r3 = *(8 + r3); // lwz @ 0x805DB844
    /* lwzx r3, r3, r29 */ // 0x805DB848
    *(0 + r3) = r4; // stw @ 0x805DB84C
    r0 = *(4 + r3); // lwz @ 0x805DB850
    if (==) goto 0x0x805db86c;
    r0 = *(0x34 + r3); // lhz @ 0x805DB85C
    r0 = r0 | 1; // 0x805DB860
    *(0x34 + r3) = r0; // sth @ 0x805DB864
    *(4 + r3) = r4; // stw @ 0x805DB868
    /* lfs f2, 0(r28) */ // 0x805DB86C
    /* lfs f1, 4(r28) */ // 0x805DB874
    /* lfs f0, 8(r28) */ // 0x805DB87C
    /* stfs f2, 0x20(r1) */ // 0x805DB880
    /* stfs f1, 0x24(r1) */ // 0x805DB884
    r7 = *(0x20 + r1); // lwz @ 0x805DB888
    /* stfs f0, 0x28(r1) */ // 0x805DB88C
    r6 = *(0x24 + r1); // lwz @ 0x805DB890
    r0 = *(0x28 + r1); // lwz @ 0x805DB894
    *(8 + r1) = r7; // stw @ 0x805DB898
    *(0xc + r1) = r6; // stw @ 0x805DB89C
    *(0x10 + r1) = r0; // stw @ 0x805DB8A0
    FUN_805F6CE4(); // bl 0x805F6CE4
    if (==) goto 0x0x805db96c;
    r3 = *(0x38 + r30); // lwz @ 0x805DB8B0
    /* lfs f0, 0x14(r1) */ // 0x805DB8B8
    /* lfsx f1, r3, r29 */ // 0x805DB8BC
    /* fmuls f0, f0, f1 */ // 0x805DB8C0
    /* stfs f0, 0x14(r1) */ // 0x805DB8C4
    if (==) goto 0x0x805db8e0;
    /* stfs f0, 0(r31) */ // 0x805DB8CC
    /* lfs f0, 0x18(r1) */ // 0x805DB8D0
    /* stfs f0, 4(r31) */ // 0x805DB8D4
    /* lfs f0, 0x1c(r1) */ // 0x805DB8D8
    /* stfs f0, 8(r31) */ // 0x805DB8DC
    /* lis r3, 0 */ // 0x805DB8E0
    /* lfs f3, 0x14(r1) */ // 0x805DB8E4
    /* lfs f0, 0(r3) */ // 0x805DB8E8
    /* .byte 0xfc, 0x03, 0x00, 0x40 */ // 0x805DB8EC
    /* cror cr0eq, cr0gt, cr0eq */ // 0x805DB8F0
    if (!=) goto 0x0x805db96c;
    /* lfs f2, 0x18(r1) */ // 0x805DB8F8
    /* .byte 0xfc, 0x02, 0x00, 0x40 */ // 0x805DB8FC
    /* cror cr0eq, cr0gt, cr0eq */ // 0x805DB900
    if (!=) goto 0x0x805db96c;
    /* lis r3, 0 */ // 0x805DB908
    /* lis r4, 0 */ // 0x805DB90C
    r5 = *(0 + r3); // lwz @ 0x805DB910
    /* lis r3, 0 */ // 0x805DB914
    /* lis r0, 0x4330 */ // 0x805DB918
    r4 = r4 + 0; // 0x805DB91C
    /* mulli r5, r5, 0xc */ // 0x805DB920
    /* lfd f1, 0(r3) */ // 0x805DB924
    *(0x30 + r1) = r0; // stw @ 0x805DB928
    /* lhzx r3, r4, r5 */ // 0x805DB92C
    *(0x34 + r1) = r3; // stw @ 0x805DB930
    /* lfd f0, 0x30(r1) */ // 0x805DB934
    /* fsubs f0, f0, f1 */ // 0x805DB938
    /* .byte 0xfc, 0x03, 0x00, 0x40 */ // 0x805DB93C
    if (>=) goto 0x0x805db96c;
    r3 = r4 + r5; // 0x805DB944
    *(0x30 + r1) = r0; // stw @ 0x805DB948
    r0 = *(2 + r3); // lhz @ 0x805DB94C
    *(0x34 + r1) = r0; // stw @ 0x805DB950
    /* lfd f0, 0x30(r1) */ // 0x805DB954
    /* fsubs f0, f0, f1 */ // 0x805DB958
    /* .byte 0xfc, 0x02, 0x00, 0x40 */ // 0x805DB95C
    if (>=) goto 0x0x805db96c;
    /* li r3, 1 */ // 0x805DB964
    /* b 0x805db970 */ // 0x805DB968
    /* li r3, 0 */ // 0x805DB96C
    r0 = *(0x54 + r1); // lwz @ 0x805DB970
    r31 = *(0x4c + r1); // lwz @ 0x805DB974
    r30 = *(0x48 + r1); // lwz @ 0x805DB978
    r29 = *(0x44 + r1); // lwz @ 0x805DB97C
    r28 = *(0x40 + r1); // lwz @ 0x805DB980
    return;
}