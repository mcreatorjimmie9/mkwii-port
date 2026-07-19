/* Function at 0x8061F15C, size=36 bytes */
/* Stack frame: 0 bytes */

int FUN_8061F15C(int r3, int r4)
{
    r3 = *(0 + r3); // lwz @ 0x8061F15C
    r3 = *(0 + r3); // lwz @ 0x8061F160
    r4 = *(0x38 + r3); // lwz @ 0x8061F164
    /* beqlr  */ // 0x8061F16C
    r3 = *(0xc + r4); // lwz @ 0x8061F170
    r0 = r3 + 1; // 0x8061F174
    *(0xc + r4) = r0; // stw @ 0x8061F178
    return;
}