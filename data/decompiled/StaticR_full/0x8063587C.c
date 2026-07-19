/* Function at 0x8063587C, size=180 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_8063587C(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0x4330 */ // 0x80635884
    /* lis r5, 0 */ // 0x80635888
    /* lfd f1, 0(r5) */ // 0x80635890
    *(0x3c + r1) = r31; // stw @ 0x80635894
    r31 = r3;
    *(0x38 + r1) = r30; // stw @ 0x8063589C
    *(0x34 + r1) = r29; // stw @ 0x806358A0
    r7 = *(0x48 + r3); // lwz @ 0x806358A4
    *(0x20 + r1) = r4; // stw @ 0x806358A8
    r8 = *(8 + r7); // lwz @ 0x806358AC
    r3 = r7;
    r6 = *(0x46 + r7); // lha @ 0x806358B4
    r0 = *(0x48 + r7); // lha @ 0x806358B8
    r8 = r8 + 0xc; // 0x806358BC
    /* slwi r6, r6, 4 */ // 0x806358C0
    r12 = *(0 + r7); // lwz @ 0x806358C4
    /* lhzx r6, r8, r6 */ // 0x806358C8
    /* slwi r0, r0, 4 */ // 0x806358CC
    *(0x24 + r1) = r6; // stw @ 0x806358D0
    /* lhzx r0, r8, r0 */ // 0x806358D4
    /* lfd f0, 0x20(r1) */ // 0x806358D8
    *(0x2c + r1) = r0; // stw @ 0x806358DC
    /* fsubs f2, f0, f1 */ // 0x806358E0
    /* lfs f3, 0x40(r7) */ // 0x806358E4
    *(0x28 + r1) = r4; // stw @ 0x806358E8
    r12 = *(0x18 + r12); // lwz @ 0x806358EC
    /* lfd f0, 0x28(r1) */ // 0x806358F0
    /* fsubs f0, f0, f1 */ // 0x806358F4
    /* fsubs f0, f0, f2 */ // 0x806358F8
    /* fmuls f0, f0, f3 */ // 0x806358FC
    /* fadds f1, f2, f0 */ // 0x80635900
    /* mtctr r12 */ // 0x80635904
    /* bctrl  */ // 0x80635908
    r3 = *(0x48 + r31); // lwz @ 0x8063590C
    r12 = *(0 + r3); // lwz @ 0x80635910
    r12 = *(0x14 + r12); // lwz @ 0x80635914
    /* mtctr r12 */ // 0x80635918
    /* bctrl  */ // 0x8063591C
    r4 = *(0x48 + r31); // lwz @ 0x80635920
    r3 = *(0x2c + r31); // lwz @ 0x80635924
    r30 = r4 + 0x18; // 0x80635928
    FUN_8061DA88(); // bl 0x8061DA88
}