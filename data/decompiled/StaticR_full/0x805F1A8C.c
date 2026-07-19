/* Function at 0x805F1A8C, size=104 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805F1A8C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x805F1A94
    /* lis r4, 0 */ // 0x805F1A98
    *(0x14 + r1) = r0; // stw @ 0x805F1A9C
    r5 = r5 + 0; // 0x805F1AA0
    r5 = r5 + 0x85; // 0x805F1AA4
    /* li r6, 0 */ // 0x805F1AA8
    *(0xc + r1) = r31; // stw @ 0x805F1AAC
    r31 = r3;
    r3 = *(0 + r4); // lwz @ 0x805F1AB4
    /* li r4, 5 */ // 0x805F1AB8
    FUN_805CFD60(r6, r4); // bl 0x805CFD60
    r4 = r3;
    if (==) goto 0x0x805f1ae0;
    r3 = *(0x20 + r31); // lwz @ 0x805F1ACC
    r12 = *(0 + r3); // lwz @ 0x805F1AD0
    r12 = *(8 + r12); // lwz @ 0x805F1AD4
    /* mtctr r12 */ // 0x805F1AD8
    /* bctrl  */ // 0x805F1ADC
    r0 = *(0x14 + r1); // lwz @ 0x805F1AE0
    r31 = *(0xc + r1); // lwz @ 0x805F1AE4
    return;
}