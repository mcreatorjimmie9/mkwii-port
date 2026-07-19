/* Function at 0x805D5334, size=2020 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r27 */
/* Calls: 124 function(s) */

int FUN_805D5334(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -64(r1) */
    /* saved r27 */
    /* stmw r27, 0x2c(r1) */ // 0x805D5340
    r31 = r5;
    r29 = r3;
    r30 = r4;
    r3 = r31;
    FUN_805D5B18(r3); // bl 0x805D5B18
    if (==) goto 0x0x805d5b04;
    r3 = r31;
    FUN_805D5B40(r3, r3); // bl 0x805D5B40
    r4 = r3;
    r3 = *(0x14 + r29); // lwz @ 0x805D536C
    r5 = r30;
    FUN_805D5B24(r3, r4, r5); // bl 0x805D5B24
    r3 = r31;
    FUN_805D5B98(r4, r5, r3); // bl 0x805D5B98
    r4 = r3;
    r3 = *(0x14 + r29); // lwz @ 0x805D5384
    r5 = r30;
    FUN_805D5B44(r3, r4, r5); // bl 0x805D5B44
    r3 = r31;
    FUN_805D5C34(r4, r5, r3); // bl 0x805D5C34
    r4 = r3;
    r3 = *(0x14 + r29); // lwz @ 0x805D539C
    r5 = r30;
    FUN_805D5BA0(r3, r4, r5); // bl 0x805D5BA0
    r3 = r31;
    FUN_805D5C60(r4, r5, r3); // bl 0x805D5C60
    r4 = r3;
    r3 = *(0x14 + r29); // lwz @ 0x805D53B4
    r5 = r30;
    FUN_805D5C40(r3, r4, r5); // bl 0x805D5C40
    /* li r28, 0 */ // 0x805D53C0
    /* li r27, 0 */ // 0x805D53C4
    r3 = r31;
    r4 = r28;
    r5 = r27;
    FUN_805D5C8C(r3, r4, r5); // bl 0x805D5C8C
    r4 = r3;
    r3 = *(0x14 + r29); // lwz @ 0x805D53DC
    r5 = r30;
    r6 = r28;
    r7 = r27;
    FUN_805D5C68(r4, r5, r6, r7); // bl 0x805D5C68
    r27 = r27 + 1; // 0x805D53F0
    if (<) goto 0x0x805d53c8;
    r28 = r28 + 1; // 0x805D53FC
    if (<) goto 0x0x805d53c4;
    /* li r28, 0 */ // 0x805D5408
    /* li r27, 0 */ // 0x805D540C
    r3 = r31;
    r4 = r28;
    /* clrlwi r5, r27, 0x18 */ // 0x805D5418
    FUN_805D5DD0(r3, r4); // bl 0x805D5DD0
    r4 = r3;
    r3 = *(0x14 + r29); // lwz @ 0x805D5424
    r5 = r30;
    r6 = r28;
    /* clrlwi r7, r27, 0x18 */ // 0x805D5430
    FUN_805D5CA4(r4, r5, r6); // bl 0x805D5CA4
    r27 = r27 + 1; // 0x805D5438
    if (<) goto 0x0x805d5410;
    r28 = r28 + 1; // 0x805D5444
    if (<) goto 0x0x805d540c;
    /* li r27, 0 */ // 0x805D5450
    r3 = r31;
    r4 = r27;
    FUN_805D5ED8(r3, r4); // bl 0x805D5ED8
    r4 = r3;
    r3 = *(0x14 + r29); // lwz @ 0x805D5464
    r5 = r30;
    r6 = r27;
    FUN_805D5DE8(r4, r5, r6); // bl 0x805D5DE8
    r27 = r27 + 1; // 0x805D5474
    if (<) goto 0x0x805d5454;
    r3 = r31;
    FUN_805D5F1C(r3); // bl 0x805D5F1C
    r4 = r3;
    r3 = *(0x14 + r29); // lwz @ 0x805D548C
    r5 = r30;
    FUN_805D5EE8(r3, r4, r5); // bl 0x805D5EE8
    r3 = r31;
    FUN_805D5F40(r4, r5, r3); // bl 0x805D5F40
    r4 = r3;
    r3 = *(0x14 + r29); // lwz @ 0x805D54A4
    r5 = r30;
    FUN_805D5F28(r3, r4, r5); // bl 0x805D5F28
    r3 = r31;
    FUN_805D5F64(r4, r5, r3); // bl 0x805D5F64
    r4 = r3;
    r3 = *(0x14 + r29); // lwz @ 0x805D54BC
    r5 = r30;
    FUN_805D5F4C(r3, r4, r5); // bl 0x805D5F4C
    r3 = r31;
    FUN_805D5F90(r4, r5, r3); // bl 0x805D5F90
    r4 = r3;
    r3 = *(0x14 + r29); // lwz @ 0x805D54D4
    r5 = r30;
    FUN_805D5F70(r3, r4, r5); // bl 0x805D5F70
    r3 = r31;
    FUN_805D5FBC(r4, r5, r3); // bl 0x805D5FBC
    r4 = r3;
    r3 = *(0x14 + r29); // lwz @ 0x805D54EC
    r5 = r30;
    FUN_805D5F9C(r3, r4, r5); // bl 0x805D5F9C
    r3 = r31;
    FUN_805D5FE4(r4, r5, r3); // bl 0x805D5FE4
    r4 = r3;
    r3 = *(0x14 + r29); // lwz @ 0x805D5504
    r5 = r30;
    FUN_805D5FC8(r3, r4, r5); // bl 0x805D5FC8
    r3 = r31;
    FUN_805D600C(r4, r5, r3); // bl 0x805D600C
    r4 = r3;
    r3 = *(0x14 + r29); // lwz @ 0x805D551C
    r5 = r30;
    FUN_805D5FF0(r3, r4, r5); // bl 0x805D5FF0
    r3 = r31;
    FUN_805D6030(r4, r5, r3); // bl 0x805D6030
    r4 = r3;
    r3 = *(0x14 + r29); // lwz @ 0x805D5534
    r5 = r30;
    FUN_805D6018(r3, r4, r5); // bl 0x805D6018
    r3 = r31;
    FUN_805D6054(r4, r5, r3); // bl 0x805D6054
    r4 = r3;
    r3 = *(0x14 + r29); // lwz @ 0x805D554C
    r5 = r30;
    FUN_805D603C(r3, r4, r5); // bl 0x805D603C
    r3 = r31;
    FUN_805D6078(r4, r5, r3); // bl 0x805D6078
    r4 = r3;
    r3 = *(0x14 + r29); // lwz @ 0x805D5564
    r5 = r30;
    FUN_805D6060(r3, r4, r5); // bl 0x805D6060
    r3 = r31;
    FUN_805D609C(r4, r5, r3); // bl 0x805D609C
    r4 = r3;
    r3 = *(0x14 + r29); // lwz @ 0x805D557C
    r5 = r30;
    FUN_805D6084(r3, r4, r5); // bl 0x805D6084
    r3 = r31;
    FUN_805D60C0(r4, r5, r3); // bl 0x805D60C0
    r4 = r3;
    r3 = *(0x14 + r29); // lwz @ 0x805D5594
    r5 = r30;
    FUN_805D60A8(r3, r4, r5); // bl 0x805D60A8
    r3 = r31;
    FUN_805D60E4(r4, r5, r3); // bl 0x805D60E4
    r4 = r3;
    r3 = *(0x14 + r29); // lwz @ 0x805D55AC
    r5 = r30;
    FUN_805D60CC(r3, r4, r5); // bl 0x805D60CC
    r3 = r31;
    FUN_805D6108(r4, r5, r3); // bl 0x805D6108
    r4 = r3;
    r3 = *(0x14 + r29); // lwz @ 0x805D55C4
    r5 = r30;
    FUN_805D60F0(r3, r4, r5); // bl 0x805D60F0
    r3 = r31;
    FUN_805D612C(r4, r5, r3); // bl 0x805D612C
    r4 = r3;
    r3 = *(0x14 + r29); // lwz @ 0x805D55DC
    r5 = r30;
    FUN_805D6114(r3, r4, r5); // bl 0x805D6114
    r3 = r31;
    FUN_805D6150(r4, r5, r3); // bl 0x805D6150
    r4 = r3;
    r3 = *(0x14 + r29); // lwz @ 0x805D55F4
    r5 = r30;
    FUN_805D6138(r3, r4, r5); // bl 0x805D6138
    r3 = r31;
    FUN_805D6174(r4, r5, r3); // bl 0x805D6174
    r4 = r3;
    r3 = *(0x14 + r29); // lwz @ 0x805D560C
    r5 = r30;
    FUN_805D615C(r3, r4, r5); // bl 0x805D615C
    r3 = r31;
    FUN_805D6198(r4, r5, r3); // bl 0x805D6198
    r4 = r3;
    r3 = *(0x14 + r29); // lwz @ 0x805D5624
    r5 = r30;
    FUN_805D6180(r3, r4, r5); // bl 0x805D6180
    r3 = r31;
    FUN_805D61D0(r4, r5, r3); // bl 0x805D61D0
    r4 = r3;
    r3 = *(0x14 + r29); // lwz @ 0x805D563C
    r5 = r30;
    FUN_805D61B8(r3, r4, r5); // bl 0x805D61B8
    r3 = r31;
    FUN_805D6208(r4, r5, r3); // bl 0x805D6208
    r4 = r3;
    r3 = *(0x14 + r29); // lwz @ 0x805D5654
    r5 = r30;
    FUN_805D61F0(r3, r4, r5); // bl 0x805D61F0
    r3 = r31;
    FUN_805D6240(r4, r5, r3); // bl 0x805D6240
    r4 = r3;
    r3 = *(0x14 + r29); // lwz @ 0x805D566C
    r5 = r30;
    FUN_805D6228(r3, r4, r5); // bl 0x805D6228
    r3 = r31;
    FUN_805D6278(r4, r5, r3); // bl 0x805D6278
    r3 = *(0x14 + r29); // lwz @ 0x805D5680
    r4 = r30;
    FUN_805D6260(r3, r4); // bl 0x805D6260
    r3 = r31;
    FUN_805D62B0(r4, r3); // bl 0x805D62B0
    r4 = r3;
    r3 = *(0x14 + r29); // lwz @ 0x805D5698
    r5 = r30;
    FUN_805D6298(r3, r4, r5); // bl 0x805D6298
    r3 = r31;
    FUN_805D62E8(r4, r5, r3); // bl 0x805D62E8
    r4 = r3;
    r3 = *(0x14 + r29); // lwz @ 0x805D56B0
    r5 = r30;
    FUN_805D62D0(r3, r4, r5); // bl 0x805D62D0
    r3 = r31;
    FUN_805D6320(r4, r5, r3); // bl 0x805D6320
    r4 = r3;
    r3 = *(0x14 + r29); // lwz @ 0x805D56C8
    r5 = r30;
    FUN_805D6308(r3, r4, r5); // bl 0x805D6308
    r3 = r31;
    FUN_805D6358(r4, r5, r3); // bl 0x805D6358
    r4 = r3;
    r3 = *(0x14 + r29); // lwz @ 0x805D56E0
    r5 = r30;
    FUN_805D6340(r3, r4, r5); // bl 0x805D6340
    r3 = r31;
    FUN_805D6390(r4, r5, r3); // bl 0x805D6390
    r4 = r3;
    r3 = *(0x14 + r29); // lwz @ 0x805D56F8
    r5 = r30;
    FUN_805D6378(r3, r4, r5); // bl 0x805D6378
    r3 = r31;
    FUN_805D63C8(r4, r5, r3); // bl 0x805D63C8
    r4 = r3;
    r3 = *(0x14 + r29); // lwz @ 0x805D5710
    r5 = r30;
    FUN_805D63B0(r3, r4, r5); // bl 0x805D63B0
    r3 = r31;
    FUN_805D6400(r4, r5, r3); // bl 0x805D6400
    r3 = *(0x14 + r29); // lwz @ 0x805D5724
    r4 = r30;
    FUN_805D63E8(r3, r4); // bl 0x805D63E8
    r3 = r31;
    FUN_805D6438(r4, r3); // bl 0x805D6438
    r3 = *(0x14 + r29); // lwz @ 0x805D5738
    r4 = r30;
    FUN_805D6420(r3, r4); // bl 0x805D6420
    r3 = r31;
    FUN_805D6470(r4, r3); // bl 0x805D6470
    r0 = r3;
    r3 = *(0x14 + r29); // lwz @ 0x805D5750
    r5 = r30;
    /* clrlwi r4, r0, 0x10 */ // 0x805D5758
    FUN_805D6458(r5); // bl 0x805D6458
    /* li r27, 0 */ // 0x805D5760
    r3 = r31;
    /* clrlwi r4, r27, 0x10 */ // 0x805D5768
    FUN_805D64B4(r3); // bl 0x805D64B4
    r0 = r3;
    r3 = *(0x14 + r29); // lwz @ 0x805D5774
    r6 = r30;
    /* clrlwi r4, r27, 0x10 */ // 0x805D577C
    /* clrlwi r5, r0, 0x10 */ // 0x805D5780
    FUN_805D6494(r6); // bl 0x805D6494
    r27 = r27 + 1; // 0x805D5788
    if (<) goto 0x0x805d5764;
    /* li r27, 0 */ // 0x805D5794
    r3 = r31;
    /* clrlwi r4, r27, 0x10 */ // 0x805D579C
    FUN_805D6500(r3); // bl 0x805D6500
    r0 = r3;
    r3 = *(0x14 + r29); // lwz @ 0x805D57A8
    r6 = r30;
    /* clrlwi r4, r27, 0x10 */ // 0x805D57B0
    /* clrlwi r5, r0, 0x10 */ // 0x805D57B4
    FUN_805D64E0(r6); // bl 0x805D64E0
    r27 = r27 + 1; // 0x805D57BC
    if (<) goto 0x0x805d5798;
    /* li r27, 0 */ // 0x805D57C8
    r3 = r31;
    /* clrlwi r4, r27, 0x10 */ // 0x805D57D0
    FUN_805D654C(r3); // bl 0x805D654C
    r0 = r3;
    r3 = *(0x14 + r29); // lwz @ 0x805D57DC
    r6 = r30;
    /* clrlwi r4, r27, 0x10 */ // 0x805D57E4
    /* clrlwi r5, r0, 0x10 */ // 0x805D57E8
    FUN_805D652C(r6); // bl 0x805D652C
    r27 = r27 + 1; // 0x805D57F0
    if (<) goto 0x0x805d57cc;
    /* li r27, 0 */ // 0x805D57FC
    /* clrlwi r4, r27, 0x10 */ // 0x805D5800
    r3 = r31;
    r4 = r4 + 0x20; // 0x805D5808
    FUN_805D654C(r3, r4); // bl 0x805D654C
    r0 = r3;
    r3 = *(0x14 + r29); // lwz @ 0x805D5814
    r6 = r30;
    /* clrlwi r4, r27, 0x10 */ // 0x805D581C
    /* clrlwi r5, r0, 0x10 */ // 0x805D5820
    FUN_805D6578(r6); // bl 0x805D6578
    r27 = r27 + 1; // 0x805D5828
    if (<) goto 0x0x805d5800;
    /* li r27, 0 */ // 0x805D5834
    /* li r28, 0 */ // 0x805D5838
    r3 = r31;
    /* clrlwi r4, r27, 0x18 */ // 0x805D5840
    /* clrlwi r5, r28, 0x18 */ // 0x805D5844
    FUN_805D65C8(r3); // bl 0x805D65C8
    r5 = r3;
    r3 = *(0x14 + r29); // lwz @ 0x805D5850
    r4 = r30;
    /* clrlwi r6, r27, 0x18 */ // 0x805D5858
    /* clrlwi r7, r28, 0x18 */ // 0x805D585C
    FUN_805D6598(r5, r4); // bl 0x805D6598
    r28 = r28 + 1; // 0x805D5864
    if (<) goto 0x0x805d583c;
    r27 = r27 + 1; // 0x805D5870
    if (<) goto 0x0x805d5838;
    /* li r27, 0 */ // 0x805D587C
    r3 = r31;
    r4 = r27;
    FUN_805D6608(r3, r4); // bl 0x805D6608
    r4 = r3;
    r3 = *(0x14 + r29); // lwz @ 0x805D5890
    r5 = r30;
    r6 = r27;
    FUN_805D65E4(r4, r5, r6); // bl 0x805D65E4
    r27 = r27 + 1; // 0x805D58A0
    if (<) goto 0x0x805d5880;
    r3 = r31;
    FUN_805D663C(r3); // bl 0x805D663C
    r4 = r3;
    r3 = *(0x14 + r29); // lwz @ 0x805D58B8
    r5 = r30;
    FUN_805D661C(r3, r4, r5); // bl 0x805D661C
    /* li r27, 0 */ // 0x805D58C4
    if (==) goto 0x0x805d58d8;
    if (!=) goto 0x0x805d58f8;
    r3 = r31;
    r4 = r27;
    FUN_805D6670(r3, r4); // bl 0x805D6670
    r5 = r3;
    r3 = *(0x14 + r29); // lwz @ 0x805D58E8
    r4 = r27;
    r6 = r30;
    FUN_805D6648(r5, r4, r6); // bl 0x805D6648
    r3 = r31;
    r4 = r27;
    FUN_805D66AC(r4, r6, r3, r4); // bl 0x805D66AC
    r5 = r3;
    r3 = *(0x14 + r29); // lwz @ 0x805D5908
    r4 = r27;
    r6 = r30;
    FUN_805D6684(r5, r4, r6); // bl 0x805D6684
    r3 = r31;
    r4 = r27;
    FUN_805D66E8(r4, r6, r3, r4); // bl 0x805D66E8
    r5 = r3;
    r3 = *(0x14 + r29); // lwz @ 0x805D5928
    r4 = r27;
    r6 = r30;
    FUN_805D66C0(r5, r4, r6); // bl 0x805D66C0
    r3 = r31;
    r4 = r27;
    FUN_805D6724(r4, r6, r3, r4); // bl 0x805D6724
    r5 = r3;
    r3 = *(0x14 + r29); // lwz @ 0x805D5948
    r4 = r27;
    r6 = r30;
    FUN_805D66FC(r5, r4, r6); // bl 0x805D66FC
    r3 = r31;
    r4 = r27;
    FUN_805D6760(r4, r6, r3, r4); // bl 0x805D6760
    r5 = r3;
    r3 = *(0x14 + r29); // lwz @ 0x805D5968
    r4 = r27;
    r6 = r30;
    FUN_805D6738(r5, r4, r6); // bl 0x805D6738
    r3 = r31;
    r4 = r27;
    FUN_805D679C(r4, r6, r3, r4); // bl 0x805D679C
    r5 = r3;
    r3 = *(0x14 + r29); // lwz @ 0x805D5988
    r4 = r27;
    r6 = r30;
    FUN_805D6774(r5, r4, r6); // bl 0x805D6774
    r27 = r27 + 1; // 0x805D5998
    if (<) goto 0x0x805d58c8;
    /* li r27, 0 */ // 0x805D59A4
    r3 = r31;
    /* clrlwi r4, r27, 0x10 */ // 0x805D59AC
    FUN_805D6880(r3); // bl 0x805D6880
    r4 = r3;
    r3 = *(0x14 + r29); // lwz @ 0x805D59B8
    r6 = r30;
    /* clrlwi r5, r27, 0x10 */ // 0x805D59C0
    FUN_805D67B0(r4, r6); // bl 0x805D67B0
    r27 = r27 + 1; // 0x805D59C8
    if (<) goto 0x0x805d59a8;
    /* li r4, 0 */ // 0x805D59D8
    FUN_805D2E24(r3, r4); // bl 0x805D2E24
    /* li r0, 0 */ // 0x805D59E0
    *(0xc + r1) = r0; // stw @ 0x805D59E4
    r3 = r31;
    FUN_805D6894(r3, r4, r5); // bl 0x805D6894
    if (==) goto 0x0x805d5a18;
    r3 = *(0x14 + r29); // lwz @ 0x805D5A00
    r6 = r30;
    r5 = *(0xc + r1); // lwz @ 0x805D5A08
    FUN_805D68D8(r6, r4); // bl 0x805D68D8
    /* b 0x805d5a38 */ // 0x805D5A14
    /* li r4, 0 */ // 0x805D5A1C
    FUN_805D2E74(r4, r3, r4); // bl 0x805D2E74
    r3 = *(0x14 + r29); // lwz @ 0x805D5A24
    r6 = r30;
    r5 = *(0xc + r1); // lwz @ 0x805D5A2C
    FUN_805D68D8(r6, r4); // bl 0x805D68D8
    /* li r4, -1 */ // 0x805D5A3C
    FUN_805ABF60(r4, r3, r4); // bl 0x805ABF60
    r3 = r31;
    FUN_805D6980(r3, r4, r3); // bl 0x805D6980
    r4 = r3;
    FUN_805D6AFC(r3, r4, r3); // bl 0x805D6AFC
    FUN_805D69F8(r4, r3, r3); // bl 0x805D69F8
    r27 = r3;
    FUN_805D69F0(r3, r3); // bl 0x805D69F0
    r28 = r3;
    FUN_805D69E8(r3, r3); // bl 0x805D69E8
    r0 = r3;
    r3 = *(0x14 + r29); // lwz @ 0x805D5A7C
    r7 = r30;
    /* clrlwi r5, r28, 0x18 */ // 0x805D5A84
    /* clrlwi r4, r0, 0x18 */ // 0x805D5A88
    /* clrlwi r6, r27, 0x18 */ // 0x805D5A8C
    FUN_805D698C(r7); // bl 0x805D698C
    /* li r27, 0 */ // 0x805D5A94
    r3 = r31;
    /* clrlwi r4, r27, 0x18 */ // 0x805D5A9C
    FUN_805D6A00(r3); // bl 0x805D6A00
    r0 = r3;
    r3 = *(0x14 + r29); // lwz @ 0x805D5AA8
    r6 = r30;
    /* clrlwi r4, r27, 0x18 */ // 0x805D5AB0
    /* clrlwi r5, r0, 0x18 */ // 0x805D5AB4
    FUN_805D6A10(r6); // bl 0x805D6A10
    r27 = r27 + 1; // 0x805D5ABC
    if (<) goto 0x0x805d5a98;
    r3 = r31;
    FUN_805D6AA4(r3); // bl 0x805D6AA4
    r4 = r3;
    r3 = *(0x14 + r29); // lwz @ 0x805D5AD4
    r5 = r30;
    FUN_805D6A6C(r3, r4, r5); // bl 0x805D6A6C
    r3 = r31;
    FUN_805D6AD0(r4, r5, r3); // bl 0x805D6AD0
    r4 = r3;
    r3 = *(0x14 + r29); // lwz @ 0x805D5AEC
    r5 = r30;
    FUN_805D6AB0(r3, r4, r5); // bl 0x805D6AB0
    r3 = *(0x14 + r29); // lwz @ 0x805D5AF8
    r4 = r30;
    FUN_805D6ADC(r5, r4); // bl 0x805D6ADC
    r0 = *(0x44 + r1); // lwz @ 0x805D5B08
    return;
}