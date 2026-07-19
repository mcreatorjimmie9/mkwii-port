/* Function at 0x805D60C0, size=12 bytes */
/* Stack frame: 0 bytes */

void FUN_805D60C0(int r3)
{
    /* addis r3, r3, 1 */ // 0x805D60C0
    r3 = *(-0x6d84 + r3); // lwz @ 0x805D60C4
    return;
}