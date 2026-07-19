/* Function at 0x807AD40C, size=156 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807AD40C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lfs f2, 0(r4) */ // 0x807AD414
    /* lfs f1, 4(r4) */ // 0x807AD41C
    *(0x1c + r1) = r31; // stw @ 0x807AD420
    /* li r31, 0 */ // 0x807AD424
    /* lfs f0, 8(r4) */ // 0x807AD428
    *(0x18 + r1) = r30; // stw @ 0x807AD42C
    r30 = r3;
    r5 = *(4 + r3); // lwz @ 0x807AD434
    r4 = *(0x24 + r3); // lwz @ 0x807AD438
    r5 = r5 + 1; // 0x807AD43C
    /* stfs f2, 8(r1) */ // 0x807AD440
    /* slwi r0, r5, 0x19 */ // 0x807AD444
    /* srwi r5, r5, 0x1f */ // 0x807AD448
    /* stfs f1, 0xc(r1) */ // 0x807AD44C
    /* subf r0, r5, r0 */ // 0x807AD450
    /* rotlwi r0, r0, 7 */ // 0x807AD454
    /* stfs f0, 0x10(r1) */ // 0x807AD458
    r0 = r0 + r5; // 0x807AD45C
    *(4 + r3) = r0; // stw @ 0x807AD460
    /* mulli r0, r0, 0xc */ // 0x807AD464
    /* stfsx f2, r4, r0 */ // 0x807AD468
    r3 = r4 + r0; // 0x807AD46C
    /* stfs f1, 4(r3) */ // 0x807AD470
    /* stfs f0, 8(r3) */ // 0x807AD474
    r3 = r30;
    r4 = r31;
    FUN_807AD904(r3, r4); // bl 0x807AD904
    r31 = r31 + 1; // 0x807AD484
    if (<) goto 0x0x807ad478;
    r0 = *(0x24 + r1); // lwz @ 0x807AD490
    r31 = *(0x1c + r1); // lwz @ 0x807AD494
    r30 = *(0x18 + r1); // lwz @ 0x807AD498
    return;
}