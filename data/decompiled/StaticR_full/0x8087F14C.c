/* Function at 0x8087F14C, size=200 bytes */
/* Stack frame: 240 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_8087F14C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -240(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r30 = r5;
    *(0xe4 + r1) = r29; // stw @ 0x8087F164
    r29 = r4;
    *(0xe0 + r1) = r28; // stw @ 0x8087F16C
    r28 = r3;
    FUN_80654ECC(r3); // bl 0x80654ECC
    /* mulli r4, r29, 0xa */ // 0x8087F17C
    /* lis r0, 0x4330 */ // 0x8087F180
    *(0xd0 + r1) = r0; // stw @ 0x8087F184
    /* lis r3, 0 */ // 0x8087F188
    /* lfd f2, 0(r3) */ // 0x8087F18C
    /* lis r31, 0 */ // 0x8087F190
    /* xoris r0, r4, 0x8000 */ // 0x8087F194
    *(0xd4 + r1) = r0; // stw @ 0x8087F198
    r31 = r31 + 0; // 0x8087F19C
    /* lfs f0, 0x180(r28) */ // 0x8087F1A0
    /* lfd f1, 0xd0(r1) */ // 0x8087F1A4
    r3 = r28;
    *(0x190 + r28) = r30; // stw @ 0x8087F1AC
    r4 = r31 + 0xfa; // 0x8087F1B0
    /* fsubs f1, f1, f2 */ // 0x8087F1B4
    /* li r5, 0x522 */ // 0x8087F1BC
    /* stfs f1, 0x188(r28) */ // 0x8087F1C0
    /* fadds f0, f0, f1 */ // 0x8087F1C4
    /* fctiwz f0, f0 */ // 0x8087F1C8
    /* stfd f0, 0xd8(r1) */ // 0x8087F1CC
    r0 = *(0xdc + r1); // lwz @ 0x8087F1D0
    *(0x18c + r28) = r0; // stw @ 0x8087F1D4
    *(8 + r1) = r29; // stw @ 0x8087F1D8
    FUN_806A093C(); // bl 0x806A093C
    r5 = *(0x190 + r28); // lwz @ 0x8087F1E0
    r3 = r28;
    r4 = r31 + 0x106; // 0x8087F1E8
    FUN_806A093C(r3, r4, r6); // bl 0x806A093C
    r0 = *(0xf4 + r1); // lwz @ 0x8087F1F4
    r31 = *(0xec + r1); // lwz @ 0x8087F1F8
    r30 = *(0xe8 + r1); // lwz @ 0x8087F1FC
    r29 = *(0xe4 + r1); // lwz @ 0x8087F200
    r28 = *(0xe0 + r1); // lwz @ 0x8087F204
    return;
}