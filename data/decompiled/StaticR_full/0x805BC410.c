/* Function at 0x805BC410, size=812 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r26 */
/* Calls: 11 function(s) */

int FUN_805BC410(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r26 */
    *(0x34 + r1) = r0; // stw @ 0x805BC41C
    /* stmw r26, 0x18(r1) */ // 0x805BC420
    /* lis r26, 0 */ // 0x805BC424
    r27 = r3;
    r28 = r4;
    r26 = r26 + 0; // 0x805BC430
    /* li r31, 0 */ // 0x805BC434
    /* li r30, 0 */ // 0x805BC438
    /* li r29, 1 */ // 0x805BC43C
    if (!=) goto 0x0x805bc450;
    r0 = *(0x14 + r3); // lbz @ 0x805BC444
    if (!=) goto 0x0x805bc458;
    /* li r0, 1 */ // 0x805BC450
    *(0x14 + r3) = r0; // stb @ 0x805BC454
    if (!=) goto 0x0x805bc46c;
    r0 = *(0x15 + r3); // lbz @ 0x805BC460
    if (!=) goto 0x0x805bc474;
    /* li r0, 1 */ // 0x805BC46C
    *(0x15 + r3) = r0; // stb @ 0x805BC470
    r3 = *(0 + r26); // lwz @ 0x805BC474
    FUN_805BB478(r4); // bl 0x805BB478
    if (!=) goto 0x0x805bc4dc;
    r4 = *(8 + r1); // lwz @ 0x805BC488
    r0 = r4 + -1; // 0x805BC48C
    if (<=) goto 0x0x805bc4a4;
    if (==) goto 0x0x805bc4c8;
    /* b 0x805bc4d4 */ // 0x805BC4A0
    r3 = *(0 + r26); // lwz @ 0x805BC4A4
    FUN_805BB680(); // bl 0x805BB680
    if (!=) goto 0x0x805bc4c0;
    /* li r31, 1 */ // 0x805BC4B4
    /* li r30, 0xaf */ // 0x805BC4B8
    /* b 0x805bc4e0 */ // 0x805BC4BC
    /* li r29, 0 */ // 0x805BC4C0
    /* b 0x805bc4e0 */ // 0x805BC4C4
    /* li r31, 1 */ // 0x805BC4C8
    /* li r30, 0xaf */ // 0x805BC4CC
    /* b 0x805bc4e0 */ // 0x805BC4D0
    /* li r3, 8 */ // 0x805BC4D4
    /* b 0x805bc4e0 */ // 0x805BC4D8
    /* li r29, 0 */ // 0x805BC4DC
    if (==) goto 0x0x805bc558;
    r3 = *(4 + r26); // lwz @ 0x805BC4E8
    FUN_805BB478(r4); // bl 0x805BB478
    if (!=) goto 0x0x805bc554;
    r4 = *(8 + r1); // lwz @ 0x805BC4FC
    r0 = r4 + -1; // 0x805BC500
    if (<=) goto 0x0x805bc518;
    if (==) goto 0x0x805bc53c;
    /* b 0x805bc548 */ // 0x805BC514
    r3 = *(4 + r26); // lwz @ 0x805BC518
    FUN_805BB680(); // bl 0x805BB680
    if (!=) goto 0x0x805bc534;
    r31 = r31 + 1; // 0x805BC528
    r30 = r30 + 6; // 0x805BC52C
    /* b 0x805bc558 */ // 0x805BC530
    /* li r29, 0 */ // 0x805BC534
    /* b 0x805bc558 */ // 0x805BC538
    r31 = r31 + 1; // 0x805BC53C
    r30 = r30 + 6; // 0x805BC540
    /* b 0x805bc558 */ // 0x805BC544
    /* li r3, 8 */ // 0x805BC548
    /* li r29, 0 */ // 0x805BC54C
    /* b 0x805bc558 */ // 0x805BC550
    /* li r29, 0 */ // 0x805BC554
    if (==) goto 0x0x805bc5d0;
    r3 = *(8 + r26); // lwz @ 0x805BC560
    FUN_805BB478(r4); // bl 0x805BB478
    if (!=) goto 0x0x805bc5cc;
    r4 = *(8 + r1); // lwz @ 0x805BC574
    r0 = r4 + -1; // 0x805BC578
    if (<=) goto 0x0x805bc590;
    if (==) goto 0x0x805bc5b4;
    /* b 0x805bc5c0 */ // 0x805BC58C
    r3 = *(8 + r26); // lwz @ 0x805BC590
    FUN_805BB680(); // bl 0x805BB680
    if (!=) goto 0x0x805bc5ac;
    r31 = r31 + 1; // 0x805BC5A0
    r30 = r30 + 1; // 0x805BC5A4
    /* b 0x805bc5d0 */ // 0x805BC5A8
    /* li r29, 0 */ // 0x805BC5AC
    /* b 0x805bc5d0 */ // 0x805BC5B0
    r31 = r31 + 1; // 0x805BC5B4
    r30 = r30 + 1; // 0x805BC5B8
    /* b 0x805bc5d0 */ // 0x805BC5BC
    /* li r3, 8 */ // 0x805BC5C0
    /* li r29, 0 */ // 0x805BC5C4
    /* b 0x805bc5d0 */ // 0x805BC5C8
    /* li r29, 0 */ // 0x805BC5CC
    if (==) goto 0x0x805bc648;
    r3 = *(0x10 + r26); // lwz @ 0x805BC5D8
    FUN_805BB478(r4); // bl 0x805BB478
    if (!=) goto 0x0x805bc644;
    r4 = *(8 + r1); // lwz @ 0x805BC5EC
    r0 = r4 + -1; // 0x805BC5F0
    if (<=) goto 0x0x805bc608;
    if (==) goto 0x0x805bc62c;
    /* b 0x805bc638 */ // 0x805BC604
    r3 = *(0x10 + r26); // lwz @ 0x805BC608
    FUN_805BB680(); // bl 0x805BB680
    if (!=) goto 0x0x805bc624;
    r31 = r31 + 1; // 0x805BC618
    r30 = r30 + 2; // 0x805BC61C
    /* b 0x805bc648 */ // 0x805BC620
    /* li r29, 0 */ // 0x805BC624
    /* b 0x805bc648 */ // 0x805BC628
    r31 = r31 + 1; // 0x805BC62C
    r30 = r30 + 2; // 0x805BC630
    /* b 0x805bc648 */ // 0x805BC634
    /* li r3, 8 */ // 0x805BC638
    /* li r29, 0 */ // 0x805BC63C
    /* b 0x805bc648 */ // 0x805BC640
    /* li r29, 0 */ // 0x805BC644
    if (==) goto 0x0x805bc71c;
    if (==) goto 0x0x805bc71c;
    r3 = r30;
    r4 = r31;
    FUN_805BB2B0(r3, r4, r5); // bl 0x805BB2B0
    if (!=) goto 0x0x805bc6c0;
    r0 = *(0xc + r1); // lwz @ 0x805BC670
    if (!=) goto 0x0x805bc688;
    /* li r0, 0 */ // 0x805BC67C
    *(0x18 + r27) = r0; // stw @ 0x805BC680
    /* b 0x805bc6c8 */ // 0x805BC684
    /* li r3, 0 */ // 0x805BC688
    *(0x18 + r27) = r3; // stw @ 0x805BC68C
    r0 = *(0xc + r1); // lwz @ 0x805BC690
    /* andi. r0, r0, 5 */ // 0x805BC694
    if (==) goto 0x0x805bc6a4;
    r0 = r3 | 4; // 0x805BC69C
    *(0x18 + r27) = r0; // stw @ 0x805BC6A0
    r0 = *(0xc + r1); // lwz @ 0x805BC6A4
    /* andi. r0, r0, 0xa */ // 0x805BC6A8
    if (==) goto 0x0x805bc6c8;
    r0 = *(0x18 + r27); // lwz @ 0x805BC6B0
    r0 = r0 | 2; // 0x805BC6B4
    *(0x18 + r27) = r0; // stw @ 0x805BC6B8
    /* b 0x805bc6c8 */ // 0x805BC6BC
    /* li r0, 1 */ // 0x805BC6C0
    *(0x18 + r27) = r0; // stw @ 0x805BC6C4
    r0 = *(0x18 + r27); // lwz @ 0x805BC6C8
    if (!=) goto 0x0x805bc718;
    r3 = r27;
    r4 = r28;
    FUN_805BC2B8(r3, r4); // bl 0x805BC2B8
    if (!=) goto 0x0x805bc71c;
    /* lis r3, 0 */ // 0x805BC6E8
    r3 = *(0 + r3); // lwz @ 0x805BC6EC
    FUN_806FF604(r3); // bl 0x806FF604
    if (!=) goto 0x0x805bc704;
    /* li r3, 0 */ // 0x805BC6FC
    /* b 0x805bc71c */ // 0x805BC700
    /* li r3, 8 */ // 0x805BC708
    if (!=) goto 0x0x805bc71c;
    /* li r3, 6 */ // 0x805BC710
    /* b 0x805bc71c */ // 0x805BC714
    /* li r3, 7 */ // 0x805BC718
    /* li r0, 0 */ // 0x805BC71C
    *(0x14 + r27) = r0; // stb @ 0x805BC720
    *(0x15 + r27) = r0; // stb @ 0x805BC724
    r0 = *(0x34 + r1); // lwz @ 0x805BC72C
    return;
}