/* Function at 0x806E16C0, size=296 bytes */
/* Stack frame: 224 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_806E16C0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -224(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r30, 0 */ // 0x806E16D4
    *(0xd4 + r1) = r29; // stw @ 0x806E16D8
    r29 = r3;
    FUN_80654ECC(r3); // bl 0x80654ECC
    /* lis r3, 0 */ // 0x806E16E8
    /* li r5, 0 */ // 0x806E16EC
    r3 = *(0 + r3); // lwz @ 0x806E16F0
    r0 = *(0xb70 + r3); // lwz @ 0x806E16F4
    if (==) goto 0x0x806e170c;
    if (==) goto 0x0x806e1768;
    /* b 0x806e17a4 */ // 0x806E1708
    r0 = *(0xb6c + r3); // lwz @ 0x806E170C
    /* lis r4, 0 */ // 0x806E1710
    r6 = *(0xb90 + r3); // lwz @ 0x806E1714
    r4 = r4 + 0; // 0x806E1718
    r3 = r6 rlwinm 0x1f; // rlwinm
    r5 = r4 + 0x12c; // 0x806E1724
    r30 = r3 + 0x599; // 0x806E1728
    if (==) goto 0x0x806e173c;
    if (==) goto 0x0x806e1748;
    /* b 0x806e17a4 */ // 0x806E1738
    /* li r0, 0x58a */ // 0x806E173C
    *(0x2c + r1) = r0; // stw @ 0x806E1740
    /* b 0x806e17a4 */ // 0x806E1744
    /* clrlwi. r0, r6, 0x1f */ // 0x806E1748
    if (==) goto 0x0x806e175c;
    /* li r0, 0x58c */ // 0x806E1750
    *(0x2c + r1) = r0; // stw @ 0x806E1754
    /* b 0x806e17a4 */ // 0x806E1758
    /* li r0, 0x58b */ // 0x806E175C
    *(0x2c + r1) = r0; // stw @ 0x806E1760
    /* b 0x806e17a4 */ // 0x806E1764
    r0 = *(0xb78 + r3); // lwz @ 0x806E1768
    if (==) goto 0x0x806e1780;
    if (==) goto 0x0x806e1794;
    /* b 0x806e17a4 */ // 0x806E177C
    /* lis r3, 0 */ // 0x806E1780
    /* li r30, 0x587 */ // 0x806E1784
    r3 = r3 + 0; // 0x806E1788
    r5 = r3 + 0x139; // 0x806E178C
    /* b 0x806e17a4 */ // 0x806E1790
    /* lis r3, 0 */ // 0x806E1794
    /* li r30, 0x588 */ // 0x806E1798
    r3 = r3 + 0; // 0x806E179C
    r5 = r3 + 0x149; // 0x806E17A0
    /* lis r31, 0 */ // 0x806E17A4
    r3 = r29 + 0x19c; // 0x806E17A8
    r31 = r31 + 0; // 0x806E17AC
    r4 = r31 + 0x156; // 0x806E17B0
    FUN_806A0D70(r5, r3, r4); // bl 0x806A0D70
    r5 = r30;
    r3 = r29 + 0x19c; // 0x806E17BC
    r4 = r31 + 0x15f; // 0x806E17C0
    FUN_806A093C(r5, r3, r4, r6); // bl 0x806A093C
    r0 = *(0xe4 + r1); // lwz @ 0x806E17CC
    r31 = *(0xdc + r1); // lwz @ 0x806E17D0
    r30 = *(0xd8 + r1); // lwz @ 0x806E17D4
    r29 = *(0xd4 + r1); // lwz @ 0x806E17D8
    return;
}