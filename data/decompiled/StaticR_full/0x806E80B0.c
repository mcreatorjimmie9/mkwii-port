/* Function at 0x806E80B0, size=72 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_806E80B0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r3, 0 */ // 0x806E80B8
    *(0x14 + r1) = r0; // stw @ 0x806E80C0
    *(0xc + r1) = r31; // stw @ 0x806E80C4
    *(8 + r1) = r30; // stw @ 0x806E80C8
    r30 = r4;
    r31 = *(0 + r3); // lwz @ 0x806E80D0
    if (==) goto 0x0x806e8100;
    r3 = r31 + 8; // 0x806E80D8
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = *(0x20 + r31); // lwz @ 0x806E80E0
    r4 = r30;
    r12 = *(0 + r3); // lwz @ 0x806E80E8
    r12 = *(0x18 + r12); // lwz @ 0x806E80EC
    /* mtctr r12 */ // 0x806E80F0
    /* bctrl  */ // 0x806E80F4
}