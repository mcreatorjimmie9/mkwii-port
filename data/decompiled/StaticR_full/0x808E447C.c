/* Function at 0x808E447C, size=880 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 16 function(s) */

int FUN_808E447C(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x808E4484
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x808E4494
    *(0x14 + r1) = r29; // stw @ 0x808E4498
    r3 = *(0 + r4); // lwz @ 0x808E449C
    r3 = *(0x98 + r3); // lwz @ 0x808E44A0
    r3 = *(0x150 + r3); // lwz @ 0x808E44A4
    FUN_80662338(); // bl 0x80662338
    *(0x1750 + r31) = r3; // stw @ 0x808E44B0
    if (<) goto 0x0x808e44c0;
    if (<=) goto 0x0x808e44c8;
    /* li r0, 0 */ // 0x808E44C0
    *(0x1750 + r31) = r0; // stw @ 0x808E44C4
    r3 = r31;
    FUN_808B3318(r3); // bl 0x808B3318
    r12 = *(0x6c4 + r31); // lwz @ 0x808E44D0
    r3 = r31 + 0x6c4; // 0x808E44D4
    r12 = *(0xc + r12); // lwz @ 0x808E44D8
    /* mtctr r12 */ // 0x808E44DC
    /* bctrl  */ // 0x808E44E0
    /* lis r4, 0 */ // 0x808E44E4
    /* lis r3, 0 */ // 0x808E44E8
    r0 = *(0 + r4); // lwz @ 0x808E44EC
    r3 = *(0 + r3); // lwz @ 0x808E44F0
    *(8 + r1) = r0; // stw @ 0x808E44F4
    r3 = *(0 + r3); // lwz @ 0x808E44F8
    r3 = *(0 + r3); // lwz @ 0x808E44FC
    FUN_808CF8D8(); // bl 0x808CF8D8
    if (!=) goto 0x0x808e451c;
    r3 = r31;
    /* li r5, 1 */ // 0x808E4514
    FUN_808B4A2C(r3, r4, r5); // bl 0x808B4A2C
    /* lis r3, 0 */ // 0x808E451C
    r3 = *(0 + r3); // lwz @ 0x808E4520
    r3 = *(0 + r3); // lwz @ 0x808E4524
    r3 = *(0 + r3); // lwz @ 0x808E4528
    FUN_808CF8D8(r3); // bl 0x808CF8D8
    if (==) goto 0x0x808e4554;
    r0 = *(0x10 + r31); // lwz @ 0x808E4538
    if (!=) goto 0x0x808e4554;
    r3 = r31;
    /* li r5, 1 */ // 0x808E454C
    FUN_808B4A2C(r3, r4, r5); // bl 0x808B4A2C
    /* lis r30, 0 */ // 0x808E4554
    r3 = *(0 + r30); // lwz @ 0x808E4558
    r3 = *(0 + r3); // lwz @ 0x808E455C
    r3 = *(0 + r3); // lwz @ 0x808E4560
    FUN_808CF8D8(); // bl 0x808CF8D8
    if (==) goto 0x0x808e4700;
    r0 = *(0x10 + r31); // lwz @ 0x808E4570
    if (!=) goto 0x0x808e4700;
    r3 = *(0 + r30); // lwz @ 0x808E457C
    r3 = *(0 + r3); // lwz @ 0x808E4580
    r29 = *(0x140 + r3); // lwz @ 0x808E4584
    if (!=) goto 0x0x808e4598;
    /* li r29, 0 */ // 0x808E4590
    /* b 0x808e45ec */ // 0x808E4594
    /* lis r30, 0 */ // 0x808E4598
    r30 = r30 + 0; // 0x808E459C
    if (==) goto 0x0x808e45e8;
    r12 = *(0 + r29); // lwz @ 0x808E45A4
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x808E45AC
    /* mtctr r12 */ // 0x808E45B0
    /* bctrl  */ // 0x808E45B4
    /* b 0x808e45d0 */ // 0x808E45B8
    if (!=) goto 0x0x808e45cc;
    /* li r0, 1 */ // 0x808E45C4
    /* b 0x808e45dc */ // 0x808E45C8
    r3 = *(0 + r3); // lwz @ 0x808E45CC
    if (!=) goto 0x0x808e45bc;
    /* li r0, 0 */ // 0x808E45D8
    if (==) goto 0x0x808e45e8;
    /* b 0x808e45ec */ // 0x808E45E4
    /* li r29, 0 */ // 0x808E45E8
    r12 = *(0 + r29); // lwz @ 0x808E45EC
    r3 = r29;
    r12 = *(0x64 + r12); // lwz @ 0x808E45F4
    /* mtctr r12 */ // 0x808E45F8
    /* bctrl  */ // 0x808E45FC
    r3 = r29;
    /* li r4, 0x1104 */ // 0x808E4604
    /* li r5, 0 */ // 0x808E4608
    FUN_806B2C88(r3, r4, r5); // bl 0x806B2C88
    r3 = r29;
    /* li r4, 0 */ // 0x808E4614
    /* li r5, 0x10ff */ // 0x808E4618
    /* li r6, 0 */ // 0x808E461C
    /* li r7, -1 */ // 0x808E4620
    /* li r8, 0 */ // 0x808E4624
    FUN_806B2C90(r4, r5, r6, r7, r8); // bl 0x806B2C90
    r3 = r29;
    /* li r4, 1 */ // 0x808E4630
    /* li r5, 0x1100 */ // 0x808E4634
    /* li r6, 0 */ // 0x808E4638
    /* li r7, -1 */ // 0x808E463C
    /* li r8, 0 */ // 0x808E4640
    FUN_806B2C90(r4, r5, r6, r7, r8); // bl 0x806B2C90
    /* li r0, 0 */ // 0x808E4648
    *(0x27c + r29) = r0; // stw @ 0x808E464C
    r3 = r31;
    /* li r4, 0x4e */ // 0x808E4654
    r12 = *(0 + r31); // lwz @ 0x808E4658
    /* li r5, 0 */ // 0x808E465C
    r12 = *(0x24 + r12); // lwz @ 0x808E4660
    /* mtctr r12 */ // 0x808E4664
    /* bctrl  */ // 0x808E4668
    *(0x1754 + r31) = r3; // stw @ 0x808E466C
    /* lis r3, 0 */ // 0x808E4670
    r3 = *(0 + r3); // lwz @ 0x808E4674
    r3 = *(0 + r3); // lwz @ 0x808E4678
    r29 = *(0x248 + r3); // lwz @ 0x808E467C
    if (!=) goto 0x0x808e4690;
    /* li r29, 0 */ // 0x808E4688
    /* b 0x808e46e4 */ // 0x808E468C
    /* lis r30, 0 */ // 0x808E4690
    r30 = r30 + 0; // 0x808E4694
    if (==) goto 0x0x808e46e0;
    r12 = *(0 + r29); // lwz @ 0x808E469C
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x808E46A4
    /* mtctr r12 */ // 0x808E46A8
    /* bctrl  */ // 0x808E46AC
    /* b 0x808e46c8 */ // 0x808E46B0
    if (!=) goto 0x0x808e46c4;
    /* li r0, 1 */ // 0x808E46BC
    /* b 0x808e46d4 */ // 0x808E46C0
    r3 = *(0 + r3); // lwz @ 0x808E46C4
    if (!=) goto 0x0x808e46b4;
    /* li r0, 0 */ // 0x808E46D0
    if (==) goto 0x0x808e46e0;
    /* b 0x808e46e4 */ // 0x808E46DC
    /* li r29, 0 */ // 0x808E46E0
    r3 = r29;
    FUN_806B196C(r3); // bl 0x806B196C
    r4 = r3;
    r3 = *(0x2bc + r31); // lwz @ 0x808E46F0
    /* li r5, 0 */ // 0x808E46F4
    FUN_808D5A00(r3, r4, r5); // bl 0x808D5A00
    /* b 0x808e47d0 */ // 0x808E46FC
    /* lis r30, 0 */ // 0x808E4700
    r3 = *(0 + r30); // lwz @ 0x808E4704
    r3 = *(0 + r3); // lwz @ 0x808E4708
    r3 = *(0 + r3); // lwz @ 0x808E470C
    FUN_808CF8D8(); // bl 0x808CF8D8
    if (==) goto 0x0x808e47a8;
    r3 = *(0 + r30); // lwz @ 0x808E471C
    r3 = *(0 + r3); // lwz @ 0x808E4720
    r29 = *(0x248 + r3); // lwz @ 0x808E4724
    if (!=) goto 0x0x808e4738;
    /* li r29, 0 */ // 0x808E4730
    /* b 0x808e478c */ // 0x808E4734
    /* lis r30, 0 */ // 0x808E4738
    r30 = r30 + 0; // 0x808E473C
    if (==) goto 0x0x808e4788;
    r12 = *(0 + r29); // lwz @ 0x808E4744
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x808E474C
    /* mtctr r12 */ // 0x808E4750
    /* bctrl  */ // 0x808E4754
    /* b 0x808e4770 */ // 0x808E4758
    if (!=) goto 0x0x808e476c;
    /* li r0, 1 */ // 0x808E4764
    /* b 0x808e477c */ // 0x808E4768
    r3 = *(0 + r3); // lwz @ 0x808E476C
    if (!=) goto 0x0x808e475c;
    /* li r0, 0 */ // 0x808E4778
    if (==) goto 0x0x808e4788;
    /* b 0x808e478c */ // 0x808E4784
    /* li r29, 0 */ // 0x808E4788
    r3 = r29;
    FUN_806B196C(r3); // bl 0x806B196C
    r4 = r3;
    r3 = *(0x2bc + r31); // lwz @ 0x808E4798
    /* li r5, 0 */ // 0x808E479C
    FUN_808D5A00(r3, r4, r5); // bl 0x808D5A00
    /* b 0x808e47d0 */ // 0x808E47A4
    /* lis r4, 0 */ // 0x808E47A8
    r3 = *(0x2bc + r31); // lwz @ 0x808E47AC
    r4 = *(0 + r4); // lwz @ 0x808E47B0
    /* li r5, 0 */ // 0x808E47B4
    r0 = *(0x1768 + r4); // lwz @ 0x808E47B8
    /* cntlzw r0, r0 */ // 0x808E47BC
    r0 = r0 rlwinm 0x1b; // rlwinm
    /* neg r4, r0 */ // 0x808E47C4
    r4 = r4 + 0xd25; // 0x808E47C8
    FUN_808D5A00(r4); // bl 0x808D5A00
    r0 = *(0x24 + r1); // lwz @ 0x808E47D0
    r31 = *(0x1c + r1); // lwz @ 0x808E47D4
    r30 = *(0x18 + r1); // lwz @ 0x808E47D8
    r29 = *(0x14 + r1); // lwz @ 0x808E47DC
    return;
}