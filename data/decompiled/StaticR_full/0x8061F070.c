/* Function at 0x8061F070, size=52 bytes */
/* Stack frame: 0 bytes */

void FUN_8061F070(int r3, int r4, int r5)
{
    r5 = *(0 + r3); // lwz @ 0x8061F070
    r3 = *(4 + r5); // lwz @ 0x8061F074
    r0 = *(0x14 + r3); // lwz @ 0x8061F078
    /* rlwinm. r0, r0, 0, 0x1d, 0x1d */ // 0x8061F07C
    /* beqlr  */ // 0x8061F080
    r3 = *(0x3c + r5); // lwz @ 0x8061F084
    /* li r0, 1 */ // 0x8061F088
    r0 = r0 << r4; // slw
    r4 = *(0x10 + r3); // lwz @ 0x8061F090
    r3 = *(0x14 + r4); // lwz @ 0x8061F094
    r0 = r3 ^ r0; // 0x8061F098
    *(0x14 + r4) = r0; // stw @ 0x8061F09C
    return;
}