/* Function at 0x80602918, size=140 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80602918(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(0x18 + r1) = r30; // stw @ 0x8060292C
    r30 = r3;
    r3 = r3 + 4; // 0x80602934
    FUN_8061E03C(r3); // bl 0x8061E03C
    r4 = r3;
    r5 = r31;
    FUN_80601794(r3, r4, r5, r3); // bl 0x80601794
    /* lfs f1, 0x20(r30) */ // 0x8060294C
    /* li r3, -1 */ // 0x80602950
    /* lfs f0, 8(r1) */ // 0x80602954
    r0 = *(0x2c + r30); // lwz @ 0x80602958
    /* fadds f0, f1, f0 */ // 0x8060295C
    /* lfs f2, 0x24(r30) */ // 0x80602960
    /* lfs f1, 0x28(r30) */ // 0x80602964
    r0 = r0 | 8; // 0x80602968
    /* stfs f0, 0x20(r30) */ // 0x8060296C
    /* lfs f0, 0xc(r1) */ // 0x80602970
    /* fadds f0, f2, f0 */ // 0x80602974
    /* stfs f0, 0x24(r30) */ // 0x80602978
    /* lfs f0, 0x10(r1) */ // 0x8060297C
    /* fadds f0, f1, f0 */ // 0x80602980
    *(0x2c + r30) = r0; // stw @ 0x80602984
    /* stfs f0, 0x28(r30) */ // 0x80602988
    r31 = *(0x1c + r1); // lwz @ 0x8060298C
    r30 = *(0x18 + r1); // lwz @ 0x80602990
    r0 = *(0x24 + r1); // lwz @ 0x80602994
    return;
}