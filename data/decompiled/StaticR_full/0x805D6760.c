/* Function at 0x805D6760, size=20 bytes */
/* Stack frame: 0 bytes */

int FUN_805D6760(int r3, int r4)
{
    /* addis r3, r3, 1 */ // 0x805D6760
    /* slwi r0, r4, 2 */ // 0x805D6764
    r3 = r3 + r0; // 0x805D6768
    r3 = *(-0x6e98 + r3); // lwz @ 0x805D676C
    return;
}