/* Function at 0x805F9538, size=164 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_805F9538(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r0, 0x14 */ // 0x805F9544
    *(0xc + r1) = r31; // stw @ 0x805F9548
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805F9550
    r30 = r3;
    *(0xc8 + r3) = r0; // stw @ 0x805F9558
    FUN_8061DFF8(); // bl 0x8061DFF8
    r4 = *(0xc8 + r30); // lwz @ 0x805F9560
    r0 = r4 + 0x1e0; // 0x805F9564
    /* extsh r4, r0 */ // 0x805F9568
    FUN_8060E764(); // bl 0x8060E764
    r4 = *(0 + r30); // lwz @ 0x805F9570
    r3 = r30;
    r4 = *(4 + r4); // lwz @ 0x805F9578
    r0 = *(0xc + r4); // lwz @ 0x805F957C
    r0 = r0 | 2; // 0x805F9580
    *(0xc + r4) = r0; // stw @ 0x805F9584
    FUN_8061E2D8(r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x805F958C
    /* clrlwi r0, r3, 0x18 */ // 0x805F9590
    r3 = *(0 + r4); // lwz @ 0x805F9594
    /* mulli r0, r0, 0x248 */ // 0x805F9598
    r4 = r31;
    r3 = *(0x14 + r3); // lwz @ 0x805F95A0
    r3 = r3 + r0; // 0x805F95A4
    FUN_80823AC4(r4); // bl 0x80823AC4
    /* lis r4, 0 */ // 0x805F95AC
    r3 = r30;
    /* lfs f1, 0(r4) */ // 0x805F95B4
    /* li r4, 0x22 */ // 0x805F95B8
    /* li r5, 1 */ // 0x805F95BC
    FUN_8061DC98(r4, r3, r4, r5); // bl 0x8061DC98
    r0 = *(0x14 + r1); // lwz @ 0x805F95C4
    r31 = *(0xc + r1); // lwz @ 0x805F95C8
    r30 = *(8 + r1); // lwz @ 0x805F95CC
    return;
}