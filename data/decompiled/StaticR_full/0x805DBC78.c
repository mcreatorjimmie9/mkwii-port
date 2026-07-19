/* Function at 0x805DBC78, size=40 bytes */
/* Stack frame: 0 bytes */

void FUN_805DBC78(int r3, int r6, int r7)
{
    /* lis r7, 0 */ // 0x805DBC78
    r6 = r3 rlwinm 0x10; // rlwinm
    r7 = r7 + 0; // 0x805DBC80
    r0 = r3 rlwinm 0x18; // rlwinm
    *(0xb0 + r7) = r6; // stb @ 0x805DBC88
    *(0xb1 + r7) = r0; // stb @ 0x805DBC8C
    *(0xb2 + r7) = r3; // stb @ 0x805DBC90
    *(0xb3 + r7) = r4; // stb @ 0x805DBC94
    *(0xb4 + r7) = r5; // stb @ 0x805DBC98
    return;
}