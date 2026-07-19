/* Function at 0x805C8118, size=288 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 5 function(s) */

int FUN_805C8118(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* lis r5, 0 */ // 0x805C8120
    *(0x24 + r1) = r0; // stw @ 0x805C8124
    /* stmw r27, 0xc(r1) */ // 0x805C8128
    r29 = r3;
    r27 = r4;
    /* li r4, 4 */ // 0x805C8134
    r3 = *(0 + r5); // lwz @ 0x805C8138
    FUN_805C5788(r4); // bl 0x805C5788
    if (!=) goto 0x0x805c8224;
    /* lis r28, 0 */ // 0x805C8148
    /* mulli r30, r27, 0x18 */ // 0x805C814C
    r3 = *(0 + r28); // lwz @ 0x805C8150
    r4 = r3 + r30; // 0x805C8154
    r0 = *(0x3c4 + r4); // lbz @ 0x805C8158
    if (==) goto 0x0x805c8224;
    r5 = *(4 + r29); // lwz @ 0x805C8164
    /* lis r4, 0 */ // 0x805C8168
    /* lis r6, 0 */ // 0x805C816C
    r7 = *(0 + r4); // lwz @ 0x805C8170
    r5 = *(0xc + r5); // lwz @ 0x805C8174
    r0 = r27 rlwinm 2; // rlwinm
    r9 = *(0 + r6); // lwz @ 0x805C817C
    r4 = r27;
    /* lwzx r31, r5, r0 */ // 0x805C8184
    /* li r5, 1 */ // 0x805C8188
    /* li r6, 1 */ // 0x805C818C
    /* li r8, 1 */ // 0x805C8190
    FUN_808F9C40(r4, r5, r6, r8); // bl 0x808F9C40
    r0 = *(0 + r28); // lwz @ 0x805C8198
    r3 = r0 + r30; // 0x805C819C
    r0 = *(0x3c4 + r3); // lbz @ 0x805C81A0
    if (!=) goto 0x0x805c81c4;
    /* lis r3, 0 */ // 0x805C81AC
    r4 = r27;
    r3 = *(0 + r3); // lwz @ 0x805C81B4
    FUN_8061D97C(r3, r4); // bl 0x8061D97C
    FUN_8061DFF8(r3, r4); // bl 0x8061DFF8
    FUN_8060EFB4(r3, r4); // bl 0x8060EFB4
    r3 = *(4 + r29); // lwz @ 0x805C81C4
    r0 = *(0x22 + r31); // lhz @ 0x805C81C8
    r3 = *(0x3c + r3); // lwz @ 0x805C81CC
    r3 = *(4 + r3); // lwz @ 0x805C81D0
    r3 = *(0x1ce + r3); // lha @ 0x805C81D4
    /* add. r0, r3, r0 */ // 0x805C81D8
    if (>=) goto 0x0x805c81e4;
    /* li r0, 0 */ // 0x805C81E0
    *(0x22 + r31) = r0; // sth @ 0x805C81E4
    /* lis r3, 0 */ // 0x805C81E8
    r0 = *(0 + r3); // lwz @ 0x805C81EC
    r3 = r0 + r30; // 0x805C81F0
    r0 = *(0x3c4 + r3); // lbz @ 0x805C81F4
    if (!=) goto 0x0x805c8224;
    r3 = *(4 + r29); // lwz @ 0x805C8200
    r0 = *(0x22 + r31); // lhz @ 0x805C8204
    r3 = *(0x3c + r3); // lwz @ 0x805C8208
    r3 = *(4 + r3); // lwz @ 0x805C820C
    r3 = *(0x1cc + r3); // lha @ 0x805C8210
    /* add. r0, r3, r0 */ // 0x805C8214
    if (>=) goto 0x0x805c8220;
    /* li r0, 0 */ // 0x805C821C
    *(0x22 + r31) = r0; // sth @ 0x805C8220
    r0 = *(0x24 + r1); // lwz @ 0x805C8228
    return;
}