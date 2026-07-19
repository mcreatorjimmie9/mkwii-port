/* Function at 0x805D5EE8, size=52 bytes */
/* Stack frame: 0 bytes */

int FUN_805D5EE8(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* lis r6, 1 */ // 0x805D5EE8
    r7 = *(4 + r4); // lwz @ 0x805D5EEC
    r0 = r6 + -0x7340; // 0x805D5EF0
    r6 = *(8 + r4); // lwz @ 0x805D5EF4
    r8 = r5 * r0; // 0x805D5EF8
    r5 = *(0xc + r4); // lwz @ 0x805D5EFC
    r0 = *(0x10 + r4); // lwz @ 0x805D5F00
    r3 = r3 + r8; // 0x805D5F04
    *(0x38 + r3) = r7; // stw @ 0x805D5F08
    *(0x3c + r3) = r6; // stw @ 0x805D5F0C
    *(0x40 + r3) = r5; // stw @ 0x805D5F10
    *(0x44 + r3) = r0; // stw @ 0x805D5F14
    return;
}