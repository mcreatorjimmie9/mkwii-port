/* Function at 0x8061F03C, size=52 bytes */
/* Stack frame: 0 bytes */

void FUN_8061F03C(int r3, int r4, int r5)
{
    r5 = *(0 + r3); // lwz @ 0x8061F03C
    r3 = *(4 + r5); // lwz @ 0x8061F040
    r0 = *(0x14 + r3); // lwz @ 0x8061F044
    /* rlwinm. r0, r0, 0, 0x1d, 0x1d */ // 0x8061F048
    /* beqlr  */ // 0x8061F04C
    r3 = *(0x3c + r5); // lwz @ 0x8061F050
    /* li r0, 1 */ // 0x8061F054
    r0 = r0 << r4; // slw
    r4 = *(0x10 + r3); // lwz @ 0x8061F05C
    r3 = *(0x10 + r4); // lwz @ 0x8061F060
    r0 = r3 ^ r0; // 0x8061F064
    *(0x10 + r4) = r0; // stw @ 0x8061F068
    return;
}