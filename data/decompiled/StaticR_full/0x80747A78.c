/* Function at 0x80747A78, size=460 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_80747A78(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x80747A90
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x80747A98
    /* lis r29, 0 */ // 0x80747A9C
    r29 = r29 + 0; // 0x80747AA0
    if (==) goto 0x0x80747abc;
    if (==) goto 0x0x80747ad8;
    if (==) goto 0x0x80747b80;
    /* b 0x80747c24 */ // 0x80747AB8
    r3 = r4;
    FUN_8061E63C(r3); // bl 0x8061E63C
    /* lfs f0, 0x2c(r29) */ // 0x80747AC4
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80747AC8
    if (>=) goto 0x0x80747c24;
    /* li r31, 8 */ // 0x80747AD0
    /* b 0x80747c24 */ // 0x80747AD4
    r3 = *(0x110 + r3); // lwz @ 0x80747AD8
    /* addis r0, r3, 1 */ // 0x80747ADC
    if (!=) goto 0x0x80747c24;
    r3 = r4;
    /* li r4, 1 */ // 0x80747AEC
    FUN_8061DCF4(r3, r4); // bl 0x8061DCF4
    /* lfs f0, 0(r29) */ // 0x80747AF4
    /* li r7, 0 */ // 0x80747AF8
    *(0x110 + r30) = r7; // stw @ 0x80747AFC
    /* lis r4, 0 */ // 0x80747B00
    /* lis r6, 0 */ // 0x80747B04
    /* lfs f1, 0x30(r29) */ // 0x80747B08
    /* stfs f0, 0x12c(r30) */ // 0x80747B0C
    /* lis r5, 0 */ // 0x80747B10
    /* lfs f3, 0x34(r29) */ // 0x80747B14
    r3 = r4 + 0; // 0x80747B18
    /* lfs f0, 0(r6) */ // 0x80747B1C
    /* li r0, 1 */ // 0x80747B20
    /* lfs f4, 0(r5) */ // 0x80747B24
    /* fmuls f5, f1, f0 */ // 0x80747B28
    /* lfs f0, 0x100(r30) */ // 0x80747B2C
    /* lfs f2, 0xf8(r30) */ // 0x80747B30
    /* lfs f1, 0xfc(r30) */ // 0x80747B34
    /* fdivs f4, f5, f4 */ // 0x80747B38
    /* stfs f0, 0x124(r30) */ // 0x80747B3C
    /* lfs f5, 0x34(r30) */ // 0x80747B40
    /* stfs f2, 0x11c(r30) */ // 0x80747B44
    /* stfs f1, 0x120(r30) */ // 0x80747B48
    /* stfs f5, 0x114(r30) */ // 0x80747B4C
    /* fdivs f0, f3, f4 */ // 0x80747B50
    /* stfs f4, 0x118(r30) */ // 0x80747B54
    *(0x128 + r30) = r7; // stb @ 0x80747B58
    /* stfs f0, 0x130(r30) */ // 0x80747B5C
    /* lfs f0, 0(r4) */ // 0x80747B60
    /* stfs f0, 0xf8(r30) */ // 0x80747B64
    /* lfs f0, 4(r3) */ // 0x80747B68
    /* stfs f0, 0xfc(r30) */ // 0x80747B6C
    /* lfs f0, 8(r3) */ // 0x80747B70
    /* stfs f0, 0x100(r30) */ // 0x80747B74
    *(0x134 + r30) = r0; // stb @ 0x80747B78
    /* b 0x80747c24 */ // 0x80747B7C
    r3 = *(0x110 + r3); // lwz @ 0x80747B80
    /* addis r0, r3, 1 */ // 0x80747B84
    if (!=) goto 0x0x80747c24;
    r3 = r4;
    /* li r4, 1 */ // 0x80747B94
    FUN_8061DCF4(r3, r4); // bl 0x8061DCF4
    /* lfs f0, 0(r29) */ // 0x80747B9C
    /* li r7, 0 */ // 0x80747BA0
    *(0x110 + r30) = r7; // stw @ 0x80747BA4
    /* lis r4, 0 */ // 0x80747BA8
    /* lis r6, 0 */ // 0x80747BAC
    /* lfs f1, 0x30(r29) */ // 0x80747BB0
    /* stfs f0, 0x12c(r30) */ // 0x80747BB4
    /* lis r5, 0 */ // 0x80747BB8
    /* lfs f3, 0x34(r29) */ // 0x80747BBC
    r3 = r4 + 0; // 0x80747BC0
    /* lfs f0, 0(r6) */ // 0x80747BC4
    /* li r0, 1 */ // 0x80747BC8
    /* lfs f4, 0(r5) */ // 0x80747BCC
    /* fmuls f5, f1, f0 */ // 0x80747BD0
    /* lfs f0, 0x100(r30) */ // 0x80747BD4
    /* lfs f2, 0xf8(r30) */ // 0x80747BD8
    /* lfs f1, 0xfc(r30) */ // 0x80747BDC
    /* fdivs f4, f5, f4 */ // 0x80747BE0
    /* stfs f0, 0x124(r30) */ // 0x80747BE4
    /* lfs f5, 0x34(r30) */ // 0x80747BE8
    /* stfs f2, 0x11c(r30) */ // 0x80747BEC
    /* stfs f1, 0x120(r30) */ // 0x80747BF0
    /* stfs f5, 0x114(r30) */ // 0x80747BF4
    /* fdivs f0, f3, f4 */ // 0x80747BF8
    /* stfs f4, 0x118(r30) */ // 0x80747BFC
    *(0x128 + r30) = r7; // stb @ 0x80747C00
    /* stfs f0, 0x130(r30) */ // 0x80747C04
    /* lfs f0, 0(r4) */ // 0x80747C08
    /* stfs f0, 0xf8(r30) */ // 0x80747C0C
    /* lfs f0, 4(r3) */ // 0x80747C10
    /* stfs f0, 0xfc(r30) */ // 0x80747C14
    /* lfs f0, 8(r3) */ // 0x80747C18
    /* stfs f0, 0x100(r30) */ // 0x80747C1C
    *(0x134 + r30) = r0; // stb @ 0x80747C20
    r3 = r31;
    r31 = *(0x1c + r1); // lwz @ 0x80747C28
    r30 = *(0x18 + r1); // lwz @ 0x80747C2C
    r29 = *(0x14 + r1); // lwz @ 0x80747C30
    r0 = *(0x24 + r1); // lwz @ 0x80747C34
    return;
}