/* Function at 0x805C6B64, size=100 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805C6B64(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x805C6B78
    r30 = r4;
    r0 = *(4 + r3); // lbz @ 0x805C6B80
    *(8 + r1) = r0; // stb @ 0x805C6B84
    r12 = *(0 + r3); // lwz @ 0x805C6B88
    r12 = *(0x14 + r12); // lwz @ 0x805C6B8C
    /* mtctr r12 */ // 0x805C6B90
    /* bctrl  */ // 0x805C6B94
    r4 = r3;
    r5 = r30;
    r6 = r31;
    /* li r7, 1 */ // 0x805C6BA8
    FUN_805BC798(r4, r5, r6, r3, r7); // bl 0x805BC798
    r0 = *(0x24 + r1); // lwz @ 0x805C6BB0
    r31 = *(0x1c + r1); // lwz @ 0x805C6BB4
    r30 = *(0x18 + r1); // lwz @ 0x805C6BB8
    return;
}