/* Function at 0x8091E3F0, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8091E3F0(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r7, 0 */ // 0x8091E3F8
    *(0xc + r1) = r31; // stw @ 0x8091E400
    r31 = r6;
    *(8 + r1) = r30; // stw @ 0x8091E408
    r30 = r3;
    r3 = *(0 + r7); // lwz @ 0x8091E410
    FUN_8090B0E8(); // bl 0x8090B0E8
    r0 = r3;
    r3 = r30;
    r5 = r31;
    /* clrlwi r4, r0, 0x10 */ // 0x8091E424
    FUN_8091E688(r3, r5); // bl 0x8091E688
    r0 = *(0x14 + r1); // lwz @ 0x8091E42C
    r31 = *(0xc + r1); // lwz @ 0x8091E430
    r30 = *(8 + r1); // lwz @ 0x8091E434
    return;
}