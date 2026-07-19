/* Function at 0x806F8AB8, size=12 bytes */
/* Stack frame: 0 bytes */

void FUN_806F8AB8(int r3)
{
    /* addis r3, r3, 1 */ // 0x806F8AB8
    r3 = *(-0x7650 + r3); // lbz @ 0x806F8ABC
    return;
}