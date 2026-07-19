/* Function at 0x80763F20, size=536 bytes */
/* Stack frame: 176 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 5 function(s) */

int FUN_80763F20(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -176(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0xa4 + r1) = r29; // stw @ 0x80763F34
    r29 = r3;
    r0 = *(0x10 + r3); // lwz @ 0x80763F3C
    if (==) goto 0x0x80764070;
    r0 = *(0xb0 + r3); // lbz @ 0x80763F48
    if (==) goto 0x0x80764070;
    r0 = *(0xb8 + r3); // lhz @ 0x80763F54
    if (!=) goto 0x0x80764070;
    /* lis r30, 0 */ // 0x80763F60
    r4 = r30 + 0; // 0x80763F68
    r5 = r29 + 0x10c; // 0x80763F6C
    FUN_805C6D88(r3, r4, r5); // bl 0x805C6D88
    r4 = r30 + 0; // 0x80763F74
    /* lfs f0, 0x2c(r1) */ // 0x80763F78
    /* lfs f6, 0x30(r1) */ // 0x80763F7C
    /* lis r7, 0 */ // 0x80763F80
    /* lfs f5, 0x34(r1) */ // 0x80763F84
    /* lis r31, 0 */ // 0x80763F88
    /* lfs f4, 0(r30) */ // 0x80763F8C
    /* lis r6, 0 */ // 0x80763F90
    /* lfs f3, 4(r4) */ // 0x80763F94
    /* lfs f2, 8(r4) */ // 0x80763F9C
    r4 = r29 + 0x30; // 0x80763FA0
    /* stfs f0, 0x68(r1) */ // 0x80763FA4
    /* lfs f1, 0(r7) */ // 0x80763FAC
    /* lfs f0, 0(r31) */ // 0x80763FB0
    /* stfs f6, 0x78(r1) */ // 0x80763FB4
    /* fmuls f6, f1, f0 */ // 0x80763FB8
    /* lfs f0, 0(r6) */ // 0x80763FBC
    /* stfs f5, 0x88(r1) */ // 0x80763FC0
    /* stfs f4, 0x6c(r1) */ // 0x80763FC4
    /* stfs f3, 0x7c(r1) */ // 0x80763FC8
    /* stfs f2, 0x8c(r1) */ // 0x80763FCC
    /* lfs f1, 0x10c(r29) */ // 0x80763FD0
    /* stfs f1, 0x70(r1) */ // 0x80763FD4
    /* lfs f1, 0x110(r29) */ // 0x80763FD8
    /* stfs f1, 0x80(r1) */ // 0x80763FDC
    /* lfs f1, 0x114(r29) */ // 0x80763FE0
    /* stfs f1, 0x90(r1) */ // 0x80763FE4
    /* stfs f0, 0x14(r1) */ // 0x80763FE8
    /* stfs f6, 0x18(r1) */ // 0x80763FEC
    /* stfs f0, 0x1c(r1) */ // 0x80763FF0
    FUN_805A4498(); // bl 0x805A4498
    /* lfs f2, 0x78(r1) */ // 0x80763FF8
    /* li r30, 0 */ // 0x80763FFC
    /* lfs f3, 0(r31) */ // 0x80764000
    /* lfs f1, 0x7c(r1) */ // 0x80764004
    /* lfs f0, 0x80(r1) */ // 0x80764008
    /* fmuls f2, f2, f3 */ // 0x8076400C
    /* fmuls f1, f1, f3 */ // 0x80764010
    /* lfs f5, 8(r1) */ // 0x80764014
    /* fmuls f0, f0, f3 */ // 0x80764018
    /* lfs f4, 0xc(r1) */ // 0x8076401C
    /* lfs f3, 0x10(r1) */ // 0x80764020
    /* stfs f5, 0x74(r1) */ // 0x80764024
    /* stfs f4, 0x84(r1) */ // 0x80764028
    /* stfs f3, 0x94(r1) */ // 0x8076402C
    /* stfs f2, 0x78(r1) */ // 0x80764030
    /* stfs f1, 0x7c(r1) */ // 0x80764034
    /* stfs f0, 0x80(r1) */ // 0x80764038
    r31 = *(0x10 + r29); // lwz @ 0x8076403C
    r3 = *(0x14 + r31); // lwz @ 0x80764040
    r3 = *(0 + r3); // lwz @ 0x80764044
    if (==) goto 0x0x8076405c;
    /* li r4, 0 */ // 0x80764054
    FUN_805E3430(r5, r4); // bl 0x805E3430
    r30 = r30 + 1; // 0x8076405C
    r31 = r31 + 4; // 0x80764060
    if (<) goto 0x0x80764040;
    /* b 0x8076411c */ // 0x8076406C
    /* lis r31, 0 */ // 0x80764070
    r4 = r31 + 0; // 0x80764078
    r5 = r29 + 0x10c; // 0x8076407C
    FUN_805C6D88(r3, r4, r5); // bl 0x805C6D88
    r3 = r31 + 0; // 0x80764084
    /* lfs f5, 0x20(r1) */ // 0x80764088
    /* lfs f4, 0x24(r1) */ // 0x8076408C
    /* li r30, 0 */ // 0x80764090
    /* lfs f3, 0x28(r1) */ // 0x80764094
    /* lfs f2, 0(r31) */ // 0x80764098
    /* lfs f1, 4(r3) */ // 0x8076409C
    /* lfs f0, 8(r3) */ // 0x807640A0
    /* stfs f5, 0x38(r1) */ // 0x807640A4
    /* stfs f4, 0x48(r1) */ // 0x807640A8
    /* stfs f3, 0x58(r1) */ // 0x807640AC
    /* stfs f2, 0x3c(r1) */ // 0x807640B0
    /* stfs f1, 0x4c(r1) */ // 0x807640B4
    /* stfs f0, 0x5c(r1) */ // 0x807640B8
    /* lfs f0, 0x10c(r29) */ // 0x807640BC
    /* stfs f0, 0x40(r1) */ // 0x807640C0
    /* lfs f0, 0x110(r29) */ // 0x807640C4
    /* stfs f0, 0x50(r1) */ // 0x807640C8
    /* lfs f0, 0x114(r29) */ // 0x807640CC
    /* stfs f0, 0x60(r1) */ // 0x807640D0
    /* lfs f0, 0x30(r29) */ // 0x807640D4
    /* stfs f0, 0x44(r1) */ // 0x807640D8
    /* lfs f0, 0x34(r29) */ // 0x807640DC
    /* stfs f0, 0x54(r1) */ // 0x807640E0
    /* lfs f0, 0x38(r29) */ // 0x807640E4
    /* stfs f0, 0x64(r1) */ // 0x807640E8
    r31 = *(0x10 + r29); // lwz @ 0x807640EC
    r3 = *(0x14 + r31); // lwz @ 0x807640F0
    r3 = *(0 + r3); // lwz @ 0x807640F4
    if (==) goto 0x0x8076410c;
    /* li r4, 0 */ // 0x80764104
    FUN_805E3430(r5, r4); // bl 0x805E3430
    r30 = r30 + 1; // 0x8076410C
    r31 = r31 + 4; // 0x80764110
    if (<) goto 0x0x807640f0;
    r0 = *(0xb4 + r1); // lwz @ 0x8076411C
    r31 = *(0xac + r1); // lwz @ 0x80764120
    r30 = *(0xa8 + r1); // lwz @ 0x80764124
    r29 = *(0xa4 + r1); // lwz @ 0x80764128
    return;
}