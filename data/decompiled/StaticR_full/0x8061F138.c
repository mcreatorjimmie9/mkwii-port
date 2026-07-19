/* Function at 0x8061F138, size=36 bytes */
/* Stack frame: 0 bytes */

int FUN_8061F138(int r3, int r4)
{
    r3 = *(0 + r3); // lwz @ 0x8061F138
    r3 = *(0 + r3); // lwz @ 0x8061F13C
    r4 = *(0x38 + r3); // lwz @ 0x8061F140
    /* beqlr  */ // 0x8061F148
    r3 = *(8 + r4); // lwz @ 0x8061F14C
    r0 = r3 + 1; // 0x8061F150
    *(8 + r4) = r0; // stw @ 0x8061F154
    return;
}