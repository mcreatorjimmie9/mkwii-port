/* Function at 0x8061F114, size=36 bytes */
/* Stack frame: 0 bytes */

void FUN_8061F114(int r3, int r4)
{
    r3 = *(0 + r3); // lwz @ 0x8061F114
    r3 = *(0 + r3); // lwz @ 0x8061F118
    r3 = *(0x34 + r3); // lwz @ 0x8061F11C
    /* beqlr  */ // 0x8061F124
    r0 = *(0x18 + r3); // lhz @ 0x8061F128
    r0 = r0 + r4; // 0x8061F12C
    *(0x18 + r3) = r0; // sth @ 0x8061F130
    return;
}