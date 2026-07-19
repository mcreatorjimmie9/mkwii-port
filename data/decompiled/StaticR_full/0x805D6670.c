/* Function at 0x805D6670, size=20 bytes */
/* Stack frame: 0 bytes */

int FUN_805D6670(int r3, int r4)
{
    /* addis r3, r3, 1 */ // 0x805D6670
    /* slwi r0, r4, 2 */ // 0x805D6674
    r3 = r3 + r0; // 0x805D6678
    r3 = *(-0x6ed8 + r3); // lwz @ 0x805D667C
    return;
}