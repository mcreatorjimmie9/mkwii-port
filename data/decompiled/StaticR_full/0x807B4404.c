/* Function at 0x807B4404, size=236 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 6 function(s) */

int FUN_807B4404(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r4, 1 */ // 0x807B440C
    /* li r5, 5 */ // 0x807B4410
    /* li r6, 8 */ // 0x807B4418
    *(0x2c + r1) = r31; // stw @ 0x807B441C
    *(0x28 + r1) = r30; // stw @ 0x807B4420
    *(0x24 + r1) = r29; // stw @ 0x807B4424
    *(0x20 + r1) = r28; // stw @ 0x807B4428
    r28 = r3;
    FUN_807B0D98(); // bl 0x807B0D98
    /* li r30, 0 */ // 0x807B4434
    r29 = *(0x210 + r28); // lwz @ 0x807B4438
    *(0x1e4 + r28) = r30; // stw @ 0x807B443C
    /* lis r31, 0 */ // 0x807B4440
    /* lis r5, 0 */ // 0x807B4444
    /* lis r6, 0 */ // 0x807B4448
    *(0x1e8 + r28) = r30; // stw @ 0x807B444C
    r3 = r29;
    /* lfs f1, 0(r31) */ // 0x807B4454
    /* li r4, 3 */ // 0x807B4458
    *(0x1ec + r28) = r30; // stw @ 0x807B445C
    /* lfs f2, 0(r5) */ // 0x807B4460
    *(0x1f0 + r28) = r30; // stw @ 0x807B4464
    r12 = *(0 + r29); // lwz @ 0x807B4468
    /* lfs f3, 0(r6) */ // 0x807B446C
    r12 = *(0xc + r12); // lwz @ 0x807B4470
    /* mtctr r12 */ // 0x807B4474
    /* bctrl  */ // 0x807B4478
    /* lfs f0, 0(r31) */ // 0x807B447C
    /* stfs f0, 0x14(r29) */ // 0x807B4480
    /* stfs f0, 0x18(r29) */ // 0x807B4484
    r29 = *(0x208 + r28); // lwz @ 0x807B4488
    r3 = r29;
    FUN_807AE7DC(r3); // bl 0x807AE7DC
    r3 = r29;
    FUN_807AE934(r3, r3); // bl 0x807AE934
    /* lis r5, 0 */ // 0x807B449C
    r4 = r28;
    r5 = r5 + 0; // 0x807B44A8
    FUN_807B2D44(r5, r4, r3, r5); // bl 0x807B2D44
    r3 = r29;
    /* li r5, 1 */ // 0x807B44B8
    FUN_807AEC18(r5, r3, r4, r5); // bl 0x807AEC18
    r3 = r29;
    /* li r4, 1 */ // 0x807B44C4
    FUN_807AED3C(r4, r5, r3, r4); // bl 0x807AED3C
    *(0x148 + r29) = r30; // stb @ 0x807B44CC
    r31 = *(0x2c + r1); // lwz @ 0x807B44D0
    r30 = *(0x28 + r1); // lwz @ 0x807B44D4
    r29 = *(0x24 + r1); // lwz @ 0x807B44D8
    r28 = *(0x20 + r1); // lwz @ 0x807B44DC
    r0 = *(0x34 + r1); // lwz @ 0x807B44E0
    return;
}