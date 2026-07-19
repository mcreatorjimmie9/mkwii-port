/* Function at 0x807B2014, size=24 bytes */
/* Stack frame: 0 bytes */

void FUN_807B2014(int r3)
{
    r3 = *(0x1fc + r3); // lwz @ 0x807B2014
    /* beqlr  */ // 0x807B201C
    /* li r0, 1 */ // 0x807B2020
    *(5 + r3) = r0; // stb @ 0x807B2024
    return;
}