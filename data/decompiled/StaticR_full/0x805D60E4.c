/* Function at 0x805D60E4, size=12 bytes */
/* Stack frame: 0 bytes */

void FUN_805D60E4(int r3)
{
    /* addis r3, r3, 1 */ // 0x805D60E4
    r3 = *(-0x6d80 + r3); // lwz @ 0x805D60E8
    return;
}