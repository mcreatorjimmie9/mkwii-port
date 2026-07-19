/* Function at 0x805D6150, size=12 bytes */
/* Stack frame: 0 bytes */

void FUN_805D6150(int r3)
{
    /* addis r3, r3, 1 */ // 0x805D6150
    r3 = *(-0x6d74 + r3); // lwz @ 0x805D6154
    return;
}