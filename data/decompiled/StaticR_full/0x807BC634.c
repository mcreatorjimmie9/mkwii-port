/* Function at 0x807BC634, size=164 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_807BC634(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x807BC63C
    /* lfs f2, 0(r4) */ // 0x807BC644
    *(0x1c + r1) = r31; // stw @ 0x807BC648
    r31 = r3;
    /* fctiwz f1, f2 */ // 0x807BC650
    *(0x18 + r1) = r30; // stw @ 0x807BC654
    r5 = *(0x140 + r3); // lwz @ 0x807BC658
    r4 = *(0x150 + r3); // lwz @ 0x807BC65C
    r30 = *(0 + r5); // lwz @ 0x807BC660
    r0 = *(0xc + r5); // lhz @ 0x807BC664
    *(4 + r4) = r0; // sth @ 0x807BC668
    /* lfs f0, 0x10(r5) */ // 0x807BC66C
    /* stfd f1, 8(r1) */ // 0x807BC670
    /* fmuls f0, f2, f0 */ // 0x807BC674
    r3 = *(0x150 + r3); // lwz @ 0x807BC678
    r4 = *(0xc + r1); // lwz @ 0x807BC67C
    /* fctiwz f0, f0 */ // 0x807BC680
    /* stfd f0, 0x10(r1) */ // 0x807BC684
    r0 = *(0x14 + r1); // lwz @ 0x807BC688
    r4 = r4 + r0; // 0x807BC68C
    /* clrlwi r4, r4, 0x18 */ // 0x807BC690
    FUN_805AE614(); // bl 0x805AE614
    r31 = *(0x150 + r31); // lwz @ 0x807BC698
    r3 = r30;
    FUN_8061E2D8(r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x807BC6A4
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x807BC6AC
    r4 = r31;
    r3 = *(0xc + r3); // lwz @ 0x807BC6B4
    /* lwzx r3, r3, r0 */ // 0x807BC6B8
    FUN_805C4C70(r4); // bl 0x805C4C70
    r0 = *(0x24 + r1); // lwz @ 0x807BC6C0
    r31 = *(0x1c + r1); // lwz @ 0x807BC6C4
    r30 = *(0x18 + r1); // lwz @ 0x807BC6C8
    return;
}