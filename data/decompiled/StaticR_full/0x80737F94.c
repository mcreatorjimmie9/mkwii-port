/* Function at 0x80737F94, size=288 bytes */
/* Stack frame: 128 bytes */
/* Saved registers: r31 */
/* Calls: 7 function(s) */

int FUN_80737F94(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -128(r1) */
    /* saved r31 */
    *(0x7c + r1) = r31; // stw @ 0x80737FA0
    r31 = r3;
    r0 = *(0x43 + r3); // lbz @ 0x80737FA8
    if (!=) goto 0x0x807380a0;
    r4 = r31 + 0x6f4; // 0x80737FB8
    /* li r5, 0 */ // 0x80737FBC
    FUN_805C70D8(r3, r4, r5); // bl 0x805C70D8
    /* lfs f2, 0x38(r1) */ // 0x80737FC4
    /* lfs f1, 0x3c(r1) */ // 0x80737FCC
    r4 = r31 + 0x6f4; // 0x80737FD0
    /* lfs f0, 0x40(r1) */ // 0x80737FD4
    /* li r5, 1 */ // 0x80737FD8
    /* stfs f2, 0x48(r1) */ // 0x80737FDC
    /* stfs f1, 0x58(r1) */ // 0x80737FE0
    /* stfs f0, 0x68(r1) */ // 0x80737FE4
    FUN_805C70D8(r5); // bl 0x805C70D8
    /* lfs f2, 0x2c(r1) */ // 0x80737FEC
    /* lfs f1, 0x30(r1) */ // 0x80737FF4
    r4 = r31 + 0x6f4; // 0x80737FF8
    /* lfs f0, 0x34(r1) */ // 0x80737FFC
    /* li r5, 2 */ // 0x80738000
    /* stfs f2, 0x4c(r1) */ // 0x80738004
    /* stfs f1, 0x5c(r1) */ // 0x80738008
    /* stfs f0, 0x6c(r1) */ // 0x8073800C
    FUN_805C70D8(r5); // bl 0x805C70D8
    FUN_805A4400(r3, r4); // bl 0x805A4400
    /* lfs f2, 0x14(r1) */ // 0x80738020
    /* lfs f1, 0x18(r1) */ // 0x80738028
    r4 = r31 + 0x6f4; // 0x8073802C
    /* lfs f0, 0x1c(r1) */ // 0x80738030
    /* li r5, 3 */ // 0x80738034
    /* stfs f2, 0x50(r1) */ // 0x80738038
    /* stfs f1, 0x60(r1) */ // 0x8073803C
    /* stfs f0, 0x70(r1) */ // 0x80738040
    FUN_805C70D8(r5); // bl 0x805C70D8
    /* lfs f2, 8(r1) */ // 0x80738048
    r3 = r31;
    /* lfs f1, 0xc(r1) */ // 0x80738050
    /* lfs f0, 0x10(r1) */ // 0x80738058
    r8 = r31 + 0x7bc; // 0x8073805C
    /* stfs f2, 0x54(r1) */ // 0x80738060
    /* li r5, 2 */ // 0x80738064
    /* li r6, 5 */ // 0x80738068
    /* li r9, 1 */ // 0x8073806C
    /* stfs f1, 0x64(r1) */ // 0x80738070
    /* stfs f0, 0x74(r1) */ // 0x80738074
    r4 = *(0x52c + r31); // lwz @ 0x80738078
    FUN_807273A0(r6, r9); // bl 0x807273A0
    r4 = *(0x52c + r31); // lwz @ 0x80738080
    r3 = r31;
    r8 = r31 + 0x7c8; // 0x8073808C
    /* li r5, 5 */ // 0x80738090
    /* li r6, 8 */ // 0x80738094
    /* li r9, 1 */ // 0x80738098
    FUN_807273A0(r7, r8, r5, r6, r9); // bl 0x807273A0
    r0 = *(0x84 + r1); // lwz @ 0x807380A0
    r31 = *(0x7c + r1); // lwz @ 0x807380A4
    return;
}