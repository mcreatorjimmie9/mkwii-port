/* Function at 0x805F93EC, size=168 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 5 function(s) */

int FUN_805F93EC(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x805F9400
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x805F9408
    r29 = r3;
    FUN_8061DFF8(); // bl 0x8061DFF8
    r0 = *(0xc8 + r29); // lwz @ 0x805F9414
    r0 = r0 + r30; // 0x805F9418
    /* extsh r4, r0 */ // 0x805F941C
    FUN_8060E764(); // bl 0x8060E764
    r4 = *(0 + r29); // lwz @ 0x805F9424
    r3 = r29;
    r4 = *(4 + r4); // lwz @ 0x805F942C
    r0 = *(0xc + r4); // lwz @ 0x805F9430
    r0 = r0 | 2; // 0x805F9434
    *(0xc + r4) = r0; // stw @ 0x805F9438
    FUN_8061E2D8(r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x805F9440
    /* clrlwi r0, r3, 0x18 */ // 0x805F9444
    r3 = *(0 + r4); // lwz @ 0x805F9448
    /* mulli r0, r0, 0x248 */ // 0x805F944C
    r4 = r31;
    r3 = *(0x14 + r3); // lwz @ 0x805F9454
    r3 = r3 + r0; // 0x805F9458
    FUN_80823AC4(r4); // bl 0x80823AC4
    /* lis r4, 0 */ // 0x805F9460
    r3 = r29;
    /* lfs f1, 0(r4) */ // 0x805F9468
    /* li r4, 0x22 */ // 0x805F946C
    /* li r5, 1 */ // 0x805F9470
    FUN_8061DC98(r4, r3, r4, r5); // bl 0x8061DC98
    r0 = *(0x24 + r1); // lwz @ 0x805F9478
    r31 = *(0x1c + r1); // lwz @ 0x805F947C
    r30 = *(0x18 + r1); // lwz @ 0x805F9480
    r29 = *(0x14 + r1); // lwz @ 0x805F9484
    return;
}