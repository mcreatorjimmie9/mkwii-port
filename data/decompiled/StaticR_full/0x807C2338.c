/* Function at 0x807C2338, size=32 bytes */
/* Stack frame: 0 bytes */

void FUN_807C2338(int r3, int r4)
{
    *(0x22 + r3) = r4; // stb @ 0x807C233C
    /* beqlr  */ // 0x807C2340
    r3 = *(0x14 + r3); // lwz @ 0x807C2344
    r0 = *(0x10 + r3); // lwz @ 0x807C2348
    /* blelr  */ // 0x807C2350
    /* b 0x807da014 */ // 0x807C2354
}