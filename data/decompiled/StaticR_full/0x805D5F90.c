/* Function at 0x805D5F90, size=12 bytes */
/* Stack frame: 0 bytes */

void FUN_805D5F90(int r3)
{
    /* addis r3, r3, 1 */ // 0x805D5F90
    r3 = *(-0x6d98 + r3); // lbz @ 0x805D5F94
    return;
}