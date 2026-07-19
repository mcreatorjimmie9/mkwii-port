/* Function at 0x806D1620, size=424 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 8 function(s) */

int FUN_806D1620(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x806D163C
    r28 = r3;
    r5 = *(0x240 + r4); // lwz @ 0x806D1644
    *(0xee8 + r3) = r5; // stw @ 0x806D1648
    r0 = *(0x240 + r4); // lwz @ 0x806D164C
    if (<) goto 0x0x806d1794;
    /* slwi r0, r5, 2 */ // 0x806D1658
    r3 = r3 + r0; // 0x806D165C
    r0 = *(0xed8 + r3); // lwz @ 0x806D1660
    if (==) goto 0x0x806d177c;
    /* lis r3, 0 */ // 0x806D166C
    r3 = *(0 + r3); // lwz @ 0x806D1670
    r3 = *(0 + r3); // lwz @ 0x806D1674
    r30 = *(0x140 + r3); // lwz @ 0x806D1678
    if (!=) goto 0x0x806d168c;
    /* li r30, 0 */ // 0x806D1684
    /* b 0x806d16e0 */ // 0x806D1688
    /* lis r31, 0 */ // 0x806D168C
    r31 = r31 + 0; // 0x806D1690
    if (==) goto 0x0x806d16dc;
    r12 = *(0 + r30); // lwz @ 0x806D1698
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806D16A0
    /* mtctr r12 */ // 0x806D16A4
    /* bctrl  */ // 0x806D16A8
    /* b 0x806d16c4 */ // 0x806D16AC
    if (!=) goto 0x0x806d16c0;
    /* li r0, 1 */ // 0x806D16B8
    /* b 0x806d16d0 */ // 0x806D16BC
    r3 = *(0 + r3); // lwz @ 0x806D16C0
    if (!=) goto 0x0x806d16b0;
    /* li r0, 0 */ // 0x806D16CC
    if (==) goto 0x0x806d16dc;
    /* b 0x806d16e0 */ // 0x806D16D8
    /* li r30, 0 */ // 0x806D16DC
    r12 = *(0 + r30); // lwz @ 0x806D16E0
    r3 = r30;
    r12 = *(0x64 + r12); // lwz @ 0x806D16E8
    /* mtctr r12 */ // 0x806D16EC
    /* bctrl  */ // 0x806D16F0
    r0 = *(0xee8 + r28); // lwz @ 0x806D16F4
    r3 = r30;
    /* li r5, 0 */ // 0x806D16FC
    /* slwi r0, r0, 2 */ // 0x806D1700
    r4 = r28 + r0; // 0x806D1704
    r4 = *(0xed8 + r4); // lwz @ 0x806D1708
    FUN_806B2C88(r3, r5); // bl 0x806B2C88
    r3 = r30;
    /* li r4, 0 */ // 0x806D1714
    /* li r5, 0x7d2 */ // 0x806D1718
    /* li r6, 0 */ // 0x806D171C
    /* li r7, -1 */ // 0x806D1720
    /* li r8, 0 */ // 0x806D1724
    FUN_806B2C90(r4, r5, r6, r7, r8); // bl 0x806B2C90
    r3 = r30;
    /* li r4, 1 */ // 0x806D1730
    /* li r5, 0x7d3 */ // 0x806D1734
    /* li r6, 0 */ // 0x806D1738
    /* li r7, -1 */ // 0x806D173C
    /* li r8, 0 */ // 0x806D1740
    FUN_806B2C90(r4, r5, r6, r7, r8); // bl 0x806B2C90
    /* li r0, 1 */ // 0x806D1748
    *(0x27c + r30) = r0; // stw @ 0x806D174C
    r3 = r28;
    /* li r4, 0x4e */ // 0x806D1754
    r12 = *(0 + r28); // lwz @ 0x806D1758
    /* li r5, 0 */ // 0x806D175C
    r12 = *(0x24 + r12); // lwz @ 0x806D1760
    /* mtctr r12 */ // 0x806D1764
    /* bctrl  */ // 0x806D1768
    r3 = r29;
    /* li r4, 0 */ // 0x806D1770
    FUN_8064A82C(r3, r4); // bl 0x8064A82C
    /* b 0x806d17a8 */ // 0x806D1778
    r3 = r29;
    FUN_8064A384(r3, r4, r3); // bl 0x8064A384
    r3 = r28;
    /* li r4, 0 */ // 0x806D1788
    FUN_80671C48(r3, r3, r4); // bl 0x80671C48
    /* b 0x806d17a8 */ // 0x806D1790
    r3 = r29;
    FUN_8064A384(r3, r4, r3); // bl 0x8064A384
    r3 = r28;
    /* li r4, 1 */ // 0x806D17A0
    FUN_80671C48(r3, r3, r4); // bl 0x80671C48
    r0 = *(0x24 + r1); // lwz @ 0x806D17A8
    r31 = *(0x1c + r1); // lwz @ 0x806D17AC
    r30 = *(0x18 + r1); // lwz @ 0x806D17B0
    r29 = *(0x14 + r1); // lwz @ 0x806D17B4
    r28 = *(0x10 + r1); // lwz @ 0x806D17B8
    return;
}