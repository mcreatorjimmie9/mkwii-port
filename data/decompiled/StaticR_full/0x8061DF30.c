/* Function at 0x8061DF30, size=20 bytes */
/* Stack frame: 0 bytes */

void FUN_8061DF30(int r3, int r4)
{
    r3 = *(0 + r3); // lwz @ 0x8061DF30
    /* slwi r0, r4, 2 */ // 0x8061DF34
    r3 = *(0xc + r3); // lwz @ 0x8061DF38
    /* lwzx r3, r3, r0 */ // 0x8061DF3C
    return;
}