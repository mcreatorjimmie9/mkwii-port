/* Function at 0x805D6AD0, size=12 bytes */
/* Stack frame: 0 bytes */

void FUN_805D6AD0(int r3)
{
    /* addis r3, r3, 1 */ // 0x805D6AD0
    r3 = *(-0x6c67 + r3); // lbz @ 0x805D6AD4
    return;
}