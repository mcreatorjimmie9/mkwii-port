/* Function at 0x807B6A38, size=280 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 4 function(s) */

int FUN_807B6A38(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r31, 0 */ // 0x807B6A48
    r31 = r31 + 0; // 0x807B6A4C
    *(0x18 + r1) = r30; // stw @ 0x807B6A50
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x807B6A58
    *(0x10 + r1) = r28; // stw @ 0x807B6A5C
    /* lfs f0, 0x1c(r31) */ // 0x807B6A60
    r4 = *(0xc4 + r3); // lwz @ 0x807B6A64
    /* stfs f0, 0xcc(r3) */ // 0x807B6A68
    r29 = *(0 + r4); // lwz @ 0x807B6A6C
    r0 = *(0x1c + r29); // lwz @ 0x807B6A70
    r0 = r0 | 1; // 0x807B6A74
    *(0x1c + r29) = r0; // stw @ 0x807B6A78
    r5 = *(0xc4 + r3); // lwz @ 0x807B6A7C
    r4 = *(0xc8 + r3); // lwz @ 0x807B6A80
    r28 = *(8 + r5); // lwz @ 0x807B6A84
    FUN_807B66FC(); // bl 0x807B66FC
    /* lfs f2, 0x18(r31) */ // 0x807B6A8C
    /* fneg f0, f2 */ // 0x807B6A90
    /* .byte 0xfc, 0x01, 0x10, 0x40 */ // 0x807B6A94
    if (<=) goto 0x0x807b6aa4;
    /* fmr f1, f2 */ // 0x807B6A9C
    /* b 0x807b6ab0 */ // 0x807B6AA0
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807B6AA4
    if (>=) goto 0x0x807b6ab0;
    /* fmr f1, f0 */ // 0x807B6AAC
    /* lfs f0, 0x20(r31) */ // 0x807B6AB0
    r3 = r28;
    /* fmuls f1, f1, f0 */ // 0x807B6AB8
    FUN_807C2780(r3); // bl 0x807C2780
    r5 = *(0xc0 + r30); // lwz @ 0x807B6AC0
    r4 = *(8 + r31); // lha @ 0x807B6AC4
    r0 = *(6 + r31); // lha @ 0x807B6AC8
    r3 = r5 / r4; // 0x807B6ACC
    r3 = r3 * r4; // 0x807B6AD0
    /* subf r3, r3, r5 */ // 0x807B6AD4
    if (>=) goto 0x0x807b6aec;
    r0 = *(0x1c + r29); // lwz @ 0x807B6AE0
    r0 = r0 | 4; // 0x807B6AE4
    *(0x1c + r29) = r0; // stw @ 0x807B6AE8
    r3 = *(0xc0 + r30); // lwz @ 0x807B6AEC
    r3 = r3 + 1; // 0x807B6AF0
    *(0xc0 + r30) = r3; // stw @ 0x807B6AF4
    r0 = *(4 + r31); // lha @ 0x807B6AF8
    if (>) goto 0x0x807b6b24;
    /* lis r5, 0 */ // 0x807B6B04
    r4 = *(0xc8 + r30); // lwz @ 0x807B6B08
    /* lfs f1, 0x14(r31) */ // 0x807B6B0C
    r3 = r30;
    /* lfs f2, 0(r5) */ // 0x807B6B14
    FUN_807B65BC(r5, r3); // bl 0x807B65BC
    if (!=) goto 0x0x807b6b30;
    r3 = r30;
    r4 = r30 + 0x64; // 0x807B6B28
    FUN_807CF1B4(r3, r4); // bl 0x807CF1B4
    r0 = *(0x24 + r1); // lwz @ 0x807B6B30
    r31 = *(0x1c + r1); // lwz @ 0x807B6B34
    r30 = *(0x18 + r1); // lwz @ 0x807B6B38
    r29 = *(0x14 + r1); // lwz @ 0x807B6B3C
    r28 = *(0x10 + r1); // lwz @ 0x807B6B40
    return;
}