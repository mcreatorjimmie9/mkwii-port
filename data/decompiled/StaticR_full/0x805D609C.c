/* Function at 0x805D609C, size=12 bytes */
/* Stack frame: 0 bytes */

void FUN_805D609C(int r3)
{
    /* addis r3, r3, 1 */ // 0x805D609C
    r3 = *(-0x6d88 + r3); // lwz @ 0x805D60A0
    return;
}