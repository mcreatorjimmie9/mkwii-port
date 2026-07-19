/* Function at 0x807C3610, size=152 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807C3610(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x807C3620
    r30 = r3;
    r4 = *(4 + r3); // lwz @ 0x807C3628
    r3 = *(0 + r4); // lwz @ 0x807C362C
    FUN_8061E2D8(); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x807C3634
    r31 = r3 rlwinm 2; // rlwinm
    r4 = *(0 + r4); // lwz @ 0x807C363C
    /* lis r3, 0 */ // 0x807C3640
    r4 = *(0xc + r4); // lwz @ 0x807C3644
    /* lwzx r4, r4, r31 */ // 0x807C3648
    r0 = *(0x20 + r4); // lbz @ 0x807C364C
    *(0x14 + r30) = r0; // stw @ 0x807C3650
    r3 = *(0 + r3); // lwz @ 0x807C3654
    r3 = *(0x20 + r3); // lwz @ 0x807C3658
    if (==) goto 0x0x807c366c;
    FUN_805A1F9C(); // bl 0x805A1F9C
    /* b 0x807c3674 */ // 0x807C3668
    /* lis r3, 0 */ // 0x807C366C
    /* lfs f1, 0(r3) */ // 0x807C3670
    /* lis r3, 0 */ // 0x807C3674
    r3 = *(0 + r3); // lwz @ 0x807C3678
    r3 = *(0xc + r3); // lwz @ 0x807C367C
    /* lwzx r3, r3, r31 */ // 0x807C3680
    /* lfs f0, 0xc(r3) */ // 0x807C3684
    /* fmuls f0, f0, f1 */ // 0x807C3688
    /* stfs f0, 0x20(r30) */ // 0x807C368C
    r31 = *(0xc + r1); // lwz @ 0x807C3690
    r30 = *(8 + r1); // lwz @ 0x807C3694
    r0 = *(0x14 + r1); // lwz @ 0x807C3698
    return;
}