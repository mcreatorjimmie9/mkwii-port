/* Function at 0x805F8A54, size=548 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 12 function(s) */

int FUN_805F8A54(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x805F8A64
    r31 = r31 + 0; // 0x805F8A68
    *(0x28 + r1) = r30; // stw @ 0x805F8A6C
    /* li r30, 0 */ // 0x805F8A70
    *(0x24 + r1) = r29; // stw @ 0x805F8A74
    r29 = r3;
    r4 = *(0 + r3); // lwz @ 0x805F8A7C
    r4 = *(4 + r4); // lwz @ 0x805F8A80
    r0 = *(4 + r4); // lwz @ 0x805F8A84
    /* rlwinm. r0, r0, 0, 0x16, 0x16 */ // 0x805F8A88
    if (==) goto 0x0x805f8b0c;
    r0 = *(0x78 + r3); // lwz @ 0x805F8A90
    if (!=) goto 0x0x805f8ae0;
    FUN_8061DC48(); // bl 0x8061DC48
    r0 = *(0x78 + r3); // lwz @ 0x805F8AA0
    *(0xc + r1) = r0; // stw @ 0x805F8AA4
    r4 = *(0x74 + r3); // lwz @ 0x805F8AA8
    r0 = *(0x7c + r3); // lwz @ 0x805F8AAC
    r3 = r29;
    /* lfs f0, 0x98(r31) */ // 0x805F8AB4
    *(8 + r1) = r4; // stw @ 0x805F8AB8
    *(0x10 + r1) = r0; // stw @ 0x805F8ABC
    /* stfs f0, 0xc(r1) */ // 0x805F8AC0
    FUN_8061DC48(r3); // bl 0x8061DC48
    /* lfs f0, 8(r1) */ // 0x805F8AC8
    /* stfs f0, 0x74(r3) */ // 0x805F8ACC
    /* lfs f0, 0xc(r1) */ // 0x805F8AD0
    /* stfs f0, 0x78(r3) */ // 0x805F8AD4
    /* lfs f0, 0x10(r1) */ // 0x805F8AD8
    /* stfs f0, 0x7c(r3) */ // 0x805F8ADC
    r4 = *(0x78 + r29); // lwz @ 0x805F8AE0
    r3 = r29;
    r0 = r4 + 1; // 0x805F8AE8
    *(0x78 + r29) = r0; // stw @ 0x805F8AEC
    FUN_8061E010(r3); // bl 0x8061E010
    r12 = *(0 + r3); // lwz @ 0x805F8AF4
    /* li r4, 0x17f */ // 0x805F8AF8
    /* lfs f1, 0(r31) */ // 0x805F8AFC
    r12 = *(0xe4 + r12); // lwz @ 0x805F8B00
    /* mtctr r12 */ // 0x805F8B04
    /* bctrl  */ // 0x805F8B08
    r0 = *(0xcc + r29); // lhz @ 0x805F8B0C
    /* clrlwi. r0, r0, 0x1f */ // 0x805F8B10
    if (!=) goto 0x0x805f8c04;
    r3 = *(0xe4 + r29); // lwz @ 0x805F8B18
    if (==) goto 0x0x805f8ba0;
    /* lfs f1, 0xe0(r29) */ // 0x805F8B24
    /* lfs f0, 0x10(r3) */ // 0x805F8B28
    /* lfs f2, 0xd0(r29) */ // 0x805F8B2C
    /* fmuls f0, f1, f0 */ // 0x805F8B30
    /* .byte 0xfc, 0x02, 0x00, 0x40 */ // 0x805F8B34
    if (<=) goto 0x0x805f8b80;
    /* lfs f1, 0xd4(r29) */ // 0x805F8B3C
    /* lfs f0, 0xd8(r29) */ // 0x805F8B40
    /* fmuls f0, f1, f0 */ // 0x805F8B44
    /* stfs f0, 0xd4(r29) */ // 0x805F8B48
    /* lfs f1, 4(r3) */ // 0x805F8B4C
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x805F8B50
    if (<=) goto 0x0x805f8b5c;
    /* stfs f1, 0xd4(r29) */ // 0x805F8B58
    /* lfs f1, 0xd8(r29) */ // 0x805F8B5C
    /* lfs f0, 0xdc(r29) */ // 0x805F8B60
    r3 = *(0xe4 + r29); // lwz @ 0x805F8B64
    /* fsubs f0, f1, f0 */ // 0x805F8B68
    /* stfs f0, 0xd8(r29) */ // 0x805F8B6C
    /* lfs f1, 8(r3) */ // 0x805F8B70
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x805F8B74
    if (<=) goto 0x0x805f8b80;
    /* stfs f1, 0xd8(r29) */ // 0x805F8B7C
    /* lfs f1, 0xd0(r29) */ // 0x805F8B80
    /* lfs f0, 0xd4(r29) */ // 0x805F8B84
    /* lfs f2, 0xe0(r29) */ // 0x805F8B88
    /* fadds f0, f1, f0 */ // 0x805F8B8C
    /* stfs f0, 0xd0(r29) */ // 0x805F8B90
    /* .byte 0xfc, 0x02, 0x00, 0x40 */ // 0x805F8B94
    if (>=) goto 0x0x805f8ba0;
    /* stfs f2, 0xd0(r29) */ // 0x805F8B9C
    /* lfs f1, 0xd0(r29) */ // 0x805F8BA0
    /* lfs f0, 0x2c(r29) */ // 0x805F8BA4
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x805F8BA8
    /* cror cr0eq, cr0gt, cr0eq */ // 0x805F8BAC
    if (!=) goto 0x0x805f8c04;
    r3 = *(0 + r29); // lwz @ 0x805F8BB4
    r3 = *(4 + r3); // lwz @ 0x805F8BB8
    r0 = *(4 + r3); // lwz @ 0x805F8BBC
    /* rlwinm. r0, r0, 0, 0xd, 0xd */ // 0x805F8BC0
    if (==) goto 0x0x805f8c04;
    r0 = *(0xcc + r29); // lhz @ 0x805F8BC8
    r3 = r29;
    r0 = r0 | 1; // 0x805F8BD0
    *(0xcc + r29) = r0; // sth @ 0x805F8BD4
    FUN_8061E2E8(r3); // bl 0x8061E2E8
    if (!=) goto 0x0x805f8bf4;
    r3 = r29;
    FUN_8061DC48(r3); // bl 0x8061DC48
    /* li r0, 0 */ // 0x805F8BEC
    *(0x170 + r3) = r0; // stb @ 0x805F8BF0
    r3 = r29;
    FUN_8061DC28(r3, r3); // bl 0x8061DC28
    r4 = r29 + 0xb0; // 0x805F8BFC
    FUN_8062A210(r3, r4); // bl 0x8062A210
    r0 = *(0xc4 + r29); // lwz @ 0x805F8C04
    if (<) goto 0x0x805f8c34;
    r0 = *(0xcc + r29); // lhz @ 0x805F8C10
    /* li r30, 1 */ // 0x805F8C14
    /* clrlwi. r0, r0, 0x1f */ // 0x805F8C18
    if (!=) goto 0x0x805f8c68;
    r3 = r29;
    FUN_8061DC28(r3); // bl 0x8061DC28
    r4 = r29 + 0xb0; // 0x805F8C28
    FUN_8062A210(r3, r4); // bl 0x8062A210
    /* b 0x805f8c68 */ // 0x805F8C30
    r0 = *(0xcc + r29); // lhz @ 0x805F8C34
    /* clrlwi. r0, r0, 0x1f */ // 0x805F8C38
    if (!=) goto 0x0x805f8c68;
    /* lfs f1, 0x8c(r31) */ // 0x805F8C40
    r3 = r29 + 0xb0; // 0x805F8C44
    /* lfs f0, 0xd0(r29) */ // 0x805F8C48
    r4 = r29 + 0x3c; // 0x805F8C4C
    /* fmuls f1, f1, f0 */ // 0x805F8C50
    FUN_805E3430(r3, r4); // bl 0x805E3430
    r3 = r29;
    FUN_8061DC28(r4, r3); // bl 0x8061DC28
    r4 = r29 + 0xb0; // 0x805F8C60
    FUN_8062A088(r3, r4); // bl 0x8062A088
    r3 = r30;
    r31 = *(0x2c + r1); // lwz @ 0x805F8C6C
    r30 = *(0x28 + r1); // lwz @ 0x805F8C70
    r29 = *(0x24 + r1); // lwz @ 0x805F8C74
}