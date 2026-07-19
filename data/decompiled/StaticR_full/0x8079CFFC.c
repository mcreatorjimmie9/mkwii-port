/* Function at 0x8079CFFC, size=428 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 13 function(s) */

int FUN_8079CFFC(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r5, 0 */ // 0x8079D004
    /* lis r4, 0 */ // 0x8079D008
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x8079D018
    *(0x14 + r1) = r29; // stw @ 0x8079D01C
    *(0x10 + r1) = r28; // stw @ 0x8079D020
    r5 = *(0 + r5); // lwz @ 0x8079D024
    r0 = *(0xb68 + r5); // lwz @ 0x8079D028
    *(0x10 + r3) = r0; // stw @ 0x8079D02C
    r3 = *(0 + r4); // lwz @ 0x8079D030
    FUN_807866EC(); // bl 0x807866EC
    /* lis r3, 0 */ // 0x8079D038
    r3 = *(0 + r3); // lwz @ 0x8079D03C
    FUN_8079C294(r3); // bl 0x8079C294
    /* lis r3, 0 */ // 0x8079D044
    r4 = *(0x10 + r31); // lwz @ 0x8079D048
    r3 = *(0 + r3); // lwz @ 0x8079D04C
    FUN_8078ADC8(r3); // bl 0x8078ADC8
    /* lis r3, 0 */ // 0x8079D054
    /* lis r5, 0 */ // 0x8079D058
    /* lis r4, 0 */ // 0x8079D05C
    r3 = *(0 + r3); // lwz @ 0x8079D060
    /* lfs f1, 0(r5) */ // 0x8079D064
    /* lfs f2, 0(r4) */ // 0x8079D068
    FUN_807AB3E8(r5, r4); // bl 0x807AB3E8
    r5 = *(0x4c + r31); // lbz @ 0x8079D070
    /* lis r4, 0 */ // 0x8079D074
    r0 = *(0x10 + r31); // lwz @ 0x8079D078
    /* lis r3, 0 */ // 0x8079D07C
    *(0 + r4) = r0; // stw @ 0x8079D080
    *(0 + r3) = r5; // stb @ 0x8079D084
    FUN_807A03C8(r4, r3); // bl 0x807A03C8
    if (!=) goto 0x0x8079d188;
    /* li r0, 0 */ // 0x8079D094
    *(0x3d + r31) = r0; // stb @ 0x8079D098
    /* lis r3, 0 */ // 0x8079D09C
    *(0x3c + r31) = r0; // stb @ 0x8079D0A0
    *(0x3e + r31) = r0; // stb @ 0x8079D0A4
    *(0x3f + r31) = r0; // stb @ 0x8079D0A8
    r3 = *(0 + r3); // lwz @ 0x8079D0AC
    FUN_807AAA78(r3); // bl 0x807AAA78
    /* lis r3, 0 */ // 0x8079D0B4
    r0 = *(0x4c + r31); // lbz @ 0x8079D0B8
    r4 = *(0 + r3); // lwz @ 0x8079D0BC
    /* lis r30, 0 */ // 0x8079D0C0
    /* lis r3, 0 */ // 0x8079D0C4
    *(0x848 + r4) = r0; // stw @ 0x8079D0C8
    r5 = *(0 + r30); // lwz @ 0x8079D0CC
    r4 = *(0x4c + r31); // lbz @ 0x8079D0D0
    r0 = *(0x24 + r5); // lbz @ 0x8079D0D4
    *(0x4d + r31) = r0; // stb @ 0x8079D0D8
    r3 = *(0 + r3); // lwz @ 0x8079D0DC
    FUN_807A8488(); // bl 0x807A8488
    /* li r29, 0 */ // 0x8079D0E4
    /* li r28, 0 */ // 0x8079D0E8
    /* b 0x8079d110 */ // 0x8079D0EC
    r3 = *(0 + r30); // lwz @ 0x8079D0F0
    /* clrlwi r4, r28, 0x18 */ // 0x8079D0F4
    FUN_8061D97C(); // bl 0x8061D97C
    FUN_8061DECC(); // bl 0x8061DECC
    if (==) goto 0x0x8079d10c;
    r29 = r29 + 1; // 0x8079D108
    r28 = r28 + 1; // 0x8079D10C
    r0 = *(0x4d + r31); // lbz @ 0x8079D110
    /* clrlwi r3, r28, 0x18 */ // 0x8079D114
    if (<) goto 0x0x8079d0f0;
    /* li r4, 0 */ // 0x8079D120
    /* li r0, -1 */ // 0x8079D124
    *(0x4e + r31) = r29; // stb @ 0x8079D128
    /* lis r5, 0 */ // 0x8079D12C
    /* lis r3, 0 */ // 0x8079D130
    *(0x4f + r31) = r4; // stb @ 0x8079D134
    *(0x50 + r31) = r0; // sth @ 0x8079D138
    r4 = *(0 + r5); // lwz @ 0x8079D13C
    r0 = *(0xb70 + r4); // lwz @ 0x8079D140
    *(0x44 + r31) = r0; // stw @ 0x8079D144
    r4 = *(0 + r5); // lwz @ 0x8079D148
    r0 = *(0xb74 + r4); // lwz @ 0x8079D14C
    *(0x48 + r31) = r0; // stw @ 0x8079D150
    r3 = *(0 + r3); // lwz @ 0x8079D154
    r3 = *(0x10 + r3); // lwz @ 0x8079D158
    FUN_8069526C(); // bl 0x8069526C
    r4 = r3;
    r3 = r31;
    FUN_8079E0C0(r4, r3); // bl 0x8079E0C0
    /* lis r3, 0 */ // 0x8079D16C
    r4 = r31 + 0x30; // 0x8079D170
    r3 = *(0 + r3); // lwz @ 0x8079D174
    FUN_805C51F8(r3, r3, r4); // bl 0x805C51F8
    /* lis r3, 0 */ // 0x8079D17C
    r3 = *(0 + r3); // lwz @ 0x8079D180
    FUN_808F79FC(r4, r3); // bl 0x808F79FC
    r0 = *(0x24 + r1); // lwz @ 0x8079D188
    r31 = *(0x1c + r1); // lwz @ 0x8079D18C
    r30 = *(0x18 + r1); // lwz @ 0x8079D190
    r29 = *(0x14 + r1); // lwz @ 0x8079D194
    r28 = *(0x10 + r1); // lwz @ 0x8079D198
    return;
}