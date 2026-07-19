/* Function at 0x805D67B0, size=208 bytes */
/* Stack frame: 0 bytes */

int FUN_805D67B0(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* lis r7, 1 */ // 0x805D67B0
    r0 = *(0xa + r4); // lbz @ 0x805D67B4
    r7 = r7 + -0x7340; // 0x805D67B8
    r6 = r6 * r7; // 0x805D67BC
    r3 = r3 + r6; // 0x805D67C4
    r7 = r3 + 8; // 0x805D67C8
    if (==) goto 0x0x805d6868;
    r8 = r5 rlwinm 3; // rlwinm
    r3 = *(4 + r4); // lhz @ 0x805D67D4
    r6 = r7 + r8; // 0x805D67D8
    /* li r5, 0x63 */ // 0x805D67DC
    r0 = *(0x5630 + r6); // lwz @ 0x805D67E0
    r0 = r0 | 0x8000; // 0x805D67E8
    *(0x5630 + r6) = r0; // stw @ 0x805D67EC
    if (>) goto 0x0x805d67f8;
    r5 = r3;
    r0 = *(4 + r4); // lhz @ 0x805D67F8
    r3 = *(0x5630 + r6); // lwz @ 0x805D67FC
    r3 = r5 rlwimi 0x18; // rlwimi
    *(0x5630 + r6) = r3; // stw @ 0x805D6808
    if (<=) goto 0x0x805d6818;
    /* li r5, 0x3b */ // 0x805D6810
    /* b 0x805d681c */ // 0x805D6814
    r5 = *(6 + r4); // lbz @ 0x805D6818
    r0 = *(4 + r4); // lhz @ 0x805D681C
    r3 = *(0x5630 + r6); // lwz @ 0x805D6820
    r3 = r5 rlwimi 0x11; // rlwimi
    *(0x5630 + r6) = r3; // stw @ 0x805D682C
    if (<=) goto 0x0x805d683c;
    /* li r0, 0x3e7 */ // 0x805D6834
    /* b 0x805d6840 */ // 0x805D6838
    r0 = *(8 + r4); // lhz @ 0x805D683C
    r6 = r7 + r8; // 0x805D6840
    r3 = *(0xc + r4); // lwz @ 0x805D6844
    r5 = *(0x5630 + r6); // lwz @ 0x805D6848
    r5 = r0 rlwimi 7; // rlwimi
    *(0x5630 + r6) = r5; // stw @ 0x805D6850
    r0 = *(0x10 + r4); // lwz @ 0x805D6854
    *(0x5634 + r6) = r3; // stw @ 0x805D6858
    r5 = r0 rlwimi 4; // rlwimi
    *(0x5630 + r6) = r5; // stw @ 0x805D6860
    return;
    r0 = r5 rlwinm 3; // rlwinm
    r3 = r7 + r0; // 0x805D686C
    r0 = *(0x5630 + r3); // lwz @ 0x805D6870
    /* clrlwi r0, r0, 1 */ // 0x805D6874
    *(0x5630 + r3) = r0; // stw @ 0x805D6878
    return;
}