/* Function at 0x8063ABEC, size=512 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 9 function(s) */

int FUN_8063ABEC(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r5, 0 */ // 0x8063ABF4
    /* lis r7, 0 */ // 0x8063ABF8
    /* lis r6, 0 */ // 0x8063AC00
    *(0x2c + r1) = r31; // stw @ 0x8063AC04
    *(0x28 + r1) = r30; // stw @ 0x8063AC08
    r30 = r3;
    *(0x24 + r1) = r29; // stw @ 0x8063AC10
    /* lis r29, 0 */ // 0x8063AC14
    r4 = *(0 + r29); // lwz @ 0x8063AC18
    r5 = *(0 + r5); // lwz @ 0x8063AC1C
    r4 = *(0x10 + r4); // lwz @ 0x8063AC20
    r7 = *(0 + r7); // lwz @ 0x8063AC24
    r0 = *(0x68 + r4); // lwz @ 0x8063AC28
    r3 = *(0x18 + r5); // lwz @ 0x8063AC2C
    /* slwi r0, r0, 2 */ // 0x8063AC30
    r5 = *(0xb74 + r7); // lwz @ 0x8063AC34
    /* lwzx r4, r3, r0 */ // 0x8063AC38
    r0 = r5 + -5; // 0x8063AC3C
    r3 = *(0 + r6); // lwz @ 0x8063AC40
    r4 = *(0x9c + r4); // lbz @ 0x8063AC44
    /* cntlzw r0, r0 */ // 0x8063AC48
    /* srwi r31, r0, 5 */ // 0x8063AC4C
    /* extsb r4, r4 */ // 0x8063AC50
    FUN_8061D97C(); // bl 0x8061D97C
    if (==) goto 0x0x8063ac74;
    r3 = *(0 + r29); // lwz @ 0x8063AC60
    r3 = *(0x10 + r3); // lwz @ 0x8063AC64
    r3 = *(0x6c + r3); // lwz @ 0x8063AC68
    r8 = r3 + 0x64; // 0x8063AC6C
    /* b 0x8063ac7c */ // 0x8063AC70
    FUN_8061DA88(r8); // bl 0x8061DA88
    r8 = r3;
    r7 = *(0 + r8); // lwz @ 0x8063AC7C
    /* lis r29, 0 */ // 0x8063AC80
    r0 = *(4 + r8); // lwz @ 0x8063AC84
    *(0xc + r1) = r0; // stw @ 0x8063AC8C
    /* li r5, -1 */ // 0x8063AC90
    r3 = *(0 + r29); // lwz @ 0x8063AC94
    /* li r6, 2 */ // 0x8063AC98
    *(8 + r1) = r7; // stw @ 0x8063AC9C
    r0 = *(8 + r8); // lwz @ 0x8063ACA0
    *(0x10 + r1) = r0; // stw @ 0x8063ACA4
    FUN_805A6434(r6); // bl 0x805A6434
    /* extsh. r0, r3 */ // 0x8063ACAC
    r4 = r3;
    /* li r6, 0 */ // 0x8063ACB4
    if (<) goto 0x0x8063acd0;
    r3 = *(0 + r29); // lwz @ 0x8063ACBC
    /* clrlwi r4, r4, 0x10 */ // 0x8063ACC0
    FUN_805A6394(r4, r6); // bl 0x805A6394
    r3 = *(4 + r3); // lwz @ 0x8063ACC8
    r6 = *(0x28 + r3); // lha @ 0x8063ACCC
    if (==) goto 0x0x8063ad04;
    /* lis r3, 0 */ // 0x8063ACD8
    r5 = *(0x38 + r30); // lwz @ 0x8063ACDC
    r3 = *(0 + r3); // lwz @ 0x8063ACE0
    /* clrlwi r4, r6, 0x18 */ // 0x8063ACE4
    r5 = *(8 + r5); // lwz @ 0x8063ACE8
    r3 = *(0x10 + r3); // lwz @ 0x8063ACEC
    r0 = *(0x68 + r3); // lwz @ 0x8063ACF0
    r0 = r0 rlwinm 2; // rlwinm
    /* lwzx r3, r5, r0 */ // 0x8063ACF8
    FUN_80637534(); // bl 0x80637534
    /* b 0x8063ad28 */ // 0x8063AD00
    /* lis r3, 0 */ // 0x8063AD04
    r4 = *(0x38 + r30); // lwz @ 0x8063AD08
    r3 = *(0 + r3); // lwz @ 0x8063AD0C
    r4 = *(8 + r4); // lwz @ 0x8063AD10
    r3 = *(0x10 + r3); // lwz @ 0x8063AD14
    r0 = *(0x68 + r3); // lwz @ 0x8063AD18
    r0 = r0 rlwinm 2; // rlwinm
    /* lwzx r3, r4, r0 */ // 0x8063AD20
    *(0x20 + r3) = r6; // stb @ 0x8063AD24
    /* lis r4, 0 */ // 0x8063AD28
    r3 = *(0x38 + r30); // lwz @ 0x8063AD2C
    r4 = *(0 + r4); // lwz @ 0x8063AD30
    r4 = *(0x10 + r4); // lwz @ 0x8063AD34
    r4 = *(0x68 + r4); // lwz @ 0x8063AD38
    FUN_806376B4(r4); // bl 0x806376B4
    r4 = *(0xc8 + r30); // lwz @ 0x8063AD40
    if (==) goto 0x0x8063add4;
    if (==) goto 0x0x8063ad60;
    /* lis r3, 0 */ // 0x8063AD54
    /* lfs f0, 0(r3) */ // 0x8063AD58
    /* stfs f0, 0x20(r4) */ // 0x8063AD5C
    /* lis r31, 0 */ // 0x8063AD60
    r3 = *(0 + r31); // lwz @ 0x8063AD68
    /* li r5, -1 */ // 0x8063AD6C
    /* li r6, 6 */ // 0x8063AD70
    FUN_805A6434(r4, r5, r6); // bl 0x805A6434
    /* extsh. r0, r3 */ // 0x8063AD78
    r4 = r3;
    /* li r6, 0 */ // 0x8063AD80
    if (<) goto 0x0x8063ad9c;
    r3 = *(0 + r31); // lwz @ 0x8063AD88
    /* clrlwi r4, r4, 0x10 */ // 0x8063AD8C
    FUN_805A6394(r4, r6); // bl 0x805A6394
    r3 = *(4 + r3); // lwz @ 0x8063AD94
    r6 = *(0x28 + r3); // lha @ 0x8063AD98
    /* lis r4, 0 */ // 0x8063AD9C
    r5 = *(0xc8 + r30); // lwz @ 0x8063ADA0
    r3 = *(0 + r4); // lwz @ 0x8063ADA4
    r5 = *(0x18 + r5); // lwz @ 0x8063ADA8
    r3 = *(0x10 + r3); // lwz @ 0x8063ADAC
    r0 = *(0x68 + r3); // lwz @ 0x8063ADB0
    /* slwi r0, r0, 2 */ // 0x8063ADB4
    /* lwzx r3, r5, r0 */ // 0x8063ADB8
    *(5 + r3) = r6; // stb @ 0x8063ADBC
    r4 = *(0 + r4); // lwz @ 0x8063ADC0
    r3 = *(0xc8 + r30); // lwz @ 0x8063ADC4
    r4 = *(0x10 + r4); // lwz @ 0x8063ADC8
    r4 = *(0x68 + r4); // lwz @ 0x8063ADCC
    FUN_80648C1C(); // bl 0x80648C1C
    r0 = *(0x34 + r1); // lwz @ 0x8063ADD4
    r31 = *(0x2c + r1); // lwz @ 0x8063ADD8
    r30 = *(0x28 + r1); // lwz @ 0x8063ADDC
    r29 = *(0x24 + r1); // lwz @ 0x8063ADE0
}