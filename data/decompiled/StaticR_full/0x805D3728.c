/* Function at 0x805D3728, size=104 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_805D3728(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 1 */ // 0x805D3730
    r31 = r4 + -0x6c10; // 0x805D373C
    *(0x18 + r1) = r30; // stw @ 0x805D3740
    /* li r30, 0 */ // 0x805D3744
    *(0x14 + r1) = r29; // stw @ 0x805D3748
    r29 = r3;
    /* clrlwi r4, r30, 0x18 */ // 0x805D3750
    r3 = r29;
    r0 = r4 * r31; // 0x805D3758
    r5 = r29 + r0; // 0x805D375C
    r5 = r5 + 0x38; // 0x805D3760
    FUN_805D5334(r3, r5); // bl 0x805D5334
    r30 = r30 + 1; // 0x805D3768
    if (<) goto 0x0x805d3750;
    r0 = *(0x24 + r1); // lwz @ 0x805D3774
    r31 = *(0x1c + r1); // lwz @ 0x805D3778
    r30 = *(0x18 + r1); // lwz @ 0x805D377C
    r29 = *(0x14 + r1); // lwz @ 0x805D3780
    return;
}