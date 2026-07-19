/* Function at 0x80733560, size=272 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80733560(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x80733574
    *(0x14 + r1) = r29; // stw @ 0x80733578
    r0 = *(0x25 + r3); // lbz @ 0x8073357C
    if (==) goto 0x0x80733594;
    r0 = *(0x27 + r3); // lbz @ 0x80733588
    if (==) goto 0x0x807336c0;
    r0 = *(0x28 + r3); // lbz @ 0x80733594
    if (!=) goto 0x0x807336c0;
    r0 = *(7 + r3); // lbz @ 0x807335A0
    if (!=) goto 0x0x807336c0;
    /* lis r4, 0 */ // 0x807335AC
    r4 = *(0 + r4); // lwz @ 0x807335B0
    r0 = *(0x10 + r4); // lbz @ 0x807335B4
    if (==) goto 0x0x807335c4;
    /* b 0x807336c0 */ // 0x807335C0
    r29 = r3 + 0x20; // 0x807335C4
    /* li r30, 8 */ // 0x807335C8
    r3 = *(0x2d8 + r29); // lwz @ 0x807335CC
    if (==) goto 0x0x8073364c;
    r3 = r3 + 0x74; // 0x807335D8
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x807335f0;
    /* li r3, 0 */ // 0x807335E8
    /* b 0x807335f4 */ // 0x807335EC
    r3 = *(0xc + r3); // lwz @ 0x807335F0
    /* li r0, 0 */ // 0x807335F8
    if (==) goto 0x0x80733608;
    if (!=) goto 0x0x8073360c;
    /* li r0, 1 */ // 0x80733608
    if (==) goto 0x0x8073364c;
    /* slwi r0, r30, 0x1e */ // 0x80733614
    /* srwi r3, r30, 0x1f */ // 0x80733618
    /* subf r0, r3, r0 */ // 0x8073361C
    /* rotlwi r0, r0, 2 */ // 0x80733620
    r0 = r0 + r3; // 0x80733624
    r3 = r31 + r0; // 0x80733628
    r0 = *(0x848 + r3); // lbz @ 0x8073362C
    if (==) goto 0x0x8073364c;
    r3 = *(0x2d8 + r29); // lwz @ 0x80733638
    r12 = *(0 + r3); // lwz @ 0x8073363C
    r12 = *(0x18 + r12); // lwz @ 0x80733640
    /* mtctr r12 */ // 0x80733644
    /* bctrl  */ // 0x80733648
    r30 = r30 + 1; // 0x8073364C
    r29 = r29 + 4; // 0x80733650
    if (<) goto 0x0x807335cc;
    r29 = r31 + 0x20; // 0x8073365C
    /* li r30, 8 */ // 0x80733660
    r3 = *(0x2d8 + r29); // lwz @ 0x80733664
    if (==) goto 0x0x807336b0;
}