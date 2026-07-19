/* Function at 0x80618430, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80618430(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r6 = r4;
    r7 = r5;
    *(0x14 + r1) = r0; // stw @ 0x80618440
    /* li r4, 5 */ // 0x80618444
    /* li r5, 0x17 */ // 0x80618448
    *(0xc + r1) = r31; // stw @ 0x8061844C
    r31 = r3;
    r3 = r3 + 4; // 0x80618454
    FUN_805BCA84(r4, r5, r3); // bl 0x805BCA84
    /* lis r4, 0 */ // 0x8061845C
    /* lfs f1, 4(r31) */ // 0x80618460
    /* lfs f0, 0(r4) */ // 0x80618464
    /* fadds f0, f1, f0 */ // 0x80618468
    /* stfs f0, 4(r31) */ // 0x8061846C
    r31 = *(0xc + r1); // lwz @ 0x80618470
    r0 = *(0x14 + r1); // lwz @ 0x80618474
    return;
}