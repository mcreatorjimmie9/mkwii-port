/* Function at 0x8070F15C, size=104 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8070F15C(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r7, 0 */ // 0x8070F164
    /* lis r6, 0 */ // 0x8070F168
    *(0x24 + r1) = r0; // stw @ 0x8070F16C
    /* lis r0, 0x4330 */ // 0x8070F170
    /* lfd f1, 0(r7) */ // 0x8070F174
    /* lis r5, 0 */ // 0x8070F178
    *(0x1c + r1) = r31; // stw @ 0x8070F17C
    r31 = r3;
    /* lfs f2, 0(r6) */ // 0x8070F184
    r8 = *(0x190 + r3); // lwz @ 0x8070F188
    r4 = *(0x1ac + r3); // lwz @ 0x8070F18C
    *(8 + r1) = r0; // stw @ 0x8070F190
    /* subf r4, r8, r4 */ // 0x8070F194
    /* xoris r0, r4, 0x8000 */ // 0x8070F198
    *(0xc + r1) = r0; // stw @ 0x8070F19C
    /* lis r4, 0 */ // 0x8070F1A0
    /* lfd f0, 8(r1) */ // 0x8070F1A4
    /* fsubs f3, f0, f1 */ // 0x8070F1A8
    /* lfs f1, 0(r5) */ // 0x8070F1AC
    /* lfs f0, 0(r4) */ // 0x8070F1B0
    /* fmuls f2, f2, f3 */ // 0x8070F1B4
    /* fdivs f1, f2, f1 */ // 0x8070F1B8
    /* fmuls f1, f0, f1 */ // 0x8070F1BC
    FUN_805E3430(); // bl 0x805E3430
}