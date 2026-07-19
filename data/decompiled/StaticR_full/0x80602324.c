/* Function at 0x80602324, size=156 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 4 function(s) */

int FUN_80602324(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r30 = r3;
    r3 = r3 + 4; // 0x8060233C
    *(0x14 + r1) = r29; // stw @ 0x80602340
    *(0x10 + r1) = r28; // stw @ 0x80602344
    FUN_8061ED38(r3); // bl 0x8061ED38
    r29 = r3;
    r3 = r30 + 4; // 0x80602350
    FUN_8061DAE0(r3); // bl 0x8061DAE0
    r28 = r3;
    r3 = r30 + 4; // 0x8060235C
    FUN_8061DC28(r3, r3); // bl 0x8061DC28
    r31 = *(8 + r3); // lwz @ 0x80602364
    /* li r30, 0 */ // 0x80602368
    /* b 0x80602390 */ // 0x8060236C
    /* clrlwi r0, r30, 0x10 */ // 0x80602370
    r3 = *(0x8c + r31); // lwz @ 0x80602374
    /* mulli r0, r0, 0x30 */ // 0x80602378
    r4 = r29;
    r5 = r28;
    r3 = r3 + r0; // 0x80602384
    FUN_80641220(r4, r5); // bl 0x80641220
    r30 = r30 + 1; // 0x8060238C
    r0 = *(0 + r31); // lha @ 0x80602390
    /* extsh r3, r30 */ // 0x80602394
    if (<) goto 0x0x80602370;
    r0 = *(0x24 + r1); // lwz @ 0x806023A0
    r31 = *(0x1c + r1); // lwz @ 0x806023A4
    r30 = *(0x18 + r1); // lwz @ 0x806023A8
    r29 = *(0x14 + r1); // lwz @ 0x806023AC
    r28 = *(0x10 + r1); // lwz @ 0x806023B0
    return;
}