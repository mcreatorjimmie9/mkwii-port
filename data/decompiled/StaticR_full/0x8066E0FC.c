/* Function at 0x8066E0FC, size=36 bytes */
/* Stack frame: 0 bytes */

void FUN_8066E0FC(int r3, int r4, int r6)
{
    r6 = *(4 + r3); // lwz @ 0x8066E0FC
    /* slwi r4, r4, 2 */ // 0x8066E100
    /* lwzx r0, r6, r4 */ // 0x8066E104
    /* beqlr  */ // 0x8066E10C
    r3 = *(4 + r3); // lwz @ 0x8066E110
    /* lwzx r3, r3, r4 */ // 0x8066E114
    *(0xa6 + r3) = r5; // stb @ 0x8066E118
    return;
}