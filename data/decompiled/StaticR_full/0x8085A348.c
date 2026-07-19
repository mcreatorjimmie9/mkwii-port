/* Function at 0x8085A348, size=2424 bytes */
/* Stack frame: 1328 bytes */
/* Saved registers: r31, r30 */
/* Calls: 13 function(s) */

int FUN_8085A348(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -1328(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r0, 0 */ // 0x8085A354
    *(0x52c + r1) = r31; // stw @ 0x8085A358
    /* lis r31, 0 */ // 0x8085A35C
    r31 = r31 + 0; // 0x8085A360
    *(0x528 + r1) = r30; // stw @ 0x8085A364
    r30 = r3;
    r4 = r31 + 0; // 0x8085A36C
    *(0x524 + r1) = r29; // stw @ 0x8085A370
    *(0x1b8 + r1) = r0; // stw @ 0x8085A374
    r6 = *(0 + r31); // lwz @ 0x8085A378
    r3 = *(0x10 + r3); // lwz @ 0x8085A37C
    r5 = *(4 + r4); // lwz @ 0x8085A380
    r29 = *(0x104 + r3); // lwz @ 0x8085A384
    r3 = *(8 + r4); // lwz @ 0x8085A388
    r0 = *(0x3d8 + r29); // lwz @ 0x8085A38C
    *(0x8c + r1) = r6; // stw @ 0x8085A390
    *(0x90 + r1) = r5; // stw @ 0x8085A398
    *(0x94 + r1) = r3; // stw @ 0x8085A39C
    if (!=) goto 0x0x8085a3c0;
    /* lis r3, 0 */ // 0x8085A3A4
    /* lis r5, 0 */ // 0x8085A3A8
    r3 = r3 + 0; // 0x8085A3AC
    /* li r4, 0x38 */ // 0x8085A3B0
    r5 = r5 + 0; // 0x8085A3B4
    /* crclr cr1eq */ // 0x8085A3B8
    FUN_805E3430(r5, r3, r4, r5); // bl 0x805E3430
    r3 = *(0x3d8 + r29); // lwz @ 0x8085A3C0
    if (==) goto 0x0x8085a3d4;
    r11 = *(0xc + r3); // lwz @ 0x8085A3CC
    /* b 0x8085a3d8 */ // 0x8085A3D0
    /* li r11, 0 */ // 0x8085A3D4
    r0 = *(0x1b8 + r1); // lwz @ 0x8085A3D8
    r3 = r31 + 0xc; // 0x8085A3DC
    r5 = *(0xc + r31); // lwz @ 0x8085A3E0
    /* mulli r9, r0, 0xc */ // 0x8085A3E8
    r4 = *(4 + r3); // lwz @ 0x8085A3EC
    r0 = *(8 + r3); // lwz @ 0x8085A3F0
    r6 = *(0x8c + r1); // lwz @ 0x8085A3F8
    r10 = r8 + r9; // 0x8085A400
    r9 = *(0x90 + r1); // lwz @ 0x8085A404
    *(0 + r10) = r6; // stw @ 0x8085A408
    /* li r6, 2 */ // 0x8085A40C
    r8 = *(0x94 + r1); // lwz @ 0x8085A410
    *(4 + r10) = r9; // stw @ 0x8085A414
    *(8 + r10) = r8; // stw @ 0x8085A418
    r8 = *(0x1b8 + r1); // lwz @ 0x8085A41C
    *(0x80 + r1) = r5; // stw @ 0x8085A420
    /* slwi r5, r8, 2 */ // 0x8085A424
    /* stwx r11, r7, r5 */ // 0x8085A428
    r5 = *(0x1b8 + r1); // lwz @ 0x8085A42C
    *(0x84 + r1) = r4; // stw @ 0x8085A430
    /* slwi r4, r5, 2 */ // 0x8085A434
    /* stwx r6, r3, r4 */ // 0x8085A438
    r3 = *(0x1b8 + r1); // lwz @ 0x8085A43C
    *(0x88 + r1) = r0; // stw @ 0x8085A440
    r0 = r3 + 1; // 0x8085A444
    *(0x1b8 + r1) = r0; // stw @ 0x8085A448
    r3 = *(0x10 + r30); // lwz @ 0x8085A44C
    r29 = *(0x104 + r3); // lwz @ 0x8085A450
    r0 = *(0x4f8 + r29); // lwz @ 0x8085A454
    if (!=) goto 0x0x8085a47c;
    /* lis r3, 0 */ // 0x8085A460
    /* lis r5, 0 */ // 0x8085A464
    r3 = r3 + 0; // 0x8085A468
    /* li r4, 0x38 */ // 0x8085A46C
    r5 = r5 + 0; // 0x8085A470
    /* crclr cr1eq */ // 0x8085A474
    FUN_805E3430(r5, r3, r4, r5); // bl 0x805E3430
    r3 = *(0x4f8 + r29); // lwz @ 0x8085A47C
    if (==) goto 0x0x8085a490;
    r10 = *(0xc + r3); // lwz @ 0x8085A488
    /* b 0x8085a494 */ // 0x8085A48C
    /* li r10, 0 */ // 0x8085A490
    r0 = *(0x1b8 + r1); // lwz @ 0x8085A494
    r7 = *(0x80 + r1); // lwz @ 0x8085A49C
    /* mulli r9, r0, 0xc */ // 0x8085A4A4
    r6 = *(0x84 + r1); // lwz @ 0x8085A4A8
    r0 = *(0x88 + r1); // lwz @ 0x8085A4AC
    /* li r4, 2 */ // 0x8085A4B4
    /* stwux r7, r8, r9 */ // 0x8085A4B8
    *(4 + r8) = r6; // stw @ 0x8085A4BC
    *(8 + r8) = r0; // stw @ 0x8085A4C0
    r0 = *(0x1b8 + r1); // lwz @ 0x8085A4C4
    /* slwi r0, r0, 2 */ // 0x8085A4C8
    /* stwx r10, r5, r0 */ // 0x8085A4CC
    r0 = *(0x1b8 + r1); // lwz @ 0x8085A4D0
    /* slwi r0, r0, 2 */ // 0x8085A4D4
    /* stwx r4, r3, r0 */ // 0x8085A4D8
    r3 = *(0x1b8 + r1); // lwz @ 0x8085A4DC
    r0 = r3 + 1; // 0x8085A4E0
    *(0x1b8 + r1) = r0; // stw @ 0x8085A4E4
    r3 = *(0x10 + r30); // lwz @ 0x8085A4E8
    r0 = *(0x14b + r3); // lbz @ 0x8085A4EC
    if (==) goto 0x0x8085a668;
    r29 = *(0x104 + r3); // lwz @ 0x8085A4F8
    r3 = r31 + 0x18; // 0x8085A4FC
    r4 = *(4 + r3); // lwz @ 0x8085A500
    r0 = *(0x138 + r29); // lwz @ 0x8085A504
    r5 = *(0x18 + r31); // lwz @ 0x8085A508
    r3 = *(8 + r3); // lwz @ 0x8085A50C
    *(0x74 + r1) = r5; // stw @ 0x8085A514
    *(0x78 + r1) = r4; // stw @ 0x8085A518
    *(0x7c + r1) = r3; // stw @ 0x8085A51C
    if (!=) goto 0x0x8085a540;
    /* lis r3, 0 */ // 0x8085A524
    /* lis r5, 0 */ // 0x8085A528
    r3 = r3 + 0; // 0x8085A52C
    /* li r4, 0x38 */ // 0x8085A530
    r5 = r5 + 0; // 0x8085A534
    /* crclr cr1eq */ // 0x8085A538
    FUN_805E3430(r5, r3, r4, r5); // bl 0x805E3430
    r3 = *(0x138 + r29); // lwz @ 0x8085A540
    if (==) goto 0x0x8085a554;
    r11 = *(0xc + r3); // lwz @ 0x8085A54C
    /* b 0x8085a558 */ // 0x8085A550
    /* li r11, 0 */ // 0x8085A554
    r0 = *(0x1b8 + r1); // lwz @ 0x8085A558
    r3 = r31 + 0x24; // 0x8085A55C
    r5 = *(0x24 + r31); // lwz @ 0x8085A560
    /* mulli r9, r0, 0xc */ // 0x8085A568
    r4 = *(4 + r3); // lwz @ 0x8085A56C
    r0 = *(8 + r3); // lwz @ 0x8085A570
    r6 = *(0x74 + r1); // lwz @ 0x8085A578
    r10 = r8 + r9; // 0x8085A580
    r9 = *(0x78 + r1); // lwz @ 0x8085A584
    *(0 + r10) = r6; // stw @ 0x8085A588
    /* li r6, 2 */ // 0x8085A58C
    r8 = *(0x7c + r1); // lwz @ 0x8085A590
    *(4 + r10) = r9; // stw @ 0x8085A594
    *(8 + r10) = r8; // stw @ 0x8085A598
    r8 = *(0x1b8 + r1); // lwz @ 0x8085A59C
    *(0x68 + r1) = r5; // stw @ 0x8085A5A0
    /* slwi r5, r8, 2 */ // 0x8085A5A4
    /* stwx r11, r7, r5 */ // 0x8085A5A8
    r5 = *(0x1b8 + r1); // lwz @ 0x8085A5AC
    *(0x6c + r1) = r4; // stw @ 0x8085A5B0
    /* slwi r4, r5, 2 */ // 0x8085A5B4
    /* stwx r6, r3, r4 */ // 0x8085A5B8
    r3 = *(0x1b8 + r1); // lwz @ 0x8085A5BC
    *(0x70 + r1) = r0; // stw @ 0x8085A5C0
    r0 = r3 + 1; // 0x8085A5C4
    *(0x1b8 + r1) = r0; // stw @ 0x8085A5C8
    r3 = *(0x10 + r30); // lwz @ 0x8085A5CC
    r29 = *(0x104 + r3); // lwz @ 0x8085A5D0
    r0 = *(0x258 + r29); // lwz @ 0x8085A5D4
    if (!=) goto 0x0x8085a5fc;
    /* lis r3, 0 */ // 0x8085A5E0
    /* lis r5, 0 */ // 0x8085A5E4
    r3 = r3 + 0; // 0x8085A5E8
    /* li r4, 0x38 */ // 0x8085A5EC
    r5 = r5 + 0; // 0x8085A5F0
    /* crclr cr1eq */ // 0x8085A5F4
    FUN_805E3430(r5, r3, r4, r5); // bl 0x805E3430
    r3 = *(0x258 + r29); // lwz @ 0x8085A5FC
    if (==) goto 0x0x8085a610;
    r10 = *(0xc + r3); // lwz @ 0x8085A608
    /* b 0x8085a614 */ // 0x8085A60C
    /* li r10, 0 */ // 0x8085A610
    r0 = *(0x1b8 + r1); // lwz @ 0x8085A614
    r7 = *(0x68 + r1); // lwz @ 0x8085A61C
    /* mulli r9, r0, 0xc */ // 0x8085A624
    r6 = *(0x6c + r1); // lwz @ 0x8085A628
    r0 = *(0x70 + r1); // lwz @ 0x8085A62C
    /* li r4, 2 */ // 0x8085A634
    /* stwux r7, r8, r9 */ // 0x8085A638
    *(4 + r8) = r6; // stw @ 0x8085A63C
    *(8 + r8) = r0; // stw @ 0x8085A640
    r0 = *(0x1b8 + r1); // lwz @ 0x8085A644
    /* slwi r0, r0, 2 */ // 0x8085A648
    /* stwx r10, r5, r0 */ // 0x8085A64C
    r0 = *(0x1b8 + r1); // lwz @ 0x8085A650
    /* slwi r0, r0, 2 */ // 0x8085A654
    /* stwx r4, r3, r0 */ // 0x8085A658
    r3 = *(0x1b8 + r1); // lwz @ 0x8085A65C
    r0 = r3 + 1; // 0x8085A660
    *(0x1b8 + r1) = r0; // stw @ 0x8085A664
    r3 = *(0x10 + r30); // lwz @ 0x8085A668
    r4 = r31 + 0x30; // 0x8085A66C
    r6 = *(0x30 + r31); // lwz @ 0x8085A670
    r29 = *(0x104 + r3); // lwz @ 0x8085A674
    r5 = *(4 + r4); // lwz @ 0x8085A678
    r0 = *(0x18 + r29); // lwz @ 0x8085A67C
    r3 = *(8 + r4); // lwz @ 0x8085A680
    *(0x5c + r1) = r6; // stw @ 0x8085A688
    *(0x60 + r1) = r5; // stw @ 0x8085A68C
    *(0x64 + r1) = r3; // stw @ 0x8085A690
    if (!=) goto 0x0x8085a6b4;
    /* lis r3, 0 */ // 0x8085A698
    /* lis r5, 0 */ // 0x8085A69C
    r3 = r3 + 0; // 0x8085A6A0
    /* li r4, 0x38 */ // 0x8085A6A4
    r5 = r5 + 0; // 0x8085A6A8
    /* crclr cr1eq */ // 0x8085A6AC
    FUN_805E3430(r5, r3, r4, r5); // bl 0x805E3430
    r3 = *(0x18 + r29); // lwz @ 0x8085A6B4
    if (==) goto 0x0x8085a6c8;
    r10 = *(0xc + r3); // lwz @ 0x8085A6C0
    /* b 0x8085a6cc */ // 0x8085A6C4
    /* li r10, 0 */ // 0x8085A6C8
    r0 = *(0x1b8 + r1); // lwz @ 0x8085A6CC
    r7 = *(0x5c + r1); // lwz @ 0x8085A6D4
    /* mulli r9, r0, 0xc */ // 0x8085A6DC
    r6 = *(0x60 + r1); // lwz @ 0x8085A6E0
    r0 = *(0x64 + r1); // lwz @ 0x8085A6E4
    /* li r4, 2 */ // 0x8085A6EC
    /* stwux r7, r8, r9 */ // 0x8085A6F0
    *(4 + r8) = r6; // stw @ 0x8085A6F4
    *(8 + r8) = r0; // stw @ 0x8085A6F8
    r0 = *(0x1b8 + r1); // lwz @ 0x8085A6FC
    /* slwi r0, r0, 2 */ // 0x8085A700
    /* stwx r10, r5, r0 */ // 0x8085A704
    r0 = *(0x1b8 + r1); // lwz @ 0x8085A708
    /* slwi r0, r0, 2 */ // 0x8085A70C
    /* stwx r4, r3, r0 */ // 0x8085A710
    r3 = *(0x1b8 + r1); // lwz @ 0x8085A714
    r0 = r3 + 1; // 0x8085A718
    *(0x1b8 + r1) = r0; // stw @ 0x8085A71C
    r0 = *(0x28c + r30); // lbz @ 0x8085A720
    if (==) goto 0x0x8085a95c;
    r3 = *(0x10 + r30); // lwz @ 0x8085A72C
    r4 = r31 + 0x3c; // 0x8085A730
    r6 = *(0x3c + r31); // lwz @ 0x8085A734
    r29 = *(0x104 + r3); // lwz @ 0x8085A738
    r5 = *(4 + r4); // lwz @ 0x8085A73C
    r0 = *(0x978 + r29); // lwz @ 0x8085A740
    r3 = *(8 + r4); // lwz @ 0x8085A744
    *(0x50 + r1) = r6; // stw @ 0x8085A74C
    *(0x54 + r1) = r5; // stw @ 0x8085A750
    *(0x58 + r1) = r3; // stw @ 0x8085A754
    if (!=) goto 0x0x8085a778;
    /* lis r3, 0 */ // 0x8085A75C
    /* lis r5, 0 */ // 0x8085A760
    r3 = r3 + 0; // 0x8085A764
    /* li r4, 0x38 */ // 0x8085A768
    r5 = r5 + 0; // 0x8085A76C
    /* crclr cr1eq */ // 0x8085A770
    FUN_805E3430(r5, r3, r4, r5); // bl 0x805E3430
    r3 = *(0x978 + r29); // lwz @ 0x8085A778
    if (==) goto 0x0x8085a78c;
    r11 = *(0xc + r3); // lwz @ 0x8085A784
    /* b 0x8085a790 */ // 0x8085A788
    /* li r11, 0 */ // 0x8085A78C
    r0 = *(0x1b8 + r1); // lwz @ 0x8085A790
    r3 = r31 + 0x48; // 0x8085A794
    r5 = *(0x48 + r31); // lwz @ 0x8085A798
    /* mulli r9, r0, 0xc */ // 0x8085A7A0
    r4 = *(4 + r3); // lwz @ 0x8085A7A4
    r0 = *(8 + r3); // lwz @ 0x8085A7A8
    r6 = *(0x50 + r1); // lwz @ 0x8085A7B0
    r10 = r8 + r9; // 0x8085A7B8
    r9 = *(0x54 + r1); // lwz @ 0x8085A7BC
    *(0 + r10) = r6; // stw @ 0x8085A7C0
    /* li r6, 2 */ // 0x8085A7C4
    r8 = *(0x58 + r1); // lwz @ 0x8085A7C8
    *(4 + r10) = r9; // stw @ 0x8085A7CC
    *(8 + r10) = r8; // stw @ 0x8085A7D0
    r8 = *(0x1b8 + r1); // lwz @ 0x8085A7D4
    *(0x44 + r1) = r5; // stw @ 0x8085A7D8
    /* slwi r5, r8, 2 */ // 0x8085A7DC
    /* stwx r11, r7, r5 */ // 0x8085A7E0
    r5 = *(0x1b8 + r1); // lwz @ 0x8085A7E4
    *(0x48 + r1) = r4; // stw @ 0x8085A7E8
    /* slwi r4, r5, 2 */ // 0x8085A7EC
    /* stwx r6, r3, r4 */ // 0x8085A7F0
    r3 = *(0x1b8 + r1); // lwz @ 0x8085A7F4
    *(0x4c + r1) = r0; // stw @ 0x8085A7F8
    r0 = r3 + 1; // 0x8085A7FC
    *(0x1b8 + r1) = r0; // stw @ 0x8085A800
    r3 = *(0x10 + r30); // lwz @ 0x8085A804
    r29 = *(0x104 + r3); // lwz @ 0x8085A808
    r0 = *(0x9d8 + r29); // lwz @ 0x8085A80C
    if (!=) goto 0x0x8085a834;
    /* lis r3, 0 */ // 0x8085A818
    /* lis r5, 0 */ // 0x8085A81C
    r3 = r3 + 0; // 0x8085A820
    /* li r4, 0x38 */ // 0x8085A824
    r5 = r5 + 0; // 0x8085A828
    /* crclr cr1eq */ // 0x8085A82C
    FUN_805E3430(r5, r3, r4, r5); // bl 0x805E3430
    r3 = *(0x9d8 + r29); // lwz @ 0x8085A834
    if (==) goto 0x0x8085a848;
    r11 = *(0xc + r3); // lwz @ 0x8085A840
    /* b 0x8085a84c */ // 0x8085A844
    /* li r11, 0 */ // 0x8085A848
    r0 = *(0x1b8 + r1); // lwz @ 0x8085A84C
    r3 = r31 + 0x54; // 0x8085A850
    r5 = *(0x54 + r31); // lwz @ 0x8085A854
    /* mulli r9, r0, 0xc */ // 0x8085A85C
    r4 = *(4 + r3); // lwz @ 0x8085A860
    r0 = *(8 + r3); // lwz @ 0x8085A864
    r6 = *(0x44 + r1); // lwz @ 0x8085A86C
    r10 = r8 + r9; // 0x8085A874
    r9 = *(0x48 + r1); // lwz @ 0x8085A878
    *(0 + r10) = r6; // stw @ 0x8085A87C
    /* li r6, 2 */ // 0x8085A880
    r8 = *(0x4c + r1); // lwz @ 0x8085A884
    *(4 + r10) = r9; // stw @ 0x8085A888
    *(8 + r10) = r8; // stw @ 0x8085A88C
    r8 = *(0x1b8 + r1); // lwz @ 0x8085A890
    *(0x38 + r1) = r5; // stw @ 0x8085A894
    /* slwi r5, r8, 2 */ // 0x8085A898
    /* stwx r11, r7, r5 */ // 0x8085A89C
    r5 = *(0x1b8 + r1); // lwz @ 0x8085A8A0
    *(0x3c + r1) = r4; // stw @ 0x8085A8A4
    /* slwi r4, r5, 2 */ // 0x8085A8A8
    /* stwx r6, r3, r4 */ // 0x8085A8AC
    r3 = *(0x1b8 + r1); // lwz @ 0x8085A8B0
    *(0x40 + r1) = r0; // stw @ 0x8085A8B4
    r0 = r3 + 1; // 0x8085A8B8
    *(0x1b8 + r1) = r0; // stw @ 0x8085A8BC
    r3 = *(0x10 + r30); // lwz @ 0x8085A8C0
    r29 = *(0x104 + r3); // lwz @ 0x8085A8C4
    r0 = *(0xa38 + r29); // lwz @ 0x8085A8C8
    if (!=) goto 0x0x8085a8f0;
    /* lis r3, 0 */ // 0x8085A8D4
    /* lis r5, 0 */ // 0x8085A8D8
    r3 = r3 + 0; // 0x8085A8DC
    /* li r4, 0x38 */ // 0x8085A8E0
    r5 = r5 + 0; // 0x8085A8E4
    /* crclr cr1eq */ // 0x8085A8E8
    FUN_805E3430(r5, r3, r4, r5); // bl 0x805E3430
    r3 = *(0xa38 + r29); // lwz @ 0x8085A8F0
    if (==) goto 0x0x8085a904;
    r10 = *(0xc + r3); // lwz @ 0x8085A8FC
    /* b 0x8085a908 */ // 0x8085A900
    /* li r10, 0 */ // 0x8085A904
    r0 = *(0x1b8 + r1); // lwz @ 0x8085A908
    r7 = *(0x38 + r1); // lwz @ 0x8085A910
    /* mulli r9, r0, 0xc */ // 0x8085A918
    r6 = *(0x3c + r1); // lwz @ 0x8085A91C
    r0 = *(0x40 + r1); // lwz @ 0x8085A920
    /* li r4, 2 */ // 0x8085A928
    /* stwux r7, r8, r9 */ // 0x8085A92C
    *(4 + r8) = r6; // stw @ 0x8085A930
    *(8 + r8) = r0; // stw @ 0x8085A934
    r0 = *(0x1b8 + r1); // lwz @ 0x8085A938
    /* slwi r0, r0, 2 */ // 0x8085A93C
    /* stwx r10, r5, r0 */ // 0x8085A940
    r0 = *(0x1b8 + r1); // lwz @ 0x8085A944
    /* slwi r0, r0, 2 */ // 0x8085A948
    /* stwx r4, r3, r0 */ // 0x8085A94C
    r3 = *(0x1b8 + r1); // lwz @ 0x8085A950
    r0 = r3 + 1; // 0x8085A954
    *(0x1b8 + r1) = r0; // stw @ 0x8085A958
    r12 = *(0xc + r30); // lwz @ 0x8085A95C
    r3 = r30;
    r12 = *(0x38 + r12); // lwz @ 0x8085A964
    /* mtctr r12 */ // 0x8085A968
    /* bctrl  */ // 0x8085A96C
    if (==) goto 0x0x8085ab04;
    r0 = *(0x2d4 + r30); // lwz @ 0x8085A978
    r4 = r31 + 0x60; // 0x8085A97C
    r3 = *(0x10 + r30); // lwz @ 0x8085A980
    /* mulli r0, r0, 0x60 */ // 0x8085A984
    r6 = *(0x60 + r31); // lwz @ 0x8085A988
    r3 = *(0x104 + r3); // lwz @ 0x8085A98C
    r5 = *(4 + r4); // lwz @ 0x8085A990
    r29 = r3 + r0; // 0x8085A994
    r3 = *(8 + r4); // lwz @ 0x8085A998
    r0 = *(0x18 + r29); // lwz @ 0x8085A99C
    *(0x2c + r1) = r6; // stw @ 0x8085A9A0
    *(0x30 + r1) = r5; // stw @ 0x8085A9A8
    *(0x34 + r1) = r3; // stw @ 0x8085A9AC
    if (!=) goto 0x0x8085a9d0;
    /* lis r3, 0 */ // 0x8085A9B4
    /* lis r5, 0 */ // 0x8085A9B8
    r3 = r3 + 0; // 0x8085A9BC
    /* li r4, 0x38 */ // 0x8085A9C0
    r5 = r5 + 0; // 0x8085A9C4
    /* crclr cr1eq */ // 0x8085A9C8
    FUN_805E3430(r5, r3, r4, r5); // bl 0x805E3430
    r3 = *(0x18 + r29); // lwz @ 0x8085A9D0
    if (==) goto 0x0x8085a9e4;
    r11 = *(0xc + r3); // lwz @ 0x8085A9DC
    /* b 0x8085a9e8 */ // 0x8085A9E0
    /* li r11, 0 */ // 0x8085A9E4
    r0 = *(0x1b8 + r1); // lwz @ 0x8085A9E8
    r3 = r31 + 0x6c; // 0x8085A9EC
    r5 = *(0x6c + r31); // lwz @ 0x8085A9F0
    /* mulli r9, r0, 0xc */ // 0x8085A9F8
    r4 = *(4 + r3); // lwz @ 0x8085A9FC
    r0 = *(8 + r3); // lwz @ 0x8085AA00
    r6 = *(0x2c + r1); // lwz @ 0x8085AA08
    r10 = r8 + r9; // 0x8085AA10
    r9 = *(0x30 + r1); // lwz @ 0x8085AA14
    *(0 + r10) = r6; // stw @ 0x8085AA18
    /* li r6, 1 */ // 0x8085AA1C
    r8 = *(0x34 + r1); // lwz @ 0x8085AA20
    *(4 + r10) = r9; // stw @ 0x8085AA24
    *(8 + r10) = r8; // stw @ 0x8085AA28
    r8 = *(0x1b8 + r1); // lwz @ 0x8085AA2C
    *(0x20 + r1) = r5; // stw @ 0x8085AA30
    /* slwi r5, r8, 2 */ // 0x8085AA34
    /* stwx r11, r7, r5 */ // 0x8085AA38
    r5 = *(0x1b8 + r1); // lwz @ 0x8085AA3C
    *(0x24 + r1) = r4; // stw @ 0x8085AA40
    /* slwi r4, r5, 2 */ // 0x8085AA44
    /* stwx r6, r3, r4 */ // 0x8085AA48
    r3 = *(0x1b8 + r1); // lwz @ 0x8085AA4C
    *(0x28 + r1) = r0; // stw @ 0x8085AA50
    r0 = r3 + 1; // 0x8085AA54
    *(0x1b8 + r1) = r0; // stw @ 0x8085AA58
    r0 = *(0x2d8 + r30); // lwz @ 0x8085AA5C
    r3 = *(0x10 + r30); // lwz @ 0x8085AA60
    /* mulli r0, r0, 0x60 */ // 0x8085AA64
    r3 = *(0x104 + r3); // lwz @ 0x8085AA68
    r29 = r3 + r0; // 0x8085AA6C
    r0 = *(0x18 + r29); // lwz @ 0x8085AA70
    if (!=) goto 0x0x8085aa98;
    /* lis r3, 0 */ // 0x8085AA7C
    /* lis r5, 0 */ // 0x8085AA80
    r3 = r3 + 0; // 0x8085AA84
    /* li r4, 0x38 */ // 0x8085AA88
    r5 = r5 + 0; // 0x8085AA8C
    /* crclr cr1eq */ // 0x8085AA90
    FUN_805E3430(r5, r3, r4, r5); // bl 0x805E3430
    r3 = *(0x18 + r29); // lwz @ 0x8085AA98
    if (==) goto 0x0x8085aaac;
    r10 = *(0xc + r3); // lwz @ 0x8085AAA4
    /* b 0x8085aab0 */ // 0x8085AAA8
    /* li r10, 0 */ // 0x8085AAAC
    r0 = *(0x1b8 + r1); // lwz @ 0x8085AAB0
    r7 = *(0x20 + r1); // lwz @ 0x8085AAB8
    /* mulli r9, r0, 0xc */ // 0x8085AAC0
    r6 = *(0x24 + r1); // lwz @ 0x8085AAC4
    r0 = *(0x28 + r1); // lwz @ 0x8085AAC8
    /* li r4, 1 */ // 0x8085AAD0
    /* stwux r7, r8, r9 */ // 0x8085AAD4
    *(4 + r8) = r6; // stw @ 0x8085AAD8
    *(8 + r8) = r0; // stw @ 0x8085AADC
    r0 = *(0x1b8 + r1); // lwz @ 0x8085AAE0
    /* slwi r0, r0, 2 */ // 0x8085AAE4
    /* stwx r10, r5, r0 */ // 0x8085AAE8
    r0 = *(0x1b8 + r1); // lwz @ 0x8085AAEC
    /* slwi r0, r0, 2 */ // 0x8085AAF0
    /* stwx r4, r3, r0 */ // 0x8085AAF4
    r3 = *(0x1b8 + r1); // lwz @ 0x8085AAF8
    r0 = r3 + 1; // 0x8085AAFC
    *(0x1b8 + r1) = r0; // stw @ 0x8085AB00
    r3 = *(0x10 + r30); // lwz @ 0x8085AB04
    r4 = r31 + 0x78; // 0x8085AB08
    r6 = *(0x78 + r31); // lwz @ 0x8085AB0C
    r29 = *(0x104 + r3); // lwz @ 0x8085AB10
    r5 = *(4 + r4); // lwz @ 0x8085AB14
    r0 = *(0x2b8 + r29); // lwz @ 0x8085AB18
    r3 = *(8 + r4); // lwz @ 0x8085AB1C
    *(0x14 + r1) = r6; // stw @ 0x8085AB24
    *(0x18 + r1) = r5; // stw @ 0x8085AB28
    *(0x1c + r1) = r3; // stw @ 0x8085AB2C
    if (!=) goto 0x0x8085ab50;
    /* lis r3, 0 */ // 0x8085AB34
    /* lis r5, 0 */ // 0x8085AB38
    r3 = r3 + 0; // 0x8085AB3C
    /* li r4, 0x38 */ // 0x8085AB40
    r5 = r5 + 0; // 0x8085AB44
    /* crclr cr1eq */ // 0x8085AB48
    FUN_805E3430(r5, r3, r4, r5); // bl 0x805E3430
    r3 = *(0x2b8 + r29); // lwz @ 0x8085AB50
    if (==) goto 0x0x8085ab64;
    r10 = *(0xc + r3); // lwz @ 0x8085AB5C
    /* b 0x8085ab68 */ // 0x8085AB60
    /* li r10, 0 */ // 0x8085AB64
    r0 = *(0x1b8 + r1); // lwz @ 0x8085AB68
    r7 = *(0x14 + r1); // lwz @ 0x8085AB70
    /* mulli r9, r0, 0xc */ // 0x8085AB78
    r6 = *(0x18 + r1); // lwz @ 0x8085AB7C
    r0 = *(0x1c + r1); // lwz @ 0x8085AB80
    /* li r4, 2 */ // 0x8085AB88
    /* stwux r7, r8, r9 */ // 0x8085AB8C
    *(4 + r8) = r6; // stw @ 0x8085AB90
    *(8 + r8) = r0; // stw @ 0x8085AB94
    r0 = *(0x1b8 + r1); // lwz @ 0x8085AB98
    /* slwi r0, r0, 2 */ // 0x8085AB9C
    /* stwx r10, r5, r0 */ // 0x8085ABA0
    r0 = *(0x1b8 + r1); // lwz @ 0x8085ABA4
    /* slwi r0, r0, 2 */ // 0x8085ABA8
    /* stwx r4, r3, r0 */ // 0x8085ABAC
    r3 = *(0x1b8 + r1); // lwz @ 0x8085ABB0
    r0 = r3 + 1; // 0x8085ABB4
    *(0x1b8 + r1) = r0; // stw @ 0x8085ABB8
    r3 = *(0x10 + r30); // lwz @ 0x8085ABBC
    r0 = *(0x147 + r3); // lbz @ 0x8085ABC0
    if (==) goto 0x0x8085ac80;
    r29 = *(0x104 + r3); // lwz @ 0x8085ABCC
    r3 = r31 + 0x84; // 0x8085ABD0
    r4 = *(4 + r3); // lwz @ 0x8085ABD4
    r0 = *(0x558 + r29); // lwz @ 0x8085ABD8
    r5 = *(0x84 + r31); // lwz @ 0x8085ABDC
    r3 = *(8 + r3); // lwz @ 0x8085ABE0
    *(8 + r1) = r5; // stw @ 0x8085ABE8
    *(0xc + r1) = r4; // stw @ 0x8085ABEC
    *(0x10 + r1) = r3; // stw @ 0x8085ABF0
    if (!=) goto 0x0x8085ac14;
    /* lis r3, 0 */ // 0x8085ABF8
    /* lis r5, 0 */ // 0x8085ABFC
    r3 = r3 + 0; // 0x8085AC00
    /* li r4, 0x38 */ // 0x8085AC04
    r5 = r5 + 0; // 0x8085AC08
    /* crclr cr1eq */ // 0x8085AC0C
    FUN_805E3430(r5, r3, r4, r5); // bl 0x805E3430
    r3 = *(0x558 + r29); // lwz @ 0x8085AC14
    if (==) goto 0x0x8085ac28;
    r10 = *(0xc + r3); // lwz @ 0x8085AC20
    /* b 0x8085ac2c */ // 0x8085AC24
    /* li r10, 0 */ // 0x8085AC28
    r0 = *(0x1b8 + r1); // lwz @ 0x8085AC2C
    r7 = *(8 + r1); // lwz @ 0x8085AC34
    /* mulli r9, r0, 0xc */ // 0x8085AC3C
    r6 = *(0xc + r1); // lwz @ 0x8085AC40
    r0 = *(0x10 + r1); // lwz @ 0x8085AC44
    /* li r4, 2 */ // 0x8085AC4C
    /* stwux r7, r8, r9 */ // 0x8085AC50
    *(4 + r8) = r6; // stw @ 0x8085AC54
    *(8 + r8) = r0; // stw @ 0x8085AC58
    r0 = *(0x1b8 + r1); // lwz @ 0x8085AC5C
    /* slwi r0, r0, 2 */ // 0x8085AC60
    /* stwx r10, r5, r0 */ // 0x8085AC64
    r0 = *(0x1b8 + r1); // lwz @ 0x8085AC68
    /* slwi r0, r0, 2 */ // 0x8085AC6C
    /* stwx r4, r3, r0 */ // 0x8085AC70
    r3 = *(0x1b8 + r1); // lwz @ 0x8085AC74
    r0 = r3 + 1; // 0x8085AC78
    *(0x1b8 + r1) = r0; // stw @ 0x8085AC7C
    r4 = r30 + 0x84; // 0x8085AC84
    r5 = r30 + 0x88; // 0x8085AC88
    r6 = r30 + 0x8c; // 0x8085AC8C
    r7 = r30 + 0x234; // 0x8085AC90
    r8 = r30 + 0x238; // 0x8085AC94
    FUN_8085A160(r4, r5, r6, r7, r8); // bl 0x8085A160
    /* li r0, 0 */ // 0x8085AC9C
    *(0x90 + r30) = r0; // stw @ 0x8085ACA0
    r31 = *(0x52c + r1); // lwz @ 0x8085ACA4
    r30 = *(0x528 + r1); // lwz @ 0x8085ACA8
    r29 = *(0x524 + r1); // lwz @ 0x8085ACAC
    r0 = *(0x534 + r1); // lwz @ 0x8085ACB0
    return;
}