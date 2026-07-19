/* Function at 0x805C6814, size=100 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805C6814(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x805C6828
    r30 = r4;
    r0 = *(4 + r3); // lhz @ 0x805C6830
    *(8 + r1) = r0; // sth @ 0x805C6834
    r12 = *(0 + r3); // lwz @ 0x805C6838
    r12 = *(0x14 + r12); // lwz @ 0x805C683C
    /* mtctr r12 */ // 0x805C6840
    /* bctrl  */ // 0x805C6844
    r4 = r3;
    r5 = r30;
    r6 = r31;
    /* li r7, 2 */ // 0x805C6858
    FUN_805BC798(r4, r5, r6, r3, r7); // bl 0x805BC798
    r0 = *(0x24 + r1); // lwz @ 0x805C6860
    r31 = *(0x1c + r1); // lwz @ 0x805C6864
    r30 = *(0x18 + r1); // lwz @ 0x805C6868
    return;
}