/* Function at 0x805C840C, size=156 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_805C840C(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r0 = r4 rlwinm 1; // rlwinm
    r31 = r3 + r0; // 0x805C8420
    *(0x18 + r1) = r30; // stw @ 0x805C8424
    *(0x14 + r1) = r29; // stw @ 0x805C8428
    r29 = r3;
    r12 = *(0 + r3); // lwz @ 0x805C8430
    r12 = *(0x44 + r12); // lwz @ 0x805C8434
    /* mtctr r12 */ // 0x805C8438
    /* bctrl  */ // 0x805C843C
    r12 = *(0 + r29); // lwz @ 0x805C8440
    r0 = *(0x1c + r31); // lha @ 0x805C8444
    r12 = *(0x48 + r12); // lwz @ 0x805C8448
    r0 = r0 + r3; // 0x805C844C
    r3 = r29;
    /* extsh r30, r0 */ // 0x805C8454
    /* mtctr r12 */ // 0x805C8458
    /* bctrl  */ // 0x805C845C
    /* extsh r0, r3 */ // 0x805C8460
    if (<=) goto 0x0x805c8484;
    r12 = *(0 + r29); // lwz @ 0x805C846C
    r3 = r29;
    r12 = *(0x48 + r12); // lwz @ 0x805C8474
    /* mtctr r12 */ // 0x805C8478
    /* bctrl  */ // 0x805C847C
    r30 = r3;
    *(0x1c + r31) = r30; // sth @ 0x805C8484
    /* extsh r3, r30 */ // 0x805C8488
    r31 = *(0x1c + r1); // lwz @ 0x805C848C
    r30 = *(0x18 + r1); // lwz @ 0x805C8490
    r29 = *(0x14 + r1); // lwz @ 0x805C8494
    r0 = *(0x24 + r1); // lwz @ 0x805C8498
    return;
}