/* Function at 0x8079C7F0, size=32 bytes */
/* Stack frame: 0 bytes */

int FUN_8079C7F0(int r3, int r4)
{
    /* lis r4, 0 */ // 0x8079C7F0
    /* lis r3, 0 */ // 0x8079C7F4
    r4 = *(0 + r4); // lwz @ 0x8079C7F8
    r3 = r3 + 0; // 0x8079C7FC
    r0 = *(0x10 + r4); // lwz @ 0x8079C800
    /* slwi r0, r0, 2 */ // 0x8079C804
    /* lwzx r3, r3, r0 */ // 0x8079C808
    return;
}