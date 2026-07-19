/* Function at 0x80769894, size=232 bytes */
/* Stack frame: 112 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_80769894(int r3, int r4, int r5)
{
    /* Stack frame: -112(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x807698A4
    r31 = r31 + 0; // 0x807698A8
    *(0x68 + r1) = r30; // stw @ 0x807698AC
    /* lis r30, 0 */ // 0x807698B0
    r30 = r30 + 0; // 0x807698B4
    *(0x64 + r1) = r29; // stw @ 0x807698B8
    r29 = r3;
    /* lfs f1, 0x4cc(r3) */ // 0x807698C0
    /* lfs f2, 0x4c8(r3) */ // 0x807698C4
    /* fabs f0, f1 */ // 0x807698C8
    /* fabs f3, f2 */ // 0x807698CC
    /* .byte 0xfc, 0x00, 0x18, 0x40 */ // 0x807698D0
    if (>=) goto 0x0x80769904;
    /* lfs f0, 4(r31) */ // 0x807698D8
    /* .byte 0xfc, 0x02, 0x00, 0x40 */ // 0x807698DC
    /* cror cr0eq, cr0gt, cr0eq */ // 0x807698E0
    if (!=) goto 0x0x807698f8;
    /* lfs f0, 0x5c(r30) */ // 0x807698E8
    /* fadds f0, f1, f0 */ // 0x807698EC
    /* stfs f0, 0x4cc(r3) */ // 0x807698F0
    /* b 0x80769904 */ // 0x807698F4
    /* lfs f0, 0x5c(r30) */ // 0x807698F8
    /* fsubs f0, f1, f0 */ // 0x807698FC
    /* stfs f0, 0x4cc(r3) */ // 0x80769900
    /* lfs f1, 0x4cc(r3) */ // 0x80769904
    /* lfs f0, 0x2c(r31) */ // 0x8076990C
    r3 = r3 + 0x4bc; // 0x80769910
    /* fmuls f1, f1, f0 */ // 0x80769914
    FUN_80743518(r4, r3); // bl 0x80743518
    r5 = r29 + 0x474; // 0x80769924
    FUN_805A4464(r3, r4, r5); // bl 0x805A4464
    /* lfs f0, 0x44(r1) */ // 0x8076992C
    /* stfs f0, 0x4a0(r29) */ // 0x80769934
    r4 = r29 + 0x4a0; // 0x80769938
    r5 = r29 + 0x30; // 0x8076993C
    /* lfs f0, 0x48(r1) */ // 0x80769940
    /* stfs f0, 0x4a4(r29) */ // 0x80769944
    /* lfs f0, 0x4c(r1) */ // 0x80769948
    /* stfs f0, 0x4a8(r29) */ // 0x8076994C
    FUN_805A4498(r5); // bl 0x805A4498
    /* lfs f0, 0x38(r1) */ // 0x80769954
    r3 = r29 + 0x4ac; // 0x80769958
    /* stfs f0, 0x4ac(r29) */ // 0x8076995C
    /* lfs f0, 4(r31) */ // 0x80769960
    /* lfs f1, 0x3c(r1) */ // 0x80769964
    /* stfs f1, 0x4b0(r29) */ // 0x80769968
    /* lfs f1, 0x40(r1) */ // 0x8076996C
    /* stfs f1, 0x4b4(r29) */ // 0x80769970
    /* stfs f0, 0x4b0(r29) */ // 0x80769974
    FUN_805E3430(); // bl 0x805E3430
}