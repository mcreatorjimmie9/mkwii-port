/* Function at 0x807F789C, size=196 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_807F789C(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x807F78AC
    r31 = r31 + 0; // 0x807F78B0
    *(0x38 + r1) = r30; // stw @ 0x807F78B4
    r30 = r3;
    r0 = *(0xbc + r3); // lwz @ 0x807F78BC
    /* addic. r0, r0, -1 */ // 0x807F78C0
    *(0xbc + r3) = r0; // stw @ 0x807F78C4
    if (!=) goto 0x0x807f7948;
    /* li r4, 1 */ // 0x807F78CC
    /* li r0, 0xa */ // 0x807F78D0
    *(0xb0 + r3) = r4; // stw @ 0x807F78D4
    r4 = r30 + 0xe4; // 0x807F78D8
    *(0xb8 + r3) = r0; // stw @ 0x807F78DC
    /* lfs f1, 0x1c(r31) */ // 0x807F78E4
    FUN_805A443C(r4, r3); // bl 0x805A443C
    r4 = r30 + 0x30; // 0x807F78F0
    FUN_805A4464(r3, r4, r5); // bl 0x805A4464
    /* lfs f2, 0x18(r31) */ // 0x807F78FC
    /* lis r3, 0 */ // 0x807F7900
    /* lfs f0, 0x10(r31) */ // 0x807F7904
    r4 = r30 + 0x30; // 0x807F7908
    /* fctiwz f3, f2 */ // 0x807F790C
    /* lfs f1, 0x14(r31) */ // 0x807F7910
    /* fctiwz f0, f0 */ // 0x807F7914
    r3 = *(0 + r3); // lwz @ 0x807F7918
    /* fctiwz f2, f1 */ // 0x807F791C
    /* stfd f3, 0x20(r1) */ // 0x807F7920
    /* stfd f2, 0x28(r1) */ // 0x807F7924
    /* lfs f1, 0xc(r31) */ // 0x807F792C
    /* li r9, 0xc */ // 0x807F7930
    /* stfd f0, 0x30(r1) */ // 0x807F7934
    r8 = *(0x24 + r1); // lwz @ 0x807F7938
    r7 = *(0x2c + r1); // lwz @ 0x807F793C
    r6 = *(0x34 + r1); // lwz @ 0x807F7940
    FUN_80818D00(r9); // bl 0x80818D00
    r0 = *(0x44 + r1); // lwz @ 0x807F7948
    r31 = *(0x3c + r1); // lwz @ 0x807F794C
    r30 = *(0x38 + r1); // lwz @ 0x807F7950
    return;
}