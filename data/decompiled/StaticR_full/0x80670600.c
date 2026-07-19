/* Function at 0x80670600, size=628 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 2 function(s) */

int FUN_80670600(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x8067060C
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r30 = r6;
    r31 = r7;
    r0 = *(0xf4 + r3); // lwz @ 0x80670624
    if (<) goto 0x0x80670644;
    FUN_805B9C50(); // bl 0x805B9C50
    /* li r3, -1 */ // 0x80670634
    /* li r0, 0 */ // 0x80670638
    *(0xf4 + r27) = r3; // stw @ 0x8067063C
    *(0xe8 + r27) = r0; // stw @ 0x80670640
    /* cmpwi cr1, r29, 0 */
    *(0xe8 + r27) = r29; // stw @ 0x80670648
    /* li r6, 0 */ // 0x8067064C
    if (<=) goto 0x0x80670720;
    r4 = r29 + -8; // 0x80670658
    if (<=) goto 0x0x806706f0;
    /* li r5, 0 */ // 0x80670660
    if (<) goto 0x0x8067067c;
    /* lis r3, -0x8000 */ // 0x80670668
    r0 = r3 + -2; // 0x8067066C
    if (>) goto 0x0x8067067c;
    /* li r5, 1 */ // 0x80670678
    if (==) goto 0x0x806706f0;
    r0 = r4 + 7; // 0x80670684
    r3 = r28;
    /* srwi r0, r0, 3 */ // 0x8067068C
    r5 = r27;
    /* mtctr r0 */ // 0x80670694
    if (<=) goto 0x0x806706f0;
    r0 = *(0 + r3); // lwz @ 0x806706A0
    r6 = r6 + 8; // 0x806706A4
    *(0xc8 + r5) = r0; // stw @ 0x806706A8
    r0 = *(4 + r3); // lwz @ 0x806706AC
    *(0xcc + r5) = r0; // stw @ 0x806706B0
    r0 = *(8 + r3); // lwz @ 0x806706B4
    *(0xd0 + r5) = r0; // stw @ 0x806706B8
    r0 = *(0xc + r3); // lwz @ 0x806706BC
    *(0xd4 + r5) = r0; // stw @ 0x806706C0
    r0 = *(0x10 + r3); // lwz @ 0x806706C4
    *(0xd8 + r5) = r0; // stw @ 0x806706C8
    r0 = *(0x14 + r3); // lwz @ 0x806706CC
    *(0xdc + r5) = r0; // stw @ 0x806706D0
    r0 = *(0x18 + r3); // lwz @ 0x806706D4
    *(0xe0 + r5) = r0; // stw @ 0x806706D8
    r0 = *(0x1c + r3); // lwz @ 0x806706DC
    r3 = r3 + 0x20; // 0x806706E0
    *(0xe4 + r5) = r0; // stw @ 0x806706E4
    r5 = r5 + 0x20; // 0x806706E8
    if (counter-- != 0) goto 0x0x806706a0;
    /* slwi r4, r6, 2 */ // 0x806706F0
    /* subf r0, r6, r29 */ // 0x806706F4
    r3 = r28 + r4; // 0x806706F8
    r4 = r27 + r4; // 0x806706FC
    /* mtctr r0 */ // 0x80670700
    if (>=) goto 0x0x80670720;
    r0 = *(0 + r3); // lwz @ 0x8067070C
    r3 = r3 + 4; // 0x80670710
    *(0xc8 + r4) = r0; // stw @ 0x80670714
    r4 = r4 + 4; // 0x80670718
    if (counter-- != 0) goto 0x0x8067070c;
    if (>=) goto 0x0x80670810;
    /* subfic r5, r29, 8 */ // 0x80670728
    if (<=) goto 0x0x806707e8;
    /* li r3, 0 */ // 0x80670738
    /* li r4, 0 */ // 0x8067073C
    /* li r0, 0 */ // 0x80670740
    if (>=) goto 0x0x8067074c;
    /* li r0, 1 */ // 0x80670748
    if (==) goto 0x0x80670764;
    /* addis r0, r29, -0x8000 */ // 0x80670754
    if (==) goto 0x0x80670764;
    /* li r4, 1 */ // 0x80670760
    if (==) goto 0x0x80670794;
    /* neg r0, r29 */ // 0x8067076C
    /* li r4, 1 */ // 0x80670770
    /* rlwinm. r0, r0, 0, 0, 0 */ // 0x80670774
    if (!=) goto 0x0x80670788;
    /* rlwinm. r0, r5, 0, 0, 0 */ // 0x8067077C
    if (==) goto 0x0x80670788;
    /* li r4, 0 */ // 0x80670784
    if (==) goto 0x0x80670794;
    /* li r3, 1 */ // 0x80670790
    if (==) goto 0x0x806707e8;
    /* subfic r0, r29, 7 */ // 0x8067079C
    /* slwi r4, r29, 2 */ // 0x806707A0
    /* srwi r0, r0, 3 */ // 0x806707A4
    /* li r3, 0 */ // 0x806707A8
    r4 = r27 + r4; // 0x806707AC
    /* mtctr r0 */ // 0x806707B0
    if (>=) goto 0x0x806707e8;
    *(0xc8 + r4) = r3; // stw @ 0x806707BC
    r29 = r29 + 8; // 0x806707C0
    *(0xcc + r4) = r3; // stw @ 0x806707C4
    *(0xd0 + r4) = r3; // stw @ 0x806707C8
    *(0xd4 + r4) = r3; // stw @ 0x806707CC
    *(0xd8 + r4) = r3; // stw @ 0x806707D0
    *(0xdc + r4) = r3; // stw @ 0x806707D4
    *(0xe0 + r4) = r3; // stw @ 0x806707D8
    *(0xe4 + r4) = r3; // stw @ 0x806707DC
    r4 = r4 + 0x20; // 0x806707E0
    if (counter-- != 0) goto 0x0x806707bc;
    /* slwi r3, r29, 2 */ // 0x806707E8
    /* subfic r0, r29, 8 */ // 0x806707EC
    r4 = r27 + r3; // 0x806707F0
    /* li r3, 0 */ // 0x806707F4
    /* mtctr r0 */ // 0x806707F8
    if (>=) goto 0x0x80670810;
    *(0xc8 + r4) = r3; // stw @ 0x80670804
    r4 = r4 + 4; // 0x80670808
    if (counter-- != 0) goto 0x0x80670804;
    r0 = *(0xac + r27); // lwz @ 0x80670810
    *(0xec + r27) = r31; // stb @ 0x80670814
    *(0xf0 + r27) = r30; // stw @ 0x8067081C
    if (!=) goto 0x0x80670860;
    r0 = *(0xe8 + r27); // lwz @ 0x80670824
    if (!=) goto 0x0x80670848;
    /* clrlwi. r0, r31, 0x18 */ // 0x80670830
    if (==) goto 0x0x80670840;
    /* li r5, 0 */ // 0x80670838
    /* b 0x8067084c */ // 0x8067083C
    /* li r5, 1 */ // 0x80670840
    /* b 0x8067084c */ // 0x80670844
    /* li r5, 0 */ // 0x80670848
    /* li r0, 0 */ // 0x8067084C
    *(0xf4 + r27) = r0; // stw @ 0x80670850
    r3 = r27;
    r4 = *(0xc8 + r27); // lwz @ 0x80670858
    FUN_805B9A2C(r5, r3); // bl 0x805B9A2C
    r0 = *(0x24 + r1); // lwz @ 0x80670864
    return;
}