/* Function at 0x805F2D88, size=132 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */

int FUN_805F2D88(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x805F2DA0
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x805F2DA8
    /* li r28, 0 */ // 0x805F2DAC
    r31 = *(0x10 + r30); // lwz @ 0x805F2DB0
    r5 = *(0x14 + r29); // lwz @ 0x805F2DB4
    r12 = *(0 + r31); // lwz @ 0x805F2DB8
    r3 = r31;
    r4 = *(0xe4 + r31); // lwz @ 0x805F2DC0
    r12 = *(0x34 + r12); // lwz @ 0x805F2DC4
    r5 = *(0 + r5); // lwz @ 0x805F2DC8
    /* mtctr r12 */ // 0x805F2DCC
    /* bctrl  */ // 0x805F2DD0
    r28 = r28 + 1; // 0x805F2DD4
    *(0x1c + r29) = r31; // stw @ 0x805F2DD8
    r30 = r30 + 4; // 0x805F2DE0
    r29 = r29 + 4; // 0x805F2DE4
    if (<) goto 0x0x805f2db0;
    r0 = *(0x24 + r1); // lwz @ 0x805F2DEC
    r31 = *(0x1c + r1); // lwz @ 0x805F2DF0
    r30 = *(0x18 + r1); // lwz @ 0x805F2DF4
    r29 = *(0x14 + r1); // lwz @ 0x805F2DF8
    r28 = *(0x10 + r1); // lwz @ 0x805F2DFC
    return;
}