/* Function at 0x80827934, size=40 bytes */
/* Stack frame: 0 bytes */

void FUN_80827934(int r3)
{
    r0 = *(2 + r3); // lhz @ 0x80827934
    *(0 + r6) = r0; // stb @ 0x80827938
    r0 = r0 rlwinm 0x14; // rlwinm
    *(0 + r4) = r0; // stb @ 0x80827940
    r3 = *(4 + r3); // lbz @ 0x80827944
    r0 = r3 rlwinm 0x1c; // rlwinm
    *(0 + r5) = r0; // stb @ 0x8082794C
    /* clrlwi r0, r3, 0x1c */ // 0x80827950
    *(0 + r7) = r0; // stw @ 0x80827954
    return;
}