/* Function at 0x805D5FBC, size=12 bytes */
/* Stack frame: 0 bytes */

void FUN_805D5FBC(int r3)
{
    /* addis r3, r3, 1 */ // 0x805D5FBC
    r3 = *(-0x6c68 + r3); // lbz @ 0x805D5FC0
    return;
}