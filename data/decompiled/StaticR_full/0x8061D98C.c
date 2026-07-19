/* Function at 0x8061D98C, size=24 bytes */
/* Stack frame: 0 bytes */

void FUN_8061D98C(int r3, int r4)
{
    /* lis r4, 0 */ // 0x8061D98C
    /* slwi r0, r3, 2 */ // 0x8061D990
    r3 = *(0 + r4); // lwz @ 0x8061D994
    r3 = *(0x20 + r3); // lwz @ 0x8061D998
    /* lwzx r3, r3, r0 */ // 0x8061D99C
    /* b 0x8061c8c8 */ // 0x8061D9A0
}