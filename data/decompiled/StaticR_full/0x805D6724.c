/* Function at 0x805D6724, size=20 bytes */
/* Stack frame: 0 bytes */

int FUN_805D6724(int r3, int r4)
{
    /* addis r3, r3, 1 */ // 0x805D6724
    /* slwi r0, r4, 2 */ // 0x805D6728
    r3 = r3 + r0; // 0x805D672C
    r3 = *(-0x6ea8 + r3); // lwz @ 0x805D6730
    return;
}