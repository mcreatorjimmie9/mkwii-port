/* Function at 0x80635328, size=220 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80635328(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r4, 0x4330 */ // 0x80635330
    /* lis r5, 0 */ // 0x80635334
    *(0x24 + r1) = r0; // stw @ 0x80635338
    /* lfd f1, 0(r5) */ // 0x8063533C
    *(0x1c + r1) = r31; // stw @ 0x80635340
    r31 = r3;
    r7 = *(0x48 + r3); // lwz @ 0x80635348
    *(8 + r1) = r4; // stw @ 0x8063534C
    r8 = *(8 + r7); // lwz @ 0x80635350
    r3 = r7;
    r6 = *(0x46 + r7); // lha @ 0x80635358
    r0 = *(0x48 + r7); // lha @ 0x8063535C
    r8 = r8 + 0xc; // 0x80635360
    /* slwi r6, r6, 4 */ // 0x80635364
    r12 = *(0 + r7); // lwz @ 0x80635368
    /* lhzx r6, r8, r6 */ // 0x8063536C
    /* slwi r0, r0, 4 */ // 0x80635370
    *(0xc + r1) = r6; // stw @ 0x80635374
    /* lhzx r0, r8, r0 */ // 0x80635378
    /* lfd f0, 8(r1) */ // 0x8063537C
    *(0x14 + r1) = r0; // stw @ 0x80635380
    /* fsubs f2, f0, f1 */ // 0x80635384
    /* lfs f3, 0x40(r7) */ // 0x80635388
    *(0x10 + r1) = r4; // stw @ 0x8063538C
    r12 = *(0x18 + r12); // lwz @ 0x80635390
    /* lfd f0, 0x10(r1) */ // 0x80635394
    /* fsubs f0, f0, f1 */ // 0x80635398
    /* fsubs f0, f0, f2 */ // 0x8063539C
    /* fmuls f0, f0, f3 */ // 0x806353A0
    /* fadds f1, f2, f0 */ // 0x806353A4
    /* mtctr r12 */ // 0x806353A8
    /* bctrl  */ // 0x806353AC
    r3 = *(0x48 + r31); // lwz @ 0x806353B0
    r12 = *(0 + r3); // lwz @ 0x806353B4
    r12 = *(0x14 + r12); // lwz @ 0x806353B8
    /* mtctr r12 */ // 0x806353BC
    /* bctrl  */ // 0x806353C0
    r12 = *(0 + r31); // lwz @ 0x806353C4
    r3 = r31;
    r12 = *(0x14 + r12); // lwz @ 0x806353CC
    /* mtctr r12 */ // 0x806353D0
    /* bctrl  */ // 0x806353D4
    r3 = *(4 + r31); // lwz @ 0x806353D8
    r4 = *(0x48 + r31); // lwz @ 0x806353DC
    r3 = *(0x90 + r3); // lwz @ 0x806353E0
    /* lfs f0, 0x18(r4) */ // 0x806353E4
    /* stfs f0, 0x64(r3) */ // 0x806353E8
    /* lfs f0, 0x1c(r4) */ // 0x806353EC
    /* stfs f0, 0x68(r3) */ // 0x806353F0
    /* lfs f0, 0x20(r4) */ // 0x806353F4
    /* stfs f0, 0x6c(r3) */ // 0x806353F8
    r3 = *(0x2c + r31); // lwz @ 0x806353FC
    FUN_8061DA88(); // bl 0x8061DA88
}