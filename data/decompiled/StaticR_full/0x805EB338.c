/* Function at 0x805EB338, size=140 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_805EB338(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r6, 0 */ // 0x805EB340
    *(0x18 + r1) = r30; // stw @ 0x805EB34C
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x805EB354
    r29 = r3;
    r3 = *(0 + r6); // lwz @ 0x805EB35C
    /* li r6, 0 */ // 0x805EB360
    FUN_805CFD60(r6); // bl 0x805CFD60
    /* clrlwi. r0, r3, 0x1b */ // 0x805EB368
    r31 = r3;
    if (==) goto 0x0x805eb390;
    /* lis r3, 0 */ // 0x805EB374
    /* lis r5, 0 */ // 0x805EB378
    r3 = r3 + 0; // 0x805EB37C
    /* li r4, 0x3c */ // 0x805EB380
    r5 = r5 + 0; // 0x805EB384
    /* crclr cr1eq */ // 0x805EB388
    FUN_805E3430(r5, r3, r4, r5); // bl 0x805E3430
    *(0 + r29) = r31; // stw @ 0x805EB390
    r3 = r29;
    r4 = r30;
    /* li r5, 0 */ // 0x805EB39C
    /* li r6, 0 */ // 0x805EB3A0
    FUN_805EB518(r3, r4, r5, r6); // bl 0x805EB518
    r0 = *(0x24 + r1); // lwz @ 0x805EB3A8
    r31 = *(0x1c + r1); // lwz @ 0x805EB3AC
    r30 = *(0x18 + r1); // lwz @ 0x805EB3B0
    r29 = *(0x14 + r1); // lwz @ 0x805EB3B4
    return;
}