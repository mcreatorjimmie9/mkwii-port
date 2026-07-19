/* Function at 0x805BE5BC, size=380 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_805BE5BC(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r0, 0 */ // 0x805BE5C0
    r5 = *(0xb50 + r3); // lwz @ 0x805BE5CC
    if (<) goto 0x0x805be5e4;
    if (>) goto 0x0x805be5e4;
    /* li r0, 1 */ // 0x805BE5E0
    if (!=) goto 0x0x805be728;
    /* li r5, 0 */ // 0x805BE5F0
    if (==) goto 0x0x805be728;
    r0 = r4 + 0xf8; // 0x805BE5FC
    if (<=) goto 0x0x805be6ec;
    /* clrlwi r6, r0, 0x18 */ // 0x805BE604
    /* li r12, 0 */ // 0x805BE608
    r0 = r6 + 7; // 0x805BE60C
    /* srwi r0, r0, 3 */ // 0x805BE610
    /* mtctr r0 */ // 0x805BE614
    if (<=) goto 0x0x805be6ec;
    /* clrlwi r8, r5, 0x18 */ // 0x805BE620
    r6 = r5 + 1; // 0x805BE624
    /* mulli r7, r8, 0xf0 */ // 0x805BE628
    r0 = r5 + 2; // 0x805BE62C
    /* clrlwi r11, r6, 0x18 */ // 0x805BE630
    /* clrlwi r10, r0, 0x18 */ // 0x805BE634
    r31 = r3 + r7; // 0x805BE638
    r0 = r5 + 3; // 0x805BE63C
    *(0xe0 + r31) = r12; // sth @ 0x805BE640
    /* clrlwi r9, r0, 0x18 */ // 0x805BE644
    /* subf r30, r8, r4 */ // 0x805BE648
    r0 = r5 + 4; // 0x805BE64C
    *(0xe9 + r31) = r30; // stb @ 0x805BE650
    /* clrlwi r8, r0, 0x18 */ // 0x805BE654
    r7 = r5 + 5; // 0x805BE658
    r6 = r5 + 6; // 0x805BE65C
    *(0xe8 + r31) = r30; // stb @ 0x805BE660
    r0 = r5 + 7; // 0x805BE664
    /* clrlwi r7, r7, 0x18 */ // 0x805BE668
    /* clrlwi r6, r6, 0x18 */ // 0x805BE66C
    *(0x1d0 + r31) = r12; // sth @ 0x805BE670
    /* subf r11, r11, r4 */ // 0x805BE674
    /* clrlwi r0, r0, 0x18 */ // 0x805BE678
    /* subf r10, r10, r4 */ // 0x805BE67C
    *(0x1d9 + r31) = r11; // stb @ 0x805BE680
    /* subf r9, r9, r4 */ // 0x805BE684
    /* subf r8, r8, r4 */ // 0x805BE688
    /* subf r7, r7, r4 */ // 0x805BE68C
    *(0x1d8 + r31) = r11; // stb @ 0x805BE690
    /* subf r6, r6, r4 */ // 0x805BE694
    /* subf r0, r0, r4 */ // 0x805BE698
    r5 = r5 + 8; // 0x805BE69C
    *(0x2c0 + r31) = r12; // sth @ 0x805BE6A0
    *(0x2c9 + r31) = r10; // stb @ 0x805BE6A4
    *(0x2c8 + r31) = r10; // stb @ 0x805BE6A8
    *(0x3b0 + r31) = r12; // sth @ 0x805BE6AC
    *(0x3b9 + r31) = r9; // stb @ 0x805BE6B0
    *(0x3b8 + r31) = r9; // stb @ 0x805BE6B4
    *(0x4a0 + r31) = r12; // sth @ 0x805BE6B8
    *(0x4a9 + r31) = r8; // stb @ 0x805BE6BC
    *(0x4a8 + r31) = r8; // stb @ 0x805BE6C0
    *(0x590 + r31) = r12; // sth @ 0x805BE6C4
    *(0x599 + r31) = r7; // stb @ 0x805BE6C8
    *(0x598 + r31) = r7; // stb @ 0x805BE6CC
    *(0x680 + r31) = r12; // sth @ 0x805BE6D0
    *(0x689 + r31) = r6; // stb @ 0x805BE6D4
    *(0x688 + r31) = r6; // stb @ 0x805BE6D8
    *(0x770 + r31) = r12; // sth @ 0x805BE6DC
    *(0x779 + r31) = r0; // stb @ 0x805BE6E0
    *(0x778 + r31) = r0; // stb @ 0x805BE6E4
    if (counter-- != 0) goto 0x0x805be620;
    /* clrlwi r6, r5, 0x18 */ // 0x805BE6EC
    /* li r7, 0 */ // 0x805BE6F0
    /* subf r0, r6, r4 */ // 0x805BE6F4
    /* mtctr r0 */ // 0x805BE6F8
    if (>=) goto 0x0x805be728;
    /* clrlwi r6, r5, 0x18 */ // 0x805BE704
    r5 = r5 + 1; // 0x805BE708
    /* mulli r0, r6, 0xf0 */ // 0x805BE70C
    /* subf r8, r6, r4 */ // 0x805BE710
    r6 = r3 + r0; // 0x805BE714
    *(0xe0 + r6) = r7; // sth @ 0x805BE718
    *(0xe9 + r6) = r8; // stb @ 0x805BE71C
    *(0xe8 + r6) = r8; // stb @ 0x805BE720
    if (counter-- != 0) goto 0x0x805be704;
    r31 = *(0xc + r1); // lwz @ 0x805BE728
    r30 = *(8 + r1); // lwz @ 0x805BE72C
    return;
}