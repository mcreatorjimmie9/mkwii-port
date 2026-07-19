/* Function at 0x80739960, size=408 bytes */
/* Stack frame: 160 bytes */
/* Saved registers: r31, r30 */
/* Calls: 10 function(s) */

int FUN_80739960(int r3, int r4, int r5)
{
    /* Stack frame: -160(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x98 + r1) = r30; // stw @ 0x80739970
    r30 = r3;
    r0 = *(0x129 + r3); // lbz @ 0x80739978
    if (==) goto 0x0x80739b68;
    r3 = *(0x118 + r3); // lwz @ 0x80739984
    FUN_8061E2BC(); // bl 0x8061E2BC
    FUN_80858EA8(r4); // bl 0x80858EA8
    if (==) goto 0x0x80739a18;
    r4 = r30 + 0x6f4; // 0x807399A0
    /* li r5, 1 */ // 0x807399A4
    FUN_805C70D8(r3, r4, r5); // bl 0x805C70D8
    /* lfs f2, 0x50(r1) */ // 0x807399AC
    /* lfs f1, 0x54(r1) */ // 0x807399B4
    r4 = r30 + 0x6f4; // 0x807399B8
    /* lfs f0, 0x58(r1) */ // 0x807399BC
    /* li r5, 2 */ // 0x807399C0
    /* stfs f2, 0x60(r1) */ // 0x807399C4
    /* stfs f1, 0x70(r1) */ // 0x807399C8
    /* stfs f0, 0x80(r1) */ // 0x807399CC
    FUN_805C70D8(r5); // bl 0x805C70D8
    /* lfs f2, 0x44(r1) */ // 0x807399D4
    /* lfs f1, 0x48(r1) */ // 0x807399DC
    r4 = r30 + 0x6f4; // 0x807399E0
    /* lfs f0, 0x4c(r1) */ // 0x807399E4
    /* li r5, 0 */ // 0x807399E8
    /* stfs f2, 0x64(r1) */ // 0x807399EC
    /* stfs f1, 0x74(r1) */ // 0x807399F0
    /* stfs f0, 0x84(r1) */ // 0x807399F4
    FUN_805C70D8(r5); // bl 0x805C70D8
    /* lfs f2, 0x38(r1) */ // 0x807399FC
    /* lfs f1, 0x3c(r1) */ // 0x80739A00
    /* lfs f0, 0x40(r1) */ // 0x80739A04
    /* stfs f2, 0x68(r1) */ // 0x80739A08
    /* stfs f1, 0x78(r1) */ // 0x80739A0C
    /* stfs f0, 0x88(r1) */ // 0x80739A10
    /* b 0x80739ab8 */ // 0x80739A14
    r4 = r30 + 0x6f4; // 0x80739A1C
    /* li r5, 1 */ // 0x80739A20
    FUN_805C70D8(r3, r4, r5); // bl 0x805C70D8
    /* lfs f2, 0x2c(r1) */ // 0x80739A28
    /* lfs f1, 0x30(r1) */ // 0x80739A30
    r4 = r30 + 0x6f4; // 0x80739A34
    /* lfs f0, 0x34(r1) */ // 0x80739A38
    /* li r5, 2 */ // 0x80739A3C
    /* stfs f2, 0x60(r1) */ // 0x80739A40
    /* stfs f1, 0x70(r1) */ // 0x80739A44
    /* stfs f0, 0x80(r1) */ // 0x80739A48
    FUN_805C70D8(r5); // bl 0x805C70D8
    /* lfs f2, 0x20(r1) */ // 0x80739A50
    /* lfs f1, 0x24(r1) */ // 0x80739A58
    r4 = r30 + 0x6f4; // 0x80739A5C
    /* lfs f0, 0x28(r1) */ // 0x80739A60
    /* li r5, 0 */ // 0x80739A64
    /* stfs f2, 0x64(r1) */ // 0x80739A68
    /* stfs f1, 0x74(r1) */ // 0x80739A6C
    /* stfs f0, 0x84(r1) */ // 0x80739A70
    FUN_805C70D8(r5); // bl 0x805C70D8
    /* lfs f2, 0x14(r1) */ // 0x80739A78
    /* lfs f1, 0x18(r1) */ // 0x80739A80
    r4 = r30 + 0x6f4; // 0x80739A84
    /* lfs f0, 0x1c(r1) */ // 0x80739A88
    /* li r5, 3 */ // 0x80739A8C
    /* stfs f2, 0x68(r1) */ // 0x80739A90
    /* stfs f1, 0x78(r1) */ // 0x80739A94
    /* stfs f0, 0x88(r1) */ // 0x80739A98
    FUN_805C70D8(r5); // bl 0x805C70D8
    /* lfs f2, 8(r1) */ // 0x80739AA0
    /* lfs f1, 0xc(r1) */ // 0x80739AA4
    /* lfs f0, 0x10(r1) */ // 0x80739AA8
    /* stfs f2, 0x6c(r1) */ // 0x80739AAC
    /* stfs f1, 0x7c(r1) */ // 0x80739AB0
    /* stfs f0, 0x8c(r1) */ // 0x80739AB4
    r31 = *(0x21c + r30); // lwz @ 0x80739AB8
    if (==) goto 0x0x80739bc4;
    r3 = r31 + 0x74; // 0x80739AC4
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x80739adc;
    /* li r3, 0 */ // 0x80739AD4
    /* b 0x80739ae0 */ // 0x80739AD8
    r3 = *(0xc + r3); // lwz @ 0x80739ADC
    /* li r0, 0 */ // 0x80739AE4
    if (==) goto 0x0x80739af4;
    if (!=) goto 0x0x80739af8;
    /* li r0, 1 */ // 0x80739AF4
}