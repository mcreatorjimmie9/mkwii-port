/* Function at 0x805D0FE0, size=16 bytes */
/* Stack frame: 0 bytes */

int FUN_805D0FE0(int r3, int r4)
{
    /* mulli r0, r4, 0x18 */ // 0x805D0FE0
    r3 = r3 + r0; // 0x805D0FE4
    r3 = *(0x5b0 + r3); // lwz @ 0x805D0FE8
    return;
}