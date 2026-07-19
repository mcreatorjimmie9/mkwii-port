/* Function at 0x805D5B18, size=12 bytes */
/* Stack frame: 0 bytes */

void FUN_805D5B18(int r3)
{
    /* addis r3, r3, 1 */ // 0x805D5B18
    r3 = *(-0x6c13 + r3); // lbz @ 0x805D5B1C
    return;
}