/* Function at 0x806B3408, size=136 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_806B3408(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x18 + r1) = r30; // stw @ 0x806B3418
    r30 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r4, 0 */ // 0x806B3424
    r3 = r30 + 0x4c; // 0x806B3428
    r4 = r4 + 0; // 0x806B342C
    *(0 + r30) = r4; // stw @ 0x806B3430
    FUN_80669F74(r4, r3, r4); // bl 0x80669F74
    /* lis r3, 0 */ // 0x806B3438
    r10 = *(0 + r3); // lwzu @ 0x806B343C
    /* lis r8, 0 */ // 0x806B3440
    /* lis r4, 0 */ // 0x806B3444
    r9 = *(4 + r3); // lwz @ 0x806B3448
    /* lis r5, 0 */ // 0x806B344C
    r0 = *(8 + r3); // lwz @ 0x806B3450
    r8 = r8 + 0; // 0x806B3454
    *(8 + r1) = r10; // stw @ 0x806B3458
    r3 = r30 + 0x294; // 0x806B345C
    r4 = r4 + 0; // 0x806B3460
    r5 = r5 + 0; // 0x806B3464
    *(0xc + r1) = r9; // stw @ 0x806B3468
    /* li r6, 0x254 */ // 0x806B346C
    /* li r7, 2 */ // 0x806B3470
    *(0x10 + r1) = r0; // stw @ 0x806B3474
    *(0x280 + r30) = r8; // stw @ 0x806B3478
    *(0x284 + r30) = r30; // stw @ 0x806B347C
    *(0x288 + r30) = r10; // stw @ 0x806B3480
    *(0x28c + r30) = r9; // stw @ 0x806B3484
    *(0x290 + r30) = r0; // stw @ 0x806B3488
    FUN_805E3430(); // bl 0x805E3430
}