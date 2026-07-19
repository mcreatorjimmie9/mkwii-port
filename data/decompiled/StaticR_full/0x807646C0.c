/* Function at 0x807646C0, size=160 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_807646C0(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x807646D0
    /* lfs f2, 0(r31) */ // 0x807646D4
    *(0x18 + r1) = r30; // stw @ 0x807646D8
    /* lis r30, 0 */ // 0x807646DC
    /* lfs f1, 0(r30) */ // 0x807646E0
    *(0x14 + r1) = r29; // stw @ 0x807646E4
    r29 = r3;
    r4 = *(8 + r3); // lwz @ 0x807646EC
    r3 = *(0x28 + r4); // lwz @ 0x807646F0
    /* li r4, 2 */ // 0x807646F4
    FUN_805E70EC(r4); // bl 0x805E70EC
    r3 = *(8 + r29); // lwz @ 0x807646FC
    /* li r4, 0 */ // 0x80764700
    r3 = *(0x28 + r3); // lwz @ 0x80764704
    FUN_805E7060(r4, r4); // bl 0x805E7060
    r12 = *(0 + r3); // lwz @ 0x8076470C
    r12 = *(0xc + r12); // lwz @ 0x80764710
    /* mtctr r12 */ // 0x80764714
    /* bctrl  */ // 0x80764718
    r3 = *(0xd4 + r29); // lwz @ 0x8076471C
    /* li r4, 2 */ // 0x80764720
    /* lfs f2, 0(r31) */ // 0x80764724
    r3 = *(8 + r3); // lwz @ 0x80764728
    r3 = *(0x28 + r3); // lwz @ 0x8076472C
    FUN_805E70EC(r4); // bl 0x805E70EC
    /* lfs f1, 0(r30) */ // 0x80764734
    r3 = r29;
    /* li r4, 0x2c2 */ // 0x8076473C
    FUN_808A0A88(r3, r4); // bl 0x808A0A88
    r0 = *(0x24 + r1); // lwz @ 0x80764744
    r31 = *(0x1c + r1); // lwz @ 0x80764748
    r30 = *(0x18 + r1); // lwz @ 0x8076474C
    r29 = *(0x14 + r1); // lwz @ 0x80764750
    return;
}