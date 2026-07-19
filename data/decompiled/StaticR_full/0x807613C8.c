/* Function at 0x807613C8, size=116 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_807613C8(int r3)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r29, 0 */ // 0x807613E0
    r29 = r29 + 0; // 0x807613E4
    *(0x30 + r1) = r28; // stw @ 0x807613E8
    r28 = r3;
    FUN_807617CC(); // bl 0x807617CC
    r0 = *(0x148 + r28); // lwz @ 0x807613F4
    /* lis r30, 0x4330 */ // 0x807613F8
    *(0x20 + r1) = r30; // stw @ 0x807613FC
    /* lis r31, 0 */ // 0x80761400
    /* xoris r0, r0, 0x8000 */ // 0x80761404
    /* lfd f1, 0x28(r29) */ // 0x80761408
    *(0x24 + r1) = r0; // stw @ 0x8076140C
    /* lfs f3, 0x44(r29) */ // 0x80761410
    /* lfd f0, 0x20(r1) */ // 0x80761414
    /* lfs f2, 0x48(r29) */ // 0x80761418
    /* fsubs f4, f0, f1 */ // 0x8076141C
    /* lfs f1, 0(r31) */ // 0x80761420
    /* lfs f0, 0x4c(r29) */ // 0x80761424
    /* fmuls f1, f2, f1 */ // 0x80761428
    /* fmuls f2, f3, f4 */ // 0x8076142C
    /* fdivs f1, f2, f1 */ // 0x80761430
    /* fmuls f1, f0, f1 */ // 0x80761434
    FUN_805E3430(); // bl 0x805E3430
}