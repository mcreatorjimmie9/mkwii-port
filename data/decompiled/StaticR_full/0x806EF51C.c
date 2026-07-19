/* Function at 0x806EF51C, size=824 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 12 function(s) */

int FUN_806EF51C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x806EF530
    r0 = *(0 + r3); // lbz @ 0x806EF534
    if (==) goto 0x0x806ef83c;
    FUN_806F07B4(); // bl 0x806F07B4
    r3 = r31;
    FUN_806F08FC(r3); // bl 0x806F08FC
    /* lis r30, 0 */ // 0x806EF54C
    r3 = *(0 + r30); // lwz @ 0x806EF550
    FUN_806E6B18(r3); // bl 0x806E6B18
    if (==) goto 0x0x806ef5b0;
    r3 = *(0 + r30); // lwz @ 0x806EF560
    FUN_806E66A4(); // bl 0x806E66A4
    if (>=) goto 0x0x806ef58c;
    r3 = *(0 + r30); // lwz @ 0x806EF570
    r0 = *(0x291c + r3); // lwz @ 0x806EF574
    /* mulli r0, r0, 0x58 */ // 0x806EF578
    r3 = r3 + r0; // 0x806EF57C
    r0 = *(0x44 + r3); // lwz @ 0x806EF580
    if (<) goto 0x0x806ef5b0;
    /* lis r3, 0 */ // 0x806EF58C
    r3 = *(0 + r3); // lwz @ 0x806EF590
    r0 = *(0x291c + r3); // lwz @ 0x806EF594
    /* mulli r0, r0, 0x58 */ // 0x806EF598
    r4 = r3 + r0; // 0x806EF59C
    r0 = *(0x8b + r4); // lbz @ 0x806EF5A0
    if (!=) goto 0x0x806ef5b0;
    FUN_806E6508(); // bl 0x806E6508
    /* lis r3, 0 */ // 0x806EF5B0
    r3 = *(0 + r3); // lwz @ 0x806EF5B4
    r0 = *(0x291c + r3); // lwz @ 0x806EF5B8
    /* mulli r0, r0, 0x58 */ // 0x806EF5BC
    r4 = r3 + r0; // 0x806EF5C0
    r0 = *(0x40 + r4); // lwz @ 0x806EF5C4
    if (!=) goto 0x0x806ef5ec;
    r0 = *(1 + r31); // lbz @ 0x806EF5D0
    if (!=) goto 0x0x806ef5ec;
    r0 = *(0x8b + r4); // lbz @ 0x806EF5DC
    if (==) goto 0x0x806ef5ec;
    FUN_806E6520(); // bl 0x806E6520
    /* lis r30, 0 */ // 0x806EF5EC
    r3 = *(0 + r30); // lwz @ 0x806EF5F0
    FUN_806E6B18(); // bl 0x806E6B18
    if (!=) goto 0x0x806ef608;
    /* li r0, 0 */ // 0x806EF600
    /* b 0x806ef650 */ // 0x806EF604
    r5 = *(8 + r31); // lwz @ 0x806EF608
    if (==) goto 0x0x806ef64c;
    r3 = *(0 + r30); // lwz @ 0x806EF614
    /* li r4, 1 */ // 0x806EF618
    r0 = *(0x291c + r3); // lwz @ 0x806EF61C
    /* mulli r0, r0, 0x58 */ // 0x806EF620
    r3 = r3 + r0; // 0x806EF624
    r0 = *(0x59 + r3); // lbz @ 0x806EF628
    r3 = *(0x48 + r3); // lwz @ 0x806EF62C
    r0 = r4 << r0; // slw
    r0 = r5 | r0; // 0x806EF634
    r0 = r3 & r0; // 0x806EF638
    /* subf r0, r3, r0 */ // 0x806EF63C
    /* cntlzw r0, r0 */ // 0x806EF640
    /* srwi r0, r0, 5 */ // 0x806EF644
    /* b 0x806ef650 */ // 0x806EF648
    /* li r0, 0 */ // 0x806EF64C
    if (==) goto 0x0x806ef7cc;
    /* li r0, 3 */ // 0x806EF658
    /* li r3, 0 */ // 0x806EF65C
    /* mtctr r0 */ // 0x806EF660
    /* clrlwi r0, r3, 0x18 */ // 0x806EF664
    /* mulli r0, r0, 0x30 */ // 0x806EF668
    r4 = r31 + r0; // 0x806EF66C
    r5 = *(0x34 + r4); // lwz @ 0x806EF670
    if (>) goto 0x0x806ef684;
    r0 = r5;
    /* b 0x806ef688 */ // 0x806EF680
    /* li r0, -1 */ // 0x806EF684
    if (==) goto 0x0x806ef6b4;
    r0 = *(0x20 + r4); // lwz @ 0x806EF690
    if (==) goto 0x0x806ef6b4;
    if (>) goto 0x0x806ef6ac;
    r4 = *(0x34 + r4); // lwz @ 0x806EF6A4
    /* b 0x806ef7bc */ // 0x806EF6A8
    /* li r4, -1 */ // 0x806EF6AC
    /* b 0x806ef7bc */ // 0x806EF6B0
    r3 = r3 + 1; // 0x806EF6B4
    /* clrlwi r0, r3, 0x18 */ // 0x806EF6B8
    /* mulli r0, r0, 0x30 */ // 0x806EF6BC
    r4 = r31 + r0; // 0x806EF6C0
    r5 = *(0x34 + r4); // lwz @ 0x806EF6C4
    if (>) goto 0x0x806ef6d8;
    r0 = r5;
    /* b 0x806ef6dc */ // 0x806EF6D4
    /* li r0, -1 */ // 0x806EF6D8
    if (==) goto 0x0x806ef708;
    r0 = *(0x20 + r4); // lwz @ 0x806EF6E4
    if (==) goto 0x0x806ef708;
    if (>) goto 0x0x806ef700;
    r4 = *(0x34 + r4); // lwz @ 0x806EF6F8
    /* b 0x806ef7bc */ // 0x806EF6FC
    /* li r4, -1 */ // 0x806EF700
    /* b 0x806ef7bc */ // 0x806EF704
    r3 = r3 + 1; // 0x806EF708
    /* clrlwi r0, r3, 0x18 */ // 0x806EF70C
    /* mulli r0, r0, 0x30 */ // 0x806EF710
    r4 = r31 + r0; // 0x806EF714
    r5 = *(0x34 + r4); // lwz @ 0x806EF718
    if (>) goto 0x0x806ef72c;
    r0 = r5;
    /* b 0x806ef730 */ // 0x806EF728
    /* li r0, -1 */ // 0x806EF72C
    if (==) goto 0x0x806ef75c;
    r0 = *(0x20 + r4); // lwz @ 0x806EF738
    if (==) goto 0x0x806ef75c;
    if (>) goto 0x0x806ef754;
    r4 = *(0x34 + r4); // lwz @ 0x806EF74C
    /* b 0x806ef7bc */ // 0x806EF750
    /* li r4, -1 */ // 0x806EF754
    /* b 0x806ef7bc */ // 0x806EF758
    r3 = r3 + 1; // 0x806EF75C
    /* clrlwi r0, r3, 0x18 */ // 0x806EF760
    /* mulli r0, r0, 0x30 */ // 0x806EF764
    r4 = r31 + r0; // 0x806EF768
    r5 = *(0x34 + r4); // lwz @ 0x806EF76C
    if (>) goto 0x0x806ef780;
    r0 = r5;
    /* b 0x806ef784 */ // 0x806EF77C
    /* li r0, -1 */ // 0x806EF780
    if (==) goto 0x0x806ef7b0;
    r0 = *(0x20 + r4); // lwz @ 0x806EF78C
    if (==) goto 0x0x806ef7b0;
    if (>) goto 0x0x806ef7a8;
    r4 = *(0x34 + r4); // lwz @ 0x806EF7A0
    /* b 0x806ef7bc */ // 0x806EF7A4
    /* li r4, -1 */ // 0x806EF7A8
    /* b 0x806ef7bc */ // 0x806EF7AC
    r3 = r3 + 1; // 0x806EF7B0
    if (counter-- != 0) goto 0x0x806ef664;
    /* li r4, -1 */ // 0x806EF7B8
    /* subfic r3, r4, -1 */ // 0x806EF7BC
    r0 = r4 + 1; // 0x806EF7C0
    r0 = r3 | r0; // 0x806EF7C4
    /* srwi r0, r0, 0x1f */ // 0x806EF7C8
    if (!=) goto 0x0x806ef800;
    /* lis r3, 0 */ // 0x806EF7D4
    r3 = *(0 + r3); // lwz @ 0x806EF7D8
    r0 = *(0x291c + r3); // lwz @ 0x806EF7DC
    /* mulli r0, r0, 0x58 */ // 0x806EF7E0
    r4 = r3 + r0; // 0x806EF7E4
    r0 = *(0x8b + r4); // lbz @ 0x806EF7E8
    if (==) goto 0x0x806ef83c;
    FUN_806E6B18(); // bl 0x806E6B18
    if (==) goto 0x0x806ef83c;
    /* lis r31, 0 */ // 0x806EF800
    r3 = *(0 + r31); // lwz @ 0x806EF804
    FUN_806F4C44(); // bl 0x806F4C44
    if (!=) goto 0x0x806ef83c;
    r3 = *(0 + r31); // lwz @ 0x806EF814
    FUN_806F4CDC(); // bl 0x806F4CDC
    if (==) goto 0x0x806ef83c;
    r3 = *(0 + r31); // lwz @ 0x806EF824
    FUN_806F4C14(); // bl 0x806F4C14
    if (==) goto 0x0x806ef83c;
    r3 = *(0 + r31); // lwz @ 0x806EF834
    FUN_806F4BA8(); // bl 0x806F4BA8
    r0 = *(0x14 + r1); // lwz @ 0x806EF83C
    r31 = *(0xc + r1); // lwz @ 0x806EF840
    r30 = *(8 + r1); // lwz @ 0x806EF844
    return;
}