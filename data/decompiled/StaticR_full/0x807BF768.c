/* Function at 0x807BF768, size=200 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807BF768(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807BF774
    r31 = r3;
    r4 = *(4 + r3); // lwz @ 0x807BF77C
    r3 = *(0 + r4); // lwz @ 0x807BF780
    r3 = *(0x10 + r3); // lwz @ 0x807BF784
    r3 = *(0x144 + r3); // lwz @ 0x807BF788
    r12 = *(0x34 + r3); // lwz @ 0x807BF78C
    r12 = *(0x44 + r12); // lwz @ 0x807BF790
    /* mtctr r12 */ // 0x807BF794
    /* bctrl  */ // 0x807BF798
    r4 = *(4 + r31); // lwz @ 0x807BF79C
    r4 = *(0 + r4); // lwz @ 0x807BF7A0
    r4 = *(0 + r4); // lwz @ 0x807BF7A4
    r4 = *(4 + r4); // lwz @ 0x807BF7A8
    r5 = *(4 + r4); // lwz @ 0x807BF7AC
    /* rlwinm. r0, r5, 0, 8, 8 */ // 0x807BF7B0
    if (==) goto 0x0x807bf7d4;
    /* rlwinm. r0, r5, 0, 1, 1 */ // 0x807BF7B8
    if (!=) goto 0x0x807bf7d4;
    r0 = *(8 + r4); // lwz @ 0x807BF7C0
    /* clrlwi. r0, r0, 0x1f */ // 0x807BF7C4
    if (!=) goto 0x0x807bf7d4;
    /* li r0, 1 */ // 0x807BF7CC
    /* b 0x807bf7d8 */ // 0x807BF7D0
    /* li r0, 0 */ // 0x807BF7D4
    if (==) goto 0x0x807bf800;
    r12 = *(0 + r3); // lwz @ 0x807BF7E0
    r12 = *(0x24 + r12); // lwz @ 0x807BF7E4
    /* mtctr r12 */ // 0x807BF7E8
    /* bctrl  */ // 0x807BF7EC
    if (==) goto 0x0x807bf800;
    /* li r0, 1 */ // 0x807BF7F8
    /* b 0x807bf804 */ // 0x807BF7FC
    /* li r0, 0 */ // 0x807BF800
    if (==) goto 0x0x807bf81c;
    r3 = *(4 + r31); // lwz @ 0x807BF80C
    /* li r4, 1 */ // 0x807BF810
    r3 = *(4 + r3); // lwz @ 0x807BF814
    FUN_805AE794(r4); // bl 0x805AE794
    r0 = *(0x14 + r1); // lwz @ 0x807BF81C
    r31 = *(0xc + r1); // lwz @ 0x807BF820
    return;
}