/* Function at 0x806F4ABC, size=236 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_806F4ABC(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r4;
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x806F4AD8
    *(0x10 + r1) = r28; // stw @ 0x806F4ADC
    r0 = *(0 + r3); // lbz @ 0x806F4AE0
    if (==) goto 0x0x806f4b88;
    /* li r0, 1 */ // 0x806F4AEC
    r6 = *(0x9e0 + r3); // lwz @ 0x806F4AF0
    r0 = r0 << r4; // slw
    r5 = *(0x9e4 + r3); // lwz @ 0x806F4AF8
    r7 = r0 ~| r0; // 0x806F4AFC
    r0 = *(0x9e8 + r3); // lwz @ 0x806F4B00
    r6 = r6 & r7; // 0x806F4B04
    *(0x9e0 + r3) = r6; // stw @ 0x806F4B08
    r5 = r5 & r7; // 0x806F4B0C
    r0 = r0 & r7; // 0x806F4B10
    *(0x9e4 + r3) = r5; // stw @ 0x806F4B14
    /* lis r29, 0 */ // 0x806F4B18
    r28 = r4 rlwinm 2; // rlwinm
    *(0x9e8 + r3) = r0; // stw @ 0x806F4B20
    r4 = *(0 + r29); // lwz @ 0x806F4B24
    r3 = r4 + r28; // 0x806F4B28
    r0 = *(0x276c + r3); // lwz @ 0x806F4B2C
    /* mulli r0, r0, 0x30 */ // 0x806F4B30
    r0 = r4 + r0; // 0x806F4B34
    r3 = r0 + r28; // 0x806F4B38
    r3 = *(0xf0 + r3); // lwz @ 0x806F4B3C
    r3 = *(0x14 + r3); // lwz @ 0x806F4B40
    FUN_806E9F24(); // bl 0x806E9F24
    r4 = *(0 + r29); // lwz @ 0x806F4B48
    r0 = r31 rlwinm 5; // rlwinm
    r3 = r4 + r0; // 0x806F4B50
    r0 = *(0x27b0 + r3); // lwz @ 0x806F4B54
    /* mulli r0, r0, 0x30 */ // 0x806F4B58
    r0 = r4 + r0; // 0x806F4B5C
    r3 = r0 + r28; // 0x806F4B60
    r3 = *(0x150 + r3); // lwz @ 0x806F4B64
    r3 = *(0x14 + r3); // lwz @ 0x806F4B68
    FUN_806E9F24(); // bl 0x806E9F24
    /* mulli r0, r31, 0xc0 */ // 0x806F4B70
    /* li r4, 0 */ // 0x806F4B74
    /* li r5, 0xc0 */ // 0x806F4B78
    r3 = r30 + r0; // 0x806F4B7C
    r3 = r3 + 0xc8; // 0x806F4B80
    FUN_805E3430(r4, r5, r3); // bl 0x805E3430
    r0 = *(0x24 + r1); // lwz @ 0x806F4B88
    r31 = *(0x1c + r1); // lwz @ 0x806F4B8C
    r30 = *(0x18 + r1); // lwz @ 0x806F4B90
    r29 = *(0x14 + r1); // lwz @ 0x806F4B94
    r28 = *(0x10 + r1); // lwz @ 0x806F4B98
    return;
}