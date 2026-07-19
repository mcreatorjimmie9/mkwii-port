/* Function at 0x805D5F40, size=12 bytes */
/* Stack frame: 0 bytes */

void FUN_805D5F40(int r3)
{
    /* addis r3, r3, 1 */ // 0x805D5F40
    r3 = *(-0x6da0 + r3); // lwz @ 0x805D5F44
    return;
}