/* Function at 0x8074F0E0, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8074F0E0(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r5, 0 */ // 0x8074F0E8
    *(0xc + r1) = r31; // stw @ 0x8074F0F0
    *(8 + r1) = r30; // stw @ 0x8074F0F4
    r30 = r3;
    FUN_8089F578(r5); // bl 0x8089F578
    /* lis r4, 0 */ // 0x8074F100
    r3 = r30;
    r4 = r4 + 0; // 0x8074F108
    *(0 + r30) = r4; // stw @ 0x8074F10C
    r12 = *(0 + r30); // lwz @ 0x8074F110
    r12 = *(0x28 + r12); // lwz @ 0x8074F114
    /* mtctr r12 */ // 0x8074F118
    /* bctrl  */ // 0x8074F11C
    /* lis r31, 0 */ // 0x8074F120
    r4 = r31 + 0; // 0x8074F124
    FUN_805E3430(r4); // bl 0x805E3430
}