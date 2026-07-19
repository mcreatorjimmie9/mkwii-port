/* Function at 0x8086F880, size=20 bytes */
/* Stack frame: 0 bytes */

void FUN_8086F880(int r3)
{
    r3 = *(0x54 + r3); // lwz @ 0x8086F880
    /* beqlr  */ // 0x8086F888
    *(0x164 + r3) = r4; // stb @ 0x8086F88C
    return;
}