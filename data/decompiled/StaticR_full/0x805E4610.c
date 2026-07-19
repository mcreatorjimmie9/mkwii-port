/* Function at 0x805E4610, size=380 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_805E4610(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r4, 0 */ // 0x805E4618
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x805E4628
    *(0x14 + r1) = r29; // stw @ 0x805E462C
    *(0x10 + r1) = r28; // stw @ 0x805E4630
    r4 = *(0 + r4); // lwz @ 0x805E4634
    r3 = *(0x20 + r4); // lwz @ 0x805E4638
    if (==) goto 0x0x805e464c;
    r3 = *(4 + r3); // lhz @ 0x805E4644
    /* b 0x805e4650 */ // 0x805E4648
    /* li r3, 0 */ // 0x805E464C
    /* neg r0, r3 */ // 0x805E4650
    r0 = r0 | r3; // 0x805E4654
    /* rlwinm. r0, r0, 1, 0x1f, 0x1f */ // 0x805E4658
    if (==) goto 0x0x805e4684;
    r3 = *(0x1c + r4); // lwz @ 0x805E4660
    if (==) goto 0x0x805e4674;
    r3 = *(4 + r3); // lhz @ 0x805E466C
    /* b 0x805e4678 */ // 0x805E4670
    /* li r3, 0 */ // 0x805E4674
    /* neg r0, r3 */ // 0x805E4678
    r0 = r0 | r3; // 0x805E467C
    /* srwi r0, r0, 0x1f */ // 0x805E4680
    if (==) goto 0x0x805e46a0;
    r12 = *(0 + r31); // lwz @ 0x805E468C
    r3 = r31;
    r12 = *(0x14 + r12); // lwz @ 0x805E4694
    /* mtctr r12 */ // 0x805E4698
    /* bctrl  */ // 0x805E469C
    /* lis r3, 0 */ // 0x805E46A0
    r3 = *(0 + r3); // lwz @ 0x805E46A4
    r3 = *(0xc + r3); // lwz @ 0x805E46A8
    r3 = *(0 + r3); // lwz @ 0x805E46AC
    r0 = *(0x38 + r3); // lwz @ 0x805E46B0
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x805E46B4
    if (==) goto 0x0x805e476c;
    /* lis r3, 0 */ // 0x805E46BC
    r29 = *(4 + r31); // lwz @ 0x805E46C0
    r3 = *(0 + r3); // lwz @ 0x805E46C4
    r0 = *(0xb70 + r3); // lwz @ 0x805E46C8
    r3 = *(0xb9e + r3); // lhz @ 0x805E46CC
    if (!=) goto 0x0x805e476c;
    if (!=) goto 0x0x805e476c;
    r5 = *(0x10 + r29); // lwz @ 0x805E46E0
    r0 = r3 + -1; // 0x805E46E4
    /* li r4, 0 */ // 0x805E46E8
    /* li r3, 1 */ // 0x805E46EC
    *(0x10 + r5) = r4; // stw @ 0x805E46F0
    *(0xc + r5) = r3; // stw @ 0x805E46F8
    if (>) goto 0x0x805e4714;
    r3 = *(0x10 + r29); // lwz @ 0x805E4700
    r12 = *(0 + r3); // lwz @ 0x805E4704
    r12 = *(0xc + r12); // lwz @ 0x805E4708
    /* mtctr r12 */ // 0x805E470C
    /* bctrl  */ // 0x805E4710
    /* li r28, 0 */ // 0x805E4714
    /* lis r30, 0 */ // 0x805E4718
    /* lis r31, 0 */ // 0x805E471C
    /* b 0x805e4758 */ // 0x805E4720
    r3 = *(0 + r30); // lwz @ 0x805E4724
    r6 = r28 rlwinm 2; // rlwinm
    r3 = *(0xc + r3); // lwz @ 0x805E472C
    /* lwzx r3, r3, r6 */ // 0x805E4730
    r0 = *(0x38 + r3); // lwz @ 0x805E4734
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x805E4738
    if (!=) goto 0x0x805e4754;
    r3 = *(0xc + r29); // lwz @ 0x805E4740
    /* li r4, 1 */ // 0x805E4744
    /* li r5, 0 */ // 0x805E4748
    /* lwzx r3, r3, r6 */ // 0x805E474C
    FUN_805C3840(r4, r5); // bl 0x805C3840
    r28 = r28 + 1; // 0x805E4754
    r3 = *(0 + r31); // lwz @ 0x805E4758
    /* clrlwi r4, r28, 0x18 */ // 0x805E475C
    r0 = *(0x24 + r3); // lbz @ 0x805E4760
    if (<) goto 0x0x805e4724;
    r0 = *(0x24 + r1); // lwz @ 0x805E476C
    r31 = *(0x1c + r1); // lwz @ 0x805E4770
    r30 = *(0x18 + r1); // lwz @ 0x805E4774
    r29 = *(0x14 + r1); // lwz @ 0x805E4778
    r28 = *(0x10 + r1); // lwz @ 0x805E477C
    return;
}