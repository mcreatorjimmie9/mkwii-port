/* Function at 0x808B3490, size=580 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 5 function(s) */

int FUN_808B3490(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r3;
    *(0x14 + r1) = r29; // stw @ 0x808B34A8
    *(0x10 + r1) = r28; // stw @ 0x808B34AC
    FUN_808CFA50(); // bl 0x808CFA50
    /* clrlwi r5, r3, 0x18 */ // 0x808B34B4
    r12 = *(0 + r31); // lwz @ 0x808B34B8
    r0 = r5 + -2; // 0x808B34BC
    /* li r4, 2 */ // 0x808B34C0
    /* orc r4, r5, r4 */ // 0x808B34C4
    r12 = *(0x6c + r12); // lwz @ 0x808B34C8
    /* srwi r0, r0, 1 */ // 0x808B34CC
    r3 = r31;
    /* subf r0, r0, r4 */ // 0x808B34D4
    /* srwi r28, r0, 0x1f */ // 0x808B34D8
    /* mtctr r12 */ // 0x808B34DC
    /* bctrl  */ // 0x808B34E0
    r12 = *(0 + r31); // lwz @ 0x808B34E4
    r29 = r3;
    r3 = r31;
    r12 = *(0x68 + r12); // lwz @ 0x808B34F0
    /* mtctr r12 */ // 0x808B34F4
    /* bctrl  */ // 0x808B34F8
    r12 = *(0 + r31); // lwz @ 0x808B34FC
    r30 = r3;
    r3 = r31;
    r12 = *(0x70 + r12); // lwz @ 0x808B3508
    /* mtctr r12 */ // 0x808B350C
    /* bctrl  */ // 0x808B3510
    r12 = *(0 + r3); // lwz @ 0x808B3514
    r4 = r30;
    r5 = r29;
    r6 = r28;
    r12 = *(0x1c + r12); // lwz @ 0x808B3524
    /* mtctr r12 */ // 0x808B3528
    /* bctrl  */ // 0x808B352C
    r0 = *(0x3f8 + r31); // lwz @ 0x808B3530
    if (!=) goto 0x0x808b36b4;
    r0 = *(0x3dc + r31); // lbz @ 0x808B353C
    if (==) goto 0x0x808b3568;
    r12 = *(0 + r31); // lwz @ 0x808B3548
    r3 = r31;
    r12 = *(0x68 + r12); // lwz @ 0x808B3550
    /* mtctr r12 */ // 0x808B3554
    /* bctrl  */ // 0x808B3558
    r4 = r3;
    r3 = r31 + 0x54; // 0x808B3560
    FUN_80649FD0(r4, r3); // bl 0x80649FD0
    r0 = *(0x4c + r31); // lwz @ 0x808B3568
    if (<=) goto 0x0x808b35fc;
    r0 = *(8 + r31); // lwz @ 0x808B3574
    if (<) goto 0x0x808b35fc;
    r0 = *(0x3dc + r31); // lbz @ 0x808B3580
    if (==) goto 0x0x808b35fc;
    r3 = r31 + 0x54; // 0x808B358C
    FUN_8064A340(r3); // bl 0x8064A340
    if (==) goto 0x0x808b35fc;
    /* li r29, 0 */ // 0x808B359C
    /* li r28, 0 */ // 0x808B35A0
    /* b 0x808b35d4 */ // 0x808B35A4
    r12 = *(0 + r31); // lwz @ 0x808B35A8
    r3 = r31;
    r12 = *(0x68 + r12); // lwz @ 0x808B35B0
    /* mtctr r12 */ // 0x808B35B4
    /* bctrl  */ // 0x808B35B8
    r5 = *(0x48 + r31); // lwz @ 0x808B35BC
    r4 = r3;
    /* lwzx r3, r5, r28 */ // 0x808B35C4
    FUN_80649FD0(r4); // bl 0x80649FD0
    r28 = r28 + 4; // 0x808B35CC
    r29 = r29 + 1; // 0x808B35D0
    r0 = *(0x4c + r31); // lwz @ 0x808B35D4
    if (<) goto 0x0x808b35a8;
    r12 = *(0 + r31); // lwz @ 0x808B35E0
    r3 = r31;
    /* li r4, 0 */ // 0x808B35E8
    r12 = *(0x74 + r12); // lwz @ 0x808B35EC
    /* mtctr r12 */ // 0x808B35F0
    /* bctrl  */ // 0x808B35F4
    /* b 0x808b36b4 */ // 0x808B35F8
    r0 = *(0x4c + r31); // lwz @ 0x808B35FC
    /* cmpwi cr1, r0, 0 */
    if (<=) goto 0x0x808b3668;
    /* li r29, 0 */ // 0x808B3608
    /* li r28, 0 */ // 0x808B360C
    /* b 0x808b3640 */ // 0x808B3610
    r12 = *(0 + r31); // lwz @ 0x808B3614
    r3 = r31;
    r12 = *(0x68 + r12); // lwz @ 0x808B361C
    /* mtctr r12 */ // 0x808B3620
    /* bctrl  */ // 0x808B3624
    r5 = *(0x48 + r31); // lwz @ 0x808B3628
    r4 = r3;
    /* lwzx r3, r5, r28 */ // 0x808B3630
    FUN_80649FD0(r4); // bl 0x80649FD0
    r28 = r28 + 4; // 0x808B3638
    r29 = r29 + 1; // 0x808B363C
    r0 = *(0x4c + r31); // lwz @ 0x808B3640
    if (<) goto 0x0x808b3614;
    r12 = *(0 + r31); // lwz @ 0x808B364C
    r3 = r31;
    /* li r4, 0 */ // 0x808B3654
    r12 = *(0x74 + r12); // lwz @ 0x808B3658
    /* mtctr r12 */ // 0x808B365C
    /* bctrl  */ // 0x808B3660
    /* b 0x808b36b4 */ // 0x808B3664
    r0 = *(0x3dc + r31); // lbz @ 0x808B3668
    if (==) goto 0x0x808b3694;
    if (!=) goto 0x0x808b36b4;
    r12 = *(0 + r31); // lwz @ 0x808B3678
    r3 = r31;
    /* li r4, -0x64 */ // 0x808B3680
    r12 = *(0x74 + r12); // lwz @ 0x808B3684
    /* mtctr r12 */ // 0x808B3688
    /* bctrl  */ // 0x808B368C
    /* b 0x808b36b4 */ // 0x808B3690
    r4 = *(0x50 + r31); // lwz @ 0x808B3694
    if (==) goto 0x0x808b36b4;
    r12 = *(0 + r31); // lwz @ 0x808B36A0
    r3 = r31;
    r12 = *(0x78 + r12); // lwz @ 0x808B36A8
    /* mtctr r12 */ // 0x808B36AC
    /* bctrl  */ // 0x808B36B0
    r0 = *(0x24 + r1); // lwz @ 0x808B36B4
    r31 = *(0x1c + r1); // lwz @ 0x808B36B8
    r30 = *(0x18 + r1); // lwz @ 0x808B36BC
    r29 = *(0x14 + r1); // lwz @ 0x808B36C0
    r28 = *(0x10 + r1); // lwz @ 0x808B36C4
    return;
}