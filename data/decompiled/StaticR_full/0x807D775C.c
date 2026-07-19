/* Function at 0x807D775C, size=132 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807D775C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807D7770
    r3 = *(0x1f0 + r3); // lwz @ 0x807D7774
    r3 = *(0 + r3); // lwz @ 0x807D7778
    FUN_8061E2D8(); // bl 0x8061E2D8
    /* lis r30, 0 */ // 0x807D7780
    r0 = r3 rlwinm 2; // rlwinm
    r4 = *(0 + r30); // lwz @ 0x807D7788
    r3 = r31;
    r4 = *(0xc + r4); // lwz @ 0x807D7790
    /* lwzx r4, r4, r0 */ // 0x807D7794
    r31 = *(0x20 + r4); // lbz @ 0x807D7798
    FUN_8061E2D8(r3); // bl 0x8061E2D8
    r4 = *(0 + r30); // lwz @ 0x807D77A0
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0xc + r4); // lwz @ 0x807D77A8
    /* lwzx r3, r3, r0 */ // 0x807D77AC
    r4 = *(0x20 + r3); // lbz @ 0x807D77B0
    r0 = r4 ^ r31; // 0x807D77B4
    r31 = *(0xc + r1); // lwz @ 0x807D77B8
    r3 = r0 >> 1; // srawi
    r30 = *(8 + r1); // lwz @ 0x807D77C0
    r0 = r0 & r4; // 0x807D77C4
    /* subf r0, r0, r3 */ // 0x807D77C8
    /* srwi r3, r0, 0x1f */ // 0x807D77CC
    r0 = *(0x14 + r1); // lwz @ 0x807D77D0
    return;
}