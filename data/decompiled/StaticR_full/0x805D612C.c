/* Function at 0x805D612C, size=12 bytes */
/* Stack frame: 0 bytes */

void FUN_805D612C(int r3)
{
    /* addis r3, r3, 1 */ // 0x805D612C
    r3 = *(-0x6d78 + r3); // lwz @ 0x805D6130
    return;
}