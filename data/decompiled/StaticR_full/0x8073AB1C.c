/* Function at 0x8073AB1C, size=368 bytes */
/* Stack frame: 160 bytes */
/* Saved registers: r31 */
/* Calls: 10 function(s) */

int FUN_8073AB1C(int r3, int r4, int r5)
{
    /* Stack frame: -160(r1) */
    /* saved r31 */
    *(0x9c + r1) = r31; // stw @ 0x8073AB28
    r31 = r3;
    r3 = *(0x118 + r3); // lwz @ 0x8073AB30
    FUN_8061E2BC(); // bl 0x8061E2BC
    FUN_80858EA8(r4); // bl 0x80858EA8
    if (==) goto 0x0x8073abc4;
    r4 = r31 + 0x6f4; // 0x8073AB4C
    /* li r5, 1 */ // 0x8073AB50
    FUN_805C70D8(r3, r4, r5); // bl 0x805C70D8
    /* lfs f2, 0x50(r1) */ // 0x8073AB58
    /* lfs f1, 0x54(r1) */ // 0x8073AB60
    r4 = r31 + 0x6f4; // 0x8073AB64
    /* lfs f0, 0x58(r1) */ // 0x8073AB68
    /* li r5, 2 */ // 0x8073AB6C
    /* stfs f2, 0x60(r1) */ // 0x8073AB70
    /* stfs f1, 0x70(r1) */ // 0x8073AB74
    /* stfs f0, 0x80(r1) */ // 0x8073AB78
    FUN_805C70D8(r5); // bl 0x805C70D8
    /* lfs f2, 0x44(r1) */ // 0x8073AB80
    /* lfs f1, 0x48(r1) */ // 0x8073AB88
    r4 = r31 + 0x6f4; // 0x8073AB8C
    /* lfs f0, 0x4c(r1) */ // 0x8073AB90
    /* li r5, 0 */ // 0x8073AB94
    /* stfs f2, 0x64(r1) */ // 0x8073AB98
    /* stfs f1, 0x74(r1) */ // 0x8073AB9C
    /* stfs f0, 0x84(r1) */ // 0x8073ABA0
    FUN_805C70D8(r5); // bl 0x805C70D8
    /* lfs f2, 0x38(r1) */ // 0x8073ABA8
    /* lfs f1, 0x3c(r1) */ // 0x8073ABAC
    /* lfs f0, 0x40(r1) */ // 0x8073ABB0
    /* stfs f2, 0x68(r1) */ // 0x8073ABB4
    /* stfs f1, 0x78(r1) */ // 0x8073ABB8
    /* stfs f0, 0x88(r1) */ // 0x8073ABBC
    /* b 0x8073ac64 */ // 0x8073ABC0
    r4 = r31 + 0x6f4; // 0x8073ABC8
    /* li r5, 1 */ // 0x8073ABCC
    FUN_805C70D8(r3, r4, r5); // bl 0x805C70D8
    /* lfs f2, 0x2c(r1) */ // 0x8073ABD4
    /* lfs f1, 0x30(r1) */ // 0x8073ABDC
    r4 = r31 + 0x6f4; // 0x8073ABE0
    /* lfs f0, 0x34(r1) */ // 0x8073ABE4
    /* li r5, 2 */ // 0x8073ABE8
    /* stfs f2, 0x60(r1) */ // 0x8073ABEC
    /* stfs f1, 0x70(r1) */ // 0x8073ABF0
    /* stfs f0, 0x80(r1) */ // 0x8073ABF4
    FUN_805C70D8(r5); // bl 0x805C70D8
    /* lfs f2, 0x20(r1) */ // 0x8073ABFC
    /* lfs f1, 0x24(r1) */ // 0x8073AC04
    r4 = r31 + 0x6f4; // 0x8073AC08
    /* lfs f0, 0x28(r1) */ // 0x8073AC0C
    /* li r5, 0 */ // 0x8073AC10
    /* stfs f2, 0x64(r1) */ // 0x8073AC14
    /* stfs f1, 0x74(r1) */ // 0x8073AC18
    /* stfs f0, 0x84(r1) */ // 0x8073AC1C
    FUN_805C70D8(r5); // bl 0x805C70D8
    /* lfs f2, 0x14(r1) */ // 0x8073AC24
    /* lfs f1, 0x18(r1) */ // 0x8073AC2C
    r4 = r31 + 0x6f4; // 0x8073AC30
    /* lfs f0, 0x1c(r1) */ // 0x8073AC34
    /* li r5, 3 */ // 0x8073AC38
    /* stfs f2, 0x68(r1) */ // 0x8073AC3C
    /* stfs f1, 0x78(r1) */ // 0x8073AC40
    /* stfs f0, 0x88(r1) */ // 0x8073AC44
    FUN_805C70D8(r5); // bl 0x805C70D8
    /* lfs f2, 8(r1) */ // 0x8073AC4C
    /* lfs f1, 0xc(r1) */ // 0x8073AC50
    /* lfs f0, 0x10(r1) */ // 0x8073AC54
    /* stfs f2, 0x6c(r1) */ // 0x8073AC58
    /* stfs f1, 0x7c(r1) */ // 0x8073AC5C
    /* stfs f0, 0x8c(r1) */ // 0x8073AC60
    r31 = *(0x240 + r31); // lwz @ 0x8073AC64
    if (==) goto 0x0x8073acd8;
    r3 = r31 + 0x74; // 0x8073AC70
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x8073ac88;
    /* li r3, 0 */ // 0x8073AC80
    /* b 0x8073ac8c */ // 0x8073AC84
    r3 = *(0xc + r3); // lwz @ 0x8073AC88
}