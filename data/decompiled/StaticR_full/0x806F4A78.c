/* Function at 0x806F4A78, size=64 bytes */
/* Stack frame: 0 bytes */

int FUN_806F4A78(int r3, int r4, int r5, int r6, int r7)
{
    r0 = *(0 + r3); // lbz @ 0x806F4A78
    /* beqlr  */ // 0x806F4A80
    /* lis r5, 0 */ // 0x806F4A84
    r6 = r4 rlwinm 2; // rlwinm
    r7 = *(0 + r5); // lwz @ 0x806F4A8C
    r4 = r3 + 8; // 0x806F4A90
    /* li r5, 0xc0 */ // 0x806F4A94
    r3 = r7 + r6; // 0x806F4A98
    r0 = *(0x276c + r3); // lwz @ 0x806F4A9C
    /* mulli r0, r0, 0x30 */ // 0x806F4AA0
    r0 = r7 + r0; // 0x806F4AA4
    r3 = r0 + r6; // 0x806F4AA8
    r3 = *(0xf0 + r3); // lwz @ 0x806F4AAC
    r3 = *(0x14 + r3); // lwz @ 0x806F4AB0
    /* b 0x806e9f64 */ // 0x806F4AB4
}