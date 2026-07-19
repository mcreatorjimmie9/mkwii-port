/* Function at 0x805D6054, size=12 bytes */
/* Stack frame: 0 bytes */

void FUN_805D6054(int r3)
{
    /* addis r3, r3, 1 */ // 0x805D6054
    r3 = *(-0x6d90 + r3); // lwz @ 0x805D6058
    return;
}