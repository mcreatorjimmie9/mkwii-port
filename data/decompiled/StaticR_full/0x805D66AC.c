/* Function at 0x805D66AC, size=20 bytes */
/* Stack frame: 0 bytes */

int FUN_805D66AC(int r3, int r4)
{
    /* addis r3, r3, 1 */ // 0x805D66AC
    /* slwi r0, r4, 2 */ // 0x805D66B0
    r3 = r3 + r0; // 0x805D66B4
    r3 = *(-0x6ec8 + r3); // lwz @ 0x805D66B8
    return;
}