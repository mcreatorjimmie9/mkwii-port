/* Function at 0x805F95DC, size=188 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 7 function(s) */

int FUN_805F95DC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r0, 0xa0 */ // 0x805F95E8
    *(0xc + r1) = r31; // stw @ 0x805F95EC
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805F95F4
    r30 = r3;
    *(0xc8 + r3) = r0; // stw @ 0x805F95FC
    FUN_8061DFF8(); // bl 0x8061DFF8
    r4 = *(0xc8 + r30); // lwz @ 0x805F9604
    r0 = r4 + 0x1e0; // 0x805F9608
    /* extsh r4, r0 */ // 0x805F960C
    FUN_8060E764(); // bl 0x8060E764
    r4 = *(0 + r30); // lwz @ 0x805F9614
    r3 = r30;
    r4 = *(4 + r4); // lwz @ 0x805F961C
    r0 = *(0xc + r4); // lwz @ 0x805F9620
    r0 = r0 | 2; // 0x805F9624
    *(0xc + r4) = r0; // stw @ 0x805F9628
    FUN_8061E2D8(r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x805F9630
    /* clrlwi r0, r3, 0x18 */ // 0x805F9634
    r3 = *(0 + r4); // lwz @ 0x805F9638
    /* mulli r0, r0, 0x248 */ // 0x805F963C
    r4 = r31;
    r3 = *(0x14 + r3); // lwz @ 0x805F9644
    r3 = r3 + r0; // 0x805F9648
    FUN_80823AC4(r4); // bl 0x80823AC4
    /* lis r4, 0 */ // 0x805F9650
    r3 = r30;
    /* lfs f1, 0(r4) */ // 0x805F9658
    /* li r4, 0x22 */ // 0x805F965C
    /* li r5, 1 */ // 0x805F9660
    FUN_8061DC98(r4, r3, r4, r5); // bl 0x8061DC98
    r3 = r30;
    FUN_8061E0C8(r4, r5, r3); // bl 0x8061E0C8
    /* li r4, 1 */ // 0x805F9670
    /* li r5, 0 */ // 0x805F9674
    /* li r6, 0 */ // 0x805F9678
    FUN_80603114(r3, r4, r5, r6); // bl 0x80603114
    r0 = *(0x14 + r1); // lwz @ 0x805F9680
    r31 = *(0xc + r1); // lwz @ 0x805F9684
    r30 = *(8 + r1); // lwz @ 0x805F9688
    return;
}