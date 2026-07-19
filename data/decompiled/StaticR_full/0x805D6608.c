/* Function at 0x805D6608, size=20 bytes */
/* Stack frame: 0 bytes */

int FUN_805D6608(int r3, int r4)
{
    /* addis r3, r3, 1 */ // 0x805D6608
    /* slwi r0, r4, 2 */ // 0x805D660C
    r3 = r3 + r0; // 0x805D6610
    r3 = r3 + -0x6ff4; // 0x805D6614
    return;
}