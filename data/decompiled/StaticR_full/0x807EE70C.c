/* Function at 0x807EE70C, size=100 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_807EE70C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x807EE714
    /* lfs f1, 0(r4) */ // 0x807EE71C
    /* li r4, 0 */ // 0x807EE720
    *(0xc + r1) = r31; // stw @ 0x807EE724
    /* li r31, 1 */ // 0x807EE728
    *(8 + r1) = r30; // stw @ 0x807EE72C
    r30 = r3;
    *(0xc8 + r3) = r31; // stw @ 0x807EE734
    *(0xb0 + r3) = r31; // stw @ 0x807EE738
    r3 = *(0x20 + r3); // lwz @ 0x807EE73C
    r12 = *(0 + r3); // lwz @ 0x807EE740
    r12 = *(0x10 + r12); // lwz @ 0x807EE744
    /* mtctr r12 */ // 0x807EE748
    /* bctrl  */ // 0x807EE74C
    r3 = *(0x20 + r30); // lwz @ 0x807EE750
    *(0x17 + r3) = r31; // stb @ 0x807EE754
    r31 = *(0xc + r1); // lwz @ 0x807EE758
    r30 = *(8 + r1); // lwz @ 0x807EE75C
    r0 = *(0x14 + r1); // lwz @ 0x807EE760
    return;
}