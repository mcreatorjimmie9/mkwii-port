/* Function at 0x805D6A00, size=16 bytes */
/* Stack frame: 0 bytes */

int FUN_805D6A00(int r3, int r4)
{
    /* addis r0, r3, 1 */ // 0x805D6A00
    r3 = r0 + r4; // 0x805D6A04
    r3 = *(-0x6c16 + r3); // lbz @ 0x805D6A08
    return;
}