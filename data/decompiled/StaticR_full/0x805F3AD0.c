/* Function at 0x805F3AD0, size=280 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_805F3AD0(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r6;
    *(0x18 + r1) = r30; // stw @ 0x805F3AE8
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x805F3AF0
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x805F3AF8
    r28 = r3;
    r9 = *(4 + r3); // lwz @ 0x805F3B00
    r0 = *(0x14 + r9); // lbz @ 0x805F3B04
    r0 = r0 | 0x10; // 0x805F3B08
    *(0x14 + r9) = r0; // stb @ 0x805F3B0C
    r4 = *(4 + r3); // lwz @ 0x805F3B10
    r0 = *(0x14 + r4); // lbz @ 0x805F3B14
    r0 = r0 rlwinm 0; // rlwinm
    *(0x14 + r4) = r0; // stb @ 0x805F3B1C
    if (==) goto 0x0x805f3b58;
    r4 = *(4 + r3); // lwz @ 0x805F3B24
    r0 = *(0x14 + r4); // lbz @ 0x805F3B28
    r0 = r0 | 4; // 0x805F3B2C
    *(0x14 + r4) = r0; // stb @ 0x805F3B30
    r4 = *(4 + r3); // lwz @ 0x805F3B34
    r0 = *(0x14 + r4); // lbz @ 0x805F3B38
    r0 = r0 | 2; // 0x805F3B3C
    *(0x14 + r4) = r0; // stb @ 0x805F3B40
    r3 = *(4 + r3); // lwz @ 0x805F3B44
    r0 = *(0x14 + r3); // lbz @ 0x805F3B48
    r0 = r0 | 1; // 0x805F3B4C
    *(0x14 + r3) = r0; // stb @ 0x805F3B50
    /* b 0x805f3b88 */ // 0x805F3B54
    r4 = *(4 + r3); // lwz @ 0x805F3B58
    r0 = *(0x14 + r4); // lbz @ 0x805F3B5C
    r0 = r0 rlwinm 0; // rlwinm
    *(0x14 + r4) = r0; // stb @ 0x805F3B64
    r4 = *(4 + r3); // lwz @ 0x805F3B68
    r0 = *(0x14 + r4); // lbz @ 0x805F3B6C
    r0 = r0 rlwinm 0; // rlwinm
    *(0x14 + r4) = r0; // stb @ 0x805F3B74
    r3 = *(4 + r3); // lwz @ 0x805F3B78
    r0 = *(0x14 + r3); // lbz @ 0x805F3B7C
    r0 = r0 rlwinm 0; // rlwinm
    *(0x14 + r3) = r0; // stb @ 0x805F3B84
    if (==) goto 0x0x805f3bd0;
    /* lis r10, 0 */ // 0x805F3B90
    /* lbzu r9, 0(r10) */ // 0x805F3B94
    /* lis r3, 0 */ // 0x805F3B98
    *(8 + r1) = r9; // stb @ 0x805F3B9C
    r8 = *(1 + r10); // lbz @ 0x805F3BA0
    r7 = *(2 + r10); // lbz @ 0x805F3BA8
    /* li r4, 2 */ // 0x805F3BAC
    r0 = *(3 + r10); // lbz @ 0x805F3BB0
    /* li r6, 0 */ // 0x805F3BB4
    r3 = *(0 + r3); // lwz @ 0x805F3BB8
    *(9 + r1) = r8; // stb @ 0x805F3BBC
    *(0xa + r1) = r7; // stb @ 0x805F3BC0
    *(0xb + r1) = r0; // stb @ 0x805F3BC4
    r3 = *(0x10 + r3); // lwz @ 0x805F3BC8
    FUN_805E3430(); // bl 0x805E3430
    r3 = *(4 + r28); // lwz @ 0x805F3BD0
    r4 = r29;
    r5 = r30;
    r6 = r31;
    /* li r7, -1 */ // 0x805F3BE0
    FUN_805E3430(r4, r5, r6, r7); // bl 0x805E3430
}