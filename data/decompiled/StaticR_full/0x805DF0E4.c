/* Function at 0x805DF0E4, size=184 bytes */
/* Stack frame: 0 bytes */

int FUN_805DF0E4(int r3, int r4, int r5, int r6, int r7)
{
    /* lis r3, 0 */ // 0x805DF0E4
    r3 = r3 + 0; // 0x805DF0E8
    r0 = *(0xa0 + r3); // lwz @ 0x805DF0EC
    if (==) goto 0x0x805df194;
    r0 = *(0xb0 + r3); // lwz @ 0x805DF0F8
    if (==) goto 0x0x805df114;
    r3 = *(0x58 + r3); // lwz @ 0x805DF104
    r0 = r3 + 0x1f; // 0x805DF108
    r7 = r0 rlwinm 0; // rlwinm
    /* b 0x805df124 */ // 0x805DF110
    r3 = *(0x44 + r3); // lwz @ 0x805DF114
    r0 = r3 + 0x1f; // 0x805DF118
    r0 = r0 rlwinm 0; // rlwinm
    /* mulli r7, r0, 0xa */ // 0x805DF120
    /* lis r6, 0 */ // 0x805DF124
    r6 = r6 + 0; // 0x805DF128
    r4 = *(0x80 + r6); // lwz @ 0x805DF12C
    r3 = *(0x84 + r6); // lwz @ 0x805DF130
    r0 = *(0xa7 + r6); // lbz @ 0x805DF134
    r3 = r4 * r3; // 0x805DF138
    r5 = r3 + 0x1f; // 0x805DF140
    /* srwi r3, r3, 2 */ // 0x805DF144
    r0 = r3 + 0x1f; // 0x805DF148
    r4 = r5 rlwinm 0; // rlwinm
    r3 = r5 rlwinm 2; // rlwinm
    /* subf r4, r4, r3 */ // 0x805DF154
    r3 = r0 rlwinm 0; // rlwinm
    r0 = r0 rlwinm 2; // rlwinm
    r7 = r7 + r4; // 0x805DF160
    /* subf r0, r3, r0 */ // 0x805DF164
    r7 = r7 + r0; // 0x805DF168
    r7 = r7 + r0; // 0x805DF16C
    if (==) goto 0x0x805df18c;
    r0 = *(0x48 + r6); // lwz @ 0x805DF174
    /* slwi r3, r0, 2 */ // 0x805DF178
    r0 = r3 + 0x1f; // 0x805DF17C
    r0 = r0 rlwinm 0; // rlwinm
    /* mulli r0, r0, 6 */ // 0x805DF184
    r7 = r7 + r0; // 0x805DF188
    r3 = r7 + 0x1000; // 0x805DF18C
    return;
    /* li r3, 0 */ // 0x805DF194
    return;
}