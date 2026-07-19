/* Function at 0x808AB674, size=428 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_808AB674(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r7, 0 */ // 0x808AB67C
    *(0xc + r1) = r31; // stw @ 0x808AB684
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x808AB68C
    r30 = r3;
    r6 = *(0x18 + r3); // lhz @ 0x808AB694
    /* b 0x808ab6bc */ // 0x808AB698
    r5 = *(0x1c + r3); // lwz @ 0x808AB69C
    r0 = r7 rlwinm 2; // rlwinm
    /* lwzx r0, r5, r0 */ // 0x808AB6A4
    if (!=) goto 0x0x808ab6b8;
    /* li r3, -1 */ // 0x808AB6B0
    /* b 0x808ab808 */ // 0x808AB6B4
    r7 = r7 + 1; // 0x808AB6B8
    /* clrlwi r0, r7, 0x10 */ // 0x808AB6BC
    if (<) goto 0x0x808ab69c;
    r12 = *(0 + r31); // lwz @ 0x808AB6C8
    r3 = r31;
    r12 = *(0x2c + r12); // lwz @ 0x808AB6D0
    /* mtctr r12 */ // 0x808AB6D4
    /* bctrl  */ // 0x808AB6D8
    /* clrlwi. r0, r3, 0x1f */ // 0x808AB6DC
    if (==) goto 0x0x808ab6fc;
    r3 = *(0x20 + r30); // lhz @ 0x808AB6E4
    r4 = *(0x24 + r30); // lwz @ 0x808AB6E8
    /* slwi r0, r3, 2 */ // 0x808AB6EC
    r3 = r3 + 1; // 0x808AB6F0
    /* stwx r31, r4, r0 */ // 0x808AB6F4
    *(0x20 + r30) = r3; // sth @ 0x808AB6F8
    r12 = *(0 + r31); // lwz @ 0x808AB6FC
    r3 = r31;
    r12 = *(0x2c + r12); // lwz @ 0x808AB704
    /* mtctr r12 */ // 0x808AB708
    /* bctrl  */ // 0x808AB70C
    /* rlwinm. r0, r3, 0, 0x1c, 0x1c */ // 0x808AB710
    if (==) goto 0x0x808ab730;
    r3 = *(0x28 + r30); // lhz @ 0x808AB718
    r4 = *(0x2c + r30); // lwz @ 0x808AB71C
    /* slwi r0, r3, 2 */ // 0x808AB720
    r3 = r3 + 1; // 0x808AB724
    /* stwx r31, r4, r0 */ // 0x808AB728
    *(0x28 + r30) = r3; // sth @ 0x808AB72C
    r12 = *(0 + r31); // lwz @ 0x808AB730
    r3 = r31;
    r12 = *(0x2c + r12); // lwz @ 0x808AB738
    /* mtctr r12 */ // 0x808AB73C
    /* bctrl  */ // 0x808AB740
    /* rlwinm. r0, r3, 0, 0x1e, 0x1e */ // 0x808AB744
    if (==) goto 0x0x808ab764;
    r3 = *(0x30 + r30); // lhz @ 0x808AB74C
    r4 = *(0x34 + r30); // lwz @ 0x808AB750
    /* slwi r0, r3, 2 */ // 0x808AB754
    r3 = r3 + 1; // 0x808AB758
    /* stwx r31, r4, r0 */ // 0x808AB75C
    *(0x30 + r30) = r3; // sth @ 0x808AB760
    r12 = *(0 + r31); // lwz @ 0x808AB764
    r3 = r31;
    r12 = *(0x24 + r12); // lwz @ 0x808AB76C
    /* mtctr r12 */ // 0x808AB770
    /* bctrl  */ // 0x808AB774
    /* lis r4, 0 */ // 0x808AB778
    r0 = r3 rlwinm 1; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x808AB780
    r4 = *(4 + r3); // lwz @ 0x808AB784
    r3 = *(0xc + r4); // lwz @ 0x808AB788
    r4 = *(8 + r4); // lwz @ 0x808AB78C
    /* lhax r0, r3, r0 */ // 0x808AB790
    /* mulli r0, r0, 0x74 */ // 0x808AB794
    r3 = r4 + r0; // 0x808AB798
    r0 = *(0x6a + r3); // lha @ 0x808AB79C
    if (==) goto 0x0x808ab7dc;
    r12 = *(0 + r31); // lwz @ 0x808AB7A8
    r3 = r31;
    r12 = *(0xb4 + r12); // lwz @ 0x808AB7B0
    /* mtctr r12 */ // 0x808AB7B4
    /* bctrl  */ // 0x808AB7B8
    if (==) goto 0x0x808ab7dc;
    r3 = *(0x38 + r30); // lhz @ 0x808AB7C4
    r4 = *(0x3c + r30); // lwz @ 0x808AB7C8
    /* slwi r0, r3, 2 */ // 0x808AB7CC
    r3 = r3 + 1; // 0x808AB7D0
    /* stwx r31, r4, r0 */ // 0x808AB7D4
    *(0x38 + r30) = r3; // sth @ 0x808AB7D8
    r0 = *(0x18 + r30); // lhz @ 0x808AB7DC
    r3 = *(0x1c + r30); // lwz @ 0x808AB7E0
    /* slwi r0, r0, 2 */ // 0x808AB7E4
    /* stwx r31, r3, r0 */ // 0x808AB7E8
    r0 = *(0x18 + r30); // lhz @ 0x808AB7EC
    *(0xa4 + r31) = r0; // stw @ 0x808AB7F0
    r3 = *(0x18 + r30); // lhz @ 0x808AB7F4
    r0 = r3 + 1; // 0x808AB7F8
    *(0x18 + r30) = r0; // sth @ 0x808AB7FC
    /* clrlwi r3, r0, 0x10 */ // 0x808AB800
    r3 = r3 + -1; // 0x808AB804
    r0 = *(0x14 + r1); // lwz @ 0x808AB808
    r31 = *(0xc + r1); // lwz @ 0x808AB80C
    r30 = *(8 + r1); // lwz @ 0x808AB810
    return;
}