/* Function at 0x80626874, size=300 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_80626874(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x24 + r1) = r29; // stw @ 0x80626888
    r29 = r3;
    r0 = *(0x8c + r3); // lbz @ 0x80626890
    if (==) goto 0x0x80626984;
    r4 = *(0x90 + r3); // lwz @ 0x8062689C
    r6 = *(0x14 + r4); // lwz @ 0x806268A0
    r5 = *(0x20 + r6); // lwz @ 0x806268A4
    r4 = *(0x24 + r6); // lwz @ 0x806268A8
    r0 = *(0x28 + r6); // lwz @ 0x806268AC
    *(8 + r1) = r5; // stw @ 0x806268B0
    *(0xc + r1) = r4; // stw @ 0x806268B4
    *(0x10 + r1) = r0; // stw @ 0x806268B8
    FUN_8061DF18(); // bl 0x8061DF18
    /* lfs f3, 0x254(r3) */ // 0x806268C0
    /* stfs f3, 0x1c(r29) */ // 0x806268C4
    /* lfs f2, 8(r1) */ // 0x806268C8
    /* lfs f3, 0x258(r3) */ // 0x806268CC
    /* stfs f3, 0x20(r29) */ // 0x806268D0
    /* lfs f1, 0xc(r1) */ // 0x806268D4
    /* lfs f3, 0x25c(r3) */ // 0x806268D8
    /* stfs f3, 0x24(r29) */ // 0x806268DC
    /* lfs f0, 0x10(r1) */ // 0x806268E0
    /* lfs f3, 0x260(r3) */ // 0x806268E4
    /* stfs f3, 0x28(r29) */ // 0x806268E8
    /* lfs f3, 0x264(r3) */ // 0x806268EC
    /* stfs f3, 0x2c(r29) */ // 0x806268F0
    /* lfs f3, 0x268(r3) */ // 0x806268F4
    /* stfs f3, 0x30(r29) */ // 0x806268F8
    /* lfs f3, 0x26c(r3) */ // 0x806268FC
    /* stfs f3, 0x34(r29) */ // 0x80626900
    /* lfs f3, 0x270(r3) */ // 0x80626904
    /* stfs f3, 0x38(r29) */ // 0x80626908
    /* lfs f3, 0x274(r3) */ // 0x8062690C
    /* stfs f3, 0x3c(r29) */ // 0x80626910
    /* lfs f3, 0x278(r3) */ // 0x80626914
    /* stfs f3, 0x40(r29) */ // 0x80626918
    /* lfs f3, 0x27c(r3) */ // 0x8062691C
    r3 = r29;
    /* stfs f3, 0x44(r29) */ // 0x80626924
    /* stfs f2, 0x28(r29) */ // 0x80626928
    /* stfs f1, 0x38(r29) */ // 0x8062692C
    /* stfs f0, 0x48(r29) */ // 0x80626930
    FUN_8061ED38(r3); // bl 0x8061ED38
    r4 = r3;
    r3 = *(0x7c + r29); // lwz @ 0x8062693C
    r12 = *(0 + r3); // lwz @ 0x80626940
    r12 = *(0x14 + r12); // lwz @ 0x80626944
    /* mtctr r12 */ // 0x80626948
    /* bctrl  */ // 0x8062694C
    r30 = *(0x7c + r29); // lwz @ 0x80626950
    /* li r31, 0 */ // 0x80626954
    r3 = *(0x14 + r30); // lwz @ 0x80626958
    r3 = *(0 + r3); // lwz @ 0x8062695C
    if (==) goto 0x0x80626974;
    r5 = r29 + 0x1c; // 0x80626968
    /* li r4, 0 */ // 0x8062696C
    FUN_805E3430(r5, r4); // bl 0x805E3430
    r31 = r31 + 1; // 0x80626974
    r30 = r30 + 4; // 0x80626978
    if (<) goto 0x0x80626958;
    r0 = *(0x34 + r1); // lwz @ 0x80626984
    r31 = *(0x2c + r1); // lwz @ 0x80626988
    r30 = *(0x28 + r1); // lwz @ 0x8062698C
    r29 = *(0x24 + r1); // lwz @ 0x80626990
    return;
}