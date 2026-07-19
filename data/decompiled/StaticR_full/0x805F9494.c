/* Function at 0x805F9494, size=164 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_805F9494(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r0, 0x5a */ // 0x805F94A0
    *(0xc + r1) = r31; // stw @ 0x805F94A4
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805F94AC
    r30 = r3;
    *(0xc8 + r3) = r0; // stw @ 0x805F94B4
    FUN_8061DFF8(); // bl 0x8061DFF8
    r4 = *(0xc8 + r30); // lwz @ 0x805F94BC
    r0 = r4 + 0x1e0; // 0x805F94C0
    /* extsh r4, r0 */ // 0x805F94C4
    FUN_8060E764(); // bl 0x8060E764
    r4 = *(0 + r30); // lwz @ 0x805F94CC
    r3 = r30;
    r4 = *(4 + r4); // lwz @ 0x805F94D4
    r0 = *(0xc + r4); // lwz @ 0x805F94D8
    r0 = r0 | 2; // 0x805F94DC
    *(0xc + r4) = r0; // stw @ 0x805F94E0
    FUN_8061E2D8(r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x805F94E8
    /* clrlwi r0, r3, 0x18 */ // 0x805F94EC
    r3 = *(0 + r4); // lwz @ 0x805F94F0
    /* mulli r0, r0, 0x248 */ // 0x805F94F4
    r4 = r31;
    r3 = *(0x14 + r3); // lwz @ 0x805F94FC
    r3 = r3 + r0; // 0x805F9500
    FUN_80823AC4(r4); // bl 0x80823AC4
    /* lis r4, 0 */ // 0x805F9508
    r3 = r30;
    /* lfs f1, 0(r4) */ // 0x805F9510
    /* li r4, 0x22 */ // 0x805F9514
    /* li r5, 1 */ // 0x805F9518
    FUN_8061DC98(r4, r3, r4, r5); // bl 0x8061DC98
    r0 = *(0x14 + r1); // lwz @ 0x805F9520
    r31 = *(0xc + r1); // lwz @ 0x805F9524
    r30 = *(8 + r1); // lwz @ 0x805F9528
    return;
}