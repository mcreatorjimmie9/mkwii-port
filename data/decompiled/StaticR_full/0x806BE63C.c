/* Function at 0x806BE63C, size=204 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_806BE63C(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x806BE644
    *(0x18 + r1) = r30; // stw @ 0x806BE650
    *(0x14 + r1) = r29; // stw @ 0x806BE654
    r29 = r3;
    r3 = *(0 + r4); // lwz @ 0x806BE65C
    r3 = *(0 + r3); // lwz @ 0x806BE660
    r30 = *(0x25c + r3); // lwz @ 0x806BE664
    if (!=) goto 0x0x806be678;
    /* li r30, 0 */ // 0x806BE670
    /* b 0x806be6cc */ // 0x806BE674
    /* lis r31, 0 */ // 0x806BE678
    r31 = r31 + 0; // 0x806BE67C
    if (==) goto 0x0x806be6c8;
    r12 = *(0 + r30); // lwz @ 0x806BE684
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806BE68C
    /* mtctr r12 */ // 0x806BE690
    /* bctrl  */ // 0x806BE694
    /* b 0x806be6b0 */ // 0x806BE698
    if (!=) goto 0x0x806be6ac;
    /* li r0, 1 */ // 0x806BE6A4
    /* b 0x806be6bc */ // 0x806BE6A8
    r3 = *(0 + r3); // lwz @ 0x806BE6AC
    if (!=) goto 0x0x806be69c;
    /* li r0, 0 */ // 0x806BE6B8
    if (==) goto 0x0x806be6c8;
    /* b 0x806be6cc */ // 0x806BE6C4
    /* li r30, 0 */ // 0x806BE6C8
    r0 = *(0x10 + r29); // lwz @ 0x806BE6CC
    if (!=) goto 0x0x806be6e4;
    r3 = r30;
    FUN_806640A4(r3); // bl 0x806640A4
    /* b 0x806be6ec */ // 0x806BE6E0
    r3 = r30;
    FUN_806641A8(r3, r3); // bl 0x806641A8
    r0 = *(0x24 + r1); // lwz @ 0x806BE6EC
    r31 = *(0x1c + r1); // lwz @ 0x806BE6F0
    r30 = *(0x18 + r1); // lwz @ 0x806BE6F4
    r29 = *(0x14 + r1); // lwz @ 0x806BE6F8
    return;
}