/* Function at 0x8064DFE4, size=112 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_8064DFE4(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r31, 0 */ // 0x8064DFF4
    *(0x18 + r1) = r30; // stw @ 0x8064DFF8
    /* li r30, 0 */ // 0x8064DFFC
    *(0x14 + r1) = r29; // stw @ 0x8064E000
    r29 = r3;
    /* b 0x8064e02c */ // 0x8064E008
    r3 = *(0 + r29); // lwz @ 0x8064E00C
    /* lwzx r3, r3, r31 */ // 0x8064E010
    r12 = *(0 + r3); // lwz @ 0x8064E014
    r12 = *(0x10 + r12); // lwz @ 0x8064E018
    /* mtctr r12 */ // 0x8064E01C
    /* bctrl  */ // 0x8064E020
    r31 = r31 + 4; // 0x8064E024
    r30 = r30 + 1; // 0x8064E028
    r0 = *(0x10 + r29); // lwz @ 0x8064E02C
    if (<) goto 0x0x8064e00c;
    r0 = *(0x24 + r1); // lwz @ 0x8064E038
    r31 = *(0x1c + r1); // lwz @ 0x8064E03C
    r30 = *(0x18 + r1); // lwz @ 0x8064E040
    r29 = *(0x14 + r1); // lwz @ 0x8064E044
    return;
}