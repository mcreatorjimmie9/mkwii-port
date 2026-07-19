/* Function at 0x806FF604, size=320 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 8 function(s) */

int FUN_806FF604(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x18 + r1) = r30; // stw @ 0x806FF614
    r30 = r3;
    FUN_8070A504(r3); // bl 0x8070A504
    r0 = *(0x20 + r30); // lbz @ 0x806FF624
    if (!=) goto 0x0x806ff674;
    /* li r0, 0 */ // 0x806FF630
    *(0x1c + r30) = r0; // stw @ 0x806FF634
    r3 = *(0x758c + r30); // lwz @ 0x806FF638
    r12 = *(0x18 + r3); // lwz @ 0x806FF63C
    r12 = *(0xc + r12); // lwz @ 0x806FF640
    /* mtctr r12 */ // 0x806FF644
    /* bctrl  */ // 0x806FF648
    if (!=) goto 0x0x806ff660;
    /* li r0, 1 */ // 0x806FF654
    *(0x20 + r30) = r0; // stb @ 0x806FF658
    /* b 0x806ff674 */ // 0x806FF65C
    r3 = *(0x758c + r30); // lwz @ 0x806FF660
    r0 = *(4 + r3); // lwz @ 0x806FF664
    *(0x1c + r30) = r0; // stw @ 0x806FF668
    FUN_805E3430(); // bl 0x805E3430
    /* b 0x806ff678 */ // 0x806FF670
    /* li r3, 0 */ // 0x806FF674
    r31 = r3;
    if (!=) goto 0x0x806ff6f8;
    /* lis r4, 1 */ // 0x806FF684
    r3 = r30 + 0x24; // 0x806FF688
    r4 = r4 + 0x6000; // 0x806FF68C
    FUN_807057D0(r4, r3, r4); // bl 0x807057D0
    if (==) goto 0x0x806ff6b0;
    r3 = r30 + 0x24; // 0x806FF69C
    FUN_80704FB4(r4, r3); // bl 0x80704FB4
    FUN_805E3430(r3); // bl 0x805E3430
    r31 = r3;
    /* b 0x806ff6f8 */ // 0x806FF6AC
    FUN_8070A520(r3); // bl 0x8070A520
    if (==) goto 0x0x806ff6cc;
    if (==) goto 0x0x806ff6d4;
    /* b 0x806ff6f4 */ // 0x806FF6C8
    /* li r31, 3 */ // 0x806FF6CC
    /* b 0x806ff6f8 */ // 0x806FF6D0
    FUN_8070A510(r3); // bl 0x8070A510
    if (!=) goto 0x0x806ff6ec;
    /* li r31, 7 */ // 0x806FF6E4
    /* b 0x806ff6f8 */ // 0x806FF6E8
    /* li r31, 3 */ // 0x806FF6EC
    /* b 0x806ff6f8 */ // 0x806FF6F0
    /* li r31, 0 */ // 0x806FF6F4
    r0 = *(0x20 + r30); // lbz @ 0x806FF6F8
    if (==) goto 0x0x806ff734;
    r3 = *(0x758c + r30); // lwz @ 0x806FF704
    r12 = *(0x18 + r3); // lwz @ 0x806FF708
    r12 = *(0x10 + r12); // lwz @ 0x806FF70C
    /* mtctr r12 */ // 0x806FF710
    /* bctrl  */ // 0x806FF714
    if (!=) goto 0x0x806ff72c;
    /* li r0, 0 */ // 0x806FF720
    *(0x20 + r30) = r0; // stb @ 0x806FF724
    /* b 0x806ff734 */ // 0x806FF728
    r3 = *(0x758c + r30); // lwz @ 0x806FF72C
    FUN_805E3430(); // bl 0x805E3430
    r3 = r31;
    r31 = *(0x1c + r1); // lwz @ 0x806FF738
    r30 = *(0x18 + r1); // lwz @ 0x806FF73C
    r0 = *(0x24 + r1); // lwz @ 0x806FF740
}