/* Function at 0x805D6108, size=12 bytes */
/* Stack frame: 0 bytes */

void FUN_805D6108(int r3)
{
    /* addis r3, r3, 1 */ // 0x805D6108
    r3 = *(-0x6d7c + r3); // lwz @ 0x805D610C
    return;
}