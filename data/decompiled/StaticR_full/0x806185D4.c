/* Function at 0x806185D4, size=128 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_806185D4(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x806185E8
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x806185F0
    r29 = r3;
    r12 = *(0 + r3); // lwz @ 0x806185F8
    r12 = *(0x14 + r12); // lwz @ 0x806185FC
    /* mtctr r12 */ // 0x80618600
    /* bctrl  */ // 0x80618604
    r4 = r3;
    r5 = r30;
    r6 = r31;
    r3 = r29 + 4; // 0x80618614
    /* li r7, 1 */ // 0x80618618
    FUN_805BC8D0(r4, r5, r6, r3, r7); // bl 0x805BC8D0
    r0 = *(4 + r29); // lbz @ 0x80618620
    /* li r4, -0x80 */ // 0x80618624
    /* extsb r5, r0 */ // 0x80618628
    r0 = r5 >> 0x1f; // srawi
    /* addc r0, r4, r5 */ // 0x80618630
    *(4 + r29) = r0; // stb @ 0x80618634
    r31 = *(0x1c + r1); // lwz @ 0x80618638
    r30 = *(0x18 + r1); // lwz @ 0x8061863C
    r29 = *(0x14 + r1); // lwz @ 0x80618640
    r0 = *(0x24 + r1); // lwz @ 0x80618644
    return;
}