/* Function at 0x806D735C, size=1984 bytes */
/* Stack frame: 464 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 21 function(s) */

int FUN_806D735C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -464(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x1c8 + r1) = r30; // stw @ 0x806D7370
    *(0x1c4 + r1) = r29; // stw @ 0x806D7374
    r0 = *(8 + r3); // lwz @ 0x806D7378
    if (!=) goto 0x0x806d7b08;
    r0 = *(0x2874 + r3); // lwz @ 0x806D7384
    if (==) goto 0x0x806d73b4;
    if (==) goto 0x0x806d74b4;
    if (==) goto 0x0x806d77d8;
    if (==) goto 0x0x806d78d8;
    if (==) goto 0x0x806d7a28;
    /* b 0x806d7b08 */ // 0x806D73B0
    /* lis r3, 0 */ // 0x806D73B4
    r3 = *(0 + r3); // lwz @ 0x806D73B8
    r3 = *(0 + r3); // lwz @ 0x806D73BC
    r31 = *(0x2a4 + r3); // lwz @ 0x806D73C0
    if (!=) goto 0x0x806d73d4;
    /* li r31, 0 */ // 0x806D73CC
    /* b 0x806d7428 */ // 0x806D73D0
    /* lis r30, 0 */ // 0x806D73D4
    r30 = r30 + 0; // 0x806D73D8
    if (==) goto 0x0x806d7424;
    r12 = *(0 + r31); // lwz @ 0x806D73E0
    r3 = r31;
    r12 = *(0x60 + r12); // lwz @ 0x806D73E8
    /* mtctr r12 */ // 0x806D73EC
    /* bctrl  */ // 0x806D73F0
    /* b 0x806d740c */ // 0x806D73F4
    if (!=) goto 0x0x806d7408;
    /* li r0, 1 */ // 0x806D7400
    /* b 0x806d7418 */ // 0x806D7404
    r3 = *(0 + r3); // lwz @ 0x806D7408
    if (!=) goto 0x0x806d73f8;
    /* li r0, 0 */ // 0x806D7414
    if (==) goto 0x0x806d7424;
    /* b 0x806d7428 */ // 0x806D7420
    /* li r31, 0 */ // 0x806D7424
    r0 = *(0x94 + r31); // lwz @ 0x806D7428
    if (!=) goto 0x0x806d7b08;
    /* lis r3, 0 */ // 0x806D7434
    r3 = *(0 + r3); // lwz @ 0x806D7438
    r3 = *(0 + r3); // lwz @ 0x806D743C
    r31 = *(0x148 + r3); // lwz @ 0x806D7440
    if (!=) goto 0x0x806d7454;
    /* li r31, 0 */ // 0x806D744C
    /* b 0x806d74a8 */ // 0x806D7450
    /* lis r30, 0 */ // 0x806D7454
    r30 = r30 + 0; // 0x806D7458
    if (==) goto 0x0x806d74a4;
    r12 = *(0 + r31); // lwz @ 0x806D7460
    r3 = r31;
    r12 = *(0x60 + r12); // lwz @ 0x806D7468
    /* mtctr r12 */ // 0x806D746C
    /* bctrl  */ // 0x806D7470
    /* b 0x806d748c */ // 0x806D7474
    if (!=) goto 0x0x806d7488;
    /* li r0, 1 */ // 0x806D7480
    /* b 0x806d7498 */ // 0x806D7484
    r3 = *(0 + r3); // lwz @ 0x806D7488
    if (!=) goto 0x0x806d7478;
    /* li r0, 0 */ // 0x806D7494
    if (==) goto 0x0x806d74a4;
    /* b 0x806d74a8 */ // 0x806D74A0
    /* li r31, 0 */ // 0x806D74A4
    r3 = r31;
    FUN_80649164(r3); // bl 0x80649164
    /* b 0x806d7b08 */ // 0x806D74B0
    /* lis r30, 0 */ // 0x806D74B4
    r3 = *(0 + r30); // lwz @ 0x806D74B8
    FUN_806F58E0(r3); // bl 0x806F58E0
    if (==) goto 0x0x806d7b08;
    r3 = *(0 + r30); // lwz @ 0x806D74C8
    FUN_806F58E8(); // bl 0x806F58E8
    r0 = r3 + -3; // 0x806D74D0
    if (<=) goto 0x0x806d76c8;
    if (==) goto 0x0x806d74f0;
    if (==) goto 0x0x806d7750;
    /* b 0x806d7b08 */ // 0x806D74EC
    r4 = r31 + 0x68; // 0x806D74F4
    FUN_805ABFC4(r3, r4); // bl 0x805ABFC4
    r0 = *(0xe0 + r1); // lbz @ 0x806D74FC
    /* li r3, 0 */ // 0x806D7500
    if (==) goto 0x0x806d751c;
    r0 = *(0x1b4 + r1); // lwz @ 0x806D750C
    if (==) goto 0x0x806d751c;
    /* li r3, 1 */ // 0x806D7518
    if (==) goto 0x0x806d7628;
    /* lis r4, 0 */ // 0x806D7524
    r3 = *(0x198 + r1); // lwz @ 0x806D7528
    r4 = *(0 + r4); // lwz @ 0x806D752C
    r4 = *(0x98 + r4); // lwz @ 0x806D7530
    r0 = *(0x3c8 + r4); // lwz @ 0x806D7534
    if (!=) goto 0x0x806d7628;
    r3 = *(0x3c4 + r4); // lwz @ 0x806D7540
    r0 = r3 + -2; // 0x806D7544
    if (>) goto 0x0x806d7558;
    r3 = r31;
    FUN_806DA328(r3); // bl 0x806DA328
    /* lis r3, 0 */ // 0x806D7558
    r3 = *(0 + r3); // lwz @ 0x806D755C
    r3 = *(0 + r3); // lwz @ 0x806D7560
    r29 = *(0x2a4 + r3); // lwz @ 0x806D7564
    if (!=) goto 0x0x806d7578;
    /* li r29, 0 */ // 0x806D7570
    /* b 0x806d75cc */ // 0x806D7574
    /* lis r30, 0 */ // 0x806D7578
    r30 = r30 + 0; // 0x806D757C
    if (==) goto 0x0x806d75c8;
    r12 = *(0 + r29); // lwz @ 0x806D7584
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806D758C
    /* mtctr r12 */ // 0x806D7590
    /* bctrl  */ // 0x806D7594
    /* b 0x806d75b0 */ // 0x806D7598
    if (!=) goto 0x0x806d75ac;
    /* li r0, 1 */ // 0x806D75A4
    /* b 0x806d75bc */ // 0x806D75A8
    r3 = *(0 + r3); // lwz @ 0x806D75AC
    if (!=) goto 0x0x806d759c;
    /* li r0, 0 */ // 0x806D75B8
    if (==) goto 0x0x806d75c8;
    /* b 0x806d75cc */ // 0x806D75C4
    /* li r29, 0 */ // 0x806D75C8
    r4 = r31 + 0x68; // 0x806D75D0
    FUN_805ABFC4(r3, r4); // bl 0x805ABFC4
    r0 = *(0xcc + r1); // lwz @ 0x806D75D8
    if (!=) goto 0x0x806d75f4;
    /* lis r3, 0 */ // 0x806D75E4
    r3 = *(0 + r3); // lwz @ 0x806D75E8
    r3 = *(0x90 + r3); // lwz @ 0x806D75EC
    FUN_806845FC(r3); // bl 0x806845FC
    r3 = r29;
    r4 = r31 + 0x68; // 0x806D75F8
    /* li r5, 0 */ // 0x806D75FC
    FUN_8065FB58(r3, r4, r5); // bl 0x8065FB58
    /* li r0, 6 */ // 0x806D7604
    /* lis r4, 0 */ // 0x806D7608
    *(0x2874 + r31) = r0; // stw @ 0x806D760C
    r4 = r4 + 0; // 0x806D7614
    /* li r5, 0xc */ // 0x806D7618
    /* li r6, 5 */ // 0x806D761C
    FUN_805E3430(r3, r4, r5, r6); // bl 0x805E3430
    /* b 0x806d76ac */ // 0x806D7624
    /* lis r3, 0 */ // 0x806D7628
    r3 = *(0 + r3); // lwz @ 0x806D762C
    r3 = *(0 + r3); // lwz @ 0x806D7630
    r29 = *(0x148 + r3); // lwz @ 0x806D7634
    if (!=) goto 0x0x806d7648;
    /* li r29, 0 */ // 0x806D7640
    /* b 0x806d769c */ // 0x806D7644
    /* lis r30, 0 */ // 0x806D7648
    r30 = r30 + 0; // 0x806D764C
    if (==) goto 0x0x806d7698;
    r12 = *(0 + r29); // lwz @ 0x806D7654
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806D765C
    /* mtctr r12 */ // 0x806D7660
    /* bctrl  */ // 0x806D7664
    /* b 0x806d7680 */ // 0x806D7668
    if (!=) goto 0x0x806d767c;
    /* li r0, 1 */ // 0x806D7674
    /* b 0x806d768c */ // 0x806D7678
    r3 = *(0 + r3); // lwz @ 0x806D767C
    if (!=) goto 0x0x806d766c;
    /* li r0, 0 */ // 0x806D7688
    if (==) goto 0x0x806d7698;
    /* b 0x806d769c */ // 0x806D7694
    /* li r29, 0 */ // 0x806D7698
    r3 = r29;
    FUN_80649164(r3); // bl 0x80649164
    /* li r0, 5 */ // 0x806D76A4
    *(0x2874 + r31) = r0; // stw @ 0x806D76A8
    /* lis r4, 0 */ // 0x806D76AC
    r4 = r4 + 0; // 0x806D76B4
    /* li r5, 0xc */ // 0x806D76B8
    /* li r6, 5 */ // 0x806D76BC
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    /* b 0x806d7b08 */ // 0x806D76C4
    /* lis r3, 0 */ // 0x806D76C8
    r3 = *(0 + r3); // lwz @ 0x806D76CC
    r3 = *(0 + r3); // lwz @ 0x806D76D0
    r29 = *(0x148 + r3); // lwz @ 0x806D76D4
    if (!=) goto 0x0x806d76e8;
    /* li r29, 0 */ // 0x806D76E0
    /* b 0x806d773c */ // 0x806D76E4
    /* lis r30, 0 */ // 0x806D76E8
    r30 = r30 + 0; // 0x806D76EC
    if (==) goto 0x0x806d7738;
    r12 = *(0 + r29); // lwz @ 0x806D76F4
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806D76FC
    /* mtctr r12 */ // 0x806D7700
    /* bctrl  */ // 0x806D7704
    /* b 0x806d7720 */ // 0x806D7708
    if (!=) goto 0x0x806d771c;
    /* li r0, 1 */ // 0x806D7714
    /* b 0x806d772c */ // 0x806D7718
    r3 = *(0 + r3); // lwz @ 0x806D771C
    if (!=) goto 0x0x806d770c;
    /* li r0, 0 */ // 0x806D7728
    if (==) goto 0x0x806d7738;
    /* b 0x806d773c */ // 0x806D7734
    /* li r29, 0 */ // 0x806D7738
    r3 = r29;
    FUN_80649164(r3); // bl 0x80649164
    /* li r0, 5 */ // 0x806D7744
    *(0x2874 + r31) = r0; // stw @ 0x806D7748
    /* b 0x806d7b08 */ // 0x806D774C
    /* lis r3, 0 */ // 0x806D7750
    r3 = *(0 + r3); // lwz @ 0x806D7754
    r3 = *(0 + r3); // lwz @ 0x806D7758
    r29 = *(0x148 + r3); // lwz @ 0x806D775C
    if (!=) goto 0x0x806d7770;
    /* li r29, 0 */ // 0x806D7768
    /* b 0x806d77c4 */ // 0x806D776C
    /* lis r30, 0 */ // 0x806D7770
    r30 = r30 + 0; // 0x806D7774
    if (==) goto 0x0x806d77c0;
    r12 = *(0 + r29); // lwz @ 0x806D777C
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806D7784
    /* mtctr r12 */ // 0x806D7788
    /* bctrl  */ // 0x806D778C
    /* b 0x806d77a8 */ // 0x806D7790
    if (!=) goto 0x0x806d77a4;
    /* li r0, 1 */ // 0x806D779C
    /* b 0x806d77b4 */ // 0x806D77A0
    r3 = *(0 + r3); // lwz @ 0x806D77A4
    if (!=) goto 0x0x806d7794;
    /* li r0, 0 */ // 0x806D77B0
    if (==) goto 0x0x806d77c0;
    /* b 0x806d77c4 */ // 0x806D77BC
    /* li r29, 0 */ // 0x806D77C0
    r3 = r29;
    FUN_80649164(r3); // bl 0x80649164
    /* li r0, 5 */ // 0x806D77CC
    *(0x2874 + r31) = r0; // stw @ 0x806D77D0
    /* b 0x806d7b08 */ // 0x806D77D4
    /* lis r3, 0 */ // 0x806D77D8
    r3 = *(0 + r3); // lwz @ 0x806D77DC
    r3 = *(0 + r3); // lwz @ 0x806D77E0
    r29 = *(0x2a4 + r3); // lwz @ 0x806D77E4
    if (!=) goto 0x0x806d77f8;
    /* li r29, 0 */ // 0x806D77F0
    /* b 0x806d784c */ // 0x806D77F4
    /* lis r30, 0 */ // 0x806D77F8
    r30 = r30 + 0; // 0x806D77FC
    if (==) goto 0x0x806d7848;
    r12 = *(0 + r29); // lwz @ 0x806D7804
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806D780C
    /* mtctr r12 */ // 0x806D7810
    /* bctrl  */ // 0x806D7814
    /* b 0x806d7830 */ // 0x806D7818
    if (!=) goto 0x0x806d782c;
    /* li r0, 1 */ // 0x806D7824
    /* b 0x806d783c */ // 0x806D7828
    r3 = *(0 + r3); // lwz @ 0x806D782C
    if (!=) goto 0x0x806d781c;
    /* li r0, 0 */ // 0x806D7838
    if (==) goto 0x0x806d7848;
    /* b 0x806d784c */ // 0x806D7844
    /* li r29, 0 */ // 0x806D7848
    r0 = *(0x94 + r29); // lwz @ 0x806D784C
    if (!=) goto 0x0x806d7b08;
    /* lis r3, 0 */ // 0x806D7858
    r3 = *(0 + r3); // lwz @ 0x806D785C
    r3 = *(0 + r3); // lwz @ 0x806D7860
    r29 = *(0x148 + r3); // lwz @ 0x806D7864
    if (!=) goto 0x0x806d7878;
    /* li r29, 0 */ // 0x806D7870
    /* b 0x806d78cc */ // 0x806D7874
    /* lis r30, 0 */ // 0x806D7878
    r30 = r30 + 0; // 0x806D787C
    if (==) goto 0x0x806d78c8;
    r12 = *(0 + r29); // lwz @ 0x806D7884
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806D788C
    /* mtctr r12 */ // 0x806D7890
    /* bctrl  */ // 0x806D7894
    /* b 0x806d78b0 */ // 0x806D7898
    if (!=) goto 0x0x806d78ac;
    /* li r0, 1 */ // 0x806D78A4
    /* b 0x806d78bc */ // 0x806D78A8
    r3 = *(0 + r3); // lwz @ 0x806D78AC
    if (!=) goto 0x0x806d789c;
    /* li r0, 0 */ // 0x806D78B8
    if (==) goto 0x0x806d78c8;
    /* b 0x806d78cc */ // 0x806D78C4
    /* li r29, 0 */ // 0x806D78C8
    r3 = r29;
    FUN_80649164(r3); // bl 0x80649164
    /* b 0x806d7b08 */ // 0x806D78D4
    /* lis r3, 0 */ // 0x806D78D8
    r3 = *(0 + r3); // lwz @ 0x806D78DC
    r3 = *(0 + r3); // lwz @ 0x806D78E0
    r29 = *(0x2a4 + r3); // lwz @ 0x806D78E4
    if (!=) goto 0x0x806d78f8;
    /* li r29, 0 */ // 0x806D78F0
    /* b 0x806d794c */ // 0x806D78F4
    /* lis r30, 0 */ // 0x806D78F8
    r30 = r30 + 0; // 0x806D78FC
    if (==) goto 0x0x806d7948;
    r12 = *(0 + r29); // lwz @ 0x806D7904
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806D790C
    /* mtctr r12 */ // 0x806D7910
    /* bctrl  */ // 0x806D7914
    /* b 0x806d7930 */ // 0x806D7918
    if (!=) goto 0x0x806d792c;
    /* li r0, 1 */ // 0x806D7924
    /* b 0x806d793c */ // 0x806D7928
    r3 = *(0 + r3); // lwz @ 0x806D792C
    if (!=) goto 0x0x806d791c;
    /* li r0, 0 */ // 0x806D7938
    if (==) goto 0x0x806d7948;
    /* b 0x806d794c */ // 0x806D7944
    /* li r29, 0 */ // 0x806D7948
    r0 = *(0x94 + r29); // lwz @ 0x806D794C
    if (!=) goto 0x0x806d7b08;
    /* lis r3, 0 */ // 0x806D7958
    r29 = *(0 + r3); // lwz @ 0x806D795C
    r3 = *(0x18 + r29); // lwz @ 0x806D7960
    FUN_805ABD4C(r3); // bl 0x805ABD4C
    if (==) goto 0x0x806d7978;
    r5 = *(0x18 + r29); // lwz @ 0x806D7970
    /* b 0x806d797c */ // 0x806D7974
    /* li r5, 0 */ // 0x806D7978
    /* lis r3, 0 */ // 0x806D797C
    r4 = r31 + 0x2868; // 0x806D7980
    r3 = *(0 + r3); // lwz @ 0x806D7984
    FUN_806FA6D0(r5, r3, r4); // bl 0x806FA6D0
    if (==) goto 0x0x806d79a0;
    /* li r0, 0xa */ // 0x806D7994
    *(0x2874 + r31) = r0; // stw @ 0x806D7998
    /* b 0x806d7b08 */ // 0x806D799C
    /* lis r3, 0 */ // 0x806D79A0
    r3 = *(0 + r3); // lwz @ 0x806D79A4
    r3 = *(0 + r3); // lwz @ 0x806D79A8
    r29 = *(0x148 + r3); // lwz @ 0x806D79AC
    if (!=) goto 0x0x806d79c0;
    /* li r29, 0 */ // 0x806D79B8
    /* b 0x806d7a14 */ // 0x806D79BC
    /* lis r30, 0 */ // 0x806D79C0
    r30 = r30 + 0; // 0x806D79C4
    if (==) goto 0x0x806d7a10;
    r12 = *(0 + r29); // lwz @ 0x806D79CC
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806D79D4
    /* mtctr r12 */ // 0x806D79D8
    /* bctrl  */ // 0x806D79DC
    /* b 0x806d79f8 */ // 0x806D79E0
    if (!=) goto 0x0x806d79f4;
    /* li r0, 1 */ // 0x806D79EC
    /* b 0x806d7a04 */ // 0x806D79F0
    r3 = *(0 + r3); // lwz @ 0x806D79F4
    if (!=) goto 0x0x806d79e4;
    /* li r0, 0 */ // 0x806D7A00
    if (==) goto 0x0x806d7a10;
    /* b 0x806d7a14 */ // 0x806D7A0C
    /* li r29, 0 */ // 0x806D7A10
    r3 = r29;
    FUN_80649164(r3); // bl 0x80649164
    /* li r0, 0xc */ // 0x806D7A1C
    *(0x2874 + r31) = r0; // stw @ 0x806D7A20
    /* b 0x806d7b08 */ // 0x806D7A24
    /* lis r30, 0 */ // 0x806D7A28
    r3 = *(0 + r30); // lwz @ 0x806D7A2C
    FUN_806F58E0(); // bl 0x806F58E0
    if (==) goto 0x0x806d7b08;
    r3 = *(0 + r30); // lwz @ 0x806D7A3C
    FUN_806F58E8(); // bl 0x806F58E8
    if (==) goto 0x0x806d7a58;
    if (==) goto 0x0x806d7a64;
    /* b 0x806d7a70 */ // 0x806D7A54
    /* li r0, 0xb */ // 0x806D7A58
    *(0x2874 + r31) = r0; // stw @ 0x806D7A5C
    /* b 0x806d7a8c */ // 0x806D7A60
    /* li r0, 0xc */ // 0x806D7A64
    *(0x2874 + r31) = r0; // stw @ 0x806D7A68
    /* b 0x806d7a8c */ // 0x806D7A6C
    /* lis r4, 0 */ // 0x806D7A70
    /* li r0, 0xa8 */ // 0x806D7A74
    /* lfs f1, 0(r4) */ // 0x806D7A78
    r3 = r31;
    *(0x2878 + r31) = r0; // stw @ 0x806D7A80
    /* li r4, 1 */ // 0x806D7A84
    FUN_80671C48(r3, r4); // bl 0x80671C48
    /* lis r3, 0 */ // 0x806D7A8C
    r3 = *(0 + r3); // lwz @ 0x806D7A90
    r3 = *(0 + r3); // lwz @ 0x806D7A94
    r29 = *(0x148 + r3); // lwz @ 0x806D7A98
    if (!=) goto 0x0x806d7aac;
    /* li r29, 0 */ // 0x806D7AA4
    /* b 0x806d7b00 */ // 0x806D7AA8
    /* lis r30, 0 */ // 0x806D7AAC
    r30 = r30 + 0; // 0x806D7AB0
    if (==) goto 0x0x806d7afc;
    r12 = *(0 + r29); // lwz @ 0x806D7AB8
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806D7AC0
    /* mtctr r12 */ // 0x806D7AC4
    /* bctrl  */ // 0x806D7AC8
    /* b 0x806d7ae4 */ // 0x806D7ACC
    if (!=) goto 0x0x806d7ae0;
    /* li r0, 1 */ // 0x806D7AD8
    /* b 0x806d7af0 */ // 0x806D7ADC
    r3 = *(0 + r3); // lwz @ 0x806D7AE0
    if (!=) goto 0x0x806d7ad0;
    /* li r0, 0 */ // 0x806D7AEC
    if (==) goto 0x0x806d7afc;
    /* b 0x806d7b00 */ // 0x806D7AF8
    /* li r29, 0 */ // 0x806D7AFC
    r3 = r29;
    FUN_80649164(r3); // bl 0x80649164
    r0 = *(0x1d4 + r1); // lwz @ 0x806D7B08
    r31 = *(0x1cc + r1); // lwz @ 0x806D7B0C
    r30 = *(0x1c8 + r1); // lwz @ 0x806D7B10
    r29 = *(0x1c4 + r1); // lwz @ 0x806D7B14
}