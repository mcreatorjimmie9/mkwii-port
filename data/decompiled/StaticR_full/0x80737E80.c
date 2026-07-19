/* Function at 0x80737E80, size=276 bytes */
/* Stack frame: 128 bytes */
/* Saved registers: r31 */
/* Calls: 7 function(s) */

int FUN_80737E80(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -128(r1) */
    /* saved r31 */
    /* li r5, 0 */ // 0x80737E88
    *(0x84 + r1) = r0; // stw @ 0x80737E8C
    *(0x7c + r1) = r31; // stw @ 0x80737E90
    r31 = r3;
    r4 = r31 + 0x6f4; // 0x80737E9C
    FUN_805C70D8(r3, r4); // bl 0x805C70D8
    /* lfs f2, 0x38(r1) */ // 0x80737EA4
    /* lfs f1, 0x3c(r1) */ // 0x80737EAC
    r4 = r31 + 0x6f4; // 0x80737EB0
    /* lfs f0, 0x40(r1) */ // 0x80737EB4
    /* li r5, 1 */ // 0x80737EB8
    /* stfs f2, 0x48(r1) */ // 0x80737EBC
    /* stfs f1, 0x58(r1) */ // 0x80737EC0
    /* stfs f0, 0x68(r1) */ // 0x80737EC4
    FUN_805C70D8(r5); // bl 0x805C70D8
    /* lfs f2, 0x2c(r1) */ // 0x80737ECC
    /* lfs f1, 0x30(r1) */ // 0x80737ED4
    r4 = r31 + 0x6f4; // 0x80737ED8
    /* lfs f0, 0x34(r1) */ // 0x80737EDC
    /* li r5, 2 */ // 0x80737EE0
    /* stfs f2, 0x4c(r1) */ // 0x80737EE4
    /* stfs f1, 0x5c(r1) */ // 0x80737EE8
    /* stfs f0, 0x6c(r1) */ // 0x80737EEC
    FUN_805C70D8(r5); // bl 0x805C70D8
    FUN_805A4400(r3, r4); // bl 0x805A4400
    /* lfs f2, 0x14(r1) */ // 0x80737F00
    /* lfs f1, 0x18(r1) */ // 0x80737F08
    r4 = r31 + 0x6f4; // 0x80737F0C
    /* lfs f0, 0x1c(r1) */ // 0x80737F10
    /* li r5, 3 */ // 0x80737F14
    /* stfs f2, 0x50(r1) */ // 0x80737F18
    /* stfs f1, 0x60(r1) */ // 0x80737F1C
    /* stfs f0, 0x70(r1) */ // 0x80737F20
    FUN_805C70D8(r5); // bl 0x805C70D8
    /* lfs f2, 8(r1) */ // 0x80737F28
    r3 = r31;
    /* lfs f1, 0xc(r1) */ // 0x80737F30
    /* lfs f0, 0x10(r1) */ // 0x80737F38
    r8 = r31 + 0x7bc; // 0x80737F3C
    /* stfs f2, 0x54(r1) */ // 0x80737F40
    /* li r5, 2 */ // 0x80737F44
    /* li r6, 5 */ // 0x80737F48
    /* li r9, 1 */ // 0x80737F4C
    /* stfs f1, 0x64(r1) */ // 0x80737F50
    /* stfs f0, 0x74(r1) */ // 0x80737F54
    r4 = *(0x52c + r31); // lwz @ 0x80737F58
    FUN_807271EC(r6, r9); // bl 0x807271EC
    r4 = *(0x52c + r31); // lwz @ 0x80737F60
    r3 = r31;
    r8 = r31 + 0x7c8; // 0x80737F6C
    /* li r5, 5 */ // 0x80737F70
    /* li r6, 8 */ // 0x80737F74
    /* li r9, 1 */ // 0x80737F78
    FUN_807271EC(r7, r8, r5, r6, r9); // bl 0x807271EC
    r0 = *(0x84 + r1); // lwz @ 0x80737F80
    r31 = *(0x7c + r1); // lwz @ 0x80737F84
    return;
}