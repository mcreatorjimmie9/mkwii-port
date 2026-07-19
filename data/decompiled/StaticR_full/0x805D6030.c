/* Function at 0x805D6030, size=12 bytes */
/* Stack frame: 0 bytes */

void FUN_805D6030(int r3)
{
    /* addis r3, r3, 1 */ // 0x805D6030
    r3 = *(-0x6d94 + r3); // lwz @ 0x805D6034
    return;
}