/* Function at 0x805D6078, size=12 bytes */
/* Stack frame: 0 bytes */

void FUN_805D6078(int r3)
{
    /* addis r3, r3, 1 */ // 0x805D6078
    r3 = *(-0x6d8c + r3); // lwz @ 0x805D607C
    return;
}