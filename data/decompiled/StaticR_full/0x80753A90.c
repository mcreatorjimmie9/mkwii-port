/* Function at 0x80753A90, size=232 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80753A90(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    r3 = r6;
    *(0x3c + r1) = r31; // stw @ 0x80753AA0
    r31 = r5;
    *(0x38 + r1) = r30; // stw @ 0x80753AAC
    r30 = r4;
    r4 = r7;
    FUN_80743DF8(r5, r4); // bl 0x80743DF8
    /* lfs f2, 0(r31) */ // 0x80753ABC
    /* li r0, 0 */ // 0x80753AC0
    /* lfs f1, 4(r31) */ // 0x80753AC4
    /* lfs f0, 8(r31) */ // 0x80753AC8
    /* stfs f2, 0x14(r1) */ // 0x80753ACC
    /* stfs f1, 0x24(r1) */ // 0x80753AD0
    /* stfs f0, 0x34(r1) */ // 0x80753AD4
    r3 = *(0x2c + r30); // lhz @ 0x80753AD8
    *(0x54 + r30) = r0; // stb @ 0x80753ADC
    r0 = r3 | 4; // 0x80753AE0
    *(0x2c + r30) = r0; // sth @ 0x80753AE4
    /* lfs f0, 8(r1) */ // 0x80753AE8
    /* stfs f0, 0x58(r30) */ // 0x80753AEC
    /* lfs f0, 0xc(r1) */ // 0x80753AF0
    /* stfs f0, 0x5c(r30) */ // 0x80753AF4
    /* lfs f0, 0x10(r1) */ // 0x80753AF8
    /* stfs f0, 0x60(r30) */ // 0x80753AFC
    /* lfs f0, 0x14(r1) */ // 0x80753B00
    /* stfs f0, 0x64(r30) */ // 0x80753B04
    /* lfs f0, 0x18(r1) */ // 0x80753B08
    /* stfs f0, 0x68(r30) */ // 0x80753B0C
    /* lfs f0, 0x1c(r1) */ // 0x80753B10
    /* stfs f0, 0x6c(r30) */ // 0x80753B14
    /* lfs f0, 0x20(r1) */ // 0x80753B18
    /* stfs f0, 0x70(r30) */ // 0x80753B1C
    /* lfs f0, 0x24(r1) */ // 0x80753B20
    /* stfs f0, 0x74(r30) */ // 0x80753B24
    /* lfs f0, 0x28(r1) */ // 0x80753B28
    /* stfs f0, 0x78(r30) */ // 0x80753B2C
    /* lfs f0, 0x2c(r1) */ // 0x80753B30
    /* stfs f0, 0x7c(r30) */ // 0x80753B34
    /* lfs f0, 0x30(r1) */ // 0x80753B38
    /* stfs f0, 0x80(r30) */ // 0x80753B3C
    /* lfs f0, 0x34(r1) */ // 0x80753B40
    /* stfs f0, 0x84(r30) */ // 0x80753B44
    /* lfs f0, 0x14(r1) */ // 0x80753B48
    /* stfs f0, 0x30(r30) */ // 0x80753B4C
    /* lfs f0, 0x24(r1) */ // 0x80753B50
    /* stfs f0, 0x34(r30) */ // 0x80753B54
    /* lfs f0, 0x34(r1) */ // 0x80753B58
    /* stfs f0, 0x38(r30) */ // 0x80753B5C
    r31 = *(0x3c + r1); // lwz @ 0x80753B60
    r30 = *(0x38 + r1); // lwz @ 0x80753B64
    r0 = *(0x44 + r1); // lwz @ 0x80753B68
    return;
}