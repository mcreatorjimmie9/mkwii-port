/* Function at 0x806F8FA8, size=324 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806F8FA8(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r5, 0x45e8 */ // 0x806F8FB0
    r6 = *(4 + r4); // lwz @ 0x806F8FB4
    *(0x24 + r1) = r0; // stw @ 0x806F8FBC
    /* mulhw r10, r12, r6 */ // 0x806F8FC0
    r0 = *(0 + r4); // lwz @ 0x806F8FC4
    *(0x1c + r1) = r31; // stw @ 0x806F8FC8
    /* lis r8, 0x1062 */ // 0x806F8FCC
    r7 = *(8 + r4); // lwz @ 0x806F8FD0
    /* lis r9, 1 */ // 0x806F8FD4
    *(0x18 + r1) = r30; // stw @ 0x806F8FD8
    r11 = r10 >> 0xe; // srawi
    r30 = r9 + -0x15a0; // 0x806F8FE0
    /* li r5, 1 */ // 0x806F8FE4
    *(0 + r3) = r0; // stw @ 0x806F8FE8
    r0 = r8 + 0x4dd3; // 0x806F8FEC
    r8 = r10 >> 0xe; // srawi
    /* lis r9, 0x4330 */ // 0x806F8FF4
    /* srwi r10, r8, 0x1f */ // 0x806F8FF8
    *(8 + r1) = r9; // stw @ 0x806F8FFC
    r8 = r8 + r10; // 0x806F9000
    /* srwi r9, r11, 0x1f */ // 0x806F9004
    r8 = r8 * r30; // 0x806F9008
    /* subf r31, r7, r6 */ // 0x806F900C
    r11 = r11 + r9; // 0x806F9010
    *(0xc + r3) = r11; // sth @ 0x806F9014
    /* xoris r10, r31, 0x8000 */ // 0x806F9018
    *(0xc + r1) = r10; // stw @ 0x806F901C
    /* subf r8, r8, r6 */ // 0x806F9020
    /* lis r10, 0 */ // 0x806F9024
    /* mulhw r8, r0, r8 */ // 0x806F9028
    /* lis r31, 0 */ // 0x806F902C
    /* lfd f2, 0(r31) */ // 0x806F9030
    /* lfd f1, 8(r1) */ // 0x806F9034
    r31 = r4;
    /* lfs f0, 0(r10) */ // 0x806F903C
    r9 = r8 >> 6; // srawi
    /* fsubs f1, f1, f2 */ // 0x806F9044
    /* mulhw r8, r0, r6 */ // 0x806F9048
    *(0x12 + r3) = r5; // stb @ 0x806F904C
    /* srwi r10, r9, 0x1f */ // 0x806F9050
    /* fdivs f0, f1, f0 */ // 0x806F9054
    *(0x1e + r3) = r5; // stb @ 0x806F9058
    r9 = r9 + r10; // 0x806F905C
    r11 = r8 >> 6; // srawi
    *(0xe + r3) = r9; // stb @ 0x806F9064
    /* mulhw r8, r12, r7 */ // 0x806F9068
    r10 = r8 >> 0xe; // srawi
    /* srwi r12, r11, 0x1f */ // 0x806F9070
    r8 = r8 >> 0xe; // srawi
    /* stfs f0, 4(r3) */ // 0x806F9078
    /* srwi r9, r8, 0x1f */ // 0x806F907C
    r11 = r11 + r12; // 0x806F9080
    r8 = r8 + r9; // 0x806F9084
    r4 = r4 + 0xc; // 0x806F9088
    r8 = r8 * r30; // 0x806F908C
    /* srwi r9, r10, 0x1f */ // 0x806F9090
    r30 = r3;
    r5 = r10 + r9; // 0x806F9098
    *(0x18 + r3) = r5; // sth @ 0x806F909C
    /* li r5, 0x64 */ // 0x806F90A0
    /* subf r8, r8, r7 */ // 0x806F90A4
    /* mulhw r8, r0, r8 */ // 0x806F90A8
    r8 = r8 >> 6; // srawi
    /* mulhw r0, r0, r7 */ // 0x806F90B0
    /* srwi r9, r8, 0x1f */ // 0x806F90B4
    r8 = r8 + r9; // 0x806F90B8
    *(0x1a + r3) = r8; // stb @ 0x806F90BC
    r0 = r0 >> 6; // srawi
    /* srwi r8, r0, 0x1f */ // 0x806F90C4
    r0 = r0 + r8; // 0x806F90C8
    /* mulli r8, r11, 0x3e8 */ // 0x806F90CC
    /* mulli r0, r0, 0x3e8 */ // 0x806F90D0
    /* subf r6, r8, r6 */ // 0x806F90D4
    *(0x10 + r3) = r6; // sth @ 0x806F90D8
    /* subf r0, r0, r7 */ // 0x806F90DC
    *(0x1c + r3) = r0; // sth @ 0x806F90E0
    r3 = r3 + 0x20; // 0x806F90E4
    FUN_805E3430(r3); // bl 0x805E3430
}