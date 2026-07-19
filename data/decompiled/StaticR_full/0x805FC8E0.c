/* Function at 0x805FC8E0, size=212 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_805FC8E0(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x54 + r1) = r29; // stw @ 0x805FC8F4
    r29 = r3;
    r0 = *(0x8c + r3); // lbz @ 0x805FC8FC
    if (==) goto 0x0x805fca8c;
    r6 = *(0x90 + r3); // lwz @ 0x805FC908
    r5 = *(0xc + r6); // lwz @ 0x805FC90C
    r4 = *(0x10 + r6); // lwz @ 0x805FC910
    r0 = *(0x14 + r6); // lwz @ 0x805FC914
    *(0x44 + r1) = r5; // stw @ 0x805FC918
    *(0x48 + r1) = r4; // stw @ 0x805FC91C
    *(0x4c + r1) = r0; // stw @ 0x805FC920
    FUN_8061ED38(); // bl 0x8061ED38
    r7 = *(0x90 + r29); // lwz @ 0x805FC928
    /* lis r6, 0 */ // 0x805FC92C
    /* lfs f0, 0(r3) */ // 0x805FC930
    /* lfs f1, 0(r7) */ // 0x805FC938
    /* lfs f2, 0(r6) */ // 0x805FC940
    /* fmuls f3, f1, f0 */ // 0x805FC944
    /* lfs f0, 0x4c(r1) */ // 0x805FC948
    /* lfs f1, 0x48(r1) */ // 0x805FC94C
    /* stfs f3, 0x38(r1) */ // 0x805FC950
    /* fmuls f5, f2, f0 */ // 0x805FC954
    /* fmuls f4, f2, f1 */ // 0x805FC958
    /* lfs f0, 0x44(r1) */ // 0x805FC95C
    /* lfs f3, 4(r7) */ // 0x805FC960
    /* lfs f1, 4(r3) */ // 0x805FC964
    /* fmuls f2, f2, f0 */ // 0x805FC968
    /* fmuls f0, f3, f1 */ // 0x805FC96C
    /* stfs f0, 0x3c(r1) */ // 0x805FC970
    /* lfs f0, 8(r3) */ // 0x805FC974
    r3 = r29 + 0x4c; // 0x805FC978
    /* lfs f1, 8(r7) */ // 0x805FC97C
    /* fmuls f0, f1, f0 */ // 0x805FC980
    /* stfs f2, 8(r1) */ // 0x805FC984
    /* stfs f0, 0x40(r1) */ // 0x805FC988
    /* stfs f4, 0xc(r1) */ // 0x805FC98C
    /* stfs f5, 0x10(r1) */ // 0x805FC990
    FUN_805E3430(); // bl 0x805E3430
    r3 = r29 + 0x1c; // 0x805FC998
    r4 = r29 + 0x4c; // 0x805FC99C
    r5 = r3;
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
    /* lfs f0, 0x28(r29) */ // 0x805FC9A8
    r3 = r29;
    /* lfs f1, 0x38(r29) */ // 0x805FC9B0
}