/* Function at 0x806F7F2C, size=536 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_806F7F2C(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r6;
    *(0x14 + r1) = r29; // stw @ 0x806F7F44
    r0 = *(0x41f4 + r3); // lwz @ 0x806F7F48
    if (!=) goto 0x0x806f8168;
    if (!=) goto 0x0x806f7f6c;
    /* mulli r0, r4, 0x1c0 */ // 0x806F7F5C
    r3 = r3 + r0; // 0x806F7F60
    r31 = r3 + 0x910; // 0x806F7F64
    /* b 0x806f7f78 */ // 0x806F7F68
    /* mulli r0, r4, 0x1c0 */ // 0x806F7F6C
    r3 = r3 + r0; // 0x806F7F70
    r31 = r3 + 0x830; // 0x806F7F74
    r0 = *(4 + r31); // lwz @ 0x806F7F78
    /* li r29, 0 */ // 0x806F7F7C
    /* li r3, 0 */ // 0x806F7F80
    /* li r4, 0 */ // 0x806F7F84
    /* li r5, 0 */ // 0x806F7F8C
    if (==) goto 0x0x806f7fa4;
    r0 = *(8 + r31); // lwz @ 0x806F7F94
    if (==) goto 0x0x806f7fa4;
    /* li r5, 1 */ // 0x806F7FA0
    if (==) goto 0x0x806f7fbc;
    r0 = *(0 + r31); // lwz @ 0x806F7FAC
    if (<) goto 0x0x806f7fbc;
    /* li r4, 1 */ // 0x806F7FB8
    if (==) goto 0x0x806f7fd4;
    r0 = *(0 + r31); // lwz @ 0x806F7FC4
    if (>) goto 0x0x806f7fd4;
    /* li r3, 1 */ // 0x806F7FD0
    if (==) goto 0x0x806f7ff0;
    r3 = r31 + 0xc; // 0x806F7FDC
    FUN_805E3430(r3, r3); // bl 0x805E3430
    if (==) goto 0x0x806f7ff0;
    /* li r29, 1 */ // 0x806F7FEC
    if (==) goto 0x0x806f8160;
    r3 = *(0 + r31); // lwz @ 0x806F7FF8
    /* lis r0, 0x4330 */ // 0x806F7FFC
    *(0 + r30) = r3; // stw @ 0x806F8000
    /* lis r8, 0 */ // 0x806F8004
    /* lis r7, 0 */ // 0x806F8008
    /* lis r5, 0x45e8 */ // 0x806F800C
    r10 = *(8 + r31); // lwz @ 0x806F8010
    r6 = r5 + -0x4d8d; // 0x806F8014
    r9 = *(4 + r31); // lwz @ 0x806F8018
    /* lis r4, 1 */ // 0x806F801C
    *(8 + r1) = r0; // stw @ 0x806F8020
    /* lis r3, 0x1062 */ // 0x806F8024
    /* subf r0, r10, r9 */ // 0x806F8028
    /* lfs f0, 0(r7) */ // 0x806F802C
    /* xoris r0, r0, 0x8000 */ // 0x806F8030
    *(0xc + r1) = r0; // stw @ 0x806F8034
    /* lfd f2, 0(r8) */ // 0x806F8038
    /* lfd f1, 8(r1) */ // 0x806F8040
    r0 = r3 + 0x4dd3; // 0x806F8044
    /* li r7, 1 */ // 0x806F8048
    r3 = r30 + 0x20; // 0x806F804C
    /* fsubs f1, f1, f2 */ // 0x806F8050
    r4 = r31 + 0xc; // 0x806F8054
    /* li r5, 0x64 */ // 0x806F8058
    /* fdivs f0, f1, f0 */ // 0x806F805C
    /* stfs f0, 4(r30) */ // 0x806F8060
    r29 = *(4 + r31); // lwz @ 0x806F8064
    /* mulhw r8, r6, r29 */ // 0x806F8068
    *(0x12 + r30) = r7; // stb @ 0x806F806C
    r11 = r8 >> 0xe; // srawi
    r8 = r8 >> 0xe; // srawi
    /* srwi r9, r8, 0x1f */ // 0x806F8078
    /* srwi r12, r11, 0x1f */ // 0x806F807C
    r8 = r8 + r9; // 0x806F8080
    r8 = r8 * r10; // 0x806F8084
    r9 = r11 + r12; // 0x806F8088
    *(0xc + r30) = r9; // sth @ 0x806F808C
    /* subf r8, r8, r29 */ // 0x806F8090
    /* mulhw r8, r0, r8 */ // 0x806F8094
    r9 = r8 >> 6; // srawi
    /* mulhw r8, r0, r29 */ // 0x806F809C
    /* srwi r11, r9, 0x1f */ // 0x806F80A0
    r9 = r9 + r11; // 0x806F80A4
    *(0xe + r30) = r9; // stb @ 0x806F80A8
    r8 = r8 >> 6; // srawi
    /* srwi r9, r8, 0x1f */ // 0x806F80B0
    r8 = r8 + r9; // 0x806F80B4
    /* mulli r8, r8, 0x3e8 */ // 0x806F80B8
    /* subf r8, r8, r29 */ // 0x806F80BC
    *(0x10 + r30) = r8; // sth @ 0x806F80C0
    r11 = *(8 + r31); // lwz @ 0x806F80C4
    /* mulhw r6, r6, r11 */ // 0x806F80C8
    *(0x1e + r30) = r7; // stb @ 0x806F80CC
    r8 = r6 >> 0xe; // srawi
    r6 = r6 >> 0xe; // srawi
    /* srwi r7, r6, 0x1f */ // 0x806F80D8
    /* srwi r9, r8, 0x1f */ // 0x806F80DC
    r6 = r6 + r7; // 0x806F80E0
    r6 = r6 * r10; // 0x806F80E4
    r7 = r8 + r9; // 0x806F80E8
    *(0x18 + r30) = r7; // sth @ 0x806F80EC
    /* subf r6, r6, r11 */ // 0x806F80F0
    /* mulhw r6, r0, r6 */ // 0x806F80F4
    r6 = r6 >> 6; // srawi
    /* mulhw r0, r0, r11 */ // 0x806F80FC
    /* srwi r7, r6, 0x1f */ // 0x806F8100
    r6 = r6 + r7; // 0x806F8104
    *(0x1a + r30) = r6; // stb @ 0x806F8108
    r0 = r0 >> 6; // srawi
    /* srwi r6, r0, 0x1f */ // 0x806F8110
    r0 = r0 + r6; // 0x806F8114
    /* mulli r0, r0, 0x3e8 */ // 0x806F8118
    /* subf r0, r0, r11 */ // 0x806F811C
    *(0x1c + r30) = r0; // sth @ 0x806F8120
    FUN_805E3430(); // bl 0x805E3430
    r0 = *(0x58 + r31); // lbz @ 0x806F8128
    r3 = r30 + 0x7c; // 0x806F812C
    *(0x6c + r30) = r0; // stw @ 0x806F8130
    r4 = r31 + 0x5c; // 0x806F8134
    /* li r5, 0x64 */ // 0x806F8138
    r0 = *(0x59 + r31); // lbz @ 0x806F813C
    *(0x70 + r30) = r0; // stw @ 0x806F8140
}