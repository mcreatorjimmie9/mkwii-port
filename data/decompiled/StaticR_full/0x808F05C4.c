/* Function at 0x808F05C4, size=840 bytes */
/* Stack frame: 240 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_808F05C4(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -240(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0xe8 + r1) = r30; // stw @ 0x808F05DC
    r30 = r4;
    *(0xe4 + r1) = r29; // stw @ 0x808F05E4
    FUN_80654ECC(); // bl 0x80654ECC
    /* lis r3, 0 */ // 0x808F05EC
    r5 = *(0 + r3); // lwz @ 0x808F05F0
    r0 = *(0x36 + r5); // lha @ 0x808F05F4
    if (<) goto 0x0x808f061c;
    /* lis r3, 1 */ // 0x808F0600
    /* clrlwi r4, r0, 0x18 */ // 0x808F0604
    r0 = r3 + -0x6c10; // 0x808F0608
    r0 = r0 * r4; // 0x808F060C
    r3 = r5 + r0; // 0x808F0610
    r3 = r3 + 0x38; // 0x808F0614
    /* b 0x808f0620 */ // 0x808F0618
    /* li r3, 0 */ // 0x808F061C
    if (==) goto 0x0x808f0654;
    if (==) goto 0x0x808f080c;
    if (==) goto 0x0x808f0840;
    if (==) goto 0x0x808f0864;
    if (==) goto 0x0x808f0888;
    if (==) goto 0x0x808f08a0;
    /* b 0x808f08c0 */ // 0x808F0650
    r6 = r3 + 0x20; // 0x808F0654
    /* li r7, 0 */ // 0x808F0658
    r4 = r6;
    /* li r8, 0 */ // 0x808F0660
    /* li r9, 7 */ // 0x808F0664
    /* li r10, 0 */ // 0x808F0668
    /* li r0, 2 */ // 0x808F066C
    r5 = r4;
    /* li r11, 0 */ // 0x808F0674
    /* mtctr r0 */ // 0x808F0678
    r3 = *(0x56 + r5); // lbz @ 0x808F067C
    if (==) goto 0x0x808f0698;
    r3 = *(0x60 + r5); // lwz @ 0x808F0688
    r8 = r8 + 1; // 0x808F068C
    /* subfic r3, r3, 8 */ // 0x808F0690
    r7 = r7 + r3; // 0x808F0694
    r3 = *(0xc6 + r5); // lbz @ 0x808F0698
    if (==) goto 0x0x808f06b4;
    r3 = *(0xd0 + r5); // lwz @ 0x808F06A4
    r8 = r8 + 1; // 0x808F06A8
    /* subfic r3, r3, 8 */ // 0x808F06AC
    r7 = r7 + r3; // 0x808F06B0
    r3 = *(0x136 + r5); // lbz @ 0x808F06B4
    if (==) goto 0x0x808f06d0;
    r3 = *(0x140 + r5); // lwz @ 0x808F06C0
    r8 = r8 + 1; // 0x808F06C4
    /* subfic r3, r3, 8 */ // 0x808F06C8
    r7 = r7 + r3; // 0x808F06CC
    r3 = *(0x1a6 + r5); // lbz @ 0x808F06D0
    if (==) goto 0x0x808f06ec;
    r3 = *(0x1b0 + r5); // lwz @ 0x808F06DC
    r8 = r8 + 1; // 0x808F06E0
    /* subfic r3, r3, 8 */ // 0x808F06E4
    r7 = r7 + r3; // 0x808F06E8
    r5 = r5 + 0x1c0; // 0x808F06EC
    if (counter-- != 0) goto 0x0x808f067c;
    r4 = r4 + 0x380; // 0x808F06FC
    if (<) goto 0x0x808f0670;
    if (==) goto 0x0x808f0718;
    r0 = r7 / r8; // 0x808F0710
    /* subfic r9, r0, 8 */ // 0x808F0714
    if (<) goto 0x0x808f072c;
    r0 = r9 + 0xd2d; // 0x808F0720
    *(0x2c + r1) = r0; // stw @ 0x808F0724
    /* b 0x808f08c0 */ // 0x808F0728
    /* li r5, 0 */ // 0x808F072C
    /* li r7, 0 */ // 0x808F0730
    /* li r0, 2 */ // 0x808F0734
    r4 = r6;
    /* li r8, 0 */ // 0x808F073C
    /* mtctr r0 */ // 0x808F0740
    r3 = *(0x56 + r4); // lbz @ 0x808F0744
    if (!=) goto 0x0x808f0758;
    /* li r5, 7 */ // 0x808F0750
    /* b 0x808f0768 */ // 0x808F0754
    r3 = *(0x60 + r4); // lwz @ 0x808F0758
    if (<=) goto 0x0x808f0768;
    r5 = r3;
    r3 = *(0xc6 + r4); // lbz @ 0x808F0768
    if (!=) goto 0x0x808f077c;
    /* li r5, 7 */ // 0x808F0774
    /* b 0x808f078c */ // 0x808F0778
    r3 = *(0xd0 + r4); // lwz @ 0x808F077C
    if (<=) goto 0x0x808f078c;
    r5 = r3;
    r3 = *(0x136 + r4); // lbz @ 0x808F078C
    if (!=) goto 0x0x808f07a0;
    /* li r5, 7 */ // 0x808F0798
    /* b 0x808f07b0 */ // 0x808F079C
    r3 = *(0x140 + r4); // lwz @ 0x808F07A0
    if (<=) goto 0x0x808f07b0;
    r5 = r3;
    r3 = *(0x1a6 + r4); // lbz @ 0x808F07B0
    if (!=) goto 0x0x808f07c4;
    /* li r5, 7 */ // 0x808F07BC
    /* b 0x808f07d4 */ // 0x808F07C0
    r3 = *(0x1b0 + r4); // lwz @ 0x808F07C4
    if (<=) goto 0x0x808f07d4;
    r5 = r3;
    r4 = r4 + 0x1c0; // 0x808F07D4
    r8 = r8 + 3; // 0x808F07D8
    if (counter-- != 0) goto 0x0x808f0744;
    r7 = r7 + 1; // 0x808F07E0
    r6 = r6 + 0x380; // 0x808F07E4
    if (<) goto 0x0x808f0738;
    /* li r3, 3 */ // 0x808F07F4
    if (>) goto 0x0x808f0800;
    r3 = r5;
    r0 = r3 + 0xd2d; // 0x808F0800
    *(0x2c + r1) = r0; // stw @ 0x808F0804
    /* b 0x808f08c0 */ // 0x808F0808
    /* addis r4, r3, 1 */ // 0x808F080C
    /* lis r3, 0 */ // 0x808F0810
    /* lfs f1, -0x6d44(r4) */ // 0x808F0814
    /* lfs f0, 0(r3) */ // 0x808F0818
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x808F081C
    if (>=) goto 0x0x808f0828;
    /* b 0x808f082c */ // 0x808F0824
    /* fmr f1, f0 */ // 0x808F0828
    /* fctiwz f0, f1 */ // 0x808F082C
    /* stfd f0, 0xd0(r1) */ // 0x808F0830
    r0 = *(0xd4 + r1); // lwz @ 0x808F0834
    *(8 + r1) = r0; // stw @ 0x808F0838
    /* b 0x808f08c0 */ // 0x808F083C
    /* addis r4, r3, 1 */ // 0x808F0840
    /* lis r3, 2 */ // 0x808F0844
    r4 = *(-0x6d6c + r4); // lwz @ 0x808F0848
    r0 = r3 + -0x7961; // 0x808F084C
    if (>=) goto 0x0x808f085c;
    r0 = r4;
    *(8 + r1) = r0; // stw @ 0x808F085C
    /* b 0x808f08c0 */ // 0x808F0860
    /* addis r4, r3, 1 */ // 0x808F0864
    /* lis r3, 2 */ // 0x808F0868
    r4 = *(-0x6d68 + r4); // lwz @ 0x808F086C
    r0 = r3 + -0x7961; // 0x808F0870
    if (>=) goto 0x0x808f0880;
    r0 = r4;
    *(8 + r1) = r0; // stw @ 0x808F0880
    /* b 0x808f08c0 */ // 0x808F0884
    FUN_805D8284(); // bl 0x805D8284
    /* fctiwz f0, f1 */ // 0x808F088C
    /* stfd f0, 0xd0(r1) */ // 0x808F0890
    r0 = *(0xd4 + r1); // lwz @ 0x808F0894
    *(8 + r1) = r0; // stw @ 0x808F0898
    /* b 0x808f08c0 */ // 0x808F089C
    /* addis r4, r3, 1 */ // 0x808F08A0
    /* lis r3, 2 */ // 0x808F08A4
    r4 = *(-0x6d4c + r4); // lwz @ 0x808F08A8
    r0 = r3 + -0x7961; // 0x808F08AC
    if (>=) goto 0x0x808f08bc;
    r0 = r4;
    *(8 + r1) = r0; // stw @ 0x808F08BC
    /* lis r29, 0 */ // 0x808F08C0
    r3 = r31;
    r29 = r29 + 0; // 0x808F08C8
    r5 = r30 + 0x2012; // 0x808F08CC
    r4 = r29 + 0x36; // 0x808F08D0
    /* li r6, 0 */ // 0x808F08D4
    FUN_806A093C(r3, r5, r4, r6); // bl 0x806A093C
    r3 = r31;
    r4 = r29 + 0x40; // 0x808F08E0
    r5 = r30 + 0x2044; // 0x808F08E4
    FUN_806A093C(r3, r4, r5, r6); // bl 0x806A093C
    r0 = *(0xf4 + r1); // lwz @ 0x808F08F0
    r31 = *(0xec + r1); // lwz @ 0x808F08F4
    r30 = *(0xe8 + r1); // lwz @ 0x808F08F8
    r29 = *(0xe4 + r1); // lwz @ 0x808F08FC
    return;
}