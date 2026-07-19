/* Function at 0x805F3514, size=96 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_805F3514(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r5, 0 */ // 0x805F351C
    *(0x18 + r1) = r30; // stw @ 0x805F3528
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x805F3530
    r29 = r3;
    r0 = *(0 + r5); // lwz @ 0x805F3538
    if (!=) goto 0x0x805f3600;
    /* li r4, 0 */ // 0x805F3544
    /* li r31, 0 */ // 0x805F3548
    /* b 0x805f3594 */ // 0x805F354C
    r5 = *(0xc + r30); // lwz @ 0x805F3550
    /* li r6, 0 */ // 0x805F3554
    r0 = *(4 + r3); // lwz @ 0x805F3558
    if (!=) goto 0x0x805f3578;
    r5 = *(8 + r3); // lwz @ 0x805F3564
    r0 = *(0x24 + r30); // lwz @ 0x805F3568
    if (!=) goto 0x0x805f3578;
}