/* Function at 0x8063F2C8, size=92 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8063F2C8(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lfs f0, 4(r5) */ // 0x8063F2D0
    r5 = *(0 + r4); // lwz @ 0x8063F2D8
    *(0x5c + r1) = r31; // stw @ 0x8063F2DC
    r31 = r7;
    *(0x58 + r1) = r30; // stw @ 0x8063F2E4
    r30 = r4;
    r4 = r6;
    r6 = *(4 + r30); // lwz @ 0x8063F2F0
    *(0x54 + r1) = r29; // stw @ 0x8063F2F4
    r29 = r3;
    r0 = *(8 + r30); // lwz @ 0x8063F2FC
    /* lfs f1, 0x114(r3) */ // 0x8063F300
    *(0x38 + r1) = r5; // stw @ 0x8063F304
    /* fadds f0, f1, f0 */ // 0x8063F30C
    *(0x3c + r1) = r6; // stw @ 0x8063F310
    /* stfs f0, 0x114(r3) */ // 0x8063F314
    r3 = r3 + 0x100; // 0x8063F318
    *(0x40 + r1) = r0; // stw @ 0x8063F31C
    FUN_805E3430(r3); // bl 0x805E3430
}