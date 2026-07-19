/* Function at 0x805E7060, size=16 bytes */
/* Stack frame: 0 bytes */

void FUN_805E7060(int r3, int r4)
{
    r3 = *(0x24 + r3); // lwz @ 0x805E7060
    /* slwi r0, r4, 2 */ // 0x805E7064
    /* lwzx r3, r3, r0 */ // 0x805E7068
    return;
}