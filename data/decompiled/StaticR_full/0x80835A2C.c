/* Function at 0x80835A2C, size=416 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 7 function(s) */

int FUN_80835A2C(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x80835A3C
    r31 = r31 + 0; // 0x80835A40
    *(0x18 + r1) = r30; // stw @ 0x80835A44
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x80835A4C
    r29 = r4;
    r5 = *(0xc + r4); // lwz @ 0x80835A54
    r6 = *(0x44 + r5); // lbz @ 0x80835A58
    /* subfic r5, r6, 0xff */ // 0x80835A5C
    r0 = r6 + -0xff; // 0x80835A60
    r0 = r5 | r0; // 0x80835A64
    /* rlwinm. r0, r0, 1, 0x1f, 0x1f */ // 0x80835A68
    *(0x2a9 + r3) = r0; // stb @ 0x80835A6C
    if (==) goto 0x0x80835aac;
    /* lfs f1, 0xd0(r31) */ // 0x80835A74
    /* li r5, 0x14 */ // 0x80835A78
    r9 = *(0x2ec + r3); // lbz @ 0x80835A7C
    /* li r6, 1 */ // 0x80835A80
    /* li r7, 1 */ // 0x80835A84
    /* li r8, 0 */ // 0x80835A88
    /* li r10, 1 */ // 0x80835A8C
    FUN_80839EB8(r6, r7, r8, r10); // bl 0x80839EB8
    /* li r4, 1 */ // 0x80835A94
    /* li r3, -1 */ // 0x80835A98
    /* li r0, 0 */ // 0x80835A9C
    *(0x2c0 + r30) = r4; // sth @ 0x80835AA0
    *(0x2c4 + r30) = r3; // stw @ 0x80835AA4
    *(0x2c8 + r30) = r0; // stw @ 0x80835AA8
    r3 = r30;
    FUN_80835894(r3); // bl 0x80835894
    /* lfs f0, 0x58(r29) */ // 0x80835AB4
    /* stfs f0, 0x20(r30) */ // 0x80835AB8
    r0 = *(0x7c + r30); // lwz @ 0x80835ABC
    /* lfs f0, 0x5c(r29) */ // 0x80835AC0
    /* stfs f0, 0x24(r30) */ // 0x80835AC4
    /* rlwinm. r0, r0, 0, 0x1a, 0x1a */ // 0x80835AC8
    /* lfs f0, 0x60(r29) */ // 0x80835ACC
    /* stfs f0, 0x28(r30) */ // 0x80835AD0
    /* lfs f0, 0x64(r29) */ // 0x80835AD4
    /* stfs f0, 0x2c(r30) */ // 0x80835AD8
    /* lfs f0, 0x68(r29) */ // 0x80835ADC
    /* stfs f0, 0x30(r30) */ // 0x80835AE0
    /* lfs f0, 0x6c(r29) */ // 0x80835AE4
    /* stfs f0, 0x34(r30) */ // 0x80835AE8
    /* lfs f0, 0x70(r29) */ // 0x80835AEC
    /* stfs f0, 0x38(r30) */ // 0x80835AF0
    /* lfs f0, 0x74(r29) */ // 0x80835AF4
    /* stfs f0, 0x3c(r30) */ // 0x80835AF8
    /* lfs f0, 0x78(r29) */ // 0x80835AFC
    /* stfs f0, 0x40(r30) */ // 0x80835B00
    if (==) goto 0x0x80835b18;
    /* li r0, 0 */ // 0x80835B08
    *(0x2c4 + r30) = r0; // stw @ 0x80835B0C
    /* li r3, 1 */ // 0x80835B10
    /* b 0x80835bb0 */ // 0x80835B14
    r0 = *(0x2a9 + r30); // lbz @ 0x80835B18
    if (!=) goto 0x0x80835b70;
    /* lfs f1, 0xd4(r31) */ // 0x80835B24
    r3 = r30;
    r4 = r29;
    /* li r5, 0 */ // 0x80835B30
    /* li r6, 1 */ // 0x80835B34
    /* li r7, 1 */ // 0x80835B38
    FUN_8083A7B8(r3, r4, r5, r6, r7); // bl 0x8083A7B8
    r0 = *(0x78 + r30); // lwz @ 0x80835B40
    r3 = r30;
    r0 = r0 rlwinm 0; // rlwinm
    *(0x78 + r30) = r0; // stw @ 0x80835B4C
    FUN_808355A0(r3); // bl 0x808355A0
    r0 = r3;
    *(0x2ec + r30) = r3; // stb @ 0x80835B58
    r3 = r30;
    /* clrlwi r4, r0, 0x18 */ // 0x80835B60
    FUN_80839E50(r3); // bl 0x80839E50
    /* li r0, 2 */ // 0x80835B68
    *(0x2c4 + r30) = r0; // stw @ 0x80835B6C
    r3 = *(0x9c + r30); // lwz @ 0x80835B70
    /* li r4, 0 */ // 0x80835B74
    /* lfs f1, 0(r31) */ // 0x80835B78
    r3 = *(0x28 + r3); // lwz @ 0x80835B7C
    /* lfs f2, 4(r31) */ // 0x80835B80
    FUN_805E70EC(r4); // bl 0x805E70EC
    r3 = *(0x9c + r30); // lwz @ 0x80835B88
    /* li r4, 0 */ // 0x80835B8C
    r3 = *(0x28 + r3); // lwz @ 0x80835B90
    FUN_805E7060(r4); // bl 0x805E7060
    r12 = *(0 + r3); // lwz @ 0x80835B98
    /* lfs f1, 4(r31) */ // 0x80835B9C
    r12 = *(0x1c + r12); // lwz @ 0x80835BA0
    /* mtctr r12 */ // 0x80835BA4
    /* bctrl  */ // 0x80835BA8
    /* li r3, 1 */ // 0x80835BAC
    r0 = *(0x24 + r1); // lwz @ 0x80835BB0
    r31 = *(0x1c + r1); // lwz @ 0x80835BB4
    r30 = *(0x18 + r1); // lwz @ 0x80835BB8
    r29 = *(0x14 + r1); // lwz @ 0x80835BBC
    return;
}