/* Function at 0x805F8438, size=124 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_805F8438(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x805F8440
    r5 = r5 + 0; // 0x805F8444
    *(0x14 + r1) = r0; // stw @ 0x805F8448
    /* lfs f2, 0x94(r5) */ // 0x805F844C
    *(0xc + r1) = r31; // stw @ 0x805F8450
    r31 = r4;
    /* fmr f3, f2 */ // 0x805F8458
    /* lfs f1, 0x98(r5) */ // 0x805F845C
    *(8 + r1) = r30; // stw @ 0x805F8460
    r30 = r3;
    /* lfs f4, 4(r5) */ // 0x805F8468
    /* li r4, 1 */ // 0x805F846C
    FUN_805F84B4(r4); // bl 0x805F84B4
    r3 = r30;
    FUN_8061E2D8(r4, r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x805F847C
    /* clrlwi r0, r3, 0x18 */ // 0x805F8480
    r3 = *(0 + r4); // lwz @ 0x805F8484
    /* mulli r0, r0, 0x248 */ // 0x805F8488
    r4 = r31;
    r3 = *(0x14 + r3); // lwz @ 0x805F8490
    r3 = r3 + r0; // 0x805F8494
    FUN_80823AC4(r4); // bl 0x80823AC4
    r0 = *(0x14 + r1); // lwz @ 0x805F849C
    r31 = *(0xc + r1); // lwz @ 0x805F84A0
    r30 = *(8 + r1); // lwz @ 0x805F84A4
    return;
}