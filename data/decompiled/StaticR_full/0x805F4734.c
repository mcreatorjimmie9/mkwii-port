/* Function at 0x805F4734, size=188 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_805F4734(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x805F4744
    /* lis r30, 0 */ // 0x805F4748
    r0 = *(0 + r30); // lwz @ 0x805F474C
    /* rlwinm. r0, r0, 0, 0x1b, 0x1b */ // 0x805F4750
    if (==) goto 0x0x805f47e4;
    /* lis r31, 0 */ // 0x805F4758
    r3 = *(0 + r31); // lwz @ 0x805F475C
    r12 = *(0 + r3); // lwz @ 0x805F4760
    r12 = *(8 + r12); // lwz @ 0x805F4764
    /* mtctr r12 */ // 0x805F4768
    /* bctrl  */ // 0x805F476C
    r4 = *(0 + r3); // lwz @ 0x805F4770
    r3 = *(0 + r31); // lwz @ 0x805F4774
    r31 = *(6 + r4); // lhz @ 0x805F4778
    r12 = *(0 + r3); // lwz @ 0x805F477C
    r12 = *(8 + r12); // lwz @ 0x805F4780
    /* mtctr r12 */ // 0x805F4784
    /* bctrl  */ // 0x805F4788
    r3 = *(0 + r3); // lwz @ 0x805F478C
    r4 = r31 + -0x1c8; // 0x805F4790
    /* srwi r0, r4, 0x1f */ // 0x805F4794
    /* lis r5, 0 */ // 0x805F4798
    r7 = *(4 + r3); // lhz @ 0x805F479C
    r0 = r0 + r4; // 0x805F47A0
    r3 = *(0 + r5); // lwz @ 0x805F47A4
    r5 = r0 rlwinm 0x1f; // rlwinm
    r4 = r7 + -0x200; // 0x805F47AC
    /* li r6, 0 */ // 0x805F47B0
    /* srwi r0, r4, 0x1f */ // 0x805F47B4
    /* li r7, 1 */ // 0x805F47B8
    r0 = r0 + r4; // 0x805F47BC
    /* li r8, 1 */ // 0x805F47C0
    r4 = r0 rlwinm 0x1f; // rlwinm
    FUN_805F3AD0(r7, r8); // bl 0x805F3AD0
    /* lis r3, 0 */ // 0x805F47CC
    r3 = *(0 + r3); // lwz @ 0x805F47D0
    FUN_805E3430(r8, r3); // bl 0x805E3430
    r0 = *(0 + r30); // lwz @ 0x805F47D8
    r0 = r0 rlwinm 0; // rlwinm
    *(0 + r30) = r0; // stw @ 0x805F47E0
    r0 = *(0x14 + r1); // lwz @ 0x805F47E4
    r31 = *(0xc + r1); // lwz @ 0x805F47E8
    r30 = *(8 + r1); // lwz @ 0x805F47EC
}