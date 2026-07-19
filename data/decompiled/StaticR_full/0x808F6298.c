/* Function at 0x808F6298, size=1264 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 6 function(s) */

int FUN_808F6298(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r3;
    *(0x24 + r1) = r29; // stw @ 0x808F62B0
    r0 = *(0xb1 + r3); // lbz @ 0x808F62B4
    if (!=) goto 0x0x808f6770;
    /* lis r5, 0 */ // 0x808F62C0
    r0 = *(0x6ec + r3); // lbz @ 0x808F62C4
    r5 = *(0 + r5); // lwz @ 0x808F62C8
    /* slwi r0, r0, 2 */ // 0x808F62CC
    r5 = *(0xc + r5); // lwz @ 0x808F62D0
    /* lwzx r5, r5, r0 */ // 0x808F62D4
    r0 = *(0x38 + r5); // lwz @ 0x808F62D8
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x808F62DC
    if (!=) goto 0x0x808f6770;
    r0 = *(0x6fc + r3); // lbz @ 0x808F62E4
    if (!=) goto 0x0x808f6770;
    r0 = *(0x6fa + r3); // lbz @ 0x808F62F0
    if (==) goto 0x0x808f6770;
    /* lis r5, 0 */ // 0x808F62FC
    /* li r31, -1 */ // 0x808F6300
    r5 = *(0 + r5); // lwz @ 0x808F6304
    r0 = *(0xb68 + r5); // lwz @ 0x808F6308
    if (==) goto 0x0x808f631c;
    if (!=) goto 0x0x808f6658;
    /* li r6, 0x36a */ // 0x808F6320
    /* li r7, 0x36b */ // 0x808F6324
    if (!=) goto 0x0x808f6334;
    /* li r6, 0x30d */ // 0x808F632C
    /* li r7, 0x30e */ // 0x808F6330
    r31 = r6;
    if (!=) goto 0x0x808f6344;
    r31 = r7;
    if (!=) goto 0x0x808f64d4;
    r4 = *(0x80 + r3); // lwz @ 0x808F634C
    /* li r5, 0 */ // 0x808F6350
    if (==) goto 0x0x808f637c;
    if (==) goto 0x0x808f6368;
    r0 = *(0x90 + r4); // lwz @ 0x808F6360
    /* b 0x808f636c */ // 0x808F6364
    /* li r0, -1 */ // 0x808F6368
    if (!=) goto 0x0x808f637c;
    r5 = r3 + 0x80; // 0x808F6374
    /* b 0x808f63fc */ // 0x808F6378
    r4 = *(0x84 + r3); // lwz @ 0x808F637C
    if (==) goto 0x0x808f63a8;
    if (==) goto 0x0x808f6394;
    r0 = *(0x90 + r4); // lwz @ 0x808F638C
    /* b 0x808f6398 */ // 0x808F6390
    /* li r0, -1 */ // 0x808F6394
    if (!=) goto 0x0x808f63a8;
    r5 = r3 + 0x84; // 0x808F63A0
    /* b 0x808f63fc */ // 0x808F63A4
    r4 = *(0x88 + r3); // lwz @ 0x808F63A8
    if (==) goto 0x0x808f63d4;
    if (==) goto 0x0x808f63c0;
    r0 = *(0x90 + r4); // lwz @ 0x808F63B8
    /* b 0x808f63c4 */ // 0x808F63BC
    /* li r0, -1 */ // 0x808F63C0
    if (!=) goto 0x0x808f63d4;
    r5 = r3 + 0x88; // 0x808F63CC
    /* b 0x808f63fc */ // 0x808F63D0
    r4 = *(0x8c + r3); // lwz @ 0x808F63D4
    if (==) goto 0x0x808f63fc;
    if (==) goto 0x0x808f63ec;
    r0 = *(0x90 + r4); // lwz @ 0x808F63E4
    /* b 0x808f63f0 */ // 0x808F63E8
    /* li r0, -1 */ // 0x808F63EC
    if (!=) goto 0x0x808f63fc;
    r5 = r3 + 0x8c; // 0x808F63F8
    if (!=) goto 0x0x808f64b4;
    r4 = *(0x80 + r3); // lwz @ 0x808F6404
    /* li r5, 0 */ // 0x808F6408
    if (==) goto 0x0x808f6434;
    if (==) goto 0x0x808f6420;
    r0 = *(0x90 + r4); // lwz @ 0x808F6418
    /* b 0x808f6424 */ // 0x808F641C
    /* li r0, -1 */ // 0x808F6420
    if (!=) goto 0x0x808f6434;
    r5 = r3 + 0x80; // 0x808F642C
    /* b 0x808f64b4 */ // 0x808F6430
    r4 = *(0x84 + r3); // lwz @ 0x808F6434
    if (==) goto 0x0x808f6460;
    if (==) goto 0x0x808f644c;
    r0 = *(0x90 + r4); // lwz @ 0x808F6444
    /* b 0x808f6450 */ // 0x808F6448
    /* li r0, -1 */ // 0x808F644C
    if (!=) goto 0x0x808f6460;
    r5 = r3 + 0x84; // 0x808F6458
    /* b 0x808f64b4 */ // 0x808F645C
    r4 = *(0x88 + r3); // lwz @ 0x808F6460
    if (==) goto 0x0x808f648c;
    if (==) goto 0x0x808f6478;
    r0 = *(0x90 + r4); // lwz @ 0x808F6470
    /* b 0x808f647c */ // 0x808F6474
    /* li r0, -1 */ // 0x808F6478
    if (!=) goto 0x0x808f648c;
    r5 = r3 + 0x88; // 0x808F6484
    /* b 0x808f64b4 */ // 0x808F6488
    r4 = *(0x8c + r3); // lwz @ 0x808F648C
    if (==) goto 0x0x808f64b4;
    if (==) goto 0x0x808f64a4;
    r0 = *(0x90 + r4); // lwz @ 0x808F649C
    /* b 0x808f64a8 */ // 0x808F64A0
    /* li r0, -1 */ // 0x808F64A4
    if (!=) goto 0x0x808f64b4;
    r5 = r3 + 0x8c; // 0x808F64B0
    if (==) goto 0x0x808f6658;
    r3 = *(0 + r5); // lwz @ 0x808F64BC
    if (==) goto 0x0x808f6658;
    /* li r4, 0x1e */ // 0x808F64C8
    FUN_805E3430(r4); // bl 0x805E3430
    /* b 0x808f6658 */ // 0x808F64D0
    r5 = *(0x80 + r3); // lwz @ 0x808F64D4
    /* li r4, 0 */ // 0x808F64D8
    if (==) goto 0x0x808f6504;
    if (==) goto 0x0x808f64f0;
    r0 = *(0x90 + r5); // lwz @ 0x808F64E8
    /* b 0x808f64f4 */ // 0x808F64EC
    /* li r0, -1 */ // 0x808F64F0
    if (!=) goto 0x0x808f6504;
    r4 = r3 + 0x80; // 0x808F64FC
    /* b 0x808f6584 */ // 0x808F6500
    r5 = *(0x84 + r3); // lwz @ 0x808F6504
    if (==) goto 0x0x808f6530;
    if (==) goto 0x0x808f651c;
    r0 = *(0x90 + r5); // lwz @ 0x808F6514
    /* b 0x808f6520 */ // 0x808F6518
    /* li r0, -1 */ // 0x808F651C
    if (!=) goto 0x0x808f6530;
    r4 = r3 + 0x84; // 0x808F6528
    /* b 0x808f6584 */ // 0x808F652C
    r5 = *(0x88 + r3); // lwz @ 0x808F6530
    if (==) goto 0x0x808f655c;
    if (==) goto 0x0x808f6548;
    r0 = *(0x90 + r5); // lwz @ 0x808F6540
    /* b 0x808f654c */ // 0x808F6544
    /* li r0, -1 */ // 0x808F6548
    if (!=) goto 0x0x808f655c;
    r4 = r3 + 0x88; // 0x808F6554
    /* b 0x808f6584 */ // 0x808F6558
    r5 = *(0x8c + r3); // lwz @ 0x808F655C
    if (==) goto 0x0x808f6584;
    if (==) goto 0x0x808f6574;
    r0 = *(0x90 + r5); // lwz @ 0x808F656C
    /* b 0x808f6578 */ // 0x808F6570
    /* li r0, -1 */ // 0x808F6574
    if (!=) goto 0x0x808f6584;
    r4 = r3 + 0x8c; // 0x808F6580
    if (!=) goto 0x0x808f6770;
    r5 = *(0x80 + r3); // lwz @ 0x808F658C
    /* li r4, 0 */ // 0x808F6590
    if (==) goto 0x0x808f65bc;
    if (==) goto 0x0x808f65a8;
    r0 = *(0x90 + r5); // lwz @ 0x808F65A0
    /* b 0x808f65ac */ // 0x808F65A4
    /* li r0, -1 */ // 0x808F65A8
    if (!=) goto 0x0x808f65bc;
    r4 = r3 + 0x80; // 0x808F65B4
    /* b 0x808f663c */ // 0x808F65B8
    r5 = *(0x84 + r3); // lwz @ 0x808F65BC
    if (==) goto 0x0x808f65e8;
    if (==) goto 0x0x808f65d4;
    r0 = *(0x90 + r5); // lwz @ 0x808F65CC
    /* b 0x808f65d8 */ // 0x808F65D0
    /* li r0, -1 */ // 0x808F65D4
    if (!=) goto 0x0x808f65e8;
    r4 = r3 + 0x84; // 0x808F65E0
    /* b 0x808f663c */ // 0x808F65E4
    r5 = *(0x88 + r3); // lwz @ 0x808F65E8
    if (==) goto 0x0x808f6614;
    if (==) goto 0x0x808f6600;
    r0 = *(0x90 + r5); // lwz @ 0x808F65F8
    /* b 0x808f6604 */ // 0x808F65FC
    /* li r0, -1 */ // 0x808F6600
    if (!=) goto 0x0x808f6614;
    r4 = r3 + 0x88; // 0x808F660C
    /* b 0x808f663c */ // 0x808F6610
    r5 = *(0x8c + r3); // lwz @ 0x808F6614
    if (==) goto 0x0x808f663c;
    if (==) goto 0x0x808f662c;
    r0 = *(0x90 + r5); // lwz @ 0x808F6624
    /* b 0x808f6630 */ // 0x808F6628
    /* li r0, -1 */ // 0x808F662C
    if (!=) goto 0x0x808f663c;
    r4 = r3 + 0x8c; // 0x808F6638
    if (==) goto 0x0x808f6658;
    r3 = *(0 + r4); // lwz @ 0x808F6644
    if (==) goto 0x0x808f6658;
    /* li r4, 0x1e */ // 0x808F6650
    FUN_805E3430(r4); // bl 0x805E3430
    /* addis r0, r31, 1 */ // 0x808F6658
    if (==) goto 0x0x808f6770;
    r3 = r30 + 0x94; // 0x808F6664
    FUN_8078FFE0(r3); // bl 0x8078FFE0
    if (!=) goto 0x0x808f6770;
    r3 = *(0x80 + r30); // lwz @ 0x808F6674
    if (!=) goto 0x0x808f6688;
    r29 = r30 + 0x80; // 0x808F6680
    /* b 0x808f6754 */ // 0x808F6684
    if (==) goto 0x0x808f6694;
    r0 = *(0x90 + r3); // lwz @ 0x808F668C
    /* b 0x808f6698 */ // 0x808F6690
    /* li r0, -1 */ // 0x808F6694
    *(8 + r1) = r0; // stw @ 0x808F6698
    r3 = *(0x84 + r30); // lwz @ 0x808F669C
    if (!=) goto 0x0x808f66b0;
    r29 = r30 + 0x84; // 0x808F66A8
    /* b 0x808f6754 */ // 0x808F66AC
    if (==) goto 0x0x808f66bc;
    r0 = *(0x90 + r3); // lwz @ 0x808F66B4
    /* b 0x808f66c0 */ // 0x808F66B8
    /* li r0, -1 */ // 0x808F66BC
    *(0xc + r1) = r0; // stw @ 0x808F66C0
    r3 = *(0x88 + r30); // lwz @ 0x808F66C4
    if (!=) goto 0x0x808f66d8;
    r29 = r30 + 0x88; // 0x808F66D0
    /* b 0x808f6754 */ // 0x808F66D4
    if (==) goto 0x0x808f66e4;
    r0 = *(0x90 + r3); // lwz @ 0x808F66DC
    /* b 0x808f66e8 */ // 0x808F66E0
    /* li r0, -1 */ // 0x808F66E4
    *(0x10 + r1) = r0; // stw @ 0x808F66E8
    r3 = *(0x8c + r30); // lwz @ 0x808F66EC
    if (!=) goto 0x0x808f6700;
    r29 = r30 + 0x8c; // 0x808F66F8
    /* b 0x808f6754 */ // 0x808F66FC
    if (==) goto 0x0x808f670c;
    r0 = *(0x90 + r3); // lwz @ 0x808F6704
    /* b 0x808f6710 */ // 0x808F6708
    /* li r0, -1 */ // 0x808F670C
    *(0x14 + r1) = r0; // stw @ 0x808F6710
    r4 = r31;
    r3 = r30 + 0x94; // 0x808F6718
    /* li r6, 4 */ // 0x808F6720
    FUN_8078FF44(r4, r3, r5, r6); // bl 0x8078FF44
    if (>=) goto 0x0x808f6738;
    /* li r29, 0 */ // 0x808F6730
    /* b 0x808f6754 */ // 0x808F6734
    /* slwi r0, r3, 2 */ // 0x808F6738
    r29 = r30 + r0; // 0x808F673C
    r3 = *(0x80 + r29); // lwzu @ 0x808F6740
    if (==) goto 0x0x808f6754;
    /* li r4, 0 */ // 0x808F674C
    FUN_805E3430(r4); // bl 0x805E3430
    if (==) goto 0x0x808f6770;
    r3 = r30;
    r4 = r29;
    r5 = r31;
    /* li r6, 0 */ // 0x808F6768
    FUN_805E3430(r3, r4, r5, r6); // bl 0x805E3430
    r0 = *(0x34 + r1); // lwz @ 0x808F6770
    r31 = *(0x2c + r1); // lwz @ 0x808F6774
    r30 = *(0x28 + r1); // lwz @ 0x808F6778
    r29 = *(0x24 + r1); // lwz @ 0x808F677C
}