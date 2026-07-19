/* Function at 0x805D6174, size=12 bytes */
/* Stack frame: 0 bytes */

void FUN_805D6174(int r3)
{
    /* addis r3, r3, 1 */ // 0x805D6174
    r3 = *(-0x6d70 + r3); // lwz @ 0x805D6178
    return;
}