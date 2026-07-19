/* Function at 0x805EF4F8, size=112 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_805EF4F8(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x805EF50C
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x805EF514
    r29 = r3;
    if (==) goto 0x0x805ef548;
    r0 = *(0x28 + r3); // lwz @ 0x805EF520
    if (==) goto 0x0x805ef548;
    /* li r31, 0 */ // 0x805EF52C
    r3 = *(0x28 + r29); // lwz @ 0x805EF530
    /* clrlwi r4, r31, 0x18 */ // 0x805EF534
    FUN_805E7550(); // bl 0x805E7550
    r31 = r31 + 1; // 0x805EF53C
    if (<) goto 0x0x805ef530;
    *(0x28 + r29) = r30; // stw @ 0x805EF548
    r31 = *(0x1c + r1); // lwz @ 0x805EF54C
    r30 = *(0x18 + r1); // lwz @ 0x805EF550
    r29 = *(0x14 + r1); // lwz @ 0x805EF554
    r0 = *(0x24 + r1); // lwz @ 0x805EF558
    return;
}