/* Function at 0x805D5F64, size=12 bytes */
/* Stack frame: 0 bytes */

void FUN_805D5F64(int r3)
{
    /* addis r3, r3, 1 */ // 0x805D5F64
    r3 = *(-0x6d9c + r3); // lwz @ 0x805D5F68
    return;
}