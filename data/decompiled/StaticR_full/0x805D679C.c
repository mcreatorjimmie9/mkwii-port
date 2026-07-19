/* Function at 0x805D679C, size=20 bytes */
/* Stack frame: 0 bytes */

int FUN_805D679C(int r3, int r4)
{
    /* addis r3, r3, 1 */ // 0x805D679C
    /* slwi r0, r4, 2 */ // 0x805D67A0
    r3 = r3 + r0; // 0x805D67A4
    r3 = *(-0x6e88 + r3); // lwz @ 0x805D67A8
    return;
}